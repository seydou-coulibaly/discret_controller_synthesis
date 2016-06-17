/* --- Generated the 17/6/2016 at 14:9 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -target c train_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "train_controller_types.h"

Train_controller__st Train_controller__st_of_string(char* s) {
  if ((strcmp(s, "St_Haut")==0)) {
    return Train_controller__St_Haut;
  };
  if ((strcmp(s, "St_Bas")==0)) {
    return Train_controller__St_Bas;
  };
}

char* string_of_Train_controller__st(Train_controller__st x, char* buf) {
  switch (x) {
    case Train_controller__St_Haut:
      strcpy(buf, "St_Haut");
      break;
    case Train_controller__St_Bas:
      strcpy(buf, "St_Bas");
      break;
    default:
      break;
  };
  return buf;
}

Train_controller__st_1 Train_controller__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_Vert")==0)) {
    return Train_controller__St_1_Vert;
  };
  if ((strcmp(s, "St_1_Rouge")==0)) {
    return Train_controller__St_1_Rouge;
  };
}

char* string_of_Train_controller__st_1(Train_controller__st_1 x, char* buf) {
  switch (x) {
    case Train_controller__St_1_Vert:
      strcpy(buf, "St_1_Vert");
      break;
    case Train_controller__St_1_Rouge:
      strcpy(buf, "St_1_Rouge");
      break;
    default:
      break;
  };
  return buf;
}

Train_controller__st_10 Train_controller__st_10_of_string(char* s) {
  if ((strcmp(s, "St_10_Vert")==0)) {
    return Train_controller__St_10_Vert;
  };
  if ((strcmp(s, "St_10_Rouge")==0)) {
    return Train_controller__St_10_Rouge;
  };
}

char* string_of_Train_controller__st_10(Train_controller__st_10 x, char* buf) {
  switch (x) {
    case Train_controller__St_10_Vert:
      strcpy(buf, "St_10_Vert");
      break;
    case Train_controller__St_10_Rouge:
      strcpy(buf, "St_10_Rouge");
      break;
    default:
      break;
  };
  return buf;
}

Train_controller__st_11 Train_controller__st_11_of_string(char* s) {
  if ((strcmp(s, "St_11_Vert")==0)) {
    return Train_controller__St_11_Vert;
  };
  if ((strcmp(s, "St_11_Rouge")==0)) {
    return Train_controller__St_11_Rouge;
  };
}

char* string_of_Train_controller__st_11(Train_controller__st_11 x, char* buf) {
  switch (x) {
    case Train_controller__St_11_Vert:
      strcpy(buf, "St_11_Vert");
      break;
    case Train_controller__St_11_Rouge:
      strcpy(buf, "St_11_Rouge");
      break;
    default:
      break;
  };
  return buf;
}

Train_controller__st_12 Train_controller__st_12_of_string(char* s) {
  if ((strcmp(s, "St_12_Vert")==0)) {
    return Train_controller__St_12_Vert;
  };
  if ((strcmp(s, "St_12_Rouge")==0)) {
    return Train_controller__St_12_Rouge;
  };
}

char* string_of_Train_controller__st_12(Train_controller__st_12 x, char* buf) {
  switch (x) {
    case Train_controller__St_12_Vert:
      strcpy(buf, "St_12_Vert");
      break;
    case Train_controller__St_12_Rouge:
      strcpy(buf, "St_12_Rouge");
      break;
    default:
      break;
  };
  return buf;
}

Train_controller__st_13 Train_controller__st_13_of_string(char* s) {
  if ((strcmp(s, "St_13_Haut")==0)) {
    return Train_controller__St_13_Haut;
  };
  if ((strcmp(s, "St_13_Bas")==0)) {
    return Train_controller__St_13_Bas;
  };
}

char* string_of_Train_controller__st_13(Train_controller__st_13 x, char* buf) {
  switch (x) {
    case Train_controller__St_13_Haut:
      strcpy(buf, "St_13_Haut");
      break;
    case Train_controller__St_13_Bas:
      strcpy(buf, "St_13_Bas");
      break;
    default:
      break;
  };
  return buf;
}

Train_controller__st_14 Train_controller__st_14_of_string(char* s) {
  if ((strcmp(s, "St_14_Haut")==0)) {
    return Train_controller__St_14_Haut;
  };
  if ((strcmp(s, "St_14_Bas")==0)) {
    return Train_controller__St_14_Bas;
  };
}

char* string_of_Train_controller__st_14(Train_controller__st_14 x, char* buf) {
  switch (x) {
    case Train_controller__St_14_Haut:
      strcpy(buf, "St_14_Haut");
      break;
    case Train_controller__St_14_Bas:
      strcpy(buf, "St_14_Bas");
      break;
    default:
      break;
  };
  return buf;
}

Train_controller__st_2 Train_controller__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_PresenceNiveau")==0)) {
    return Train_controller__St_2_PresenceNiveau;
  };
  if ((strcmp(s, "St_2_NiveauVide")==0)) {
    return Train_controller__St_2_NiveauVide;
  };
}

char* string_of_Train_controller__st_2(Train_controller__st_2 x, char* buf) {
  switch (x) {
    case Train_controller__St_2_PresenceNiveau:
      strcpy(buf, "St_2_PresenceNiveau");
      break;
    case Train_controller__St_2_NiveauVide:
      strcpy(buf, "St_2_NiveauVide");
      break;
    default:
      break;
  };
  return buf;
}

Train_controller__st_3 Train_controller__st_3_of_string(char* s) {
  if ((strcmp(s, "St_3_PresenceNiveau")==0)) {
    return Train_controller__St_3_PresenceNiveau;
  };
  if ((strcmp(s, "St_3_NiveauVide")==0)) {
    return Train_controller__St_3_NiveauVide;
  };
}

char* string_of_Train_controller__st_3(Train_controller__st_3 x, char* buf) {
  switch (x) {
    case Train_controller__St_3_PresenceNiveau:
      strcpy(buf, "St_3_PresenceNiveau");
      break;
    case Train_controller__St_3_NiveauVide:
      strcpy(buf, "St_3_NiveauVide");
      break;
    default:
      break;
  };
  return buf;
}

Train_controller__st_4 Train_controller__st_4_of_string(char* s) {
  if ((strcmp(s, "St_4_PresenceNiveau")==0)) {
    return Train_controller__St_4_PresenceNiveau;
  };
  if ((strcmp(s, "St_4_NiveauVide")==0)) {
    return Train_controller__St_4_NiveauVide;
  };
}

char* string_of_Train_controller__st_4(Train_controller__st_4 x, char* buf) {
  switch (x) {
    case Train_controller__St_4_PresenceNiveau:
      strcpy(buf, "St_4_PresenceNiveau");
      break;
    case Train_controller__St_4_NiveauVide:
      strcpy(buf, "St_4_NiveauVide");
      break;
    default:
      break;
  };
  return buf;
}

Train_controller__st_5 Train_controller__st_5_of_string(char* s) {
  if ((strcmp(s, "St_5_PresenceNiveau")==0)) {
    return Train_controller__St_5_PresenceNiveau;
  };
  if ((strcmp(s, "St_5_NiveauVide")==0)) {
    return Train_controller__St_5_NiveauVide;
  };
}

char* string_of_Train_controller__st_5(Train_controller__st_5 x, char* buf) {
  switch (x) {
    case Train_controller__St_5_PresenceNiveau:
      strcpy(buf, "St_5_PresenceNiveau");
      break;
    case Train_controller__St_5_NiveauVide:
      strcpy(buf, "St_5_NiveauVide");
      break;
    default:
      break;
  };
  return buf;
}

Train_controller__st_6 Train_controller__st_6_of_string(char* s) {
  if ((strcmp(s, "St_6_PresenceNiveau")==0)) {
    return Train_controller__St_6_PresenceNiveau;
  };
  if ((strcmp(s, "St_6_NiveauVide")==0)) {
    return Train_controller__St_6_NiveauVide;
  };
}

char* string_of_Train_controller__st_6(Train_controller__st_6 x, char* buf) {
  switch (x) {
    case Train_controller__St_6_PresenceNiveau:
      strcpy(buf, "St_6_PresenceNiveau");
      break;
    case Train_controller__St_6_NiveauVide:
      strcpy(buf, "St_6_NiveauVide");
      break;
    default:
      break;
  };
  return buf;
}

Train_controller__st_7 Train_controller__st_7_of_string(char* s) {
  if ((strcmp(s, "St_7_PresenceNiveau")==0)) {
    return Train_controller__St_7_PresenceNiveau;
  };
  if ((strcmp(s, "St_7_NiveauVide")==0)) {
    return Train_controller__St_7_NiveauVide;
  };
}

char* string_of_Train_controller__st_7(Train_controller__st_7 x, char* buf) {
  switch (x) {
    case Train_controller__St_7_PresenceNiveau:
      strcpy(buf, "St_7_PresenceNiveau");
      break;
    case Train_controller__St_7_NiveauVide:
      strcpy(buf, "St_7_NiveauVide");
      break;
    default:
      break;
  };
  return buf;
}

Train_controller__st_8 Train_controller__st_8_of_string(char* s) {
  if ((strcmp(s, "St_8_PresenceNiveau")==0)) {
    return Train_controller__St_8_PresenceNiveau;
  };
  if ((strcmp(s, "St_8_NiveauVide")==0)) {
    return Train_controller__St_8_NiveauVide;
  };
}

char* string_of_Train_controller__st_8(Train_controller__st_8 x, char* buf) {
  switch (x) {
    case Train_controller__St_8_PresenceNiveau:
      strcpy(buf, "St_8_PresenceNiveau");
      break;
    case Train_controller__St_8_NiveauVide:
      strcpy(buf, "St_8_NiveauVide");
      break;
    default:
      break;
  };
  return buf;
}

Train_controller__st_9 Train_controller__st_9_of_string(char* s) {
  if ((strcmp(s, "St_9_Vert")==0)) {
    return Train_controller__St_9_Vert;
  };
  if ((strcmp(s, "St_9_Rouge")==0)) {
    return Train_controller__St_9_Rouge;
  };
}

char* string_of_Train_controller__st_9(Train_controller__st_9 x, char* buf) {
  switch (x) {
    case Train_controller__St_9_Vert:
      strcpy(buf, "St_9_Vert");
      break;
    case Train_controller__St_9_Rouge:
      strcpy(buf, "St_9_Rouge");
      break;
    default:
      break;
  };
  return buf;
}

