#include "Personnage.hh"

int Personnage::tauxFum = 0;

ostream& operator <<(ostream & out, list<Personnage*> liste)
{
	int cpt = 0;
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
	out << endl<< endl<< endl<< endl;
	return out;
}

void Personnage::jouer(string name){
	for(list<Personnage*>::iterator it=ennemis.begin(); it!=ennemis.end(); ++it){
		if((*it)->name == name)
			attaquer(**it);
	}
	for(list<Personnage*>::iterator it=ennemis.begin(); it!=ennemis.end(); ++it){
		(*it)->attaquer(*this);
	}
	generateEnnemis();
	finDeTour();
	if(ennemis.empty())
		cout << "YES" << endl;
	cout << ennemis << endl;
}

ostream& operator <<(ostream & out, Personnage& p)
{
	out << "\t\t" << std::string(p.name.length() + 8,'=') << endl;
	out << "\t\t" << "|NOM : " << p.name << endl << "\t\t" << "|PV : " << p.pv << endl << "\t\t" << "|ATQ : " << p.attaque << endl;
 	if(p.defense != 0)
		out << "\t\t" << "|DEF : " << p.defense << endl;
	out << "\t\t" << std::string(p.name.length() + 8,'=') << endl;
	return out;
}

