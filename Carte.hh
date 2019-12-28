#pragma once
#include<string>
using namespace std;

class Carte{
	protected :
		string attribut;
		int tauxFum;
		string name;
	public:
		Carte(string attr, int taux, string na):attribut(attr),tauxFum(taux),name(na){}
		virtual string toString() const = 0;
		int getTaux(){return tauxFum;}
		string getAttr(){return attribut;}
};