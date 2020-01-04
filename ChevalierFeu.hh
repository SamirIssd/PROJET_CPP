#pragma once
#include "PersonnageFeu.hh"

class ChevalierFeu : public PersonnageFeu
{
	public:
		ChevalierFeu(int ptvie,int att, string na, int def):PersonnageFeu(ptvie,att, na, def){}
		void attaquer(Personnage& p);
};

