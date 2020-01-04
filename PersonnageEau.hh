#include "Personnage.hh"

class PersonnageEau : public Personnage{
	private:
		static int nbPerso;
	public:
		PersonnageEau();
		PersonnageEau(int ptvie,int attaque, string na):Personnage(ptvie,attaque,na){}
		PersonnageEau(int ptvie,int attaque, string na, int def):Personnage(ptvie,attaque,na, def){}
		void subirEffet(Carte& c);
		void generateEnnemis();
		void finDeTour();
};
