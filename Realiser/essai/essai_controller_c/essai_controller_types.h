/* --- Generated the 26/5/2016 at 12:11 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -target c essai_controller.ept --- */

#ifndef ESSAI_CONTROLLER_TYPES_H
#define ESSAI_CONTROLLER_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
typedef enum {
  Essai_controller__St_Presence,
  Essai_controller__St_Nothing
} Essai_controller__st;

Essai_controller__st Essai_controller__st_of_string(char* s);

char* string_of_Essai_controller__st(Essai_controller__st x, char* buf);

typedef enum {
  Essai_controller__St_1_Stop,
  Essai_controller__St_1_Mouvement
} Essai_controller__st_1;

Essai_controller__st_1 Essai_controller__st_1_of_string(char* s);

char* string_of_Essai_controller__st_1(Essai_controller__st_1 x, char* buf);

typedef enum {
  Essai_controller__St_2_Stop,
  Essai_controller__St_2_Mouvement
} Essai_controller__st_2;

Essai_controller__st_2 Essai_controller__st_2_of_string(char* s);

char* string_of_Essai_controller__st_2(Essai_controller__st_2 x, char* buf);

typedef enum {
  Essai_controller__St_3_Presence,
  Essai_controller__St_3_Nothing
} Essai_controller__st_3;

Essai_controller__st_3 Essai_controller__st_3_of_string(char* s);

char* string_of_Essai_controller__st_3(Essai_controller__st_3 x, char* buf);

#endif // ESSAI_CONTROLLER_TYPES_H
