/* --- Generated the 11/2/2016 at 15:17 --- */
/* --- heptagon compiler, version 1.00.06 (compiled tue. feb. 10 16:39:51 CET 2015) --- */
/* --- Command line: heptc -target c twomodes_controller.ept --- */

#ifndef TWOMODES_CONTROLLER_TYPES_H
#define TWOMODES_CONTROLLER_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
typedef enum {
  Twomodes_controller__St_Up,
  Twomodes_controller__St_Down
} Twomodes_controller__st;

Twomodes_controller__st Twomodes_controller__st_of_string(char* s);

char* string_of_Twomodes_controller__st(Twomodes_controller__st x, char* buf);

#endif // TWOMODES_CONTROLLER_TYPES_H
