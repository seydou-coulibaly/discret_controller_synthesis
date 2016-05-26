/* --- Generated the 26/5/2016 at 12:11 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -target c -target ctrln essai.ept --- */

#ifndef ESSAI_H
#define ESSAI_H

#include "essai_types.h"
#include "essai_controller.h"
typedef struct Essai__presence_mem {
  Essai_controller__st ck;
  int pnr;
} Essai__presence_mem;

typedef struct Essai__presence_out {
  int occuper;
} Essai__presence_out;

void Essai__presence_reset(Essai__presence_mem* self);

void Essai__presence_step(int presence, Essai__presence_out* _out,
                          Essai__presence_mem* self);

typedef struct Essai__ascenseur_mem {
  Essai_controller__st_1 ck;
  int pnr;
} Essai__ascenseur_mem;

typedef struct Essai__ascenseur_out {
  int etat;
} Essai__ascenseur_out;

void Essai__ascenseur_reset(Essai__ascenseur_mem* self);

void Essai__ascenseur_step(int demandeEtage, int arriveEtage,
                           Essai__ascenseur_out* _out,
                           Essai__ascenseur_mem* self);

typedef struct Essai__essai_mem {
  Essai_controller__st_3 ck;
  Essai_controller__st_2 ck_4;
  int pnr_1;
  int pnr;
} Essai__essai_mem;

typedef struct Essai__essai_out {
  int y;
  int property;
} Essai__essai_out;

void Essai__essai_reset(Essai__essai_mem* self);

void Essai__essai_step(int presenceMaison, Essai__essai_out* _out,
                       Essai__essai_mem* self);

#endif // ESSAI_H
