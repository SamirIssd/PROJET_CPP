#include "Personnage.hh"

class PersonnageFeu : public Personnage{
	public:
		PersonnageFeu(int ptvie,int attaque, string na):Personnage("Feu",ptvie,attaque,na){}
		//void attaquer(Personnage& p) const{p.setPv(p.getPv() - attaque);}
		void subirEffet(Carte& c);
};