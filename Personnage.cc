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

//Pour afficher le personnage principal du joueur
ostream& operator <<(ostream & out, Personnage& p)
{
	out << "\t\t" << std::string(p.name.length() + 8,'=') << endl;
	out << "\t\t" << "|NOM : " << p.name << endl << "\t\t" << "|PV : " << p.pv << endl << "\t\t" << "|ATQ : " << p.attaque << endl;
 	if(p.defense != 0)
		out << "\t\t" << "|DEF : " << p.defense << endl;
	out << "\t\t" << std::string(p.name.length() + 8,'=') << endl;
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

