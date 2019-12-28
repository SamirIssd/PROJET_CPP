#pragma once
#include"Carte.hh"
#include<string>
#include <map>
using namespace std;

class JeuDeCartes{
	protected :
		int tailleDeck;
		map<Carte*,int> deck;   //deck de cartes avec int = nb de cartes de chaque
	public:
		JeuDeCartes(int taille);
		Carte& piocher();
};