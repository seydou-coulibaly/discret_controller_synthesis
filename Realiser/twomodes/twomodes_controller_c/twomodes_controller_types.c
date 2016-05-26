/* --- Generated the 11/2/2016 at 15:17 --- */
/* --- heptagon compiler, version 1.00.06 (compiled tue. feb. 10 16:39:51 CET 2015) --- */
/* --- Command line: heptc -target c twomodes_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "twomodes_controller_types.h"

Twomodes_controller__st Twomodes_controller__st_of_string(char* s) {
  if ((strcmp(s, "St_Up")==0)) {
    return Twomodes_controller__St_Up;
  };
  if ((strcmp(s, "St_Down")==0)) {
    return Twomodes_controller__St_Down;
  };
}

char* string_of_Twomodes_controller__st(Twomodes_controller__st x, char* buf) {
  switch (x) {
    case Twomodes_controller__St_Up:
      strcpy(buf, "St_Up");
      break;
    case Twomodes_controller__St_Down:
      strcpy(buf, "St_Down");
      break;
  };
  return buf;
}

