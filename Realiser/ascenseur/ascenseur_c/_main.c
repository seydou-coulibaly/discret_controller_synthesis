/* --- Generated the 14/4/2016 at 17:39 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. feb. 11 18:24:22 CET 2016) --- */
/* --- Command line: /usr/local/bin/heptc -hepts -s ascenseur -target c -target ctrln ascenseur.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

Ascenseur__ascenseur_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int presence;
  int presenceEtageCourant;
  int demandeEtage;
  int arriveEtage;
  int secondo;
  Ascenseur__ascenseur_out _res;
  char buf[20];
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Ascenseur__ascenseur_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    if ((scanf("%d", &presence)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &presenceEtageCourant)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &demandeEtage)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &arriveEtage)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &secondo)==EOF)) {
      return 0;
    };;
    Ascenseur__ascenseur_step(presence, presenceEtageCourant, demandeEtage,
                              arriveEtage, secondo, &_res, &mem);
    printf("%s\n", string_of_Ascenseur_controller__stat(_res.etat, buf));
    fflush(stdout);
  };
  return 0;
}

