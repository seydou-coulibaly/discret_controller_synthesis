/* --- Generated the 20/5/2016 at 10:14 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. feb. 11 18:24:22 CET 2016) --- */
/* --- Command line: /usr/local/bin/heptc -hepts -s lum -target c -target ctrln lum.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

Lum__lum_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int presence;
  int stopdown;
  int stopup;
  Lum_controller__lumValue outdoorlum;
  Lum__lum_out _res;
  char buf[20];
  char buf_1[20];
  char buf_2[20];
  char buf_3[20];
  char buf_4[20];
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Lum__lum_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    if ((scanf("%d", &presence)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &stopdown)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &stopup)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%s", buf)==EOF)) {
      return 0;
    };;
    outdoorlum = Lum_controller__lumValue_of_string(buf);
    Lum__lum_step(presence, stopdown, stopup, outdoorlum, &_res, &mem);
    printf("%s\n", string_of_Lum_controller__command(_res.cmdShutter, buf_1));
    printf("%s\n", string_of_Lum_controller__command(_res.cmdLamp, buf_2));
    printf("%s\n",
           string_of_Lum_controller__shutterState(_res.shutterstate, buf_3));
    printf("%s\n", string_of_Lum_controller__lampState(_res.lampstate, buf_4));
    printf("%d\n", _res.property);
    fflush(stdout);
  };
  return 0;
}

