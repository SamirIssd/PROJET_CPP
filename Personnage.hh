#pragma once
#include<string>

#include "Carte.hh"
using namespace std;

class Personnage{
	protected :
		string attribut;
<<<<<<< HEAD
=======
		int pv;
		int attaque;
>>>>>>> 8189ce7dc18ae497771506c0f32f38f8fa33f900
		string name;
		int atq;
		
	public:
<<<<<<< HEAD
		int pv;
		Personnage(string attr, int ptvie, string na):attribut(attr),pv(ptvie),name(na){}
=======
		Personnage(string attr, int ptvie, int att, string na):attribut(attr),pv(ptvie),attaque(att),name(na){}
>>>>>>> 8189ce7dc18ae497771506c0f32f38f8fa33f900
		virtual void attaquer(Personnage& p) const = 0;
		virtual void subirEffet(Carte& c) const = 0;
};