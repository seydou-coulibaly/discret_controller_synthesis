/* --- Generated the 17/6/2016 at 14:1 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -target c smartHome_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "smartHome_controller_types.h"

SmartHome_controller__lum SmartHome_controller__lum_of_string(char* s) {
  if ((strcmp(s, "Rouge")==0)) {
    return SmartHome_controller__Rouge;
  };
  if ((strcmp(s, "Vert")==0)) {
    return SmartHome_controller__Vert;
  };
  if ((strcmp(s, "Jaune")==0)) {
    return SmartHome_controller__Jaune;
  };
}

char* string_of_SmartHome_controller__lum(SmartHome_controller__lum x,
                                          char* buf) {
  switch (x) {
    case SmartHome_controller__Rouge:
      strcpy(buf, "Rouge");
      break;
    case SmartHome_controller__Vert:
      strcpy(buf, "Vert");
      break;
    case SmartHome_controller__Jaune:
      strcpy(buf, "Jaune");
      break;
    default:
      break;
  };
  return buf;
}

SmartHome_controller__porte SmartHome_controller__porte_of_string(char* s) {
  if ((strcmp(s, "Ouvert")==0)) {
    return SmartHome_controller__Ouvert;
  };
  if ((strcmp(s, "Fermer")==0)) {
    return SmartHome_controller__Fermer;
  };
}

char* string_of_SmartHome_controller__porte(SmartHome_controller__porte x,
                                            char* buf) {
  switch (x) {
    case SmartHome_controller__Ouvert:
      strcpy(buf, "Ouvert");
      break;
    case SmartHome_controller__Fermer:
      strcpy(buf, "Fermer");
      break;
    default:
      break;
  };
  return buf;
}

SmartHome_controller__position SmartHome_controller__position_of_string(
  char* s) {
  if ((strcmp(s, "Avant")==0)) {
    return SmartHome_controller__Avant;
  };
  if ((strcmp(s, "Arriere")==0)) {
    return SmartHome_controller__Arriere;
  };
  if ((strcmp(s, "Null")==0)) {
    return SmartHome_controller__Null;
  };
}

char* string_of_SmartHome_controller__position(SmartHome_controller__position x,
                                               char* buf) {
  switch (x) {
    case SmartHome_controller__Avant:
      strcpy(buf, "Avant");
      break;
    case SmartHome_controller__Arriere:
      strcpy(buf, "Arriere");
      break;
    case SmartHome_controller__Null:
      strcpy(buf, "Null");
      break;
    default:
      break;
  };
  return buf;
}

SmartHome_controller__st SmartHome_controller__st_of_string(char* s) {
  if ((strcmp(s, "St_Presence")==0)) {
    return SmartHome_controller__St_Presence;
  };
  if ((strcmp(s, "St_Nothing")==0)) {
    return SmartHome_controller__St_Nothing;
  };
}

char* string_of_SmartHome_controller__st(SmartHome_controller__st x,
                                         char* buf) {
  switch (x) {
    case SmartHome_controller__St_Presence:
      strcpy(buf, "St_Presence");
      break;
    case SmartHome_controller__St_Nothing:
      strcpy(buf, "St_Nothing");
      break;
    default:
      break;
  };
  return buf;
}

SmartHome_controller__st_1 SmartHome_controller__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_NoPresence")==0)) {
    return SmartHome_controller__St_1_NoPresence;
  };
  if ((strcmp(s, "St_1_Avant")==0)) {
    return SmartHome_controller__St_1_Avant;
  };
  if ((strcmp(s, "St_1_Arriere")==0)) {
    return SmartHome_controller__St_1_Arriere;
  };
}

char* string_of_SmartHome_controller__st_1(SmartHome_controller__st_1 x,
                                           char* buf) {
  switch (x) {
    case SmartHome_controller__St_1_NoPresence:
      strcpy(buf, "St_1_NoPresence");
      break;
    case SmartHome_controller__St_1_Avant:
      strcpy(buf, "St_1_Avant");
      break;
    case SmartHome_controller__St_1_Arriere:
      strcpy(buf, "St_1_Arriere");
      break;
    default:
      break;
  };
  return buf;
}

SmartHome_controller__st_10 SmartHome_controller__st_10_of_string(char* s) {
  if ((strcmp(s, "St_10_Vigilence")==0)) {
    return SmartHome_controller__St_10_Vigilence;
  };
  if ((strcmp(s, "St_10_Sonner")==0)) {
    return SmartHome_controller__St_10_Sonner;
  };
  if ((strcmp(s, "St_10_Arret")==0)) {
    return SmartHome_controller__St_10_Arret;
  };
  if ((strcmp(s, "St_10_Allume")==0)) {
    return SmartHome_controller__St_10_Allume;
  };
}

char* string_of_SmartHome_controller__st_10(SmartHome_controller__st_10 x,
                                            char* buf) {
  switch (x) {
    case SmartHome_controller__St_10_Vigilence:
      strcpy(buf, "St_10_Vigilence");
      break;
    case SmartHome_controller__St_10_Sonner:
      strcpy(buf, "St_10_Sonner");
      break;
    case SmartHome_controller__St_10_Arret:
      strcpy(buf, "St_10_Arret");
      break;
    case SmartHome_controller__St_10_Allume:
      strcpy(buf, "St_10_Allume");
      break;
    default:
      break;
  };
  return buf;
}

SmartHome_controller__st_11 SmartHome_controller__st_11_of_string(char* s) {
  if ((strcmp(s, "St_11_Ouvrir")==0)) {
    return SmartHome_controller__St_11_Ouvrir;
  };
  if ((strcmp(s, "St_11_Fermer")==0)) {
    return SmartHome_controller__St_11_Fermer;
  };
}

char* string_of_SmartHome_controller__st_11(SmartHome_controller__st_11 x,
                                            char* buf) {
  switch (x) {
    case SmartHome_controller__St_11_Ouvrir:
      strcpy(buf, "St_11_Ouvrir");
      break;
    case SmartHome_controller__St_11_Fermer:
      strcpy(buf, "St_11_Fermer");
      break;
    default:
      break;
  };
  return buf;
}

SmartHome_controller__st_12 SmartHome_controller__st_12_of_string(char* s) {
  if ((strcmp(s, "St_12_Idle")==0)) {
    return SmartHome_controller__St_12_Idle;
  };
  if ((strcmp(s, "St_12_Avant")==0)) {
    return SmartHome_controller__St_12_Avant;
  };
  if ((strcmp(s, "St_12_Arriere")==0)) {
    return SmartHome_controller__St_12_Arriere;
  };
}

char* string_of_SmartHome_controller__st_12(SmartHome_controller__st_12 x,
                                            char* buf) {
  switch (x) {
    case SmartHome_controller__St_12_Idle:
      strcpy(buf, "St_12_Idle");
      break;
    case SmartHome_controller__St_12_Avant:
      strcpy(buf, "St_12_Avant");
      break;
    case SmartHome_controller__St_12_Arriere:
      strcpy(buf, "St_12_Arriere");
      break;
    default:
      break;
  };
  return buf;
}

SmartHome_controller__st_13 SmartHome_controller__st_13_of_string(char* s) {
  if ((strcmp(s, "St_13_Ouvrir")==0)) {
    return SmartHome_controller__St_13_Ouvrir;
  };
  if ((strcmp(s, "St_13_Fermer")==0)) {
    return SmartHome_controller__St_13_Fermer;
  };
}

char* string_of_SmartHome_controller__st_13(SmartHome_controller__st_13 x,
                                            char* buf) {
  switch (x) {
    case SmartHome_controller__St_13_Ouvrir:
      strcpy(buf, "St_13_Ouvrir");
      break;
    case SmartHome_controller__St_13_Fermer:
      strcpy(buf, "St_13_Fermer");
      break;
    default:
      break;
  };
  return buf;
}

SmartHome_controller__st_14 SmartHome_controller__st_14_of_string(char* s) {
  if ((strcmp(s, "St_14_Idle")==0)) {
    return SmartHome_controller__St_14_Idle;
  };
  if ((strcmp(s, "St_14_Avant")==0)) {
    return SmartHome_controller__St_14_Avant;
  };
  if ((strcmp(s, "St_14_Arriere")==0)) {
    return SmartHome_controller__St_14_Arriere;
  };
}

char* string_of_SmartHome_controller__st_14(SmartHome_controller__st_14 x,
                                            char* buf) {
  switch (x) {
    case SmartHome_controller__St_14_Idle:
      strcpy(buf, "St_14_Idle");
      break;
    case SmartHome_controller__St_14_Avant:
      strcpy(buf, "St_14_Avant");
      break;
    case SmartHome_controller__St_14_Arriere:
      strcpy(buf, "St_14_Arriere");
      break;
    default:
      break;
  };
  return buf;
}

SmartHome_controller__st_15 SmartHome_controller__st_15_of_string(char* s) {
  if ((strcmp(s, "St_15_Ouvrir")==0)) {
    return SmartHome_controller__St_15_Ouvrir;
  };
  if ((strcmp(s, "St_15_Fermer")==0)) {
    return SmartHome_controller__St_15_Fermer;
  };
}

char* string_of_SmartHome_controller__st_15(SmartHome_controller__st_15 x,
                                            char* buf) {
  switch (x) {
    case SmartHome_controller__St_15_Ouvrir:
      strcpy(buf, "St_15_Ouvrir");
      break;
    case SmartHome_controller__St_15_Fermer:
      strcpy(buf, "St_15_Fermer");
      break;
    default:
      break;
  };
  return buf;
}

SmartHome_controller__st_16 SmartHome_controller__st_16_of_string(char* s) {
  if ((strcmp(s, "St_16_Ouvrir")==0)) {
    return SmartHome_controller__St_16_Ouvrir;
  };
  if ((strcmp(s, "St_16_Fermer")==0)) {
    return SmartHome_controller__St_16_Fermer;
  };
}

char* string_of_SmartHome_controller__st_16(SmartHome_controller__st_16 x,
                                            char* buf) {
  switch (x) {
    case SmartHome_controller__St_16_Ouvrir:
      strcpy(buf, "St_16_Ouvrir");
      break;
    case SmartHome_controller__St_16_Fermer:
      strcpy(buf, "St_16_Fermer");
      break;
    default:
      break;
  };
  return buf;
}

SmartHome_controller__st_17 SmartHome_controller__st_17_of_string(char* s) {
  if ((strcmp(s, "St_17_Presence")==0)) {
    return SmartHome_controller__St_17_Presence;
  };
  if ((strcmp(s, "St_17_Nothing")==0)) {
    return SmartHome_controller__St_17_Nothing;
  };
}

char* string_of_SmartHome_controller__st_17(SmartHome_controller__st_17 x,
                                            char* buf) {
  switch (x) {
    case SmartHome_controller__St_17_Presence:
      strcpy(buf, "St_17_Presence");
      break;
    case SmartHome_controller__St_17_Nothing:
      strcpy(buf, "St_17_Nothing");
      break;
    default:
      break;
  };
  return buf;
}

SmartHome_controller__st_18 SmartHome_controller__st_18_of_string(char* s) {
  if ((strcmp(s, "St_18_On")==0)) {
    return SmartHome_controller__St_18_On;
  };
  if ((strcmp(s, "St_18_Off")==0)) {
    return SmartHome_controller__St_18_Off;
  };
}

char* string_of_SmartHome_controller__st_18(SmartHome_controller__st_18 x,
                                            char* buf) {
  switch (x) {
    case SmartHome_controller__St_18_On:
      strcpy(buf, "St_18_On");
      break;
    case SmartHome_controller__St_18_Off:
      strcpy(buf, "St_18_Off");
      break;
    default:
      break;
  };
  return buf;
}

SmartHome_controller__st_19 SmartHome_controller__st_19_of_string(char* s) {
  if ((strcmp(s, "St_19_Presence")==0)) {
    return SmartHome_controller__St_19_Presence;
  };
  if ((strcmp(s, "St_19_Nothing")==0)) {
    return SmartHome_controller__St_19_Nothing;
  };
}

char* string_of_SmartHome_controller__st_19(SmartHome_controller__st_19 x,
                                            char* buf) {
  switch (x) {
    case SmartHome_controller__St_19_Presence:
      strcpy(buf, "St_19_Presence");
      break;
    case SmartHome_controller__St_19_Nothing:
      strcpy(buf, "St_19_Nothing");
      break;
    default:
      break;
  };
  return buf;
}

SmartHome_controller__st_2 SmartHome_controller__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_Idle")==0)) {
    return SmartHome_controller__St_2_Idle;
  };
  if ((strcmp(s, "St_2_Avant")==0)) {
    return SmartHome_controller__St_2_Avant;
  };
  if ((strcmp(s, "St_2_Arriere")==0)) {
    return SmartHome_controller__St_2_Arriere;
  };
}

char* string_of_SmartHome_controller__st_2(SmartHome_controller__st_2 x,
                                           char* buf) {
  switch (x) {
    case SmartHome_controller__St_2_Idle:
      strcpy(buf, "St_2_Idle");
      break;
    case SmartHome_controller__St_2_Avant:
      strcpy(buf, "St_2_Avant");
      break;
    case SmartHome_controller__St_2_Arriere:
      strcpy(buf, "St_2_Arriere");
      break;
    default:
      break;
  };
  return buf;
}

SmartHome_controller__st_20 SmartHome_controller__st_20_of_string(char* s) {
  if ((strcmp(s, "St_20_Presence")==0)) {
    return SmartHome_controller__St_20_Presence;
  };
  if ((strcmp(s, "St_20_Nothing")==0)) {
    return SmartHome_controller__St_20_Nothing;
  };
}

char* string_of_SmartHome_controller__st_20(SmartHome_controller__st_20 x,
                                            char* buf) {
  switch (x) {
    case SmartHome_controller__St_20_Presence:
      strcpy(buf, "St_20_Presence");
      break;
    case SmartHome_controller__St_20_Nothing:
      strcpy(buf, "St_20_Nothing");
      break;
    default:
      break;
  };
  return buf;
}

SmartHome_controller__st_21 SmartHome_controller__st_21_of_string(char* s) {
  if ((strcmp(s, "St_21_Presence")==0)) {
    return SmartHome_controller__St_21_Presence;
  };
  if ((strcmp(s, "St_21_Nothing")==0)) {
    return SmartHome_controller__St_21_Nothing;
  };
}

char* string_of_SmartHome_controller__st_21(SmartHome_controller__st_21 x,
                                            char* buf) {
  switch (x) {
    case SmartHome_controller__St_21_Presence:
      strcpy(buf, "St_21_Presence");
      break;
    case SmartHome_controller__St_21_Nothing:
      strcpy(buf, "St_21_Nothing");
      break;
    default:
      break;
  };
  return buf;
}

SmartHome_controller__st_3 SmartHome_controller__st_3_of_string(char* s) {
  if ((strcmp(s, "St_3_On")==0)) {
    return SmartHome_controller__St_3_On;
  };
  if ((strcmp(s, "St_3_Off")==0)) {
    return SmartHome_controller__St_3_Off;
  };
}

char* string_of_SmartHome_controller__st_3(SmartHome_controller__st_3 x,
                                           char* buf) {
  switch (x) {
    case SmartHome_controller__St_3_On:
      strcpy(buf, "St_3_On");
      break;
    case SmartHome_controller__St_3_Off:
      strcpy(buf, "St_3_Off");
      break;
    default:
      break;
  };
  return buf;
}

SmartHome_controller__st_4 SmartHome_controller__st_4_of_string(char* s) {
  if ((strcmp(s, "St_4_Ouvrir")==0)) {
    return SmartHome_controller__St_4_Ouvrir;
  };
  if ((strcmp(s, "St_4_Fermer")==0)) {
    return SmartHome_controller__St_4_Fermer;
  };
}

char* string_of_SmartHome_controller__st_4(SmartHome_controller__st_4 x,
                                           char* buf) {
  switch (x) {
    case SmartHome_controller__St_4_Ouvrir:
      strcpy(buf, "St_4_Ouvrir");
      break;
    case SmartHome_controller__St_4_Fermer:
      strcpy(buf, "St_4_Fermer");
      break;
    default:
      break;
  };
  return buf;
}

SmartHome_controller__st_5 SmartHome_controller__st_5_of_string(char* s) {
  if ((strcmp(s, "St_5_Ouvrir")==0)) {
    return SmartHome_controller__St_5_Ouvrir;
  };
  if ((strcmp(s, "St_5_Fermer")==0)) {
    return SmartHome_controller__St_5_Fermer;
  };
}

char* string_of_SmartHome_controller__st_5(SmartHome_controller__st_5 x,
                                           char* buf) {
  switch (x) {
    case SmartHome_controller__St_5_Ouvrir:
      strcpy(buf, "St_5_Ouvrir");
      break;
    case SmartHome_controller__St_5_Fermer:
      strcpy(buf, "St_5_Fermer");
      break;
    default:
      break;
  };
  return buf;
}

SmartHome_controller__st_6 SmartHome_controller__st_6_of_string(char* s) {
  if ((strcmp(s, "St_6_Ouvrir")==0)) {
    return SmartHome_controller__St_6_Ouvrir;
  };
  if ((strcmp(s, "St_6_Fermer")==0)) {
    return SmartHome_controller__St_6_Fermer;
  };
}

char* string_of_SmartHome_controller__st_6(SmartHome_controller__st_6 x,
                                           char* buf) {
  switch (x) {
    case SmartHome_controller__St_6_Ouvrir:
      strcpy(buf, "St_6_Ouvrir");
      break;
    case SmartHome_controller__St_6_Fermer:
      strcpy(buf, "St_6_Fermer");
      break;
    default:
      break;
  };
  return buf;
}

SmartHome_controller__st_7 SmartHome_controller__st_7_of_string(char* s) {
  if ((strcmp(s, "St_7_Vigilence")==0)) {
    return SmartHome_controller__St_7_Vigilence;
  };
  if ((strcmp(s, "St_7_Sonner")==0)) {
    return SmartHome_controller__St_7_Sonner;
  };
  if ((strcmp(s, "St_7_Arret")==0)) {
    return SmartHome_controller__St_7_Arret;
  };
  if ((strcmp(s, "St_7_Allume")==0)) {
    return SmartHome_controller__St_7_Allume;
  };
}

char* string_of_SmartHome_controller__st_7(SmartHome_controller__st_7 x,
                                           char* buf) {
  switch (x) {
    case SmartHome_controller__St_7_Vigilence:
      strcpy(buf, "St_7_Vigilence");
      break;
    case SmartHome_controller__St_7_Sonner:
      strcpy(buf, "St_7_Sonner");
      break;
    case SmartHome_controller__St_7_Arret:
      strcpy(buf, "St_7_Arret");
      break;
    case SmartHome_controller__St_7_Allume:
      strcpy(buf, "St_7_Allume");
      break;
    default:
      break;
  };
  return buf;
}

SmartHome_controller__st_8 SmartHome_controller__st_8_of_string(char* s) {
  if ((strcmp(s, "St_8_Stop")==0)) {
    return SmartHome_controller__St_8_Stop;
  };
  if ((strcmp(s, "St_8_Mouvement")==0)) {
    return SmartHome_controller__St_8_Mouvement;
  };
}

char* string_of_SmartHome_controller__st_8(SmartHome_controller__st_8 x,
                                           char* buf) {
  switch (x) {
    case SmartHome_controller__St_8_Stop:
      strcpy(buf, "St_8_Stop");
      break;
    case SmartHome_controller__St_8_Mouvement:
      strcpy(buf, "St_8_Mouvement");
      break;
    default:
      break;
  };
  return buf;
}

SmartHome_controller__st_9 SmartHome_controller__st_9_of_string(char* s) {
  if ((strcmp(s, "St_9_Stop")==0)) {
    return SmartHome_controller__St_9_Stop;
  };
  if ((strcmp(s, "St_9_Mouvement")==0)) {
    return SmartHome_controller__St_9_Mouvement;
  };
}

char* string_of_SmartHome_controller__st_9(SmartHome_controller__st_9 x,
                                           char* buf) {
  switch (x) {
    case SmartHome_controller__St_9_Stop:
      strcpy(buf, "St_9_Stop");
      break;
    case SmartHome_controller__St_9_Mouvement:
      strcpy(buf, "St_9_Mouvement");
      break;
    default:
      break;
  };
  return buf;
}

SmartHome_controller__stat SmartHome_controller__stat_of_string(char* s) {
  if ((strcmp(s, "Arret")==0)) {
    return SmartHome_controller__Arret;
  };
  if ((strcmp(s, "EnMouvement")==0)) {
    return SmartHome_controller__EnMouvement;
  };
}

char* string_of_SmartHome_controller__stat(SmartHome_controller__stat x,
                                           char* buf) {
  switch (x) {
    case SmartHome_controller__Arret:
      strcpy(buf, "Arret");
      break;
    case SmartHome_controller__EnMouvement:
      strcpy(buf, "EnMouvement");
      break;
    default:
      break;
  };
  return buf;
}

