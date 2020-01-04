#include "PersonnageFeu.hh"
#include "PersonnageEau.hh"

int PersonnageFeu::nbPerso = 0;
PersonnageFeu::PersonnageFeu(){
	nbPerso++;
	name = "Ennemi" + std::to_string(nbPerso);
	srand(time(NULL));
	attaque = (rand() % 2 + 1) * nbPerso / 2;
	pv = (rand() % 2 + 1) * nbPerso;
	defense = 0;
}

void PersonnageFeu::subirEffet(Carte& c){
	if(c.getAttr() == "Fum"){
		tauxFum += c .getPoint();
	}
	if(c.getAttr() == "Feu"){
			effet = c .getPoint();
			attaque = attaque + effet;
	}
	if(c.getAttr() == "Eau"){
		for(list<Personnage*>::iterator it=ennemis.begin(); it!=ennemis.end(); ++it){
				(*it)->setEffet(c .getPoint());
				(*it)->setAtq((*it)->getAtq() + c .getPoint());
		}
	}
}

void PersonnageFeu::generateEnnemis(){
	srand(time(NULL));
	int random = rand() % 3 + 2;  //On fait apparaitre entre 0 et 2 ennemis par tour
	for(int i = 0; i < random; i++){
		ennemis.push_back(new PersonnageEau());
	}
}

void PersonnageFeu::finDeTour(){
	if(effet != 0){
		attaque -= effet;
		effet = 0;
	}
	for(list<Personnage*>::iterator it=ennemis.begin(); it!=ennemis.end(); ++it){
				(*it)->finDeTour();
	}
	if(tauxFum < 0)
		pv = pv + tauxFum;  //Si taux fum < 0, les personnages feux perdents des pvs
	if(tauxFum > 0)
		pv = pv + tauxFum;	//Sinon ils recuperent des pvs
}