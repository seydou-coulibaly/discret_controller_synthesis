/* --- Generated the 24/3/2016 at 16:35 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. feb. 11 18:24:22 CET 2016) --- */
/* --- Command line: /usr/local/bin/heptc -hepts -s alarme -target c -target ctrln alarme.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

Alarme__alarme_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int ma;
  int code;
  int pbGar;
  int pbHab;
  int dReprise;
  int dVigilence;
  int dAlarme;
  Alarme__alarme_out _res;
  char buf_1[20];
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Alarme__alarme_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    if ((scanf("%d", &ma)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &code)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &pbGar)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &pbHab)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &dReprise)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &dVigilence)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &dAlarme)==EOF)) {
      return 0;
    };;
    Alarme__alarme_step(ma, code, pbGar, pbHab, dReprise, dVigilence,
                        dAlarme, &_res, &mem);
    printf("%d\n", _res.al);
    printf("%s\n", string_of_Alarme_controller__etat(_res.enMarche, buf_1));
    fflush(stdout);
  };
  return 0;
}

