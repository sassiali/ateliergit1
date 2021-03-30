#ifndef MINIMAPP_H_INCLUDED
#define MINIMAPP_H_INCLUDED

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "background.h"

typedef struct  minimap
{

	    SDL_Surface *background,*cadre;
	    SDL_Rect camera;
	    SDL_Rect posbg;
}minimap;
typedef struct  point
{

	    SDL_Surface *point;
	    SDL_Rect pospnt;
}point;

void initialiser_minimap(background b,minimap *m);
void afficher_minimap(SDL_Surface *screen,minimap *m,point pt);
void scroll_mini(SDL_Event e,SDL_Rect *b);
void init_point(point *pt,SDL_Rect p,SDL_Rect b);
void mouv_point(point *pt,SDL_Rect p);

//endif // MINIMAP_H_INCLUDED


#endif // MINIMAPP_H_INCLUDED
