#pragma once
#include<string>
using namespace std;

class Carte{
	protected :
		string attribut;
		int point;
		string name;
		string description;
	public:
		Carte(string attr):attribut(attr){}
		Carte(string attr, int pt, string na, string descr):attribut(attr),point(pt),name(na),description(descr){}
		virtual string toString() const = 0;
		int getPoint(){return point;}
		string getAttr(){return attribut;}
		string getName(){return name;}
};