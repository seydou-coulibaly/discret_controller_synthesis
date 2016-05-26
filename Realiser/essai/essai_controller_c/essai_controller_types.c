/* --- Generated the 26/5/2016 at 12:11 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -target c essai_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "essai_controller_types.h"

Essai_controller__st Essai_controller__st_of_string(char* s) {
  if ((strcmp(s, "St_Presence")==0)) {
    return Essai_controller__St_Presence;
  };
  if ((strcmp(s, "St_Nothing")==0)) {
    return Essai_controller__St_Nothing;
  };
}

char* string_of_Essai_controller__st(Essai_controller__st x, char* buf) {
  switch (x) {
    case Essai_controller__St_Presence:
      strcpy(buf, "St_Presence");
      break;
    case Essai_controller__St_Nothing:
      strcpy(buf, "St_Nothing");
      break;
    default:
      break;
  };
  return buf;
}

Essai_controller__st_1 Essai_controller__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_Stop")==0)) {
    return Essai_controller__St_1_Stop;
  };
  if ((strcmp(s, "St_1_Mouvement")==0)) {
    return Essai_controller__St_1_Mouvement;
  };
}

char* string_of_Essai_controller__st_1(Essai_controller__st_1 x, char* buf) {
  switch (x) {
    case Essai_controller__St_1_Stop:
      strcpy(buf, "St_1_Stop");
      break;
    case Essai_controller__St_1_Mouvement:
      strcpy(buf, "St_1_Mouvement");
      break;
    default:
      break;
  };
  return buf;
}

Essai_controller__st_2 Essai_controller__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_Stop")==0)) {
    return Essai_controller__St_2_Stop;
  };
  if ((strcmp(s, "St_2_Mouvement")==0)) {
    return Essai_controller__St_2_Mouvement;
  };
}

char* string_of_Essai_controller__st_2(Essai_controller__st_2 x, char* buf) {
  switch (x) {
    case Essai_controller__St_2_Stop:
      strcpy(buf, "St_2_Stop");
      break;
    case Essai_controller__St_2_Mouvement:
      strcpy(buf, "St_2_Mouvement");
      break;
    default:
      break;
  };
  return buf;
}

Essai_controller__st_3 Essai_controller__st_3_of_string(char* s) {
  if ((strcmp(s, "St_3_Presence")==0)) {
    return Essai_controller__St_3_Presence;
  };
  if ((strcmp(s, "St_3_Nothing")==0)) {
    return Essai_controller__St_3_Nothing;
  };
}

char* string_of_Essai_controller__st_3(Essai_controller__st_3 x, char* buf) {
  switch (x) {
    case Essai_controller__St_3_Presence:
      strcpy(buf, "St_3_Presence");
      break;
    case Essai_controller__St_3_Nothing:
      strcpy(buf, "St_3_Nothing");
      break;
    default:
      break;
  };
  return buf;
}

