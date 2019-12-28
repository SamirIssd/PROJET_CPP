#pragma once
#include<string>

#include "Carte.hh"
using namespace std;

class Personnage{
	protected :
		string attribut;
		int pv;
		string name;
	public:
		Personnage(string attr, int ptvie, string na):attribut(attr),pv(ptvie),name(na){}
		virtual void attaquer(Personnage& p) const = 0;
		virtual void subirEffet(Carte& c) const = 0;
};