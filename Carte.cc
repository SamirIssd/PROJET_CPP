#include "Carte.hh"

ostream& operator <<(ostream & out, Carte& p)
{
	out << "Type : " << p.attribut << endl << "Nom : " <<  p.name << endl << "Point : " << p.point << endl << "Description : " << p.description << endl;
	return out;
}
