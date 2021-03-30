#include "minimapp.h"

void initialiser_minimap(background b,minimap *m)

{

m->background=NULL;

m->camera.x=0;

m->camera.y=0;

m->camera.w=b.camera.w/4;

m->camera.h=b.camera.h/4;

m->posbg.x=0;

m->posbg.y=20;

//m->cadre=IMG_Load("cadre.png");

m->background=IMG_Load("minimap/1.png");

}

void afficher_minimap(SDL_Surface *screen,minimap *m,point pt)

{

SDL_BlitSurface(m->background,&m->camera,screen,&m->posbg);

//SDL_BlitSurface(m->cadre,NULL,screen,&m->posbg);

SDL_BlitSurface(pt.point,NULL,screen,&pt.pospnt);

}

void scroll_mini(SDL_Event e,SDL_Rect *b)

{

    if(e.key.keysym.sym==SDLK_RIGHT)

    {

       b->x+=5;

    }

    else if(e.key.keysym.sym==SDLK_LEFT)

    {

        b->x-=5;

    }

}

void init_point(point *pt,SDL_Rect p,SDL_Rect b)

{

    pt->point=IMG_Load("point.png");

    pt->pospnt.x=p.x/5;

    pt->pospnt.y=b.y;

}

void mouv_point(point *pt,SDL_Rect p)

{

       pt->pospnt.x=(p.x/5);

}
