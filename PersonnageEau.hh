#include "Personnage.hh"

class PersonnageEau : public Personnage{
	public:
		PersonnageEau(int ptvie, string na):Personnage("Eau",ptvie,na){}
		virtual void attaquer(Personnage& p) const = 0;
		void subirEffet(Carte& c);
};