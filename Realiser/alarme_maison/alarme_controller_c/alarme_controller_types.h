/* --- Generated the 24/3/2016 at 16:35 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. feb. 11 18:24:22 CET 2016) --- */
/* --- Command line: /usr/local/bin/heptc -target c alarme_controller.ept --- */

#ifndef ALARME_CONTROLLER_TYPES_H
#define ALARME_CONTROLLER_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
typedef enum {
  Alarme_controller__DispositifMarche,
  Alarme_controller__ArretDispositif,
  Alarme_controller__DispositifVigilence
} Alarme_controller__etat;

Alarme_controller__etat Alarme_controller__etat_of_string(char* s);

char* string_of_Alarme_controller__etat(Alarme_controller__etat x, char* buf);

typedef enum {
  Alarme_controller__St_Vigilence,
  Alarme_controller__St_Sonner,
  Alarme_controller__St_Arret,
  Alarme_controller__St_Allume
} Alarme_controller__st;

Alarme_controller__st Alarme_controller__st_of_string(char* s);

char* string_of_Alarme_controller__st(Alarme_controller__st x, char* buf);

#endif // ALARME_CONTROLLER_TYPES_H
