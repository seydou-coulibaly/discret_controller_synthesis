/* --- Generated the 17/6/2016 at 14:11 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -target c -target ctrln lum.ept --- */

#ifndef LUM_H
#define LUM_H

#include "lum_types.h"
#include "lum_controller.h"
typedef struct Lum__shutter_mem {
  Lum_controller__st ck;
  int pnr;
} Lum__shutter_mem;

typedef struct Lum__shutter_out {
  Lum_controller__command cmd;
  Lum_controller__lumValue shutterlum;
  Lum_controller__shutterState shutterstate;
} Lum__shutter_out;

void Lum__shutter_reset(Lum__shutter_mem* self);

void Lum__shutter_step(int copen, int cclose, int stopdown, int stopup,
                       Lum_controller__lumValue outdoorlum,
                       Lum__shutter_out* _out, Lum__shutter_mem* self);

typedef struct Lum__lamp_mem {
  Lum_controller__st_1 ck;
  int pnr;
} Lum__lamp_mem;

typedef struct Lum__lamp_out {
  Lum_controller__command cmd;
  Lum_controller__lumValue lumlamp;
  Lum_controller__lampState lampstate;
} Lum__lamp_out;

void Lum__lamp_reset(Lum__lamp_mem* self);

void Lum__lamp_step(int c1, int c2, Lum__lamp_out* _out, Lum__lamp_mem* self);

typedef struct Lum__room_mem {
  Lum_controller__st_2 ck;
  int pnr;
} Lum__room_mem;

typedef struct Lum__room_out {
  int occupied;
} Lum__room_out;

void Lum__room_reset(Lum__room_mem* self);

void Lum__room_step(int presence, Lum__room_out* _out, Lum__room_mem* self);

typedef struct Lum__lum_mem {
  Lum_controller__st_5 ck;
  Lum_controller__st_4 ck_11;
  Lum_controller__st_3 ck_14;
  int pnr_2;
  int pnr_1;
  int pnr;
  Lum_controller__lumValue outlumbefore;
} Lum__lum_mem;

typedef struct Lum__lum_out {
  Lum_controller__command cmdShutter;
  Lum_controller__command cmdLamp;
  Lum_controller__shutterState shutterstate;
  Lum_controller__lampState lampstate;
  int property;
} Lum__lum_out;

void Lum__lum_reset(Lum__lum_mem* self);

void Lum__lum_step(int presence, int stopdown, int stopup,
                   Lum_controller__lumValue outdoorlum, Lum__lum_out* _out,
                   Lum__lum_mem* self);

#endif // LUM_H
