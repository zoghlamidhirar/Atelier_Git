#ifndef enigme_H
#define enigme_H
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL_ttf.h>
typedef struct
{
  char question1[100],answer1[100],answer2[100],answer3[100];
  SDL_Surface *question,*reponse1,*reponse2,*reponse3;
  SDL_Rect pos,pos1,pos2,pos3;
TTF_Font *font;
int solution;
}enigme;
void afficherEnigme(enigme e, SDL_Surface * screen);
void InitEnigme(enigme * e, char *nomfichier);
void animer (enigme * e); 
void sauvegarder (personne p, background b, char * nomfichier) ; 
int charger ( personne * p, background *b , char * nomfichier);


#endif
