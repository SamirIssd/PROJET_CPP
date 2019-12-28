#pragma once
#include "Carte.hh"
using namespace std;

class CarteFeu : Carte{
	public:
		CarteFeu(int taux, string na):Carte("Feu", taux, na){}
		virtual string toString();
};