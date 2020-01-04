#include "Personnage.hh"

class PersonnageFeu : public Personnage{
	private:
		static int nbPerso;
	public:
		PersonnageFeu();
		PersonnageFeu(int ptvie,int attaque, string na):Personnage(ptvie,attaque,na){}
		PersonnageFeu(int ptvie,int attaque, string na, int def):Personnage(ptvie,attaque,na, def){}
		void subirEffet(Carte& c);
		void generateEnnemis();
		void finDeTour();
};