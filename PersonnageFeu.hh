#include "Personnage.hh"

class PersonnageFeu : public Personnage{
	private:
		static int nbPerso;
	public:
		PersonnageFeu();
		PersonnageFeu(int ptvie,int attaque, string na):Personnage("Feu",ptvie,attaque,na){}
		PersonnageFeu(int ptvie,int attaque, string na, int def):Personnage("Feu",ptvie,attaque,na, def){}
		//void attaquer(Personnage& p) const{p.setPv(p.getPv() - attaque);}
		void subirEffet(Carte& c);
};