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
    int a = 2;
    cout << a << std::endl;
    cout << a << std::endl;
    cout << a;
    cout << "\x1b[A" << "\x1b[A" << "\t" << "abc" << std::endl<< "\tbbx" << std::endl<< std::endl;
    ChevalierEau jean(90, 10, "bg", 10);
    cout << jean << endl;
    ChevalierFeu claude(90, 10, "damso", 0);
    cout << claude;
    //std::cout << c->getName() << std::endl;
    return 0;
}
