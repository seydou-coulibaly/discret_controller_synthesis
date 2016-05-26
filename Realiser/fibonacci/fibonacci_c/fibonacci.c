/* --- Generated the 4/3/2016 at 15:38 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. feb. 11 18:24:22 CET 2016) --- */
/* --- Command line: /usr/local/bin/heptc -hepts -s fibonacci -target c -target ctrln fibonacci.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "fibonacci.h"

void Fibonacci__fibonacci_step(int n, Fibonacci__fibonacci_out* _out) {
  
  int v_1;
  int v;
  v = (n-1);
  v_1 = (n-2);
  _out->y = (v+v_1);;
}

void Fibonacci__compteur_reset(Fibonacci__compteur_mem* self) {
  self->x_1 = 0;
}

void Fibonacci__compteur_step(int n, Fibonacci__compteur_out* _out,
                              Fibonacci__compteur_mem* self) {
  
  int v;
  int x;
  v = (self->x_1+1);
  if (n) {
    x = v;
  } else {
    x = self->x_1;
  };
  _out->y = x;
  self->x_1 = x;;
}

