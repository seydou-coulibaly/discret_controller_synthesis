/* --- Generated the 11/2/2016 at 15:28 --- */
/* --- heptagon compiler, version 1.00.06 (compiled tue. feb. 10 16:39:51 CET 2015) --- */
/* --- Command line: heptc -target ctrln -target c twomodes.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "twomodes.h"

void Twomodes__twomodes_reset(Twomodes__twomodes_mem* self) {
  self->ck = Twomodes_controller__St_Up;
  self->pnr = false;
  self->x_1 = 0;
}

void Twomodes__twomodes_step(int v, int d, Twomodes__twomodes_out* _out,
                             Twomodes__twomodes_mem* self) {
  Twomodes_controller__twomodes_ctrlr0_out Twomodes_controller__twomodes_ctrlr0_out_st;
  
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int c;
  int ok;
  int v_5;
  int v_6;
  int nr_St_Down;
  Twomodes_controller__st ns_St_Down;
  int x_St_Down;
  int b_St_Down;
  int nr_St_Up;
  Twomodes_controller__st ns_St_Up;
  int x_St_Up;
  int b_St_Up;
  Twomodes_controller__st ns;
  int r;
  int nr;
  int x;
  r = self->pnr;
  switch (self->ck) {
    case Twomodes_controller__St_Down:
      b_St_Down = false;
      x_St_Down = (self->x_1-v);
      _out->b = b_St_Down;
      x = x_St_Down;
      break;
    case Twomodes_controller__St_Up:
      b_St_Up = true;
      _out->b = b_St_Up;
      x_St_Up = (self->x_1+v);
      x = x_St_Up;
      break;
  };
  _out->y = x;
  Twomodes_controller__twomodes_ctrlr0_step(self->ck, d, ok, self->pnr, v,
                                            self->x_1,
                                            &Twomodes_controller__twomodes_ctrlr0_out_st);
  c = Twomodes_controller__twomodes_ctrlr0_out_st.c;
  switch (self->ck) {
    case Twomodes_controller__St_Down:
      v_5 = !(c);
      if (v_5) {
        ns_St_Down = Twomodes_controller__St_Up;
        nr_St_Down = true;
      } else {
        ns_St_Down = Twomodes_controller__St_Down;
        nr_St_Down = false;
      };
      ns = ns_St_Down;
      nr = nr_St_Down;
      break;
    case Twomodes_controller__St_Up:
      v_6 = (c&&d);
      if (v_6) {
        ns_St_Up = Twomodes_controller__St_Down;
      } else {
        ns_St_Up = Twomodes_controller__St_Up;
      };
      ns = ns_St_Up;
      if (v_6) {
        nr_St_Up = true;
      } else {
        nr_St_Up = false;
      };
      nr = nr_St_Up;
      break;
  };
  self->ck = ns;
  self->pnr = nr;
  self->x_1 = x;
  v_1 = (v<=1);
  v_2 = (v>=0);
  v_3 = (v_1&&v_2);
  v_4 = (_out->y>=0);;
}

