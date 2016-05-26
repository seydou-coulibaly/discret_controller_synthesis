/* --- Generated the 14/4/2016 at 17:39 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. feb. 11 18:24:22 CET 2016) --- */
/* --- Command line: /usr/local/bin/heptc -target c ascenseur_controller.ept --- */

#ifndef ASCENSEUR_CONTROLLER_H
#define ASCENSEUR_CONTROLLER_H

#include "ascenseur_controller_types.h"
typedef struct Ascenseur_controller__ascenseur_ctrlr0_out {
  int c;
} Ascenseur_controller__ascenseur_ctrlr0_out;

void Ascenseur_controller__ascenseur_ctrlr0_step(int arriveEtage,
                                                 Ascenseur_controller__st ck,
                                                 int compteur_1,
                                                 int demandeEtage, int ok,
                                                 int pnr, int presence,
                                                 int presenceEtageCourant,
                                                 int secondo, int v_11,
                                                 int v_14, int v_8,
                                                 Ascenseur_controller__ascenseur_ctrlr0_out* _out);

#endif // ASCENSEUR_CONTROLLER_H
