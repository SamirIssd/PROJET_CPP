#pragma once
#include "Carte.hh"
using namespace std;

class CarteEau : Carte{
	public:
		CarteEau(int taux, string na):Carte("Eau", taux, na){}
		virtual string toString();
};