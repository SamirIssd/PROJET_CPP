#pragma once
#include<string>
#include <iostream>
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
		list<Carte*> mainJoueur;
		int effet;
		static int tauxFum;
	public:
		Personnage(){}
		Personnage(int ptvie, int att, string na):pv(ptvie),attaque(att),name(na),defense(0),effet(0){}
		Personnage(int ptvie, int att, string na, int def):pv(ptvie),attaque(att),name(na),defense(def),effet(0){}
		void attaquer(Personnage& p){p.pv = p.pv - attaque + p.defense;}
		void jouer(string name);
		//Fcts virtuelles a redefinir en fonction du type de personnage
		virtual void subirEffet(Carte& c) = 0;
		virtual void generateEnnemis() = 0;
		virtual void finDeTour() = 0;
		void prendreCarte(Carte& c);
		void jouerCarte(bool b);
		//operateur
		friend std::ostream& operator <<(std::ostream & out, Personnage& p); 
		friend std::ostream& operator <<(std::ostream & out, list<Personnage*> liste); 
		friend std::ostream& operator <<(std::ostream & out, list<Carte*> listeCarte); 
		//GET et SET
		void setPv(int n){pv = n;}
		int getPv(){return pv;}
		void setAtq(int n){attaque = n;}
		int getAtq(){return attaque;}
		void setEffet(int n){effet = n;}
		string getName(){return name;}
		list<Carte*> getMainJr(){return mainJoueur;};
};

