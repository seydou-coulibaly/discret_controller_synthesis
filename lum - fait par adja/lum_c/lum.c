/* --- Generated the 17/6/2016 at 14:11 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -target c -target ctrln lum.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lum.h"

void Lum__shutter_reset(Lum__shutter_mem* self) {
  self->ck = Lum_controller__St_Closed;
  self->pnr = false;
}

void Lum__shutter_step(int copen, int cclose, int stopdown, int stopup,
                       Lum_controller__lumValue outdoorlum,
                       Lum__shutter_out* _out, Lum__shutter_mem* self) {
  
  Lum_controller__lumValue shutterlum_St_Closing_false;
  Lum_controller__lumValue shutterlum_St_Closing_true;
  int ck_4;
  Lum_controller__command cmd_St_Opened_false;
  Lum_controller__command cmd_St_Opened_true;
  int ck_3;
  Lum_controller__lumValue shutterlum_St_Opening_false;
  Lum_controller__lumValue shutterlum_St_Opening_true;
  int ck_2;
  Lum_controller__command cmd_St_Closed_false;
  Lum_controller__command cmd_St_Closed_true;
  int ck_1;
  int nr_St_Closing;
  Lum_controller__st ns_St_Closing;
  Lum_controller__shutterState shutterstate_St_Closing;
  Lum_controller__lumValue shutterlum_St_Closing;
  Lum_controller__command cmd_St_Closing;
  int nr_St_Opened;
  Lum_controller__st ns_St_Opened;
  Lum_controller__shutterState shutterstate_St_Opened;
  Lum_controller__lumValue shutterlum_St_Opened;
  Lum_controller__command cmd_St_Opened;
  int nr_St_Opening;
  Lum_controller__st ns_St_Opening;
  Lum_controller__shutterState shutterstate_St_Opening;
  Lum_controller__lumValue shutterlum_St_Opening;
  Lum_controller__command cmd_St_Opening;
  int nr_St_Closed;
  Lum_controller__st ns_St_Closed;
  Lum_controller__shutterState shutterstate_St_Closed;
  Lum_controller__lumValue shutterlum_St_Closed;
  Lum_controller__command cmd_St_Closed;
  Lum_controller__st ns;
  int r;
  int nr;
  r = self->pnr;
  switch (self->ck) {
    case Lum_controller__St_Closing:
      if (stopdown) {
        ns_St_Closing = Lum_controller__St_Closed;
        nr_St_Closing = true;
      } else {
        ns_St_Closing = Lum_controller__St_Closing;
        nr_St_Closing = false;
      };
      shutterstate_St_Closing = Lum_controller__Closing;
      ck_4 = (outdoorlum==Lum_controller__Null);
      cmd_St_Closing = Lum_controller__Nothing;
      ns = ns_St_Closing;
      nr = nr_St_Closing;
      _out->shutterstate = shutterstate_St_Closing;
      if (ck_4) {
        shutterlum_St_Closing_true = Lum_controller__Null;
        shutterlum_St_Closing = shutterlum_St_Closing_true;
      } else {
        shutterlum_St_Closing_false = Lum_controller__Low;
        shutterlum_St_Closing = shutterlum_St_Closing_false;
      };
      _out->shutterlum = shutterlum_St_Closing;
      _out->cmd = cmd_St_Closing;
      break;
    case Lum_controller__St_Opened:
      if (cclose) {
        ns_St_Opened = Lum_controller__St_Closing;
        nr_St_Opened = true;
      } else {
        ns_St_Opened = Lum_controller__St_Opened;
        nr_St_Opened = false;
      };
      shutterstate_St_Opened = Lum_controller__Opened;
      shutterlum_St_Opened = outdoorlum;
      ck_3 = cclose;
      ns = ns_St_Opened;
      nr = nr_St_Opened;
      _out->shutterstate = shutterstate_St_Opened;
      if (ck_3) {
        cmd_St_Opened_true = Lum_controller__Close;
        cmd_St_Opened = cmd_St_Opened_true;
      } else {
        cmd_St_Opened_false = Lum_controller__Nothing;
        cmd_St_Opened = cmd_St_Opened_false;
      };
      _out->shutterlum = shutterlum_St_Opened;
      _out->cmd = cmd_St_Opened;
      break;
    case Lum_controller__St_Opening:
      if (stopup) {
        ns_St_Opening = Lum_controller__St_Opened;
        nr_St_Opening = true;
      } else {
        ns_St_Opening = Lum_controller__St_Opening;
        nr_St_Opening = false;
      };
      shutterstate_St_Opening = Lum_controller__Opening;
      ck_2 = (outdoorlum==Lum_controller__Null);
      cmd_St_Opening = Lum_controller__Nothing;
      ns = ns_St_Opening;
      nr = nr_St_Opening;
      _out->shutterstate = shutterstate_St_Opening;
      if (ck_2) {
        shutterlum_St_Opening_true = Lum_controller__Null;
        shutterlum_St_Opening = shutterlum_St_Opening_true;
      } else {
        shutterlum_St_Opening_false = Lum_controller__Low;
        shutterlum_St_Opening = shutterlum_St_Opening_false;
      };
      _out->shutterlum = shutterlum_St_Opening;
      _out->cmd = cmd_St_Opening;
      break;
    case Lum_controller__St_Closed:
      if (copen) {
        ns_St_Closed = Lum_controller__St_Opening;
      } else {
        ns_St_Closed = Lum_controller__St_Closed;
      };
      ns = ns_St_Closed;
      if (copen) {
        nr_St_Closed = true;
      } else {
        nr_St_Closed = false;
      };
      nr = nr_St_Closed;
      shutterstate_St_Closed = Lum_controller__Closed;
      _out->shutterstate = shutterstate_St_Closed;
      shutterlum_St_Closed = Lum_controller__Null;
      ck_1 = copen;
      _out->shutterlum = shutterlum_St_Closed;
      if (ck_1) {
        cmd_St_Closed_true = Lum_controller__Open;
        cmd_St_Closed = cmd_St_Closed_true;
      } else {
        cmd_St_Closed_false = Lum_controller__Nothing;
        cmd_St_Closed = cmd_St_Closed_false;
      };
      _out->cmd = cmd_St_Closed;
      break;
    default:
      break;
  };
  self->ck = ns;
  self->pnr = nr;;
}

void Lum__lamp_reset(Lum__lamp_mem* self) {
  self->ck = Lum_controller__St_1_Off;
  self->pnr = false;
}

void Lum__lamp_step(int c1, int c2, Lum__lamp_out* _out, Lum__lamp_mem* self) {
  
  Lum_controller__command cmd_St_1_On_false;
  Lum_controller__command cmd_St_1_On_true;
  int ck_6;
  Lum_controller__command cmd_St_1_Off_false;
  Lum_controller__command cmd_St_1_Off_true;
  int ck_5;
  int nr_St_1_On;
  Lum_controller__st_1 ns_St_1_On;
  Lum_controller__lampState lampstate_St_1_On;
  Lum_controller__lumValue lumlamp_St_1_On;
  Lum_controller__command cmd_St_1_On;
  int nr_St_1_Off;
  Lum_controller__st_1 ns_St_1_Off;
  Lum_controller__lampState lampstate_St_1_Off;
  Lum_controller__lumValue lumlamp_St_1_Off;
  Lum_controller__command cmd_St_1_Off;
  Lum_controller__st_1 ns;
  int r;
  int nr;
  r = self->pnr;
  switch (self->ck) {
    case Lum_controller__St_1_On:
      if (c2) {
        ns_St_1_On = Lum_controller__St_1_Off;
        nr_St_1_On = true;
      } else {
        ns_St_1_On = Lum_controller__St_1_On;
        nr_St_1_On = false;
      };
      lampstate_St_1_On = Lum_controller__On;
      lumlamp_St_1_On = Lum_controller__Normal;
      ck_6 = c2;
      ns = ns_St_1_On;
      nr = nr_St_1_On;
      _out->lampstate = lampstate_St_1_On;
      _out->lumlamp = lumlamp_St_1_On;
      if (ck_6) {
        cmd_St_1_On_true = Lum_controller__SwitchOff;
        cmd_St_1_On = cmd_St_1_On_true;
      } else {
        cmd_St_1_On_false = Lum_controller__Nothing;
        cmd_St_1_On = cmd_St_1_On_false;
      };
      _out->cmd = cmd_St_1_On;
      break;
    case Lum_controller__St_1_Off:
      if (c1) {
        ns_St_1_Off = Lum_controller__St_1_On;
      } else {
        ns_St_1_Off = Lum_controller__St_1_Off;
      };
      ns = ns_St_1_Off;
      if (c1) {
        nr_St_1_Off = true;
      } else {
        nr_St_1_Off = false;
      };
      nr = nr_St_1_Off;
      lampstate_St_1_Off = Lum_controller__Off;
      _out->lampstate = lampstate_St_1_Off;
      lumlamp_St_1_Off = Lum_controller__Null;
      _out->lumlamp = lumlamp_St_1_Off;
      ck_5 = c1;
      if (ck_5) {
        cmd_St_1_Off_true = Lum_controller__SwitchOn;
        cmd_St_1_Off = cmd_St_1_Off_true;
      } else {
        cmd_St_1_Off_false = Lum_controller__Nothing;
        cmd_St_1_Off = cmd_St_1_Off_false;
      };
      _out->cmd = cmd_St_1_Off;
      break;
    default:
      break;
  };
  self->ck = ns;
  self->pnr = nr;;
}

void Lum__room_reset(Lum__room_mem* self) {
  self->ck = Lum_controller__St_2_Nobody;
  self->pnr = false;
}

void Lum__room_step(int presence, Lum__room_out* _out, Lum__room_mem* self) {
  
  int v;
  int nr_St_2_Somebody;
  Lum_controller__st_2 ns_St_2_Somebody;
  int occupied_St_2_Somebody;
  int nr_St_2_Nobody;
  Lum_controller__st_2 ns_St_2_Nobody;
  int occupied_St_2_Nobody;
  Lum_controller__st_2 ns;
  int r;
  int nr;
  r = self->pnr;
  switch (self->ck) {
    case Lum_controller__St_2_Somebody:
      v = !(presence);
      if (v) {
        ns_St_2_Somebody = Lum_controller__St_2_Nobody;
        nr_St_2_Somebody = true;
      } else {
        ns_St_2_Somebody = Lum_controller__St_2_Somebody;
        nr_St_2_Somebody = false;
      };
      occupied_St_2_Somebody = true;
      ns = ns_St_2_Somebody;
      nr = nr_St_2_Somebody;
      _out->occupied = occupied_St_2_Somebody;
      break;
    case Lum_controller__St_2_Nobody:
      if (presence) {
        ns_St_2_Nobody = Lum_controller__St_2_Somebody;
      } else {
        ns_St_2_Nobody = Lum_controller__St_2_Nobody;
      };
      ns = ns_St_2_Nobody;
      if (presence) {
        nr_St_2_Nobody = true;
      } else {
        nr_St_2_Nobody = false;
      };
      nr = nr_St_2_Nobody;
      occupied_St_2_Nobody = false;
      _out->occupied = occupied_St_2_Nobody;
      break;
    default:
      break;
  };
  self->ck = ns;
  self->pnr = nr;;
}

void Lum__lum_reset(Lum__lum_mem* self) {
  self->outlumbefore = Lum_controller__Null;
  self->ck = Lum_controller__St_5_Closed;
  self->pnr_2 = false;
  self->ck_11 = Lum_controller__St_4_Off;
  self->pnr_1 = false;
  self->ck_14 = Lum_controller__St_3_Nobody;
  self->pnr = false;
}

void Lum__lum_step(int presence, int stopdown, int stopup,
                   Lum_controller__lumValue outdoorlum, Lum__lum_out* _out,
                   Lum__lum_mem* self) {
  Lum_controller__lum_ctrlr0_out Lum_controller__lum_ctrlr0_out_st;
  
  int copen;
  int con;
  int coff;
  int cclose;
  int ok;
  Lum_controller__lumValue shutterlum_1_St_5_Closing_false;
  Lum_controller__lumValue shutterlum_1_St_5_Closing_true;
  int ck_10;
  Lum_controller__command cmd_St_5_Opened_false;
  Lum_controller__command cmd_St_5_Opened_true;
  int ck_9;
  Lum_controller__lumValue shutterlum_1_St_5_Opening_false;
  Lum_controller__lumValue shutterlum_1_St_5_Opening_true;
  int ck_8;
  Lum_controller__command cmd_St_5_Closed_false;
  Lum_controller__command cmd_St_5_Closed_true;
  int ck_7;
  int nr_2_St_5_Closing;
  Lum_controller__st_5 ns_2_St_5_Closing;
  Lum_controller__shutterState shutterstate_1_St_5_Closing;
  Lum_controller__lumValue shutterlum_1_St_5_Closing;
  Lum_controller__command cmd_St_5_Closing;
  int nr_2_St_5_Opened;
  Lum_controller__st_5 ns_2_St_5_Opened;
  Lum_controller__shutterState shutterstate_1_St_5_Opened;
  Lum_controller__lumValue shutterlum_1_St_5_Opened;
  Lum_controller__command cmd_St_5_Opened;
  int nr_2_St_5_Opening;
  Lum_controller__st_5 ns_2_St_5_Opening;
  Lum_controller__shutterState shutterstate_1_St_5_Opening;
  Lum_controller__lumValue shutterlum_1_St_5_Opening;
  Lum_controller__command cmd_St_5_Opening;
  int nr_2_St_5_Closed;
  Lum_controller__st_5 ns_2_St_5_Closed;
  Lum_controller__shutterState shutterstate_1_St_5_Closed;
  Lum_controller__lumValue shutterlum_1_St_5_Closed;
  Lum_controller__command cmd_St_5_Closed;
  Lum_controller__command cmd_1_St_4_On_false;
  Lum_controller__command cmd_1_St_4_On_true;
  int ck_13;
  Lum_controller__command cmd_1_St_4_Off_false;
  Lum_controller__command cmd_1_St_4_Off_true;
  int ck_12;
  int nr_1_St_4_On;
  Lum_controller__st_4 ns_1_St_4_On;
  Lum_controller__lampState lampstate_1_St_4_On;
  Lum_controller__lumValue lumlamp_St_4_On;
  Lum_controller__command cmd_1_St_4_On;
  int nr_1_St_4_Off;
  Lum_controller__st_4 ns_1_St_4_Off;
  Lum_controller__lampState lampstate_1_St_4_Off;
  Lum_controller__lumValue lumlamp_St_4_Off;
  Lum_controller__command cmd_1_St_4_Off;
  int v_19;
  int nr_St_3_Somebody;
  Lum_controller__st_3 ns_St_3_Somebody;
  int occupied_1_St_3_Somebody;
  int nr_St_3_Nobody;
  Lum_controller__st_3 ns_St_3_Nobody;
  int occupied_1_St_3_Nobody;
  int v_18;
  int v_17;
  int v_16;
  int v_15;
  int v_14;
  int v_13;
  int v_12;
  int v_11;
  int v_10;
  int v_9;
  int v_8;
  int v_7;
  int v_6;
  int v_5;
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int v;
  Lum_controller__st_5 ns_2;
  int r_2;
  int nr_2;
  Lum_controller__st_4 ns_1;
  int r_1;
  int nr_1;
  Lum_controller__st_3 ns;
  int r;
  int nr;
  int presence_1;
  int occupied_1;
  int c1;
  int c2;
  Lum_controller__command cmd_1;
  Lum_controller__lumValue lumlamp;
  Lum_controller__lampState lampstate_1;
  int copen_1;
  int cclose_1;
  int stopdown_1;
  int stopup_1;
  Lum_controller__lumValue outdoorlum_1;
  Lum_controller__command cmd;
  Lum_controller__lumValue shutterlum_1;
  Lum_controller__shutterState shutterstate_1;
  int occupied;
  Lum_controller__lumValue shutterlum;
  Lum_controller__lumValue lamplum;
  Lum_controller__shutterState shutter_state;
  Lum_controller__lampState lamp_state;
  int prop1;
  int prop2;
  int prop3;
  int prop4;
  int prop5;
  v_10 = (self->outlumbefore==Lum_controller__Normal);
  r_2 = self->pnr_2;
  outdoorlum_1 = self->outlumbefore;
  stopup_1 = stopup;
  stopdown_1 = stopdown;
  r_1 = self->pnr_1;
  r = self->pnr;
  presence_1 = presence;
  switch (self->ck) {
    case Lum_controller__St_5_Closing:
      if (stopdown_1) {
        ns_2_St_5_Closing = Lum_controller__St_5_Closed;
        nr_2_St_5_Closing = true;
      } else {
        ns_2_St_5_Closing = Lum_controller__St_5_Closing;
        nr_2_St_5_Closing = false;
      };
      shutterstate_1_St_5_Closing = Lum_controller__Closing;
      ck_10 = (outdoorlum_1==Lum_controller__Null);
      cmd_St_5_Closing = Lum_controller__Nothing;
      shutterstate_1 = shutterstate_1_St_5_Closing;
      break;
    case Lum_controller__St_5_Opened:
      shutterstate_1_St_5_Opened = Lum_controller__Opened;
      shutterlum_1_St_5_Opened = outdoorlum_1;
      shutterstate_1 = shutterstate_1_St_5_Opened;
      break;
    case Lum_controller__St_5_Opening:
      if (stopup_1) {
        ns_2_St_5_Opening = Lum_controller__St_5_Opened;
        nr_2_St_5_Opening = true;
      } else {
        ns_2_St_5_Opening = Lum_controller__St_5_Opening;
        nr_2_St_5_Opening = false;
      };
      shutterstate_1_St_5_Opening = Lum_controller__Opening;
      ck_8 = (outdoorlum_1==Lum_controller__Null);
      cmd_St_5_Opening = Lum_controller__Nothing;
      shutterstate_1 = shutterstate_1_St_5_Opening;
      break;
    case Lum_controller__St_5_Closed:
      shutterstate_1_St_5_Closed = Lum_controller__Closed;
      shutterstate_1 = shutterstate_1_St_5_Closed;
      shutterlum_1_St_5_Closed = Lum_controller__Null;
      break;
    default:
      break;
  };
  shutter_state = shutterstate_1;
  v_5 = (shutter_state==Lum_controller__Closing);
  v_13 = (shutter_state==Lum_controller__Closed);
  v_14 = !(v_13);
  _out->shutterstate = shutter_state;
  switch (self->ck) {
    case Lum_controller__St_5_Closing:
      if (ck_10) {
        shutterlum_1_St_5_Closing_true = Lum_controller__Null;
        shutterlum_1_St_5_Closing = shutterlum_1_St_5_Closing_true;
      } else {
        shutterlum_1_St_5_Closing_false = Lum_controller__Low;
        shutterlum_1_St_5_Closing = shutterlum_1_St_5_Closing_false;
      };
      shutterlum_1 = shutterlum_1_St_5_Closing;
      break;
    case Lum_controller__St_5_Opening:
      if (ck_8) {
        shutterlum_1_St_5_Opening_true = Lum_controller__Null;
        shutterlum_1_St_5_Opening = shutterlum_1_St_5_Opening_true;
      } else {
        shutterlum_1_St_5_Opening_false = Lum_controller__Low;
        shutterlum_1_St_5_Opening = shutterlum_1_St_5_Opening_false;
      };
      shutterlum_1 = shutterlum_1_St_5_Opening;
      break;
    case Lum_controller__St_5_Opened:
      shutterlum_1 = shutterlum_1_St_5_Opened;
      break;
    case Lum_controller__St_5_Closed:
      shutterlum_1 = shutterlum_1_St_5_Closed;
      break;
    default:
      break;
  };
  shutterlum = shutterlum_1;
  v_2 = (shutterlum==Lum_controller__High);
  v_7 = (shutterlum==Lum_controller__Normal);
  v_8 = !(v_7);
  v_16 = (shutterlum==Lum_controller__Normal);
  switch (self->ck_11) {
    case Lum_controller__St_4_On:
      lampstate_1_St_4_On = Lum_controller__On;
      lumlamp_St_4_On = Lum_controller__Normal;
      lampstate_1 = lampstate_1_St_4_On;
      lumlamp = lumlamp_St_4_On;
      break;
    case Lum_controller__St_4_Off:
      lampstate_1_St_4_Off = Lum_controller__Off;
      lampstate_1 = lampstate_1_St_4_Off;
      lumlamp_St_4_Off = Lum_controller__Null;
      lumlamp = lumlamp_St_4_Off;
      break;
    default:
      break;
  };
  lamplum = lumlamp;
  v_17 = (lamplum==Lum_controller__Normal);
  v_18 = (v_16||v_17);
  lamp_state = lampstate_1;
  v_6 = (lamp_state==Lum_controller__Off);
  v_9 = (lamp_state==Lum_controller__Off);
  prop3 = (v_8||v_9);
  _out->lampstate = lamp_state;
  switch (self->ck_14) {
    case Lum_controller__St_3_Somebody:
      v_19 = !(presence_1);
      if (v_19) {
        ns_St_3_Somebody = Lum_controller__St_3_Nobody;
        nr_St_3_Somebody = true;
      } else {
        ns_St_3_Somebody = Lum_controller__St_3_Somebody;
        nr_St_3_Somebody = false;
      };
      occupied_1_St_3_Somebody = true;
      ns = ns_St_3_Somebody;
      nr = nr_St_3_Somebody;
      occupied_1 = occupied_1_St_3_Somebody;
      break;
    case Lum_controller__St_3_Nobody:
      if (presence_1) {
        ns_St_3_Nobody = Lum_controller__St_3_Somebody;
      } else {
        ns_St_3_Nobody = Lum_controller__St_3_Nobody;
      };
      ns = ns_St_3_Nobody;
      if (presence_1) {
        nr_St_3_Nobody = true;
      } else {
        nr_St_3_Nobody = false;
      };
      nr = nr_St_3_Nobody;
      occupied_1_St_3_Nobody = false;
      occupied_1 = occupied_1_St_3_Nobody;
      break;
    default:
      break;
  };
  occupied = occupied_1;
  v_3 = (occupied&&v_2);
  v_4 = !(v_3);
  prop5 = (v_4||v_5);
  prop4 = (occupied||v_6);
  v_11 = (occupied&&v_10);
  v_12 = !(v_11);
  prop2 = (v_12||v_14);
  v_15 = !(occupied);
  prop1 = (v_15||v_18);
  v = (prop1&&prop2);
  v_1 = (v&&prop3);
  _out->property = (v_1&&prop4);
  Lum_controller__lum_ctrlr0_step(self->ck, self->ck_11, self->ck_14, ok,
                                  outdoorlum, self->outlumbefore, self->pnr,
                                  self->pnr_1, self->pnr_2, presence,
                                  stopdown, stopup,
                                  &Lum_controller__lum_ctrlr0_out_st);
  cclose = Lum_controller__lum_ctrlr0_out_st.cclose;
  coff = Lum_controller__lum_ctrlr0_out_st.coff;
  con = Lum_controller__lum_ctrlr0_out_st.con;
  copen = Lum_controller__lum_ctrlr0_out_st.copen;
  cclose_1 = cclose;
  copen_1 = copen;
  c2 = coff;
  c1 = con;
  switch (self->ck) {
    case Lum_controller__St_5_Opened:
      if (cclose_1) {
        ns_2_St_5_Opened = Lum_controller__St_5_Closing;
        nr_2_St_5_Opened = true;
      } else {
        ns_2_St_5_Opened = Lum_controller__St_5_Opened;
        nr_2_St_5_Opened = false;
      };
      ck_9 = cclose_1;
      ns_2 = ns_2_St_5_Opened;
      nr_2 = nr_2_St_5_Opened;
      if (ck_9) {
        cmd_St_5_Opened_true = Lum_controller__Close;
        cmd_St_5_Opened = cmd_St_5_Opened_true;
      } else {
        cmd_St_5_Opened_false = Lum_controller__Nothing;
        cmd_St_5_Opened = cmd_St_5_Opened_false;
      };
      cmd = cmd_St_5_Opened;
      break;
    case Lum_controller__St_5_Closed:
      if (copen_1) {
        ns_2_St_5_Closed = Lum_controller__St_5_Opening;
      } else {
        ns_2_St_5_Closed = Lum_controller__St_5_Closed;
      };
      ns_2 = ns_2_St_5_Closed;
      if (copen_1) {
        nr_2_St_5_Closed = true;
      } else {
        nr_2_St_5_Closed = false;
      };
      nr_2 = nr_2_St_5_Closed;
      ck_7 = copen_1;
      if (ck_7) {
        cmd_St_5_Closed_true = Lum_controller__Open;
        cmd_St_5_Closed = cmd_St_5_Closed_true;
      } else {
        cmd_St_5_Closed_false = Lum_controller__Nothing;
        cmd_St_5_Closed = cmd_St_5_Closed_false;
      };
      cmd = cmd_St_5_Closed;
      break;
    case Lum_controller__St_5_Closing:
      ns_2 = ns_2_St_5_Closing;
      nr_2 = nr_2_St_5_Closing;
      cmd = cmd_St_5_Closing;
      break;
    case Lum_controller__St_5_Opening:
      ns_2 = ns_2_St_5_Opening;
      nr_2 = nr_2_St_5_Opening;
      cmd = cmd_St_5_Opening;
      break;
    default:
      break;
  };
  _out->cmdShutter = cmd;
  switch (self->ck_11) {
    case Lum_controller__St_4_On:
      if (c2) {
        ns_1_St_4_On = Lum_controller__St_4_Off;
        nr_1_St_4_On = true;
      } else {
        ns_1_St_4_On = Lum_controller__St_4_On;
        nr_1_St_4_On = false;
      };
      ck_13 = c2;
      ns_1 = ns_1_St_4_On;
      nr_1 = nr_1_St_4_On;
      if (ck_13) {
        cmd_1_St_4_On_true = Lum_controller__SwitchOff;
        cmd_1_St_4_On = cmd_1_St_4_On_true;
      } else {
        cmd_1_St_4_On_false = Lum_controller__Nothing;
        cmd_1_St_4_On = cmd_1_St_4_On_false;
      };
      cmd_1 = cmd_1_St_4_On;
      break;
    case Lum_controller__St_4_Off:
      if (c1) {
        ns_1_St_4_Off = Lum_controller__St_4_On;
      } else {
        ns_1_St_4_Off = Lum_controller__St_4_Off;
      };
      ns_1 = ns_1_St_4_Off;
      if (c1) {
        nr_1_St_4_Off = true;
      } else {
        nr_1_St_4_Off = false;
      };
      nr_1 = nr_1_St_4_Off;
      ck_12 = c1;
      if (ck_12) {
        cmd_1_St_4_Off_true = Lum_controller__SwitchOn;
        cmd_1_St_4_Off = cmd_1_St_4_Off_true;
      } else {
        cmd_1_St_4_Off_false = Lum_controller__Nothing;
        cmd_1_St_4_Off = cmd_1_St_4_Off_false;
      };
      cmd_1 = cmd_1_St_4_Off;
      break;
    default:
      break;
  };
  _out->cmdLamp = cmd_1;
  self->outlumbefore = outdoorlum;
  self->ck = ns_2;
  self->pnr_2 = nr_2;
  self->ck_11 = ns_1;
  self->pnr_1 = nr_1;
  self->ck_14 = ns;
  self->pnr = nr;;
}

