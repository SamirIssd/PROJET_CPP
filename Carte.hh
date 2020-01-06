#pragma once
#include <ostream>
#include<string>
using namespace std;

class Carte{
	protected :
		string attribut;
		int point;
		string name;
		string description;
		string type;
	public:
		Carte(string attr):attribut(attr){}
		Carte(string attr, int pt, string na, string descr, string typ):attribut(attr),point(pt),name(na),description(descr),type(typ){}
		virtual string toString() const = 0;
		friend ostream& operator <<(ostream & out, Carte& p);
		int getPoint(){return point;}
		string getAttr(){return attribut;}
		string getName(){return name;}
		string getType() const{return type;}
};
