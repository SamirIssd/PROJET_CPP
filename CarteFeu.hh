#pragma once
#include "Carte.hh"
using namespace std;

class CarteFeu : public Carte{
	public:
		CarteFeu():Carte("Feu"){}
		CarteFeu(int pt, string name, string description, string _type):Carte("Feu", pt, name ,description,type){}
		string toString() const{return name;};
};