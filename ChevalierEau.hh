#pragma once
#include "PersonnageEau.hh"

class ChevalierEau : public PersonnageEau{

	public:
		ChevalierEau(int ptvie,int att, string na):PersonnageEau(ptvie,att, na){}
		void attaquer(Personnage& p);
};
