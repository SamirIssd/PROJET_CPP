#pragma once
#include "PersonnageEau.hh"

class ChevalierEau : public PersonnageEau{

	public:
		ChevalierEau(int ptvie,int att, string na, int def):PersonnageEau(ptvie,att, na, def){}
		void attaquer(Personnage& p);
};
