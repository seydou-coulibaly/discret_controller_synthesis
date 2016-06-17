/* --- Generated the 17/6/2016 at 14:11 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -target c lum_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lum_controller.h"

void Lum_controller__lum_ctrlr0_step(Lum_controller__st_5 ck,
                                     Lum_controller__st_4 ck_11,
                                     Lum_controller__st_3 ck_14, int ok,
                                     Lum_controller__lumValue outdoorlum,
                                     Lum_controller__lumValue outlumbefore,
                                     int pnr, int pnr_1, int pnr_2,
                                     int presence, int stopdown, int stopup,
                                     Lum_controller__lum_ctrlr0_out* _out) {
  
  int v_19;
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
  int l15;
  int l14;
  int l13;
  int l12;
  int l11;
  int l10;
  int l9;
  int l8;
  int l7;
  int l6;
  int l5;
  int l4;
  int l3;
  int l2;
  int l1;
  int l0;
  _out->copen = true;
  v_18 = (outdoorlum==Lum_controller__Normal);
  v_19 = !(v_18);
  l0 = (v_19&&presence);
  if (stopup) {
    l1 = l0;
  } else {
    l1 = presence;
  };
  v_16 = (ck_11==Lum_controller__St_4_Off);
  v_17 = !(v_16);
  l2 = (v_17||l1);
  v_14 = (ck_11==Lum_controller__St_4_Off);
  v_15 = !(v_14);
  l3 = (v_15||l0);
  v_13 = (ck==Lum_controller__St_5_Opened);
  if (v_13) {
    l4 = l3;
  } else {
    l4 = l2;
  };
  v_11 = (ck_11==Lum_controller__St_4_Off);
  v_12 = !(v_11);
  l5 = (v_12||presence);
  v_10 = (ck==Lum_controller__St_5_Closed);
  if (v_10) {
    l6 = l5;
  } else {
    l6 = l4;
  };
  _out->con = l6;
  l7 = !(presence);
  v_9 = (outdoorlum==Lum_controller__Normal);
  l8 = (v_9||l7);
  if (stopup) {
    l9 = l8;
  } else {
    l9 = l7;
  };
  v_7 = (ck_11==Lum_controller__St_4_On);
  v_8 = !(v_7);
  l10 = (v_8||l9);
  v_5 = (ck_11==Lum_controller__St_4_On);
  v_6 = !(v_5);
  l11 = (v_6||l7);
  v_4 = (ck==Lum_controller__St_5_Closed);
  if (v_4) {
    l12 = l11;
  } else {
    l12 = l10;
  };
  v_2 = (ck_11==Lum_controller__St_4_On);
  v_3 = !(v_2);
  l13 = (v_3||l8);
  v_1 = (ck==Lum_controller__St_5_Opened);
  if (v_1) {
    l14 = l13;
  } else {
    l14 = l12;
  };
  _out->coff = l14;
  v = (ck==Lum_controller__St_5_Opened);
  l15 = !(v);
  _out->cclose = l15;;
}

