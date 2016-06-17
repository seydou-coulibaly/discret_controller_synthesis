/* --- Generated the 17/6/2016 at 14:11 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -target c lum_controller.ept --- */

#ifndef LUM_CONTROLLER_TYPES_H
#define LUM_CONTROLLER_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
typedef enum {
  Lum_controller__Open,
  Lum_controller__Close,
  Lum_controller__SwitchOn,
  Lum_controller__SwitchOff,
  Lum_controller__Nothing
} Lum_controller__command;

Lum_controller__command Lum_controller__command_of_string(char* s);

char* string_of_Lum_controller__command(Lum_controller__command x, char* buf);

typedef enum {
  Lum_controller__On,
  Lum_controller__Off
} Lum_controller__lampState;

Lum_controller__lampState Lum_controller__lampState_of_string(char* s);

char* string_of_Lum_controller__lampState(Lum_controller__lampState x,
                                          char* buf);

typedef enum {
  Lum_controller__Null,
  Lum_controller__Low,
  Lum_controller__Normal,
  Lum_controller__High
} Lum_controller__lumValue;

Lum_controller__lumValue Lum_controller__lumValue_of_string(char* s);

char* string_of_Lum_controller__lumValue(Lum_controller__lumValue x,
                                         char* buf);

typedef enum {
  Lum_controller__Closed,
  Lum_controller__Opened,
  Lum_controller__Closing,
  Lum_controller__Opening
} Lum_controller__shutterState;

Lum_controller__shutterState Lum_controller__shutterState_of_string(char* s);

char* string_of_Lum_controller__shutterState(Lum_controller__shutterState x,
                                             char* buf);

typedef enum {
  Lum_controller__St_Opening,
  Lum_controller__St_Opened,
  Lum_controller__St_Closing,
  Lum_controller__St_Closed
} Lum_controller__st;

Lum_controller__st Lum_controller__st_of_string(char* s);

char* string_of_Lum_controller__st(Lum_controller__st x, char* buf);

typedef enum {
  Lum_controller__St_1_On,
  Lum_controller__St_1_Off
} Lum_controller__st_1;

Lum_controller__st_1 Lum_controller__st_1_of_string(char* s);

char* string_of_Lum_controller__st_1(Lum_controller__st_1 x, char* buf);

typedef enum {
  Lum_controller__St_2_Somebody,
  Lum_controller__St_2_Nobody
} Lum_controller__st_2;

Lum_controller__st_2 Lum_controller__st_2_of_string(char* s);

char* string_of_Lum_controller__st_2(Lum_controller__st_2 x, char* buf);

typedef enum {
  Lum_controller__St_3_Somebody,
  Lum_controller__St_3_Nobody
} Lum_controller__st_3;

Lum_controller__st_3 Lum_controller__st_3_of_string(char* s);

char* string_of_Lum_controller__st_3(Lum_controller__st_3 x, char* buf);

typedef enum {
  Lum_controller__St_4_On,
  Lum_controller__St_4_Off
} Lum_controller__st_4;

Lum_controller__st_4 Lum_controller__st_4_of_string(char* s);

char* string_of_Lum_controller__st_4(Lum_controller__st_4 x, char* buf);

typedef enum {
  Lum_controller__St_5_Opening,
  Lum_controller__St_5_Opened,
  Lum_controller__St_5_Closing,
  Lum_controller__St_5_Closed
} Lum_controller__st_5;

Lum_controller__st_5 Lum_controller__st_5_of_string(char* s);

char* string_of_Lum_controller__st_5(Lum_controller__st_5 x, char* buf);

#endif // LUM_CONTROLLER_TYPES_H
