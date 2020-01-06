#pragma once
#include "Carte.hh"
using namespace std;

class CarteFum : public Carte{
	public:
		CarteFum():Carte("Fum"){}
		CarteFum(int pt, string name, string description):Carte("Fum", pt, name ,description,"null"){}
		string toString() const{return name;};
};