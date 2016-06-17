/* --- Generated the 17/6/2016 at 14:9 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -target c train_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "train_controller.h"

void Train_controller__train_ctrlr0_step(Train_controller__st_14 ck,
                                         Train_controller__st_10 ck_11,
                                         Train_controller__st_9 ck_13,
                                         Train_controller__st_8 ck_15,
                                         Train_controller__st_7 ck_17,
                                         Train_controller__st_6 ck_19,
                                         Train_controller__st_5 ck_21,
                                         Train_controller__st_4 ck_23,
                                         Train_controller__st_3 ck_25,
                                         Train_controller__st_13 ck_5,
                                         Train_controller__st_12 ck_7,
                                         Train_controller__st_11 ck_9,
                                         int ok, int pnr, int pnr_1,
                                         int pnr_10, int pnr_11, int pnr_2,
                                         int pnr_3, int pnr_4, int pnr_5,
                                         int pnr_6, int pnr_7, int pnr_8,
                                         int pnr_9, int presenceAiguillage1,
                                         int presenceAiguillage2,
                                         int presenceGare1,
                                         int presenceGare2,
                                         int presenceSection1,
                                         int presenceSection2,
                                         Train_controller__train_ctrlr0_out* _out) {
  
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int v;
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
  _out->demandeActionnerAig1Haut = true;
  _out->demandeActionnerAig2Bas = true;
  l0 = (ck_23==Train_controller__St_4_PresenceNiveau);
  l1 = (ck_23==Train_controller__St_4_NiveauVide);
  if (presenceGare2) {
    l2 = l1;
  } else {
    l2 = l0;
  };
  v_4 = (ck_17==Train_controller__St_7_PresenceNiveau);
  l3 = (v_4&&l2);
  v_2 = (ck_17==Train_controller__St_7_PresenceNiveau);
  v_3 = !(v_2);
  l4 = (v_3&&l2);
  if (presenceAiguillage1) {
    l5 = l4;
  } else {
    l5 = l3;
  };
  v_1 = (ck==Train_controller__St_14_Bas);
  l6 = (v_1||l5);
  _out->demandeActionnerAig1Bas = l6;
  l7 = (ck_19==Train_controller__St_6_PresenceNiveau);
  l8 = (ck_19==Train_controller__St_6_NiveauVide);
  if (presenceAiguillage2) {
    l9 = l8;
  } else {
    l9 = l7;
  };
  v = (ck_5==Train_controller__St_13_Haut);
  l10 = (v||l9);
  _out->demandeActionnerAig2Haut = l10;;
}

