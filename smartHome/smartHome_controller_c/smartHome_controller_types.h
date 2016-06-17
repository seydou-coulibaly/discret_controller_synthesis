/* --- Generated the 17/6/2016 at 14:1 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -target c smartHome_controller.ept --- */

#ifndef SMARTHOME_CONTROLLER_TYPES_H
#define SMARTHOME_CONTROLLER_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
typedef enum {
  SmartHome_controller__Rouge,
  SmartHome_controller__Vert,
  SmartHome_controller__Jaune
} SmartHome_controller__lum;

SmartHome_controller__lum SmartHome_controller__lum_of_string(char* s);

char* string_of_SmartHome_controller__lum(SmartHome_controller__lum x,
                                          char* buf);

typedef enum {
  SmartHome_controller__Ouvert,
  SmartHome_controller__Fermer
} SmartHome_controller__porte;

SmartHome_controller__porte SmartHome_controller__porte_of_string(char* s);

char* string_of_SmartHome_controller__porte(SmartHome_controller__porte x,
                                            char* buf);

typedef enum {
  SmartHome_controller__Avant,
  SmartHome_controller__Arriere,
  SmartHome_controller__Null
} SmartHome_controller__position;

SmartHome_controller__position SmartHome_controller__position_of_string(
char* s);

char* string_of_SmartHome_controller__position(SmartHome_controller__position x,
                                               char* buf);

typedef enum {
  SmartHome_controller__St_Presence,
  SmartHome_controller__St_Nothing
} SmartHome_controller__st;

SmartHome_controller__st SmartHome_controller__st_of_string(char* s);

char* string_of_SmartHome_controller__st(SmartHome_controller__st x,
                                         char* buf);

typedef enum {
  SmartHome_controller__St_1_NoPresence,
  SmartHome_controller__St_1_Avant,
  SmartHome_controller__St_1_Arriere
} SmartHome_controller__st_1;

SmartHome_controller__st_1 SmartHome_controller__st_1_of_string(char* s);

char* string_of_SmartHome_controller__st_1(SmartHome_controller__st_1 x,
                                           char* buf);

typedef enum {
  SmartHome_controller__St_10_Vigilence,
  SmartHome_controller__St_10_Sonner,
  SmartHome_controller__St_10_Arret,
  SmartHome_controller__St_10_Allume
} SmartHome_controller__st_10;

SmartHome_controller__st_10 SmartHome_controller__st_10_of_string(char* s);

char* string_of_SmartHome_controller__st_10(SmartHome_controller__st_10 x,
                                            char* buf);

typedef enum {
  SmartHome_controller__St_11_Ouvrir,
  SmartHome_controller__St_11_Fermer
} SmartHome_controller__st_11;

SmartHome_controller__st_11 SmartHome_controller__st_11_of_string(char* s);

char* string_of_SmartHome_controller__st_11(SmartHome_controller__st_11 x,
                                            char* buf);

typedef enum {
  SmartHome_controller__St_12_Idle,
  SmartHome_controller__St_12_Avant,
  SmartHome_controller__St_12_Arriere
} SmartHome_controller__st_12;

SmartHome_controller__st_12 SmartHome_controller__st_12_of_string(char* s);

char* string_of_SmartHome_controller__st_12(SmartHome_controller__st_12 x,
                                            char* buf);

typedef enum {
  SmartHome_controller__St_13_Ouvrir,
  SmartHome_controller__St_13_Fermer
} SmartHome_controller__st_13;

SmartHome_controller__st_13 SmartHome_controller__st_13_of_string(char* s);

char* string_of_SmartHome_controller__st_13(SmartHome_controller__st_13 x,
                                            char* buf);

typedef enum {
  SmartHome_controller__St_14_Idle,
  SmartHome_controller__St_14_Avant,
  SmartHome_controller__St_14_Arriere
} SmartHome_controller__st_14;

SmartHome_controller__st_14 SmartHome_controller__st_14_of_string(char* s);

char* string_of_SmartHome_controller__st_14(SmartHome_controller__st_14 x,
                                            char* buf);

typedef enum {
  SmartHome_controller__St_15_Ouvrir,
  SmartHome_controller__St_15_Fermer
} SmartHome_controller__st_15;

SmartHome_controller__st_15 SmartHome_controller__st_15_of_string(char* s);

char* string_of_SmartHome_controller__st_15(SmartHome_controller__st_15 x,
                                            char* buf);

typedef enum {
  SmartHome_controller__St_16_Ouvrir,
  SmartHome_controller__St_16_Fermer
} SmartHome_controller__st_16;

SmartHome_controller__st_16 SmartHome_controller__st_16_of_string(char* s);

char* string_of_SmartHome_controller__st_16(SmartHome_controller__st_16 x,
                                            char* buf);

typedef enum {
  SmartHome_controller__St_17_Presence,
  SmartHome_controller__St_17_Nothing
} SmartHome_controller__st_17;

SmartHome_controller__st_17 SmartHome_controller__st_17_of_string(char* s);

char* string_of_SmartHome_controller__st_17(SmartHome_controller__st_17 x,
                                            char* buf);

typedef enum {
  SmartHome_controller__St_18_On,
  SmartHome_controller__St_18_Off
} SmartHome_controller__st_18;

SmartHome_controller__st_18 SmartHome_controller__st_18_of_string(char* s);

char* string_of_SmartHome_controller__st_18(SmartHome_controller__st_18 x,
                                            char* buf);

typedef enum {
  SmartHome_controller__St_19_Presence,
  SmartHome_controller__St_19_Nothing
} SmartHome_controller__st_19;

SmartHome_controller__st_19 SmartHome_controller__st_19_of_string(char* s);

char* string_of_SmartHome_controller__st_19(SmartHome_controller__st_19 x,
                                            char* buf);

typedef enum {
  SmartHome_controller__St_2_Idle,
  SmartHome_controller__St_2_Avant,
  SmartHome_controller__St_2_Arriere
} SmartHome_controller__st_2;

SmartHome_controller__st_2 SmartHome_controller__st_2_of_string(char* s);

char* string_of_SmartHome_controller__st_2(SmartHome_controller__st_2 x,
                                           char* buf);

typedef enum {
  SmartHome_controller__St_20_Presence,
  SmartHome_controller__St_20_Nothing
} SmartHome_controller__st_20;

SmartHome_controller__st_20 SmartHome_controller__st_20_of_string(char* s);

char* string_of_SmartHome_controller__st_20(SmartHome_controller__st_20 x,
                                            char* buf);

typedef enum {
  SmartHome_controller__St_21_Presence,
  SmartHome_controller__St_21_Nothing
} SmartHome_controller__st_21;

SmartHome_controller__st_21 SmartHome_controller__st_21_of_string(char* s);

char* string_of_SmartHome_controller__st_21(SmartHome_controller__st_21 x,
                                            char* buf);

typedef enum {
  SmartHome_controller__St_3_On,
  SmartHome_controller__St_3_Off
} SmartHome_controller__st_3;

SmartHome_controller__st_3 SmartHome_controller__st_3_of_string(char* s);

char* string_of_SmartHome_controller__st_3(SmartHome_controller__st_3 x,
                                           char* buf);

typedef enum {
  SmartHome_controller__St_4_Ouvrir,
  SmartHome_controller__St_4_Fermer
} SmartHome_controller__st_4;

SmartHome_controller__st_4 SmartHome_controller__st_4_of_string(char* s);

char* string_of_SmartHome_controller__st_4(SmartHome_controller__st_4 x,
                                           char* buf);

typedef enum {
  SmartHome_controller__St_5_Ouvrir,
  SmartHome_controller__St_5_Fermer
} SmartHome_controller__st_5;

SmartHome_controller__st_5 SmartHome_controller__st_5_of_string(char* s);

char* string_of_SmartHome_controller__st_5(SmartHome_controller__st_5 x,
                                           char* buf);

typedef enum {
  SmartHome_controller__St_6_Ouvrir,
  SmartHome_controller__St_6_Fermer
} SmartHome_controller__st_6;

SmartHome_controller__st_6 SmartHome_controller__st_6_of_string(char* s);

char* string_of_SmartHome_controller__st_6(SmartHome_controller__st_6 x,
                                           char* buf);

typedef enum {
  SmartHome_controller__St_7_Vigilence,
  SmartHome_controller__St_7_Sonner,
  SmartHome_controller__St_7_Arret,
  SmartHome_controller__St_7_Allume
} SmartHome_controller__st_7;

SmartHome_controller__st_7 SmartHome_controller__st_7_of_string(char* s);

char* string_of_SmartHome_controller__st_7(SmartHome_controller__st_7 x,
                                           char* buf);

typedef enum {
  SmartHome_controller__St_8_Stop,
  SmartHome_controller__St_8_Mouvement
} SmartHome_controller__st_8;

SmartHome_controller__st_8 SmartHome_controller__st_8_of_string(char* s);

char* string_of_SmartHome_controller__st_8(SmartHome_controller__st_8 x,
                                           char* buf);

typedef enum {
  SmartHome_controller__St_9_Stop,
  SmartHome_controller__St_9_Mouvement
} SmartHome_controller__st_9;

SmartHome_controller__st_9 SmartHome_controller__st_9_of_string(char* s);

char* string_of_SmartHome_controller__st_9(SmartHome_controller__st_9 x,
                                           char* buf);

typedef enum {
  SmartHome_controller__Arret,
  SmartHome_controller__EnMouvement
} SmartHome_controller__stat;

SmartHome_controller__stat SmartHome_controller__stat_of_string(char* s);

char* string_of_SmartHome_controller__stat(SmartHome_controller__stat x,
                                           char* buf);

#endif // SMARTHOME_CONTROLLER_TYPES_H
