#pragma once
#include "Carte.hh"
using namespace std;

class CarteEau : public Carte{
	public:
		CarteEau():Carte("Eau"){}
		CarteEau(int pt, string name, string description):Carte("Eau", pt, name ,description){}
		string toString() const{return name;};
};