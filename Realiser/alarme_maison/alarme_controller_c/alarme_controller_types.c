/* --- Generated the 24/3/2016 at 16:35 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. feb. 11 18:24:22 CET 2016) --- */
/* --- Command line: /usr/local/bin/heptc -target c alarme_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "alarme_controller_types.h"

Alarme_controller__etat Alarme_controller__etat_of_string(char* s) {
  if ((strcmp(s, "DispositifMarche")==0)) {
    return Alarme_controller__DispositifMarche;
  };
  if ((strcmp(s, "ArretDispositif")==0)) {
    return Alarme_controller__ArretDispositif;
  };
  if ((strcmp(s, "DispositifVigilence")==0)) {
    return Alarme_controller__DispositifVigilence;
  };
}

char* string_of_Alarme_controller__etat(Alarme_controller__etat x, char* buf) {
  switch (x) {
    case Alarme_controller__DispositifMarche:
      strcpy(buf, "DispositifMarche");
      break;
    case Alarme_controller__ArretDispositif:
      strcpy(buf, "ArretDispositif");
      break;
    case Alarme_controller__DispositifVigilence:
      strcpy(buf, "DispositifVigilence");
      break;
    default:
      break;
  };
  return buf;
}

Alarme_controller__st Alarme_controller__st_of_string(char* s) {
  if ((strcmp(s, "St_Vigilence")==0)) {
    return Alarme_controller__St_Vigilence;
  };
  if ((strcmp(s, "St_Sonner")==0)) {
    return Alarme_controller__St_Sonner;
  };
  if ((strcmp(s, "St_Arret")==0)) {
    return Alarme_controller__St_Arret;
  };
  if ((strcmp(s, "St_Allume")==0)) {
    return Alarme_controller__St_Allume;
  };
}

char* string_of_Alarme_controller__st(Alarme_controller__st x, char* buf) {
  switch (x) {
    case Alarme_controller__St_Vigilence:
      strcpy(buf, "St_Vigilence");
      break;
    case Alarme_controller__St_Sonner:
      strcpy(buf, "St_Sonner");
      break;
    case Alarme_controller__St_Arret:
      strcpy(buf, "St_Arret");
      break;
    case Alarme_controller__St_Allume:
      strcpy(buf, "St_Allume");
      break;
    default:
      break;
  };
  return buf;
}

