#include "PersonnageFeu.hh"

class ChevalierFeu : public PersonnageFeu
{
	public:
		ChevalierFeu(int ptVie, string na):PersonnageFeu(ptVie, na){}
		void attaquer(Personnage& p);
};

void ChevalierFeu::attaquer(Personnage& p)
{
	p.pv = p.pv -this->atq;
}
