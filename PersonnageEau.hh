#include "Personnage.hh"

class PersonnageEau : public Personnage{
	public:
		PersonnageEau(int ptvie,int attaque, string na):Personnage("Eau",ptvie,attaque,na){}
		virtual void attaquer(Personnage& p) const = 0;
		void subirEffet(Carte& c);
};