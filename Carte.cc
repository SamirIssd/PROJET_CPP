#include "Carte.hh"

ostream& operator <<(ostream & out, Carte& p)
{
	out << "=== Carte pioché : " << p.name << " ==="<< endl;
	out << "Type : " << p.attribut << endl << p.description << endl;
	return out;
}
