#pragma once
#include "Carte.hh"
using namespace std;

class CarteFum : public Carte{
	public:
		CarteFum():Carte("Fum"){}
		CarteFeu(int pt, string name, string description):Carte("Fum", pt, name ,description){}
		string toString() const{return name;};
};