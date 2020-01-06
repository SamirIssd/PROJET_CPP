#include "PersonnageEau.hh"
#include "PersonnageFeu.hh"

int PersonnageEau::nbPerso = 0;
PersonnageEau::PersonnageEau(){
	nbPerso++;
	name = "Ennemi" + std::to_string(nbPerso);
	srand(time(NULL));
	attaque = (rand() % 2 + 1) * nbPerso / 2;
	pv = (rand() % 2 + 1) * nbPerso;
	defense = 0;
}

void PersonnageEau::subirEffet(Carte& c){
	if(c.getAttr() == "Fum"){
		tauxFum += c .getPoint();
	}
	if(c.getAttr() == "Eau"){
		if(c.getType() == "Soin"){
			effet = c .getPoint();
			pv = pv + effet;
		}
		else
		{
			effet = c .getPoint();
			attaque = attaque + effet;
		}
	}
	if(c.getAttr() == "Feu"){
		if(c.getType() == "Soin"){
			
			for(list<Personnage*>::iterator it=ennemis.begin(); it!=ennemis.end(); ++it){
				(*it)->setEffet(c .getPoint());
				(*it)->setPv((*it)->getPv() + c .getPoint());
			}
		}
		else
		{
			for(list<Personnage*>::iterator it=ennemis.begin(); it!=ennemis.end(); ++it){
				(*it)->setEffet(c .getPoint());
				(*it)->setAtq((*it)->getAtq() + c .getPoint());
			}
		}
		
		
	}
}

void PersonnageEau::generateEnnemis(){
	srand(time(NULL));
	int random = rand() % 2 + 1;  //On fait apparaitre entre 1 et 2 ennemis par tour
	for(int i = 0; i < random; i++){
		ennemis.push_back(new PersonnageFeu());
	}
}

void PersonnageEau::finDeTour(){
	if(effet != 0){
		attaque -= effet;
		effet = 0;
	}
	for(list<Personnage*>::iterator it=ennemis.begin(); it!=ennemis.end(); ++it){
				(*it)->finDeTour();
	}
	if(tauxFum < 0)
		pv = pv - tauxFum;  //Si taux fum < 0, les personnages eaux recuperent des pvs
	if(tauxFum > 0)
		pv = pv - tauxFum;	//Sinon ils perdent des pvs
}