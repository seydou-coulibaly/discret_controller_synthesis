/* --- Generated the 11/2/2016 at 15:17 --- */
/* --- heptagon compiler, version 1.00.06 (compiled tue. feb. 10 16:39:51 CET 2015) --- */
/* --- Command line: heptc -target c twomodes_controller.ept --- */

#ifndef TWOMODES_CONTROLLER_H
#define TWOMODES_CONTROLLER_H

#include "twomodes_controller_types.h"
typedef struct Twomodes_controller__twomodes_ctrlr0_out {
  int c;
} Twomodes_controller__twomodes_ctrlr0_out;

void Twomodes_controller__twomodes_ctrlr0_step(Twomodes_controller__st ck,
                                               int ok, int pnr, int v,
                                               int x_1,
                                               Twomodes_controller__twomodes_ctrlr0_out* _out);

#endif // TWOMODES_CONTROLLER_H
