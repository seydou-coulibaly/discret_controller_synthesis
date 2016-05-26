/* --- Generated the 11/2/2016 at 15:28 --- */
/* --- heptagon compiler, version 1.00.06 (compiled tue. feb. 10 16:39:51 CET 2015) --- */
/* --- Command line: heptc -target ctrln -target c twomodes.ept --- */

#ifndef TWOMODES_H
#define TWOMODES_H

#include "twomodes_types.h"
#include "twomodes_controller.h"
typedef struct Twomodes__twomodes_mem {
  Twomodes_controller__st ck;
  int pnr;
  int x_1;
} Twomodes__twomodes_mem;

typedef struct Twomodes__twomodes_out {
  int y;
  int b;
} Twomodes__twomodes_out;

void Twomodes__twomodes_reset(Twomodes__twomodes_mem* self);

void Twomodes__twomodes_step(int v, int d, Twomodes__twomodes_out* _out,
                             Twomodes__twomodes_mem* self);

#endif // TWOMODES_H
