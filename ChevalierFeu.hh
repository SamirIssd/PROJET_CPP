#pragma once
#include "PersonnageFeu.hh"

class ChevalierFeu : public PersonnageFeu
{
	public:
		ChevalierFeu(int ptvie,int att, string na):PersonnageFeu(ptvie,att, na){}
		void attaquer(Personnage& p);
};

