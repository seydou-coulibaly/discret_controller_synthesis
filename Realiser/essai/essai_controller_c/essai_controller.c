/* --- Generated the 26/5/2016 at 12:11 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -target c essai_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "essai_controller.h"

void Essai_controller__essai_ctrlr0_step(Essai_controller__st_3 ck,
                                         Essai_controller__st_2 ck_4, int ok,
                                         int pnr, int pnr_1,
                                         int presenceMaison,
                                         Essai_controller__essai_ctrlr0_out* _out) {
  
  int v;
  int l0;
  _out->sortie = true;
  v = (ck_4==Essai_controller__St_2_Stop);
  l0 = !(v);
  _out->entree = (presenceMaison||l0);;
}

