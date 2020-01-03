#pragma once
#include<string>
#include <list>
#include "Carte.hh"
using namespace std;

class Personnage{
	protected :
		string attribut;
		int pv;
		int attaque;
		string name;
		list<Personnage*> ennemis;
	public:
		Personnage(string attr, int ptvie, int att, string na):attribut(attr),pv(ptvie),attaque(att),name(na){}
		void attaquer(Personnage& p){p.setPv(p.getPv() - attaque);}
		virtual void subirEffet(Carte& c) const = 0;
		void jouer();
		void setPv(int n){pv = n;}
		int getPv(){return pv;}
};