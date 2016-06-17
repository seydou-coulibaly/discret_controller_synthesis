/* --- Generated the 17/6/2016 at 14:9 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -target c -target ctrln train.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "train.h"

void Train__aiguillage_reset(Train__aiguillage_mem* self) {
  self->ck = Train_controller__St_Haut;
  self->pnr = false;
}

void Train__aiguillage_step(int demandeActionnerAigHaut,
                            int demandeActionnerAigBas,
                            Train__aiguillage_out* _out,
                            Train__aiguillage_mem* self) {
  
  int r_St_Bas;
  Train_controller__st s_St_Bas;
  int r_St_Haut;
  Train_controller__st s_St_Haut;
  int nr_St_Bas;
  Train_controller__st ns_St_Bas;
  int aiguillageBas_St_Bas;
  int aiguillageHaut_St_Bas;
  int nr_St_Haut;
  Train_controller__st ns_St_Haut;
  int aiguillageBas_St_Haut;
  int aiguillageHaut_St_Haut;
  Train_controller__st ck_1;
  Train_controller__st s;
  Train_controller__st ns;
  int r;
  int nr;
  switch (self->ck) {
    case Train_controller__St_Bas:
      if (demandeActionnerAigHaut) {
        s_St_Bas = Train_controller__St_Haut;
        r_St_Bas = true;
      } else {
        s_St_Bas = Train_controller__St_Bas;
        r_St_Bas = self->pnr;
      };
      s = s_St_Bas;
      r = r_St_Bas;
      break;
    case Train_controller__St_Haut:
      if (demandeActionnerAigBas) {
        s_St_Haut = Train_controller__St_Bas;
      } else {
        s_St_Haut = Train_controller__St_Haut;
      };
      s = s_St_Haut;
      if (demandeActionnerAigBas) {
        r_St_Haut = true;
      } else {
        r_St_Haut = self->pnr;
      };
      r = r_St_Haut;
      break;
    default:
      break;
  };
  ck_1 = s;
  switch (ck_1) {
    case Train_controller__St_Bas:
      ns_St_Bas = Train_controller__St_Bas;
      nr_St_Bas = false;
      aiguillageBas_St_Bas = true;
      aiguillageHaut_St_Bas = false;
      ns = ns_St_Bas;
      nr = nr_St_Bas;
      _out->aiguillageBas = aiguillageBas_St_Bas;
      _out->aiguillageHaut = aiguillageHaut_St_Bas;
      break;
    case Train_controller__St_Haut:
      ns_St_Haut = Train_controller__St_Haut;
      ns = ns_St_Haut;
      nr_St_Haut = false;
      nr = nr_St_Haut;
      aiguillageBas_St_Haut = false;
      _out->aiguillageBas = aiguillageBas_St_Haut;
      aiguillageHaut_St_Haut = true;
      _out->aiguillageHaut = aiguillageHaut_St_Haut;
      break;
    default:
      break;
  };
  self->ck = ns;
  self->pnr = nr;;
}

void Train__feu_reset(Train__feu_mem* self) {
  self->ck = Train_controller__St_1_Rouge;
  self->pnr = false;
}

void Train__feu_step(int aiguillageHaut, int aiguillageBas,
                     Train__feu_out* _out, Train__feu_mem* self) {
  
  int r_St_1_Vert;
  Train_controller__st_1 s_St_1_Vert;
  int r_St_1_Rouge;
  Train_controller__st_1 s_St_1_Rouge;
  int nr_St_1_Vert;
  Train_controller__st_1 ns_St_1_Vert;
  int feuEtat_St_1_Vert;
  int nr_St_1_Rouge;
  Train_controller__st_1 ns_St_1_Rouge;
  int feuEtat_St_1_Rouge;
  Train_controller__st_1 ck_2;
  Train_controller__st_1 s;
  Train_controller__st_1 ns;
  int r;
  int nr;
  switch (self->ck) {
    case Train_controller__St_1_Vert:
      if (aiguillageHaut) {
        s_St_1_Vert = Train_controller__St_1_Rouge;
        r_St_1_Vert = true;
      } else {
        s_St_1_Vert = Train_controller__St_1_Vert;
        r_St_1_Vert = self->pnr;
      };
      s = s_St_1_Vert;
      r = r_St_1_Vert;
      break;
    case Train_controller__St_1_Rouge:
      if (aiguillageBas) {
        s_St_1_Rouge = Train_controller__St_1_Vert;
      } else {
        s_St_1_Rouge = Train_controller__St_1_Rouge;
      };
      s = s_St_1_Rouge;
      if (aiguillageBas) {
        r_St_1_Rouge = true;
      } else {
        r_St_1_Rouge = self->pnr;
      };
      r = r_St_1_Rouge;
      break;
    default:
      break;
  };
  ck_2 = s;
  switch (ck_2) {
    case Train_controller__St_1_Vert:
      ns_St_1_Vert = Train_controller__St_1_Vert;
      nr_St_1_Vert = false;
      feuEtat_St_1_Vert = true;
      ns = ns_St_1_Vert;
      nr = nr_St_1_Vert;
      _out->feuEtat = feuEtat_St_1_Vert;
      break;
    case Train_controller__St_1_Rouge:
      ns_St_1_Rouge = Train_controller__St_1_Rouge;
      ns = ns_St_1_Rouge;
      nr_St_1_Rouge = false;
      nr = nr_St_1_Rouge;
      feuEtat_St_1_Rouge = false;
      _out->feuEtat = feuEtat_St_1_Rouge;
      break;
    default:
      break;
  };
  self->ck = ns;
  self->pnr = nr;;
}

void Train__presence_reset(Train__presence_mem* self) {
  self->ck = Train_controller__St_2_PresenceNiveau;
  self->pnr = false;
}

void Train__presence_step(int presenceNiveau, Train__presence_out* _out,
                          Train__presence_mem* self) {
  
  int v;
  int v_1;
  int r_St_2_NiveauVide;
  Train_controller__st_2 s_St_2_NiveauVide;
  int r_St_2_PresenceNiveau;
  Train_controller__st_2 s_St_2_PresenceNiveau;
  int nr_St_2_NiveauVide;
  Train_controller__st_2 ns_St_2_NiveauVide;
  int presenceResult_St_2_NiveauVide;
  int nr_St_2_PresenceNiveau;
  Train_controller__st_2 ns_St_2_PresenceNiveau;
  int presenceResult_St_2_PresenceNiveau;
  Train_controller__st_2 ck_3;
  Train_controller__st_2 s;
  Train_controller__st_2 ns;
  int r;
  int nr;
  switch (self->ck) {
    case Train_controller__St_2_NiveauVide:
      v = !(presenceNiveau);
      if (v) {
        s_St_2_NiveauVide = Train_controller__St_2_PresenceNiveau;
        r_St_2_NiveauVide = true;
      } else {
        s_St_2_NiveauVide = Train_controller__St_2_NiveauVide;
        r_St_2_NiveauVide = self->pnr;
      };
      s = s_St_2_NiveauVide;
      r = r_St_2_NiveauVide;
      break;
    case Train_controller__St_2_PresenceNiveau:
      v_1 = !(presenceNiveau);
      if (v_1) {
        s_St_2_PresenceNiveau = Train_controller__St_2_NiveauVide;
      } else {
        s_St_2_PresenceNiveau = Train_controller__St_2_PresenceNiveau;
      };
      s = s_St_2_PresenceNiveau;
      if (v_1) {
        r_St_2_PresenceNiveau = true;
      } else {
        r_St_2_PresenceNiveau = self->pnr;
      };
      r = r_St_2_PresenceNiveau;
      break;
    default:
      break;
  };
  ck_3 = s;
  switch (ck_3) {
    case Train_controller__St_2_NiveauVide:
      ns_St_2_NiveauVide = Train_controller__St_2_NiveauVide;
      nr_St_2_NiveauVide = false;
      presenceResult_St_2_NiveauVide = false;
      ns = ns_St_2_NiveauVide;
      nr = nr_St_2_NiveauVide;
      _out->presenceResult = presenceResult_St_2_NiveauVide;
      break;
    case Train_controller__St_2_PresenceNiveau:
      ns_St_2_PresenceNiveau = Train_controller__St_2_PresenceNiveau;
      ns = ns_St_2_PresenceNiveau;
      nr_St_2_PresenceNiveau = false;
      nr = nr_St_2_PresenceNiveau;
      presenceResult_St_2_PresenceNiveau = true;
      _out->presenceResult = presenceResult_St_2_PresenceNiveau;
      break;
    default:
      break;
  };
  self->ck = ns;
  self->pnr = nr;;
}

void Train__train_reset(Train__train_mem* self) {
  self->ck = Train_controller__St_14_Haut;
  self->pnr_11 = false;
  self->ck_5 = Train_controller__St_13_Haut;
  self->pnr_10 = false;
  self->ck_7 = Train_controller__St_12_Rouge;
  self->pnr_9 = false;
  self->ck_9 = Train_controller__St_11_Rouge;
  self->pnr_8 = false;
  self->ck_11 = Train_controller__St_10_Rouge;
  self->pnr_7 = false;
  self->ck_13 = Train_controller__St_9_Rouge;
  self->pnr_6 = false;
  self->ck_15 = Train_controller__St_8_PresenceNiveau;
  self->pnr_5 = false;
  self->ck_17 = Train_controller__St_7_PresenceNiveau;
  self->pnr_4 = false;
  self->ck_19 = Train_controller__St_6_PresenceNiveau;
  self->pnr_3 = false;
  self->ck_21 = Train_controller__St_5_PresenceNiveau;
  self->pnr_2 = false;
  self->ck_23 = Train_controller__St_4_PresenceNiveau;
  self->pnr_1 = false;
  self->ck_25 = Train_controller__St_3_PresenceNiveau;
  self->pnr = false;
}

void Train__train_step(int presenceSection1, int presenceAiguillage1,
                       int presenceAiguillage2, int presenceGare1,
                       int presenceGare2, int presenceSection2,
                       Train__train_out* _out, Train__train_mem* self) {
  Train_controller__train_ctrlr0_out Train_controller__train_ctrlr0_out_st;
  
  int demandeActionnerAig1Haut;
  int demandeActionnerAig1Bas;
  int demandeActionnerAig2Haut;
  int demandeActionnerAig2Bas;
  int ok;
  int r_11_St_14_Bas;
  Train_controller__st_14 s_11_St_14_Bas;
  int r_11_St_14_Haut;
  Train_controller__st_14 s_11_St_14_Haut;
  int nr_11_St_14_Bas;
  Train_controller__st_14 ns_11_St_14_Bas;
  int aiguillageBas_St_14_Bas;
  int aiguillageHaut_St_14_Bas;
  int nr_11_St_14_Haut;
  Train_controller__st_14 ns_11_St_14_Haut;
  int aiguillageBas_St_14_Haut;
  int aiguillageHaut_St_14_Haut;
  Train_controller__st_14 ck_4;
  int r_10_St_13_Bas;
  Train_controller__st_13 s_10_St_13_Bas;
  int r_10_St_13_Haut;
  Train_controller__st_13 s_10_St_13_Haut;
  int nr_10_St_13_Bas;
  Train_controller__st_13 ns_10_St_13_Bas;
  int aiguillageBas_1_St_13_Bas;
  int aiguillageHaut_1_St_13_Bas;
  int nr_10_St_13_Haut;
  Train_controller__st_13 ns_10_St_13_Haut;
  int aiguillageBas_1_St_13_Haut;
  int aiguillageHaut_1_St_13_Haut;
  Train_controller__st_13 ck_6;
  int r_9_St_12_Vert;
  Train_controller__st_12 s_9_St_12_Vert;
  int r_9_St_12_Rouge;
  Train_controller__st_12 s_9_St_12_Rouge;
  int nr_9_St_12_Vert;
  Train_controller__st_12 ns_9_St_12_Vert;
  int feuEtat_St_12_Vert;
  int nr_9_St_12_Rouge;
  Train_controller__st_12 ns_9_St_12_Rouge;
  int feuEtat_St_12_Rouge;
  Train_controller__st_12 ck_8;
  int r_8_St_11_Vert;
  Train_controller__st_11 s_8_St_11_Vert;
  int r_8_St_11_Rouge;
  Train_controller__st_11 s_8_St_11_Rouge;
  int nr_8_St_11_Vert;
  Train_controller__st_11 ns_8_St_11_Vert;
  int feuEtat_1_St_11_Vert;
  int nr_8_St_11_Rouge;
  Train_controller__st_11 ns_8_St_11_Rouge;
  int feuEtat_1_St_11_Rouge;
  Train_controller__st_11 ck_10;
  int r_7_St_10_Vert;
  Train_controller__st_10 s_7_St_10_Vert;
  int r_7_St_10_Rouge;
  Train_controller__st_10 s_7_St_10_Rouge;
  int nr_7_St_10_Vert;
  Train_controller__st_10 ns_7_St_10_Vert;
  int feuEtat_2_St_10_Vert;
  int nr_7_St_10_Rouge;
  Train_controller__st_10 ns_7_St_10_Rouge;
  int feuEtat_2_St_10_Rouge;
  Train_controller__st_10 ck_12;
  int r_6_St_9_Vert;
  Train_controller__st_9 s_6_St_9_Vert;
  int r_6_St_9_Rouge;
  Train_controller__st_9 s_6_St_9_Rouge;
  int nr_6_St_9_Vert;
  Train_controller__st_9 ns_6_St_9_Vert;
  int feuEtat_3_St_9_Vert;
  int nr_6_St_9_Rouge;
  Train_controller__st_9 ns_6_St_9_Rouge;
  int feuEtat_3_St_9_Rouge;
  Train_controller__st_9 ck_14;
  int v_28;
  int v_29;
  int r_5_St_8_NiveauVide;
  Train_controller__st_8 s_5_St_8_NiveauVide;
  int r_5_St_8_PresenceNiveau;
  Train_controller__st_8 s_5_St_8_PresenceNiveau;
  int nr_5_St_8_NiveauVide;
  Train_controller__st_8 ns_5_St_8_NiveauVide;
  int presenceResult_St_8_NiveauVide;
  int nr_5_St_8_PresenceNiveau;
  Train_controller__st_8 ns_5_St_8_PresenceNiveau;
  int presenceResult_St_8_PresenceNiveau;
  Train_controller__st_8 ck_16;
  int v_30;
  int v_31;
  int r_4_St_7_NiveauVide;
  Train_controller__st_7 s_4_St_7_NiveauVide;
  int r_4_St_7_PresenceNiveau;
  Train_controller__st_7 s_4_St_7_PresenceNiveau;
  int nr_4_St_7_NiveauVide;
  Train_controller__st_7 ns_4_St_7_NiveauVide;
  int presenceResult_1_St_7_NiveauVide;
  int nr_4_St_7_PresenceNiveau;
  Train_controller__st_7 ns_4_St_7_PresenceNiveau;
  int presenceResult_1_St_7_PresenceNiveau;
  Train_controller__st_7 ck_18;
  int v_32;
  int v_33;
  int r_3_St_6_NiveauVide;
  Train_controller__st_6 s_3_St_6_NiveauVide;
  int r_3_St_6_PresenceNiveau;
  Train_controller__st_6 s_3_St_6_PresenceNiveau;
  int nr_3_St_6_NiveauVide;
  Train_controller__st_6 ns_3_St_6_NiveauVide;
  int presenceResult_2_St_6_NiveauVide;
  int nr_3_St_6_PresenceNiveau;
  Train_controller__st_6 ns_3_St_6_PresenceNiveau;
  int presenceResult_2_St_6_PresenceNiveau;
  Train_controller__st_6 ck_20;
  int v_34;
  int v_35;
  int r_2_St_5_NiveauVide;
  Train_controller__st_5 s_2_St_5_NiveauVide;
  int r_2_St_5_PresenceNiveau;
  Train_controller__st_5 s_2_St_5_PresenceNiveau;
  int nr_2_St_5_NiveauVide;
  Train_controller__st_5 ns_2_St_5_NiveauVide;
  int presenceResult_3_St_5_NiveauVide;
  int nr_2_St_5_PresenceNiveau;
  Train_controller__st_5 ns_2_St_5_PresenceNiveau;
  int presenceResult_3_St_5_PresenceNiveau;
  Train_controller__st_5 ck_22;
  int v_36;
  int v_37;
  int r_1_St_4_NiveauVide;
  Train_controller__st_4 s_1_St_4_NiveauVide;
  int r_1_St_4_PresenceNiveau;
  Train_controller__st_4 s_1_St_4_PresenceNiveau;
  int nr_1_St_4_NiveauVide;
  Train_controller__st_4 ns_1_St_4_NiveauVide;
  int presenceResult_4_St_4_NiveauVide;
  int nr_1_St_4_PresenceNiveau;
  Train_controller__st_4 ns_1_St_4_PresenceNiveau;
  int presenceResult_4_St_4_PresenceNiveau;
  Train_controller__st_4 ck_24;
  int v_38;
  int v_39;
  int r_St_3_NiveauVide;
  Train_controller__st_3 s_St_3_NiveauVide;
  int r_St_3_PresenceNiveau;
  Train_controller__st_3 s_St_3_PresenceNiveau;
  int nr_St_3_NiveauVide;
  Train_controller__st_3 ns_St_3_NiveauVide;
  int presenceResult_5_St_3_NiveauVide;
  int nr_St_3_PresenceNiveau;
  Train_controller__st_3 ns_St_3_PresenceNiveau;
  int presenceResult_5_St_3_PresenceNiveau;
  Train_controller__st_3 ck_26;
  int v_27;
  int v_26;
  int v_25;
  int v_24;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
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
  int v;
  Train_controller__st_14 s_11;
  Train_controller__st_14 ns_11;
  int r_11;
  int nr_11;
  Train_controller__st_13 s_10;
  Train_controller__st_13 ns_10;
  int r_10;
  int nr_10;
  Train_controller__st_12 s_9;
  Train_controller__st_12 ns_9;
  int r_9;
  int nr_9;
  Train_controller__st_11 s_8;
  Train_controller__st_11 ns_8;
  int r_8;
  int nr_8;
  Train_controller__st_10 s_7;
  Train_controller__st_10 ns_7;
  int r_7;
  int nr_7;
  Train_controller__st_9 s_6;
  Train_controller__st_9 ns_6;
  int r_6;
  int nr_6;
  Train_controller__st_8 s_5;
  Train_controller__st_8 ns_5;
  int r_5;
  int nr_5;
  Train_controller__st_7 s_4;
  Train_controller__st_7 ns_4;
  int r_4;
  int nr_4;
  Train_controller__st_6 s_3;
  Train_controller__st_6 ns_3;
  int r_3;
  int nr_3;
  Train_controller__st_5 s_2;
  Train_controller__st_5 ns_2;
  int r_2;
  int nr_2;
  Train_controller__st_4 s_1;
  Train_controller__st_4 ns_1;
  int r_1;
  int nr_1;
  Train_controller__st_3 s;
  Train_controller__st_3 ns;
  int r;
  int nr;
  int presenceNiveau_5;
  int presenceResult_5;
  int presenceNiveau_4;
  int presenceResult_4;
  int presenceNiveau_3;
  int presenceResult_3;
  int presenceNiveau_2;
  int presenceResult_2;
  int presenceNiveau_1;
  int presenceResult_1;
  int presenceNiveau;
  int presenceResult;
  int aiguillageHaut_5;
  int aiguillageBas_5;
  int feuEtat_3;
  int aiguillageHaut_4;
  int aiguillageBas_4;
  int feuEtat_2;
  int aiguillageHaut_3;
  int aiguillageBas_3;
  int feuEtat_1;
  int aiguillageHaut_2;
  int aiguillageBas_2;
  int feuEtat;
  int demandeActionnerAigHaut_1;
  int demandeActionnerAigBas_1;
  int aiguillageHaut_1;
  int aiguillageBas_1;
  int demandeActionnerAigHaut;
  int demandeActionnerAigBas;
  int aiguillageHaut;
  int aiguillageBas;
  int lpresenceSection1;
  int lpresenceAiguillage1;
  int lpresenceAiguillage2;
  int lpresenceGare1;
  int lpresenceGare2;
  int lpresenceSection2;
  int laiguillage1Haut;
  int laiguillage1Bas;
  int laiguillage2Haut;
  int laiguillage2Bas;
  int feu01;
  int feu02;
  int feu3;
  int feu4;
  int prop1;
  int prop2;
  int prop3;
  int prop4;
  int prop5;
  int prop6;
  int prop7;
  int prop8;
  int prop9;
  int prop10;
  prop4 = true;
  presenceNiveau = presenceSection1;
  presenceNiveau_1 = presenceAiguillage1;
  presenceNiveau_2 = presenceAiguillage2;
  presenceNiveau_3 = presenceGare1;
  presenceNiveau_4 = presenceGare2;
  presenceNiveau_5 = presenceSection2;
  switch (self->ck_15) {
    case Train_controller__St_8_NiveauVide:
      v_28 = !(presenceNiveau);
      if (v_28) {
        s_5_St_8_NiveauVide = Train_controller__St_8_PresenceNiveau;
        r_5_St_8_NiveauVide = true;
      } else {
        s_5_St_8_NiveauVide = Train_controller__St_8_NiveauVide;
        r_5_St_8_NiveauVide = self->pnr_5;
      };
      s_5 = s_5_St_8_NiveauVide;
      r_5 = r_5_St_8_NiveauVide;
      break;
    case Train_controller__St_8_PresenceNiveau:
      v_29 = !(presenceNiveau);
      if (v_29) {
        s_5_St_8_PresenceNiveau = Train_controller__St_8_NiveauVide;
      } else {
        s_5_St_8_PresenceNiveau = Train_controller__St_8_PresenceNiveau;
      };
      s_5 = s_5_St_8_PresenceNiveau;
      if (v_29) {
        r_5_St_8_PresenceNiveau = true;
      } else {
        r_5_St_8_PresenceNiveau = self->pnr_5;
      };
      r_5 = r_5_St_8_PresenceNiveau;
      break;
    default:
      break;
  };
  ck_16 = s_5;
  switch (ck_16) {
    case Train_controller__St_8_NiveauVide:
      ns_5_St_8_NiveauVide = Train_controller__St_8_NiveauVide;
      nr_5_St_8_NiveauVide = false;
      presenceResult_St_8_NiveauVide = false;
      ns_5 = ns_5_St_8_NiveauVide;
      nr_5 = nr_5_St_8_NiveauVide;
      presenceResult = presenceResult_St_8_NiveauVide;
      break;
    case Train_controller__St_8_PresenceNiveau:
      ns_5_St_8_PresenceNiveau = Train_controller__St_8_PresenceNiveau;
      ns_5 = ns_5_St_8_PresenceNiveau;
      nr_5_St_8_PresenceNiveau = false;
      nr_5 = nr_5_St_8_PresenceNiveau;
      presenceResult_St_8_PresenceNiveau = true;
      presenceResult = presenceResult_St_8_PresenceNiveau;
      break;
    default:
      break;
  };
  lpresenceSection1 = presenceResult;
  switch (self->ck_17) {
    case Train_controller__St_7_NiveauVide:
      v_30 = !(presenceNiveau_1);
      if (v_30) {
        s_4_St_7_NiveauVide = Train_controller__St_7_PresenceNiveau;
        r_4_St_7_NiveauVide = true;
      } else {
        s_4_St_7_NiveauVide = Train_controller__St_7_NiveauVide;
        r_4_St_7_NiveauVide = self->pnr_4;
      };
      s_4 = s_4_St_7_NiveauVide;
      r_4 = r_4_St_7_NiveauVide;
      break;
    case Train_controller__St_7_PresenceNiveau:
      v_31 = !(presenceNiveau_1);
      if (v_31) {
        s_4_St_7_PresenceNiveau = Train_controller__St_7_NiveauVide;
      } else {
        s_4_St_7_PresenceNiveau = Train_controller__St_7_PresenceNiveau;
      };
      s_4 = s_4_St_7_PresenceNiveau;
      if (v_31) {
        r_4_St_7_PresenceNiveau = true;
      } else {
        r_4_St_7_PresenceNiveau = self->pnr_4;
      };
      r_4 = r_4_St_7_PresenceNiveau;
      break;
    default:
      break;
  };
  ck_18 = s_4;
  switch (ck_18) {
    case Train_controller__St_7_NiveauVide:
      ns_4_St_7_NiveauVide = Train_controller__St_7_NiveauVide;
      nr_4_St_7_NiveauVide = false;
      presenceResult_1_St_7_NiveauVide = false;
      ns_4 = ns_4_St_7_NiveauVide;
      nr_4 = nr_4_St_7_NiveauVide;
      presenceResult_1 = presenceResult_1_St_7_NiveauVide;
      break;
    case Train_controller__St_7_PresenceNiveau:
      ns_4_St_7_PresenceNiveau = Train_controller__St_7_PresenceNiveau;
      ns_4 = ns_4_St_7_PresenceNiveau;
      nr_4_St_7_PresenceNiveau = false;
      nr_4 = nr_4_St_7_PresenceNiveau;
      presenceResult_1_St_7_PresenceNiveau = true;
      presenceResult_1 = presenceResult_1_St_7_PresenceNiveau;
      break;
    default:
      break;
  };
  lpresenceAiguillage1 = presenceResult_1;
  switch (self->ck_19) {
    case Train_controller__St_6_NiveauVide:
      v_32 = !(presenceNiveau_2);
      if (v_32) {
        s_3_St_6_NiveauVide = Train_controller__St_6_PresenceNiveau;
        r_3_St_6_NiveauVide = true;
      } else {
        s_3_St_6_NiveauVide = Train_controller__St_6_NiveauVide;
        r_3_St_6_NiveauVide = self->pnr_3;
      };
      s_3 = s_3_St_6_NiveauVide;
      r_3 = r_3_St_6_NiveauVide;
      break;
    case Train_controller__St_6_PresenceNiveau:
      v_33 = !(presenceNiveau_2);
      if (v_33) {
        s_3_St_6_PresenceNiveau = Train_controller__St_6_NiveauVide;
      } else {
        s_3_St_6_PresenceNiveau = Train_controller__St_6_PresenceNiveau;
      };
      s_3 = s_3_St_6_PresenceNiveau;
      if (v_33) {
        r_3_St_6_PresenceNiveau = true;
      } else {
        r_3_St_6_PresenceNiveau = self->pnr_3;
      };
      r_3 = r_3_St_6_PresenceNiveau;
      break;
    default:
      break;
  };
  ck_20 = s_3;
  switch (ck_20) {
    case Train_controller__St_6_NiveauVide:
      ns_3_St_6_NiveauVide = Train_controller__St_6_NiveauVide;
      nr_3_St_6_NiveauVide = false;
      presenceResult_2_St_6_NiveauVide = false;
      ns_3 = ns_3_St_6_NiveauVide;
      nr_3 = nr_3_St_6_NiveauVide;
      presenceResult_2 = presenceResult_2_St_6_NiveauVide;
      break;
    case Train_controller__St_6_PresenceNiveau:
      ns_3_St_6_PresenceNiveau = Train_controller__St_6_PresenceNiveau;
      ns_3 = ns_3_St_6_PresenceNiveau;
      nr_3_St_6_PresenceNiveau = false;
      nr_3 = nr_3_St_6_PresenceNiveau;
      presenceResult_2_St_6_PresenceNiveau = true;
      presenceResult_2 = presenceResult_2_St_6_PresenceNiveau;
      break;
    default:
      break;
  };
  lpresenceAiguillage2 = presenceResult_2;
  switch (self->ck_21) {
    case Train_controller__St_5_NiveauVide:
      v_34 = !(presenceNiveau_3);
      if (v_34) {
        s_2_St_5_NiveauVide = Train_controller__St_5_PresenceNiveau;
        r_2_St_5_NiveauVide = true;
      } else {
        s_2_St_5_NiveauVide = Train_controller__St_5_NiveauVide;
        r_2_St_5_NiveauVide = self->pnr_2;
      };
      s_2 = s_2_St_5_NiveauVide;
      r_2 = r_2_St_5_NiveauVide;
      break;
    case Train_controller__St_5_PresenceNiveau:
      v_35 = !(presenceNiveau_3);
      if (v_35) {
        s_2_St_5_PresenceNiveau = Train_controller__St_5_NiveauVide;
      } else {
        s_2_St_5_PresenceNiveau = Train_controller__St_5_PresenceNiveau;
      };
      s_2 = s_2_St_5_PresenceNiveau;
      if (v_35) {
        r_2_St_5_PresenceNiveau = true;
      } else {
        r_2_St_5_PresenceNiveau = self->pnr_2;
      };
      r_2 = r_2_St_5_PresenceNiveau;
      break;
    default:
      break;
  };
  ck_22 = s_2;
  switch (ck_22) {
    case Train_controller__St_5_NiveauVide:
      ns_2_St_5_NiveauVide = Train_controller__St_5_NiveauVide;
      nr_2_St_5_NiveauVide = false;
      presenceResult_3_St_5_NiveauVide = false;
      ns_2 = ns_2_St_5_NiveauVide;
      nr_2 = nr_2_St_5_NiveauVide;
      presenceResult_3 = presenceResult_3_St_5_NiveauVide;
      break;
    case Train_controller__St_5_PresenceNiveau:
      ns_2_St_5_PresenceNiveau = Train_controller__St_5_PresenceNiveau;
      ns_2 = ns_2_St_5_PresenceNiveau;
      nr_2_St_5_PresenceNiveau = false;
      nr_2 = nr_2_St_5_PresenceNiveau;
      presenceResult_3_St_5_PresenceNiveau = true;
      presenceResult_3 = presenceResult_3_St_5_PresenceNiveau;
      break;
    default:
      break;
  };
  lpresenceGare1 = presenceResult_3;
  v_22 = !(lpresenceGare1);
  switch (self->ck_23) {
    case Train_controller__St_4_NiveauVide:
      v_36 = !(presenceNiveau_4);
      if (v_36) {
        s_1_St_4_NiveauVide = Train_controller__St_4_PresenceNiveau;
        r_1_St_4_NiveauVide = true;
      } else {
        s_1_St_4_NiveauVide = Train_controller__St_4_NiveauVide;
        r_1_St_4_NiveauVide = self->pnr_1;
      };
      s_1 = s_1_St_4_NiveauVide;
      r_1 = r_1_St_4_NiveauVide;
      break;
    case Train_controller__St_4_PresenceNiveau:
      v_37 = !(presenceNiveau_4);
      if (v_37) {
        s_1_St_4_PresenceNiveau = Train_controller__St_4_NiveauVide;
      } else {
        s_1_St_4_PresenceNiveau = Train_controller__St_4_PresenceNiveau;
      };
      s_1 = s_1_St_4_PresenceNiveau;
      if (v_37) {
        r_1_St_4_PresenceNiveau = true;
      } else {
        r_1_St_4_PresenceNiveau = self->pnr_1;
      };
      r_1 = r_1_St_4_PresenceNiveau;
      break;
    default:
      break;
  };
  ck_24 = s_1;
  switch (ck_24) {
    case Train_controller__St_4_NiveauVide:
      ns_1_St_4_NiveauVide = Train_controller__St_4_NiveauVide;
      nr_1_St_4_NiveauVide = false;
      presenceResult_4_St_4_NiveauVide = false;
      ns_1 = ns_1_St_4_NiveauVide;
      nr_1 = nr_1_St_4_NiveauVide;
      presenceResult_4 = presenceResult_4_St_4_NiveauVide;
      break;
    case Train_controller__St_4_PresenceNiveau:
      ns_1_St_4_PresenceNiveau = Train_controller__St_4_PresenceNiveau;
      ns_1 = ns_1_St_4_PresenceNiveau;
      nr_1_St_4_PresenceNiveau = false;
      nr_1 = nr_1_St_4_PresenceNiveau;
      presenceResult_4_St_4_PresenceNiveau = true;
      presenceResult_4 = presenceResult_4_St_4_PresenceNiveau;
      break;
    default:
      break;
  };
  lpresenceGare2 = presenceResult_4;
  v_19 = !(lpresenceGare2);
  v_20 = !(lpresenceGare2);
  switch (self->ck_25) {
    case Train_controller__St_3_NiveauVide:
      v_38 = !(presenceNiveau_5);
      if (v_38) {
        s_St_3_NiveauVide = Train_controller__St_3_PresenceNiveau;
        r_St_3_NiveauVide = true;
      } else {
        s_St_3_NiveauVide = Train_controller__St_3_NiveauVide;
        r_St_3_NiveauVide = self->pnr;
      };
      s = s_St_3_NiveauVide;
      r = r_St_3_NiveauVide;
      break;
    case Train_controller__St_3_PresenceNiveau:
      v_39 = !(presenceNiveau_5);
      if (v_39) {
        s_St_3_PresenceNiveau = Train_controller__St_3_NiveauVide;
      } else {
        s_St_3_PresenceNiveau = Train_controller__St_3_PresenceNiveau;
      };
      s = s_St_3_PresenceNiveau;
      if (v_39) {
        r_St_3_PresenceNiveau = true;
      } else {
        r_St_3_PresenceNiveau = self->pnr;
      };
      r = r_St_3_PresenceNiveau;
      break;
    default:
      break;
  };
  ck_26 = s;
  switch (ck_26) {
    case Train_controller__St_3_NiveauVide:
      ns_St_3_NiveauVide = Train_controller__St_3_NiveauVide;
      nr_St_3_NiveauVide = false;
      presenceResult_5_St_3_NiveauVide = false;
      ns = ns_St_3_NiveauVide;
      nr = nr_St_3_NiveauVide;
      presenceResult_5 = presenceResult_5_St_3_NiveauVide;
      break;
    case Train_controller__St_3_PresenceNiveau:
      ns_St_3_PresenceNiveau = Train_controller__St_3_PresenceNiveau;
      ns = ns_St_3_PresenceNiveau;
      nr_St_3_PresenceNiveau = false;
      nr = nr_St_3_PresenceNiveau;
      presenceResult_5_St_3_PresenceNiveau = true;
      presenceResult_5 = presenceResult_5_St_3_PresenceNiveau;
      break;
    default:
      break;
  };
  lpresenceSection2 = presenceResult_5;
  Train_controller__train_ctrlr0_step(self->ck, self->ck_11, self->ck_13,
                                      self->ck_15, self->ck_17, self->ck_19,
                                      self->ck_21, self->ck_23, self->ck_25,
                                      self->ck_5, self->ck_7, self->ck_9, ok,
                                      self->pnr, self->pnr_1, self->pnr_10,
                                      self->pnr_11, self->pnr_2, self->pnr_3,
                                      self->pnr_4, self->pnr_5, self->pnr_6,
                                      self->pnr_7, self->pnr_8, self->pnr_9,
                                      presenceAiguillage1,
                                      presenceAiguillage2, presenceGare1,
                                      presenceGare2, presenceSection1,
                                      presenceSection2,
                                      &Train_controller__train_ctrlr0_out_st);
  demandeActionnerAig1Bas = Train_controller__train_ctrlr0_out_st.demandeActionnerAig1Bas;
  demandeActionnerAig1Haut = Train_controller__train_ctrlr0_out_st.demandeActionnerAig1Haut;
  demandeActionnerAig2Bas = Train_controller__train_ctrlr0_out_st.demandeActionnerAig2Bas;
  demandeActionnerAig2Haut = Train_controller__train_ctrlr0_out_st.demandeActionnerAig2Haut;
  demandeActionnerAigBas = demandeActionnerAig1Bas;
  demandeActionnerAigHaut = demandeActionnerAig1Haut;
  demandeActionnerAigBas_1 = demandeActionnerAig2Bas;
  demandeActionnerAigHaut_1 = demandeActionnerAig2Haut;
  switch (self->ck) {
    case Train_controller__St_14_Bas:
      if (demandeActionnerAigHaut) {
        s_11_St_14_Bas = Train_controller__St_14_Haut;
        r_11_St_14_Bas = true;
      } else {
        s_11_St_14_Bas = Train_controller__St_14_Bas;
        r_11_St_14_Bas = self->pnr_11;
      };
      s_11 = s_11_St_14_Bas;
      r_11 = r_11_St_14_Bas;
      break;
    case Train_controller__St_14_Haut:
      if (demandeActionnerAigBas) {
        s_11_St_14_Haut = Train_controller__St_14_Bas;
      } else {
        s_11_St_14_Haut = Train_controller__St_14_Haut;
      };
      s_11 = s_11_St_14_Haut;
      if (demandeActionnerAigBas) {
        r_11_St_14_Haut = true;
      } else {
        r_11_St_14_Haut = self->pnr_11;
      };
      r_11 = r_11_St_14_Haut;
      break;
    default:
      break;
  };
  ck_4 = s_11;
  switch (ck_4) {
    case Train_controller__St_14_Bas:
      ns_11_St_14_Bas = Train_controller__St_14_Bas;
      nr_11_St_14_Bas = false;
      aiguillageBas_St_14_Bas = true;
      aiguillageHaut_St_14_Bas = false;
      ns_11 = ns_11_St_14_Bas;
      nr_11 = nr_11_St_14_Bas;
      aiguillageBas = aiguillageBas_St_14_Bas;
      aiguillageHaut = aiguillageHaut_St_14_Bas;
      break;
    case Train_controller__St_14_Haut:
      ns_11_St_14_Haut = Train_controller__St_14_Haut;
      ns_11 = ns_11_St_14_Haut;
      nr_11_St_14_Haut = false;
      nr_11 = nr_11_St_14_Haut;
      aiguillageBas_St_14_Haut = false;
      aiguillageBas = aiguillageBas_St_14_Haut;
      aiguillageHaut_St_14_Haut = true;
      aiguillageHaut = aiguillageHaut_St_14_Haut;
      break;
    default:
      break;
  };
  laiguillage1Haut = aiguillageHaut;
  _out->aiguillage1Haut = laiguillage1Haut;
  prop6 = (v_19||laiguillage1Haut);
  v_26 = !(laiguillage1Haut);
  aiguillageHaut_2 = laiguillage1Haut;
  aiguillageBas_4 = laiguillage1Haut;
  laiguillage1Bas = aiguillageBas;
  _out->aiguillage1Bas = laiguillage1Bas;
  v_10 = (lpresenceAiguillage1&&laiguillage1Bas);
  v_11 = !(v_10);
  v_16 = (lpresenceAiguillage1&&laiguillage1Bas);
  v_17 = !(v_16);
  v_27 = !(laiguillage1Bas);
  prop1 = (v_26||v_27);
  aiguillageBas_2 = laiguillage1Bas;
  aiguillageHaut_4 = laiguillage1Bas;
  switch (self->ck_7) {
    case Train_controller__St_12_Vert:
      if (aiguillageHaut_2) {
        s_9_St_12_Vert = Train_controller__St_12_Rouge;
        r_9_St_12_Vert = true;
      } else {
        s_9_St_12_Vert = Train_controller__St_12_Vert;
        r_9_St_12_Vert = self->pnr_9;
      };
      s_9 = s_9_St_12_Vert;
      r_9 = r_9_St_12_Vert;
      break;
    case Train_controller__St_12_Rouge:
      if (aiguillageBas_2) {
        s_9_St_12_Rouge = Train_controller__St_12_Vert;
      } else {
        s_9_St_12_Rouge = Train_controller__St_12_Rouge;
      };
      s_9 = s_9_St_12_Rouge;
      if (aiguillageBas_2) {
        r_9_St_12_Rouge = true;
      } else {
        r_9_St_12_Rouge = self->pnr_9;
      };
      r_9 = r_9_St_12_Rouge;
      break;
    default:
      break;
  };
  ck_8 = s_9;
  switch (ck_8) {
    case Train_controller__St_12_Vert:
      ns_9_St_12_Vert = Train_controller__St_12_Vert;
      nr_9_St_12_Vert = false;
      feuEtat_St_12_Vert = true;
      ns_9 = ns_9_St_12_Vert;
      nr_9 = nr_9_St_12_Vert;
      feuEtat = feuEtat_St_12_Vert;
      break;
    case Train_controller__St_12_Rouge:
      ns_9_St_12_Rouge = Train_controller__St_12_Rouge;
      ns_9 = ns_9_St_12_Rouge;
      nr_9_St_12_Rouge = false;
      nr_9 = nr_9_St_12_Rouge;
      feuEtat_St_12_Rouge = false;
      feuEtat = feuEtat_St_12_Rouge;
      break;
    default:
      break;
  };
  feu01 = feuEtat;
  _out->feu1 = feu01;
  v_18 = !(feu01);
  prop7 = (v_17||v_18);
  v_21 = !(feu01);
  prop5 = (v_20||v_21);
  switch (self->ck_11) {
    case Train_controller__St_10_Vert:
      if (aiguillageHaut_4) {
        s_7_St_10_Vert = Train_controller__St_10_Rouge;
        r_7_St_10_Vert = true;
      } else {
        s_7_St_10_Vert = Train_controller__St_10_Vert;
        r_7_St_10_Vert = self->pnr_7;
      };
      s_7 = s_7_St_10_Vert;
      r_7 = r_7_St_10_Vert;
      break;
    case Train_controller__St_10_Rouge:
      if (aiguillageBas_4) {
        s_7_St_10_Rouge = Train_controller__St_10_Vert;
      } else {
        s_7_St_10_Rouge = Train_controller__St_10_Rouge;
      };
      s_7 = s_7_St_10_Rouge;
      if (aiguillageBas_4) {
        r_7_St_10_Rouge = true;
      } else {
        r_7_St_10_Rouge = self->pnr_7;
      };
      r_7 = r_7_St_10_Rouge;
      break;
    default:
      break;
  };
  ck_12 = s_7;
  switch (ck_12) {
    case Train_controller__St_10_Vert:
      ns_7_St_10_Vert = Train_controller__St_10_Vert;
      nr_7_St_10_Vert = false;
      feuEtat_2_St_10_Vert = true;
      ns_7 = ns_7_St_10_Vert;
      nr_7 = nr_7_St_10_Vert;
      feuEtat_2 = feuEtat_2_St_10_Vert;
      break;
    case Train_controller__St_10_Rouge:
      ns_7_St_10_Rouge = Train_controller__St_10_Rouge;
      ns_7 = ns_7_St_10_Rouge;
      nr_7_St_10_Rouge = false;
      nr_7 = nr_7_St_10_Rouge;
      feuEtat_2_St_10_Rouge = false;
      feuEtat_2 = feuEtat_2_St_10_Rouge;
      break;
    default:
      break;
  };
  feu3 = feuEtat_2;
  _out->feuGare1 = feu3;
  v_12 = !(feu3);
  prop9 = (v_11||v_12);
  switch (self->ck_5) {
    case Train_controller__St_13_Bas:
      if (demandeActionnerAigHaut_1) {
        s_10_St_13_Bas = Train_controller__St_13_Haut;
        r_10_St_13_Bas = true;
      } else {
        s_10_St_13_Bas = Train_controller__St_13_Bas;
        r_10_St_13_Bas = self->pnr_10;
      };
      s_10 = s_10_St_13_Bas;
      r_10 = r_10_St_13_Bas;
      break;
    case Train_controller__St_13_Haut:
      if (demandeActionnerAigBas_1) {
        s_10_St_13_Haut = Train_controller__St_13_Bas;
      } else {
        s_10_St_13_Haut = Train_controller__St_13_Haut;
      };
      s_10 = s_10_St_13_Haut;
      if (demandeActionnerAigBas_1) {
        r_10_St_13_Haut = true;
      } else {
        r_10_St_13_Haut = self->pnr_10;
      };
      r_10 = r_10_St_13_Haut;
      break;
    default:
      break;
  };
  ck_6 = s_10;
  switch (ck_6) {
    case Train_controller__St_13_Bas:
      ns_10_St_13_Bas = Train_controller__St_13_Bas;
      nr_10_St_13_Bas = false;
      aiguillageBas_1_St_13_Bas = true;
      aiguillageHaut_1_St_13_Bas = false;
      ns_10 = ns_10_St_13_Bas;
      nr_10 = nr_10_St_13_Bas;
      aiguillageBas_1 = aiguillageBas_1_St_13_Bas;
      aiguillageHaut_1 = aiguillageHaut_1_St_13_Bas;
      break;
    case Train_controller__St_13_Haut:
      ns_10_St_13_Haut = Train_controller__St_13_Haut;
      ns_10 = ns_10_St_13_Haut;
      nr_10_St_13_Haut = false;
      nr_10 = nr_10_St_13_Haut;
      aiguillageBas_1_St_13_Haut = false;
      aiguillageBas_1 = aiguillageBas_1_St_13_Haut;
      aiguillageHaut_1_St_13_Haut = true;
      aiguillageHaut_1 = aiguillageHaut_1_St_13_Haut;
      break;
    default:
      break;
  };
  laiguillage2Haut = aiguillageHaut_1;
  _out->aiguillage2Haut = laiguillage2Haut;
  v_7 = (lpresenceAiguillage2&&laiguillage2Haut);
  v_8 = !(v_7);
  v_13 = (lpresenceAiguillage2&&laiguillage2Haut);
  v_14 = !(v_13);
  v_24 = !(laiguillage2Haut);
  aiguillageHaut_3 = laiguillage2Haut;
  aiguillageBas_5 = laiguillage2Haut;
  laiguillage2Bas = aiguillageBas_1;
  _out->aiguillage2Bas = laiguillage2Bas;
  v_25 = !(laiguillage2Bas);
  prop2 = (v_24||v_25);
  v = (prop1&&prop2);
  v_2 = (v&&prop5);
  v_3 = (v_2&&prop6);
  v_4 = (v_3&&prop7);
  aiguillageBas_3 = laiguillage2Bas;
  aiguillageHaut_5 = laiguillage2Bas;
  switch (self->ck_9) {
    case Train_controller__St_11_Vert:
      if (aiguillageHaut_3) {
        s_8_St_11_Vert = Train_controller__St_11_Rouge;
        r_8_St_11_Vert = true;
      } else {
        s_8_St_11_Vert = Train_controller__St_11_Vert;
        r_8_St_11_Vert = self->pnr_8;
      };
      s_8 = s_8_St_11_Vert;
      r_8 = r_8_St_11_Vert;
      break;
    case Train_controller__St_11_Rouge:
      if (aiguillageBas_3) {
        s_8_St_11_Rouge = Train_controller__St_11_Vert;
      } else {
        s_8_St_11_Rouge = Train_controller__St_11_Rouge;
      };
      s_8 = s_8_St_11_Rouge;
      if (aiguillageBas_3) {
        r_8_St_11_Rouge = true;
      } else {
        r_8_St_11_Rouge = self->pnr_8;
      };
      r_8 = r_8_St_11_Rouge;
      break;
    default:
      break;
  };
  ck_10 = s_8;
  switch (ck_10) {
    case Train_controller__St_11_Vert:
      ns_8_St_11_Vert = Train_controller__St_11_Vert;
      nr_8_St_11_Vert = false;
      feuEtat_1_St_11_Vert = true;
      ns_8 = ns_8_St_11_Vert;
      nr_8 = nr_8_St_11_Vert;
      feuEtat_1 = feuEtat_1_St_11_Vert;
      break;
    case Train_controller__St_11_Rouge:
      ns_8_St_11_Rouge = Train_controller__St_11_Rouge;
      ns_8 = ns_8_St_11_Rouge;
      nr_8_St_11_Rouge = false;
      nr_8 = nr_8_St_11_Rouge;
      feuEtat_1_St_11_Rouge = false;
      feuEtat_1 = feuEtat_1_St_11_Rouge;
      break;
    default:
      break;
  };
  feu02 = feuEtat_1;
  _out->feu2 = feu02;
  v_15 = !(feu02);
  prop8 = (v_14||v_15);
  v_5 = (v_4&&prop8);
  v_6 = (v_5&&prop9);
  v_23 = !(feu02);
  prop3 = (v_22||v_23);
  switch (self->ck_13) {
    case Train_controller__St_9_Vert:
      if (aiguillageHaut_5) {
        s_6_St_9_Vert = Train_controller__St_9_Rouge;
        r_6_St_9_Vert = true;
      } else {
        s_6_St_9_Vert = Train_controller__St_9_Vert;
        r_6_St_9_Vert = self->pnr_6;
      };
      s_6 = s_6_St_9_Vert;
      r_6 = r_6_St_9_Vert;
      break;
    case Train_controller__St_9_Rouge:
      if (aiguillageBas_5) {
        s_6_St_9_Rouge = Train_controller__St_9_Vert;
      } else {
        s_6_St_9_Rouge = Train_controller__St_9_Rouge;
      };
      s_6 = s_6_St_9_Rouge;
      if (aiguillageBas_5) {
        r_6_St_9_Rouge = true;
      } else {
        r_6_St_9_Rouge = self->pnr_6;
      };
      r_6 = r_6_St_9_Rouge;
      break;
    default:
      break;
  };
  ck_14 = s_6;
  switch (ck_14) {
    case Train_controller__St_9_Vert:
      ns_6_St_9_Vert = Train_controller__St_9_Vert;
      nr_6_St_9_Vert = false;
      feuEtat_3_St_9_Vert = true;
      ns_6 = ns_6_St_9_Vert;
      nr_6 = nr_6_St_9_Vert;
      feuEtat_3 = feuEtat_3_St_9_Vert;
      break;
    case Train_controller__St_9_Rouge:
      ns_6_St_9_Rouge = Train_controller__St_9_Rouge;
      ns_6 = ns_6_St_9_Rouge;
      nr_6_St_9_Rouge = false;
      nr_6 = nr_6_St_9_Rouge;
      feuEtat_3_St_9_Rouge = false;
      feuEtat_3 = feuEtat_3_St_9_Rouge;
      break;
    default:
      break;
  };
  feu4 = feuEtat_3;
  _out->feuGare2 = feu4;
  v_9 = !(feu4);
  prop10 = (v_8||v_9);
  _out->property = (v_6&&prop10);
  self->ck = ns_11;
  self->pnr_11 = nr_11;
  self->ck_5 = ns_10;
  self->pnr_10 = nr_10;
  self->ck_7 = ns_9;
  self->pnr_9 = nr_9;
  self->ck_9 = ns_8;
  self->pnr_8 = nr_8;
  self->ck_11 = ns_7;
  self->pnr_7 = nr_7;
  self->ck_13 = ns_6;
  self->pnr_6 = nr_6;
  self->ck_15 = ns_5;
  self->pnr_5 = nr_5;
  self->ck_17 = ns_4;
  self->pnr_4 = nr_4;
  self->ck_19 = ns_3;
  self->pnr_3 = nr_3;
  self->ck_21 = ns_2;
  self->pnr_2 = nr_2;
  self->ck_23 = ns_1;
  self->pnr_1 = nr_1;
  self->ck_25 = ns;
  self->pnr = nr;;
}

