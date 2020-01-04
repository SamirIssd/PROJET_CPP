#include "Personnage.hh"

class PersonnageEau : public Personnage{
	private:
		static int nbPerso;
	public:
		PersonnageEau();
		PersonnageEau(int ptvie,int attaque, string na):Personnage("Eau",ptvie,attaque,na){}
		PersonnageEau(int ptvie,int attaque, string na, int def):Personnage("Eau",ptvie,attaque,na, def){}
		//void attaquer(Personnage& p) const{}
		void subirEffet(Carte& c);
};
