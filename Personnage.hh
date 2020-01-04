#pragma once
#include<string>
#include <list>
#include <stdlib.h>  
#include <time.h>  
#include "Carte.hh"
using namespace std;

class Personnage{
	protected :
		string attribut;
		int pv;
		int attaque;
		string name;
		int defense;
		list<Personnage*> ennemis;
	public:
		Personnage(string attr):attribut(attr){}
		Personnage(string attr, int ptvie, int att, string na):attribut(attr),pv(ptvie),attaque(att),name(na),defense(0){}
		Personnage(string attr, int ptvie, int att, string na, int def):attribut(attr),pv(ptvie),attaque(att),name(na),defense(def){}
		void attaquer(Personnage& p){p.pv = p.pv - attaque + p.defense;}
		virtual void subirEffet(Carte& c) const = 0;
		void jouer(string name);
		void setPv(int n){pv = n;}
		int getPv(){return pv;}
};