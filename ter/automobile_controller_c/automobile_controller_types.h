/* --- Generated the 26/5/2016 at 18:11 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -target c automobile_controller.ept --- */

#ifndef AUTOMOBILE_CONTROLLER_TYPES_H
#define AUTOMOBILE_CONTROLLER_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
typedef enum {
  Automobile_controller__PresencePieton,
  Automobile_controller__Presencevehicule,
  Automobile_controller__Feu,
  Automobile_controller__None
} Automobile_controller__cause;

Automobile_controller__cause Automobile_controller__cause_of_string(char* s);

char* string_of_Automobile_controller__cause(Automobile_controller__cause x,
                                             char* buf);

typedef enum {
  Automobile_controller__Vert,
  Automobile_controller__Jaune,
  Automobile_controller__Rouge
} Automobile_controller__couleur;

Automobile_controller__couleur Automobile_controller__couleur_of_string(
char* s);

char* string_of_Automobile_controller__couleur(Automobile_controller__couleur x,
                                               char* buf);

typedef enum {
  Automobile_controller__Idle,
  Automobile_controller__Veilleuses,
  Automobile_controller__Codes,
  Automobile_controller__Phares
} Automobile_controller__etatPhares;

Automobile_controller__etatPhares Automobile_controller__etatPhares_of_string(
char* s);

char* string_of_Automobile_controller__etatPhares(Automobile_controller__etatPhares x,
                                                  char* buf);

typedef enum {
  Automobile_controller__Null,
  Automobile_controller__Low,
  Automobile_controller__Normal,
  Automobile_controller__High
} Automobile_controller__lum;

Automobile_controller__lum Automobile_controller__lum_of_string(char* s);

char* string_of_Automobile_controller__lum(Automobile_controller__lum x,
                                           char* buf);

typedef enum {
  Automobile_controller__Un,
  Automobile_controller__Deux,
  Automobile_controller__Trois,
  Automobile_controller__Quatre,
  Automobile_controller__Cinq,
  Automobile_controller__Six,
  Automobile_controller__PointMort
} Automobile_controller__numero;

Automobile_controller__numero Automobile_controller__numero_of_string(
char* s);

char* string_of_Automobile_controller__numero(Automobile_controller__numero x,
                                              char* buf);

typedef enum {
  Automobile_controller__Ville,
  Automobile_controller__Autoroute
} Automobile_controller__position;

Automobile_controller__position Automobile_controller__position_of_string(
char* s);

char* string_of_Automobile_controller__position(Automobile_controller__position x,
                                                char* buf);

typedef enum {
  Automobile_controller__Desactive,
  Automobile_controller__PositionJour,
  Automobile_controller__PositionNuit,
  Automobile_controller__PositionNormale
} Automobile_controller__retro;

Automobile_controller__retro Automobile_controller__retro_of_string(char* s);

char* string_of_Automobile_controller__retro(Automobile_controller__retro x,
                                             char* buf);

typedef enum {
  Automobile_controller__St_Eteint,
  Automobile_controller__St_Allumer
} Automobile_controller__st;

Automobile_controller__st Automobile_controller__st_of_string(char* s);

char* string_of_Automobile_controller__st(Automobile_controller__st x,
                                          char* buf);

typedef enum {
  Automobile_controller__St_1_Zero,
  Automobile_controller__St_1_Troisieme,
  Automobile_controller__St_1_Quatrieme,
  Automobile_controller__St_1_Premier,
  Automobile_controller__St_1_Deuxieme,
  Automobile_controller__St_1_Cinquieme,
  Automobile_controller__St_1_Arriere
} Automobile_controller__st_1;

Automobile_controller__st_1 Automobile_controller__st_1_of_string(char* s);

char* string_of_Automobile_controller__st_1(Automobile_controller__st_1 x,
                                            char* buf);

typedef enum {
  Automobile_controller__St_10_Veilleuses,
  Automobile_controller__St_10_Phares,
  Automobile_controller__St_10_Idle,
  Automobile_controller__St_10_Codes
} Automobile_controller__st_10;

Automobile_controller__st_10 Automobile_controller__st_10_of_string(char* s);

char* string_of_Automobile_controller__st_10(Automobile_controller__st_10 x,
                                             char* buf);

typedef enum {
  Automobile_controller__St_11_Desactive,
  Automobile_controller__St_11_Active
} Automobile_controller__st_11;

Automobile_controller__st_11 Automobile_controller__st_11_of_string(char* s);

char* string_of_Automobile_controller__st_11(Automobile_controller__st_11 x,
                                             char* buf);

typedef enum {
  Automobile_controller__St_12_Vehicule,
  Automobile_controller__St_12_Pieton,
  Automobile_controller__St_12_Feu,
  Automobile_controller__St_12_Acceleration
} Automobile_controller__st_12;

Automobile_controller__st_12 Automobile_controller__st_12_of_string(char* s);

char* string_of_Automobile_controller__st_12(Automobile_controller__st_12 x,
                                             char* buf);

typedef enum {
  Automobile_controller__St_13_Idle,
  Automobile_controller__St_13_Detection
} Automobile_controller__st_13;

Automobile_controller__st_13 Automobile_controller__st_13_of_string(char* s);

char* string_of_Automobile_controller__st_13(Automobile_controller__st_13 x,
                                             char* buf);

typedef enum {
  Automobile_controller__St_14_Desactive,
  Automobile_controller__St_14_Active
} Automobile_controller__st_14;

Automobile_controller__st_14 Automobile_controller__st_14_of_string(char* s);

char* string_of_Automobile_controller__st_14(Automobile_controller__st_14 x,
                                             char* buf);

typedef enum {
  Automobile_controller__St_15_Desactive,
  Automobile_controller__St_15_BalayageUnique,
  Automobile_controller__St_15_BalayageIntermittent,
  Automobile_controller__St_15_BalayageContiu
} Automobile_controller__st_15;

Automobile_controller__st_15 Automobile_controller__st_15_of_string(char* s);

char* string_of_Automobile_controller__st_15(Automobile_controller__st_15 x,
                                             char* buf);

typedef enum {
  Automobile_controller__St_16_PositionNuit,
  Automobile_controller__St_16_PositionNormale,
  Automobile_controller__St_16_PositionJour,
  Automobile_controller__St_16_Desacitve
} Automobile_controller__st_16;

Automobile_controller__st_16 Automobile_controller__st_16_of_string(char* s);

char* string_of_Automobile_controller__st_16(Automobile_controller__st_16 x,
                                             char* buf);

typedef enum {
  Automobile_controller__St_17_Stop,
  Automobile_controller__St_17_Move
} Automobile_controller__st_17;

Automobile_controller__st_17 Automobile_controller__st_17_of_string(char* s);

char* string_of_Automobile_controller__st_17(Automobile_controller__st_17 x,
                                             char* buf);

typedef enum {
  Automobile_controller__St_18_Zero,
  Automobile_controller__St_18_Troisieme,
  Automobile_controller__St_18_Quatrieme,
  Automobile_controller__St_18_Premier,
  Automobile_controller__St_18_Deuxieme,
  Automobile_controller__St_18_Cinquieme,
  Automobile_controller__St_18_Arriere
} Automobile_controller__st_18;

Automobile_controller__st_18 Automobile_controller__st_18_of_string(char* s);

char* string_of_Automobile_controller__st_18(Automobile_controller__st_18 x,
                                             char* buf);

typedef enum {
  Automobile_controller__St_19_Eteint,
  Automobile_controller__St_19_Allumer
} Automobile_controller__st_19;

Automobile_controller__st_19 Automobile_controller__st_19_of_string(char* s);

char* string_of_Automobile_controller__st_19(Automobile_controller__st_19 x,
                                             char* buf);

typedef enum {
  Automobile_controller__St_2_Stop,
  Automobile_controller__St_2_Move
} Automobile_controller__st_2;

Automobile_controller__st_2 Automobile_controller__st_2_of_string(char* s);

char* string_of_Automobile_controller__st_2(Automobile_controller__st_2 x,
                                            char* buf);

typedef enum {
  Automobile_controller__St_3_PositionNuit,
  Automobile_controller__St_3_PositionNormale,
  Automobile_controller__St_3_PositionJour,
  Automobile_controller__St_3_Desacitve
} Automobile_controller__st_3;

Automobile_controller__st_3 Automobile_controller__st_3_of_string(char* s);

char* string_of_Automobile_controller__st_3(Automobile_controller__st_3 x,
                                            char* buf);

typedef enum {
  Automobile_controller__St_4_Desactive,
  Automobile_controller__St_4_BalayageUnique,
  Automobile_controller__St_4_BalayageIntermittent,
  Automobile_controller__St_4_BalayageContiu
} Automobile_controller__st_4;

Automobile_controller__st_4 Automobile_controller__st_4_of_string(char* s);

char* string_of_Automobile_controller__st_4(Automobile_controller__st_4 x,
                                            char* buf);

typedef enum {
  Automobile_controller__St_5_Desactive,
  Automobile_controller__St_5_Active
} Automobile_controller__st_5;

Automobile_controller__st_5 Automobile_controller__st_5_of_string(char* s);

char* string_of_Automobile_controller__st_5(Automobile_controller__st_5 x,
                                            char* buf);

typedef enum {
  Automobile_controller__St_6_Idle,
  Automobile_controller__St_6_Detection
} Automobile_controller__st_6;

Automobile_controller__st_6 Automobile_controller__st_6_of_string(char* s);

char* string_of_Automobile_controller__st_6(Automobile_controller__st_6 x,
                                            char* buf);

typedef enum {
  Automobile_controller__St_7_Vehicule,
  Automobile_controller__St_7_Pieton,
  Automobile_controller__St_7_Feu,
  Automobile_controller__St_7_Acceleration
} Automobile_controller__st_7;

Automobile_controller__st_7 Automobile_controller__st_7_of_string(char* s);

char* string_of_Automobile_controller__st_7(Automobile_controller__st_7 x,
                                            char* buf);

typedef enum {
  Automobile_controller__St_8_Desactive,
  Automobile_controller__St_8_Active
} Automobile_controller__st_8;

Automobile_controller__st_8 Automobile_controller__st_8_of_string(char* s);

char* string_of_Automobile_controller__st_8(Automobile_controller__st_8 x,
                                            char* buf);

typedef enum {
  Automobile_controller__St_9_Veilleuses,
  Automobile_controller__St_9_Phares,
  Automobile_controller__St_9_Idle,
  Automobile_controller__St_9_Codes
} Automobile_controller__st_9;

Automobile_controller__st_9 Automobile_controller__st_9_of_string(char* s);

char* string_of_Automobile_controller__st_9(Automobile_controller__st_9 x,
                                            char* buf);

typedef enum {
  Automobile_controller__Deactivated,
  Automobile_controller__Intermittent,
  Automobile_controller__Contiu,
  Automobile_controller__Unique
} Automobile_controller__typeBalayage;

Automobile_controller__typeBalayage Automobile_controller__typeBalayage_of_string(
char* s);

char* string_of_Automobile_controller__typeBalayage(Automobile_controller__typeBalayage x,
                                                    char* buf);

#endif // AUTOMOBILE_CONTROLLER_TYPES_H
