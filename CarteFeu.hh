#pragma once
#include "Carte.hh"
using namespace std;

class CarteFeu : public Carte{
	public:
		CarteFeu():Carte("Feu"){}
		CarteFeu(int pt, string name, string description):Carte("Feu", pt, name ,description){}
		string toString() const{return name;};
};