#include "PersonnageEau.hh"

class ChevalierEau : public PersonnageEau{

	public:
		ChevalierEau(int ptvie, string na):PersonnageEau(ptvie, na){}
		void attaquer(Personnage& p);

};
void ChevalierEau::attaquer(Personnage& p)
{
	p.pv = p.pv - this->atq;
}
