#include "Personnage.hh"

int Personnage::tauxFum = 0;

void Personnage::jouer(string name){
	for(list<Personnage*>::iterator it=ennemis.begin(); it!=ennemis.end(); ++it){
		if((*it)->name == name)
			attaquer(**it);
		if((*it)->getPv() <= 0)
			it = ennemis.erase(it);
	}
	for(list<Personnage*>::iterator it=ennemis.begin(); it!=ennemis.end(); ++it){
		(*it)->attaquer(*this);
	}
	generateEnnemis();
	finDeTour();
}

ostream& operator <<(ostream & out, list<Carte*> listeCarte)
{
	int cpt = 0;
	if(listeCarte.empty())
		return out;
	for(auto it=listeCarte.begin(); it!=listeCarte.end(); ++it){
		for (int i = 0; i < cpt; i++){
			out << "\t\t";
		}
		out << std::string((*it)->getName().length() + 6,'=') << endl;
		for (int i = 0; i < cpt; i++){
			out << "\t\t";
		} 
		out << "NOM : " << (*it)->getName() << endl;
		for (int i = 0; i < cpt; i++){
			out << "\t\t";
		} 
		out << "TYPE : " << (*it)->getAttr() << endl;
		for (int i = 0; i < cpt; i++){
			out << "\t\t";
		}
		out << "POINTS : " << (*it)->getPoint() << endl;
		for (int i = 0; i < cpt; i++){
			out << "\t\t";
		}
		out << std::string((*it)->getName().length() + 6,'=') << endl;
		if(it!=listeCarte.end()){
			out << "\x1b[A"<< "\x1b[A"<< "\x1b[A"<< "\x1b[A"<< "\x1b[A";
		}
		cpt++;
	}
	out << endl<< endl << endl<<endl<<endl << endl;
	return out;
}
//Pour afficher le personnage principal du joueur
ostream& operator <<(ostream & out, Personnage& p)
{
	out << p.mainJoueur << endl;
	out << "\t\t" << std::string(p.name.length() + 8,'=') << endl;
	out << "\t\t" << "|NOM : " << p.name << endl << "\t\t" << "|PV : " << p.pv << endl << "\t\t" << "|ATQ : " << p.attaque << endl;
 	if(p.defense != 0)
		out << "\t\t" << "|DEF : " << p.defense << endl;
	out << "\t\t" << std::string(p.name.length() + 8,'=') << endl << endl << endl;
	cout << p.ennemis << endl << endl << endl << endl;
	return out;
}

//Pour afficher la liste des ennemis du joueurs
ostream& operator <<(ostream & out, list<Personnage*> liste)
{
	int cpt = 0;
	if(liste.empty())
		return out;
	for(list<Personnage*>::iterator it=liste.begin(); it!=liste.end(); ++it){
		for (int i = 0; i < cpt; i++){
			out << "\t\t";
		}
		out << std::string((*it)->getName().length() + 6,'=') << endl;
		for (int i = 0; i < cpt; i++){
			out << "\t\t";
		} 
		out << "NOM : " << (*it)->getName() << endl;
		for (int i = 0; i < cpt; i++){
			out << "\t\t";
		} 
		out << "PV : " << (*it)->getPv() << endl;
		for (int i = 0; i < cpt; i++){
			out << "\t\t";
		}
		out << "ATQ : " << (*it)->getAtq() << endl;
		for (int i = 0; i < cpt; i++){
			out << "\t\t";
		}
		out << std::string((*it)->getName().length() + 6,'=') << endl;
		if(it!=liste.end()){
			out << "\x1b[A"<< "\x1b[A"<< "\x1b[A"<< "\x1b[A"<< "\x1b[A";
		}
		cpt++;
	}
	out << endl<< endl;
	return out;
}



void Personnage::prendreCarte(Carte& c)
{
	mainJoueur.push_back(&c);
	if(mainJoueur.size() == 3)
		jouerCarte(true);
	else
		jouerCarte(false);
}

void Personnage::jouerCarte(bool b)
{
	cout << *this << endl;

	bool flag = b;
	string name;
	if(flag == false){
		while(1){
			cout << "Veuillez saisir le nom de la carte que vous souhaitez jouer (none pour aucune) : ";
			cin >> name;
			for(list<Carte*>::iterator it=mainJoueur.begin(); it!=mainJoueur.end(); ++it){
				if((*it)->getName() == name){
					subirEffet(**it);
					return;
				}
				if(name == "none")
					return;
			}
		}
	}
	while(flag){
		cout << "Main pleine ! Veuillez saisir le nom de la carte que vous souhaitez jouer : ";
		cin >> name;
		for(list<Carte*>::iterator it=mainJoueur.begin(); it!=mainJoueur.end(); ++it){
			if((*it)->getName() == name){
				subirEffet(**it);
				flag = false;
			}
		}
	}

}

