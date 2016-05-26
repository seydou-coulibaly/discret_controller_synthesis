/* --- Generated the 26/5/2016 at 13:14 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -hepts -s train -target c -target ctrln train.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

Train__train_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int presenceSection1;
  int presenceAiguillage1;
  int presenceAiguillage2;
  int presenceGare1;
  int presenceGare2;
  int presenceSection2;
  Train__train_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Train__train_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    if ((scanf("%d", &presenceSection1)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &presenceAiguillage1)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &presenceAiguillage2)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &presenceGare1)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &presenceGare2)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &presenceSection2)==EOF)) {
      return 0;
    };;
    Train__train_step(presenceSection1, presenceAiguillage1,
                      presenceAiguillage2, presenceGare1, presenceGare2,
                      presenceSection2, &_res, &mem);
    printf("%d\n", _res.aiguillage1Haut);
    printf("%d\n", _res.aiguillage1Bas);
    printf("%d\n", _res.aiguillage2Haut);
    printf("%d\n", _res.aiguillage2Bas);
    printf("%d\n", _res.feu1);
    printf("%d\n", _res.feu2);
    printf("%d\n", _res.feuGare1);
    printf("%d\n", _res.feuGare2);
    printf("%d\n", _res.property);
    fflush(stdout);
  };
  return 0;
}

