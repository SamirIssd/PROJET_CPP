#pragma once
#include<string>

#include "Carte.hh"
using namespace std;

class Personnage{
	protected :
		string attribut;
		int pv;
		int attaque;
		string name;
	public:
		Personnage(string attr, int ptvie, int att, string na):attribut(attr),pv(ptvie),attaque(att),name(na){}
		virtual void attaquer(Personnage& p) const = 0;
		virtual void subirEffet(Carte& c) const = 0;
};