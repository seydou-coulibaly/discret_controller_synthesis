/* --- Generated the 4/3/2016 at 15:38 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. feb. 11 18:24:22 CET 2016) --- */
/* --- Command line: /usr/local/bin/heptc -hepts -s fibonacci -target c -target ctrln fibonacci.ept --- */

#ifndef FIBONACCI_H
#define FIBONACCI_H

#include "fibonacci_types.h"
typedef struct Fibonacci__fibonacci_out {
  int y;
} Fibonacci__fibonacci_out;

void Fibonacci__fibonacci_step(int n, Fibonacci__fibonacci_out* _out);

typedef struct Fibonacci__compteur_mem {
  int x_1;
} Fibonacci__compteur_mem;

typedef struct Fibonacci__compteur_out {
  int y;
} Fibonacci__compteur_out;

void Fibonacci__compteur_reset(Fibonacci__compteur_mem* self);

void Fibonacci__compteur_step(int n, Fibonacci__compteur_out* _out,
                              Fibonacci__compteur_mem* self);

#endif // FIBONACCI_H
