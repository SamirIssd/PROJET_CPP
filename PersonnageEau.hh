#include "Personnage.hh"

class PersonnageEau : public Personnage{
	public:
		PersonnageEau(int ptvie,int attaque, string na):Personnage("Eau",ptvie,attaque,na){}
		//void attaquer(Personnage& p) const{}
		void subirEffet(Carte& c);
};
