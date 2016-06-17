/* --- Generated the 14/4/2016 at 17:39 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. feb. 11 18:24:22 CET 2016) --- */
/* --- Command line: /usr/local/bin/heptc -target c ascenseur_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ascenseur_controller_types.h"

Ascenseur_controller__st Ascenseur_controller__st_of_string(char* s) {
  if ((strcmp(s, "St_Stop")==0)) {
    return Ascenseur_controller__St_Stop;
  };
  if ((strcmp(s, "St_Shut")==0)) {
    return Ascenseur_controller__St_Shut;
  };
  if ((strcmp(s, "St_Open")==0)) {
    return Ascenseur_controller__St_Open;
  };
  if ((strcmp(s, "St_Mouvement")==0)) {
    return Ascenseur_controller__St_Mouvement;
  };
}

char* string_of_Ascenseur_controller__st(Ascenseur_controller__st x,
                                         char* buf) {
  switch (x) {
    case Ascenseur_controller__St_Stop:
      strcpy(buf, "St_Stop");
      break;
    case Ascenseur_controller__St_Shut:
      strcpy(buf, "St_Shut");
      break;
    case Ascenseur_controller__St_Open:
      strcpy(buf, "St_Open");
      break;
    case Ascenseur_controller__St_Mouvement:
      strcpy(buf, "St_Mouvement");
      break;
    default:
      break;
  };
  return buf;
}

Ascenseur_controller__stat Ascenseur_controller__stat_of_string(char* s) {
  if ((strcmp(s, "Arret")==0)) {
    return Ascenseur_controller__Arret;
  };
  if ((strcmp(s, "Ouvert")==0)) {
    return Ascenseur_controller__Ouvert;
  };
  if ((strcmp(s, "EnMouvement")==0)) {
    return Ascenseur_controller__EnMouvement;
  };
  if ((strcmp(s, "Fermer")==0)) {
    return Ascenseur_controller__Fermer;
  };
}

char* string_of_Ascenseur_controller__stat(Ascenseur_controller__stat x,
                                           char* buf) {
  switch (x) {
    case Ascenseur_controller__Arret:
      strcpy(buf, "Arret");
      break;
    case Ascenseur_controller__Ouvert:
      strcpy(buf, "Ouvert");
      break;
    case Ascenseur_controller__EnMouvement:
      strcpy(buf, "EnMouvement");
      break;
    case Ascenseur_controller__Fermer:
      strcpy(buf, "Fermer");
      break;
    default:
      break;
  };
  return buf;
}

