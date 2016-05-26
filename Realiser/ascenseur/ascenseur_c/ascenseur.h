/* --- Generated the 14/4/2016 at 17:39 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. feb. 11 18:24:22 CET 2016) --- */
/* --- Command line: /usr/local/bin/heptc -hepts -s ascenseur -target c -target ctrln ascenseur.ept --- */

#ifndef ASCENSEUR_H
#define ASCENSEUR_H

#include "ascenseur_types.h"
#include "ascenseur_controller.h"
typedef struct Ascenseur__ascenseur_mem {
  int v_8;
  int v_11;
  int v_14;
  Ascenseur_controller__st ck;
  int pnr;
  int compteur_1;
} Ascenseur__ascenseur_mem;

typedef struct Ascenseur__ascenseur_out {
  Ascenseur_controller__stat etat;
} Ascenseur__ascenseur_out;

void Ascenseur__ascenseur_reset(Ascenseur__ascenseur_mem* self);

void Ascenseur__ascenseur_step(int presence, int presenceEtageCourant,
                               int demandeEtage, int arriveEtage,
                               int secondo, Ascenseur__ascenseur_out* _out,
                               Ascenseur__ascenseur_mem* self);

#endif // ASCENSEUR_H
