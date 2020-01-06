#pragma once
#include"Carte.hh"
#include<string>
#include <map>
#include <iostream>
#include "CarteEau.hh"
#include "CarteFeu.hh"
#include "CarteFum.hh"
#include "Tsunami.hh"
#include "Brasier.hh"
#include "Boisson.hh"
#include "Volcano.hh"
using namespace std;

class JeuDeCartes{
	private :
		/*CarteEau e1;
		CarteEau e2;
		CarteEau e3;
		CarteFeu f1;
		CarteFeu f2;
		CarteFeu f3;
		CarteFum c1;
		CarteFum c2;*/
		
	protected :
		static int tailleDeck; //nb de cartes différentes
		map<Carte*,int> deck;   //deck de cartes avec int = nb de cartes de chaque
	public:
		JeuDeCartes();
		Carte* piocher();
};