/*  
  File : seznam.c

  Kazalcni seznam elementov. Funkcije dodajZ, dodajK, dodajU, brisi ter pomozne funkcije. 
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_OCEN 20

typedef struct student {
  // podatkovni del
    int id;
    char *ime;
  
    int stOcen;
    int *ocene;  // kazalec na tabelo ocen

  // kazalec na naslednji element
    struct student *next;
} student;

student * novStudent(int id, char *ime) {
  student *s = malloc(sizeof(student));
  s->id = id;

  s->ime = malloc((strlen(ime)+1)*sizeof(char));
  strcpy(s->ime, ime);

  s->stOcen=0;
  s->ocene=malloc(MAX_OCEN * sizeof(int));

  s->next = NULL;

  return s;
}

void brisiStudenta(student *s){
 free(s->ime);
 free(s->ocene);
 free(s);
}

void dodajOceno(student *s, int ocena) {
  if (s->stOcen < MAX_OCEN) s->ocene[s->stOcen++]=ocena;
}

void izpisiStudenta(student *s) {
  printf("Ime: %s, id:%d, ocene(%d): [", s->ime, s->id, s->stOcen);
  for (int i = 0; i < s->stOcen; i++)
    printf("%s%d", (i==0 ? "":","), s->ocene[i]);
  printf("]\n");
}

// doda element na zacetek seznama; funkcija vrne novi zacetek
student * dodajZ(student *z, student *s) {
  s->next = z;
  return s;
}


// doda element na konec seznama; funkcija vrne novi zacetek
student * dodajK(student *z, student *s) {
  if (z==NULL) {
    return s;
  } else {
    student *t = z;
    while(t->next != NULL) t=t->next;
    t->next = s;

    return z;
  }
}


// doda element na pravo mesto (glede na id) v  seznamu; funkcija vrne novi zacetek
student * dodajU(student *z, student *s) {
  // element vstavljam na začetek (pred z)?
  if (z == NULL || z->id > s->id) {
    s->next = z;
    return s;
  } else {
    student *t = z;
    while (t->next != NULL && t->next->id < s->id) t=t->next;
    s->next = t->next;
    t->next = s;

    return z;
  }
}

// pobrisemo element z danim id in vrnemo kazalec ne nov zacetek
student * brisi(student *z, int id) {
  if (z == NULL) return z;

  if (z->id == id) {
    student *t = z->next;
    brisiStudenta(z);
    return t;
  }

  // brisem enega izmed "notranjih" elementov seznama
  student *t = z;
  while (t -> next != NULL && t->next->id != id) t=t->next;
  if (t->next != NULL) {
    student *r = t->next;
    t->next = t->next->next;
    brisiStudenta(r);
  }
  return z;
}


void izpisiSeznam(student *z) {
  student *t = z;
  while (t != NULL) {
    izpisiStudenta(t);
    t = t->next;
  }
}



int main(int argc, char *args[]) {

  student *s1 = novStudent(1, "A");  dodajOceno(s1,10);dodajOceno(s1,8);
  student *s2 = novStudent(2, "B");  
  student *s3 = novStudent(3, "C");  
  student *s4 = novStudent(4, "D");  
  student *s5 = novStudent(5, "E");  
  student *s6 = novStudent(6, "F");  
  

  student *z=NULL; // kazalec na zacetek seznama

  z = dodajU(z, s6);
  z = dodajU(z, s5);
  z = dodajU(z, s1);
  z = dodajU(z, s4);
  z = dodajU(z, s2);
  z = dodajU(z, s3);

  z = brisi(z, 3);
  z = brisi(z, 1);
  z = brisi(z, 6);

  izpisiSeznam(z);

  return 0;
}
