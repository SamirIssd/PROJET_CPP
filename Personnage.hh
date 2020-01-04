#pragma once
#include<string>
#include <list>
#include <stdlib.h>  
#include <time.h>  
#include "Carte.hh"
using namespace std;

class Personnage{
	protected :
		int pv;
		int attaque;
		string name;
		int defense;
		list<Personnage*> ennemis;
		int effet;
		static int tauxFum;
	public:
		Personnage(){}
		Personnage(int ptvie, int att, string na):pv(ptvie),attaque(att),name(na),defense(0),effet(0){}
		Personnage(int ptvie, int att, string na, int def):pv(ptvie),attaque(att),name(na),defense(def),effet(0){}
		void attaquer(Personnage& p){p.pv = p.pv - attaque + p.defense;}
		virtual void subirEffet(Carte& c) = 0;
		virtual void generateEnnemis() = 0;
		void jouer(string name);
		virtual void finDeTour() = 0;

		//GET et SET
		void setPv(int n){pv = n;}
		int getPv(){return pv;}
		void setAtq(int n){attaque = n;}
		int getAtq(){return attaque;}
		void setEffet(int n){effet = n;}
};