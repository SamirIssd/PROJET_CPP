#pragma once
#include "Carte.hh"
using namespace std;

class CarteEau : public Carte{
	public:
		CarteEau():Carte("Eau"){}
		CarteEau(int pt, string name, string description, string _type):Carte("Eau", pt, name ,description,type){}
		string toString() const{return name;};
};