#include "Personnage.hh"

class PersonnageFeu : public Personnage{
	public:
		PersonnageFeu(int ptvie,int attaque, string na):Personnage("Feu",ptvie,attaque,na){}
		virtual void attaquer(Personnage& p) const = 0;
		void subirEffet(Carte& c);
};