#include <string>
/*#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>*/
//A SUPPR APRES
#include "ChevalierEau.hh"
#include "Personnage.hh"
#include "ChevalierFeu.hh"
#include "JeuDeCartes.hh"
#include "Carte.hh"
#include "CarteEau.hh"
#include "CarteFeu.hh"

using namespace std;

int main(){
	/*SDL_Init(SDL_INIT_VIDEO);
	SDL_Event event;

	    SDL_Window * window = SDL_CreateWindow("SDL2 SH13",
	        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1024, 768, 0);

	    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);
	    SDL_Surface *gobutton;
	 	gobutton = IMG_Load("gobutton.png");
	 	SDL_Texture *texture_gobutton;
	 	texture_gobutton = SDL_CreateTextureFromSurface(renderer, gobutton);
	 	SDL_Rect dstrect = { 500, 350, 200, 150 };
	 	SDL_RenderCopy(renderer, texture_gobutton, NULL, &dstrect);
	while(event.type != SDL_QUIT){
	 	SDL_PollEvent(&event);
 	}*/
    //SDL_Quit();
   /* JeuDeCartes j;
    Carte* c = j.piocher();
    int a;
    while(1){
   		cin >> a; 
    	c = j.piocher();
    }*/
    ChevalierFeu claude(90, 10, "damso", 0);
    CarteEau lacrim(10, "lacrim", "Si t'oublies son prénom, emmene la au starbuck");
    cout << lacrim;
    //std::cout << c->getName() << std::endl;

    cout << endl << endl << endl;
    ChevalierEau jean(90, 10, "Damso", 10);
    cout << jean << endl << endl;
    jean.jouer("dams");
    return 0;
}
