/* --- Generated the 17/6/2016 at 14:9 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -target c train_controller.ept --- */

#ifndef TRAIN_CONTROLLER_TYPES_H
#define TRAIN_CONTROLLER_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
typedef enum {
  Train_controller__St_Haut,
  Train_controller__St_Bas
} Train_controller__st;

Train_controller__st Train_controller__st_of_string(char* s);

char* string_of_Train_controller__st(Train_controller__st x, char* buf);

typedef enum {
  Train_controller__St_1_Vert,
  Train_controller__St_1_Rouge
} Train_controller__st_1;

Train_controller__st_1 Train_controller__st_1_of_string(char* s);

char* string_of_Train_controller__st_1(Train_controller__st_1 x, char* buf);

typedef enum {
  Train_controller__St_10_Vert,
  Train_controller__St_10_Rouge
} Train_controller__st_10;

Train_controller__st_10 Train_controller__st_10_of_string(char* s);

char* string_of_Train_controller__st_10(Train_controller__st_10 x, char* buf);

typedef enum {
  Train_controller__St_11_Vert,
  Train_controller__St_11_Rouge
} Train_controller__st_11;

Train_controller__st_11 Train_controller__st_11_of_string(char* s);

char* string_of_Train_controller__st_11(Train_controller__st_11 x, char* buf);

typedef enum {
  Train_controller__St_12_Vert,
  Train_controller__St_12_Rouge
} Train_controller__st_12;

Train_controller__st_12 Train_controller__st_12_of_string(char* s);

char* string_of_Train_controller__st_12(Train_controller__st_12 x, char* buf);

typedef enum {
  Train_controller__St_13_Haut,
  Train_controller__St_13_Bas
} Train_controller__st_13;

Train_controller__st_13 Train_controller__st_13_of_string(char* s);

char* string_of_Train_controller__st_13(Train_controller__st_13 x, char* buf);

typedef enum {
  Train_controller__St_14_Haut,
  Train_controller__St_14_Bas
} Train_controller__st_14;

Train_controller__st_14 Train_controller__st_14_of_string(char* s);

char* string_of_Train_controller__st_14(Train_controller__st_14 x, char* buf);

typedef enum {
  Train_controller__St_2_PresenceNiveau,
  Train_controller__St_2_NiveauVide
} Train_controller__st_2;

Train_controller__st_2 Train_controller__st_2_of_string(char* s);

char* string_of_Train_controller__st_2(Train_controller__st_2 x, char* buf);

typedef enum {
  Train_controller__St_3_PresenceNiveau,
  Train_controller__St_3_NiveauVide
} Train_controller__st_3;

Train_controller__st_3 Train_controller__st_3_of_string(char* s);

char* string_of_Train_controller__st_3(Train_controller__st_3 x, char* buf);

typedef enum {
  Train_controller__St_4_PresenceNiveau,
  Train_controller__St_4_NiveauVide
} Train_controller__st_4;

Train_controller__st_4 Train_controller__st_4_of_string(char* s);

char* string_of_Train_controller__st_4(Train_controller__st_4 x, char* buf);

typedef enum {
  Train_controller__St_5_PresenceNiveau,
  Train_controller__St_5_NiveauVide
} Train_controller__st_5;

Train_controller__st_5 Train_controller__st_5_of_string(char* s);

char* string_of_Train_controller__st_5(Train_controller__st_5 x, char* buf);

typedef enum {
  Train_controller__St_6_PresenceNiveau,
  Train_controller__St_6_NiveauVide
} Train_controller__st_6;

Train_controller__st_6 Train_controller__st_6_of_string(char* s);

char* string_of_Train_controller__st_6(Train_controller__st_6 x, char* buf);

typedef enum {
  Train_controller__St_7_PresenceNiveau,
  Train_controller__St_7_NiveauVide
} Train_controller__st_7;

Train_controller__st_7 Train_controller__st_7_of_string(char* s);

char* string_of_Train_controller__st_7(Train_controller__st_7 x, char* buf);

typedef enum {
  Train_controller__St_8_PresenceNiveau,
  Train_controller__St_8_NiveauVide
} Train_controller__st_8;

Train_controller__st_8 Train_controller__st_8_of_string(char* s);

char* string_of_Train_controller__st_8(Train_controller__st_8 x, char* buf);

typedef enum {
  Train_controller__St_9_Vert,
  Train_controller__St_9_Rouge
} Train_controller__st_9;

Train_controller__st_9 Train_controller__st_9_of_string(char* s);

char* string_of_Train_controller__st_9(Train_controller__st_9 x, char* buf);

#endif // TRAIN_CONTROLLER_TYPES_H
