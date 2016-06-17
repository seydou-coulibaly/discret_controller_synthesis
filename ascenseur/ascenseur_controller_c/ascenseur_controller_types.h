/* --- Generated the 14/4/2016 at 17:39 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. feb. 11 18:24:22 CET 2016) --- */
/* --- Command line: /usr/local/bin/heptc -target c ascenseur_controller.ept --- */

#ifndef ASCENSEUR_CONTROLLER_TYPES_H
#define ASCENSEUR_CONTROLLER_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
typedef enum {
  Ascenseur_controller__St_Stop,
  Ascenseur_controller__St_Shut,
  Ascenseur_controller__St_Open,
  Ascenseur_controller__St_Mouvement
} Ascenseur_controller__st;

Ascenseur_controller__st Ascenseur_controller__st_of_string(char* s);

char* string_of_Ascenseur_controller__st(Ascenseur_controller__st x,
                                         char* buf);

typedef enum {
  Ascenseur_controller__Arret,
  Ascenseur_controller__Ouvert,
  Ascenseur_controller__EnMouvement,
  Ascenseur_controller__Fermer
} Ascenseur_controller__stat;

Ascenseur_controller__stat Ascenseur_controller__stat_of_string(char* s);

char* string_of_Ascenseur_controller__stat(Ascenseur_controller__stat x,
                                           char* buf);

#endif // ASCENSEUR_CONTROLLER_TYPES_H
