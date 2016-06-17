/* --- Generated the 17/6/2016 at 14:11 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -target c lum_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lum_controller_types.h"

Lum_controller__command Lum_controller__command_of_string(char* s) {
  if ((strcmp(s, "Open")==0)) {
    return Lum_controller__Open;
  };
  if ((strcmp(s, "Close")==0)) {
    return Lum_controller__Close;
  };
  if ((strcmp(s, "SwitchOn")==0)) {
    return Lum_controller__SwitchOn;
  };
  if ((strcmp(s, "SwitchOff")==0)) {
    return Lum_controller__SwitchOff;
  };
  if ((strcmp(s, "Nothing")==0)) {
    return Lum_controller__Nothing;
  };
}

char* string_of_Lum_controller__command(Lum_controller__command x, char* buf) {
  switch (x) {
    case Lum_controller__Open:
      strcpy(buf, "Open");
      break;
    case Lum_controller__Close:
      strcpy(buf, "Close");
      break;
    case Lum_controller__SwitchOn:
      strcpy(buf, "SwitchOn");
      break;
    case Lum_controller__SwitchOff:
      strcpy(buf, "SwitchOff");
      break;
    case Lum_controller__Nothing:
      strcpy(buf, "Nothing");
      break;
    default:
      break;
  };
  return buf;
}

Lum_controller__lampState Lum_controller__lampState_of_string(char* s) {
  if ((strcmp(s, "On")==0)) {
    return Lum_controller__On;
  };
  if ((strcmp(s, "Off")==0)) {
    return Lum_controller__Off;
  };
}

char* string_of_Lum_controller__lampState(Lum_controller__lampState x,
                                          char* buf) {
  switch (x) {
    case Lum_controller__On:
      strcpy(buf, "On");
      break;
    case Lum_controller__Off:
      strcpy(buf, "Off");
      break;
    default:
      break;
  };
  return buf;
}

Lum_controller__lumValue Lum_controller__lumValue_of_string(char* s) {
  if ((strcmp(s, "Null")==0)) {
    return Lum_controller__Null;
  };
  if ((strcmp(s, "Low")==0)) {
    return Lum_controller__Low;
  };
  if ((strcmp(s, "Normal")==0)) {
    return Lum_controller__Normal;
  };
  if ((strcmp(s, "High")==0)) {
    return Lum_controller__High;
  };
}

char* string_of_Lum_controller__lumValue(Lum_controller__lumValue x,
                                         char* buf) {
  switch (x) {
    case Lum_controller__Null:
      strcpy(buf, "Null");
      break;
    case Lum_controller__Low:
      strcpy(buf, "Low");
      break;
    case Lum_controller__Normal:
      strcpy(buf, "Normal");
      break;
    case Lum_controller__High:
      strcpy(buf, "High");
      break;
    default:
      break;
  };
  return buf;
}

Lum_controller__shutterState Lum_controller__shutterState_of_string(char* s) {
  if ((strcmp(s, "Closed")==0)) {
    return Lum_controller__Closed;
  };
  if ((strcmp(s, "Opened")==0)) {
    return Lum_controller__Opened;
  };
  if ((strcmp(s, "Closing")==0)) {
    return Lum_controller__Closing;
  };
  if ((strcmp(s, "Opening")==0)) {
    return Lum_controller__Opening;
  };
}

char* string_of_Lum_controller__shutterState(Lum_controller__shutterState x,
                                             char* buf) {
  switch (x) {
    case Lum_controller__Closed:
      strcpy(buf, "Closed");
      break;
    case Lum_controller__Opened:
      strcpy(buf, "Opened");
      break;
    case Lum_controller__Closing:
      strcpy(buf, "Closing");
      break;
    case Lum_controller__Opening:
      strcpy(buf, "Opening");
      break;
    default:
      break;
  };
  return buf;
}

Lum_controller__st Lum_controller__st_of_string(char* s) {
  if ((strcmp(s, "St_Opening")==0)) {
    return Lum_controller__St_Opening;
  };
  if ((strcmp(s, "St_Opened")==0)) {
    return Lum_controller__St_Opened;
  };
  if ((strcmp(s, "St_Closing")==0)) {
    return Lum_controller__St_Closing;
  };
  if ((strcmp(s, "St_Closed")==0)) {
    return Lum_controller__St_Closed;
  };
}

char* string_of_Lum_controller__st(Lum_controller__st x, char* buf) {
  switch (x) {
    case Lum_controller__St_Opening:
      strcpy(buf, "St_Opening");
      break;
    case Lum_controller__St_Opened:
      strcpy(buf, "St_Opened");
      break;
    case Lum_controller__St_Closing:
      strcpy(buf, "St_Closing");
      break;
    case Lum_controller__St_Closed:
      strcpy(buf, "St_Closed");
      break;
    default:
      break;
  };
  return buf;
}

Lum_controller__st_1 Lum_controller__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_On")==0)) {
    return Lum_controller__St_1_On;
  };
  if ((strcmp(s, "St_1_Off")==0)) {
    return Lum_controller__St_1_Off;
  };
}

char* string_of_Lum_controller__st_1(Lum_controller__st_1 x, char* buf) {
  switch (x) {
    case Lum_controller__St_1_On:
      strcpy(buf, "St_1_On");
      break;
    case Lum_controller__St_1_Off:
      strcpy(buf, "St_1_Off");
      break;
    default:
      break;
  };
  return buf;
}

Lum_controller__st_2 Lum_controller__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_Somebody")==0)) {
    return Lum_controller__St_2_Somebody;
  };
  if ((strcmp(s, "St_2_Nobody")==0)) {
    return Lum_controller__St_2_Nobody;
  };
}

char* string_of_Lum_controller__st_2(Lum_controller__st_2 x, char* buf) {
  switch (x) {
    case Lum_controller__St_2_Somebody:
      strcpy(buf, "St_2_Somebody");
      break;
    case Lum_controller__St_2_Nobody:
      strcpy(buf, "St_2_Nobody");
      break;
    default:
      break;
  };
  return buf;
}

Lum_controller__st_3 Lum_controller__st_3_of_string(char* s) {
  if ((strcmp(s, "St_3_Somebody")==0)) {
    return Lum_controller__St_3_Somebody;
  };
  if ((strcmp(s, "St_3_Nobody")==0)) {
    return Lum_controller__St_3_Nobody;
  };
}

char* string_of_Lum_controller__st_3(Lum_controller__st_3 x, char* buf) {
  switch (x) {
    case Lum_controller__St_3_Somebody:
      strcpy(buf, "St_3_Somebody");
      break;
    case Lum_controller__St_3_Nobody:
      strcpy(buf, "St_3_Nobody");
      break;
    default:
      break;
  };
  return buf;
}

Lum_controller__st_4 Lum_controller__st_4_of_string(char* s) {
  if ((strcmp(s, "St_4_On")==0)) {
    return Lum_controller__St_4_On;
  };
  if ((strcmp(s, "St_4_Off")==0)) {
    return Lum_controller__St_4_Off;
  };
}

char* string_of_Lum_controller__st_4(Lum_controller__st_4 x, char* buf) {
  switch (x) {
    case Lum_controller__St_4_On:
      strcpy(buf, "St_4_On");
      break;
    case Lum_controller__St_4_Off:
      strcpy(buf, "St_4_Off");
      break;
    default:
      break;
  };
  return buf;
}

Lum_controller__st_5 Lum_controller__st_5_of_string(char* s) {
  if ((strcmp(s, "St_5_Opening")==0)) {
    return Lum_controller__St_5_Opening;
  };
  if ((strcmp(s, "St_5_Opened")==0)) {
    return Lum_controller__St_5_Opened;
  };
  if ((strcmp(s, "St_5_Closing")==0)) {
    return Lum_controller__St_5_Closing;
  };
  if ((strcmp(s, "St_5_Closed")==0)) {
    return Lum_controller__St_5_Closed;
  };
}

char* string_of_Lum_controller__st_5(Lum_controller__st_5 x, char* buf) {
  switch (x) {
    case Lum_controller__St_5_Opening:
      strcpy(buf, "St_5_Opening");
      break;
    case Lum_controller__St_5_Opened:
      strcpy(buf, "St_5_Opened");
      break;
    case Lum_controller__St_5_Closing:
      strcpy(buf, "St_5_Closing");
      break;
    case Lum_controller__St_5_Closed:
      strcpy(buf, "St_5_Closed");
      break;
    default:
      break;
  };
  return buf;
}

