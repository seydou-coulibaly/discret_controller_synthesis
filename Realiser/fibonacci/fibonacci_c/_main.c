/* --- Generated the 4/3/2016 at 15:38 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. feb. 11 18:24:22 CET 2016) --- */
/* --- Command line: /usr/local/bin/heptc -hepts -s fibonacci -target c -target ctrln fibonacci.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int n;
  Fibonacci__fibonacci_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    if ((scanf("%d", &n)==EOF)) {
      return 0;
    };;
    Fibonacci__fibonacci_step(n, &_res);
    printf("%d\n", _res.y);
    fflush(stdout);
  };
  return 0;
}

