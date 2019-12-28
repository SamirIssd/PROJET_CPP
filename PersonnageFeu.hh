#include "Personnage.hh"

class PersonnageFeu : public Personnage{
	public:
		PersonnageFeu(int ptvie, string na):Personnage("Feu",ptvie,na){}
		virtual void attaquer(Personnage& p) const = 0;
		void subirEffet(Carte& c);
};