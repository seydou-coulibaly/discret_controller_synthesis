/* --- Generated the 26/5/2016 at 12:11 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -target c -target ctrln essai.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "essai.h"

void Essai__presence_reset(Essai__presence_mem* self) {
  self->ck = Essai_controller__St_Nothing;
  self->pnr = false;
}

void Essai__presence_step(int presence, Essai__presence_out* _out,
                          Essai__presence_mem* self) {
  
  int v;
  int r_St_Presence;
  Essai_controller__st s_St_Presence;
  int r_St_Nothing;
  Essai_controller__st s_St_Nothing;
  int nr_St_Presence;
  Essai_controller__st ns_St_Presence;
  int occuper_St_Presence;
  int nr_St_Nothing;
  Essai_controller__st ns_St_Nothing;
  int occuper_St_Nothing;
  Essai_controller__st ck_1;
  Essai_controller__st s;
  Essai_controller__st ns;
  int r;
  int nr;
  switch (self->ck) {
    case Essai_controller__St_Presence:
      v = !(presence);
      if (v) {
        s_St_Presence = Essai_controller__St_Nothing;
        r_St_Presence = true;
      } else {
        s_St_Presence = Essai_controller__St_Presence;
        r_St_Presence = self->pnr;
      };
      s = s_St_Presence;
      r = r_St_Presence;
      break;
    case Essai_controller__St_Nothing:
      if (presence) {
        s_St_Nothing = Essai_controller__St_Presence;
      } else {
        s_St_Nothing = Essai_controller__St_Nothing;
      };
      s = s_St_Nothing;
      if (presence) {
        r_St_Nothing = true;
      } else {
        r_St_Nothing = self->pnr;
      };
      r = r_St_Nothing;
      break;
    default:
      break;
  };
  ck_1 = s;
  switch (ck_1) {
    case Essai_controller__St_Presence:
      ns_St_Presence = Essai_controller__St_Presence;
      nr_St_Presence = false;
      occuper_St_Presence = true;
      ns = ns_St_Presence;
      nr = nr_St_Presence;
      _out->occuper = occuper_St_Presence;
      break;
    case Essai_controller__St_Nothing:
      ns_St_Nothing = Essai_controller__St_Nothing;
      ns = ns_St_Nothing;
      nr_St_Nothing = false;
      nr = nr_St_Nothing;
      occuper_St_Nothing = false;
      _out->occuper = occuper_St_Nothing;
      break;
    default:
      break;
  };
  self->ck = ns;
  self->pnr = nr;;
}

void Essai__ascenseur_reset(Essai__ascenseur_mem* self) {
  self->ck = Essai_controller__St_1_Stop;
  self->pnr = false;
}

void Essai__ascenseur_step(int demandeEtage, int arriveEtage,
                           Essai__ascenseur_out* _out,
                           Essai__ascenseur_mem* self) {
  
  int v_1;
  int v;
  int r_St_1_Mouvement;
  Essai_controller__st_1 s_St_1_Mouvement;
  int r_St_1_Stop;
  Essai_controller__st_1 s_St_1_Stop;
  int nr_St_1_Mouvement;
  Essai_controller__st_1 ns_St_1_Mouvement;
  int etat_St_1_Mouvement;
  int nr_St_1_Stop;
  Essai_controller__st_1 ns_St_1_Stop;
  int etat_St_1_Stop;
  Essai_controller__st_1 ck_2;
  Essai_controller__st_1 s;
  Essai_controller__st_1 ns;
  int r;
  int nr;
  switch (self->ck) {
    case Essai_controller__St_1_Mouvement:
      v = !(demandeEtage);
      v_1 = (v||arriveEtage);
      if (v_1) {
        s_St_1_Mouvement = Essai_controller__St_1_Stop;
        r_St_1_Mouvement = true;
      } else {
        s_St_1_Mouvement = Essai_controller__St_1_Mouvement;
        r_St_1_Mouvement = self->pnr;
      };
      s = s_St_1_Mouvement;
      r = r_St_1_Mouvement;
      break;
    case Essai_controller__St_1_Stop:
      if (demandeEtage) {
        s_St_1_Stop = Essai_controller__St_1_Mouvement;
      } else {
        s_St_1_Stop = Essai_controller__St_1_Stop;
      };
      s = s_St_1_Stop;
      if (demandeEtage) {
        r_St_1_Stop = true;
      } else {
        r_St_1_Stop = self->pnr;
      };
      r = r_St_1_Stop;
      break;
    default:
      break;
  };
  ck_2 = s;
  switch (ck_2) {
    case Essai_controller__St_1_Mouvement:
      ns_St_1_Mouvement = Essai_controller__St_1_Mouvement;
      nr_St_1_Mouvement = false;
      etat_St_1_Mouvement = true;
      ns = ns_St_1_Mouvement;
      nr = nr_St_1_Mouvement;
      _out->etat = etat_St_1_Mouvement;
      break;
    case Essai_controller__St_1_Stop:
      ns_St_1_Stop = Essai_controller__St_1_Stop;
      ns = ns_St_1_Stop;
      nr_St_1_Stop = false;
      nr = nr_St_1_Stop;
      etat_St_1_Stop = false;
      _out->etat = etat_St_1_Stop;
      break;
    default:
      break;
  };
  self->ck = ns;
  self->pnr = nr;;
}

void Essai__essai_reset(Essai__essai_mem* self) {
  self->ck = Essai_controller__St_3_Nothing;
  self->pnr_1 = false;
  self->ck_4 = Essai_controller__St_2_Stop;
  self->pnr = false;
}

void Essai__essai_step(int presenceMaison, Essai__essai_out* _out,
                       Essai__essai_mem* self) {
  Essai_controller__essai_ctrlr0_out Essai_controller__essai_ctrlr0_out_st;
  
  int entree;
  int sortie;
  int ok;
  int v_2;
  int r_1_St_3_Presence;
  Essai_controller__st_3 s_1_St_3_Presence;
  int r_1_St_3_Nothing;
  Essai_controller__st_3 s_1_St_3_Nothing;
  int nr_1_St_3_Presence;
  Essai_controller__st_3 ns_1_St_3_Presence;
  int occuper_St_3_Presence;
  int nr_1_St_3_Nothing;
  Essai_controller__st_3 ns_1_St_3_Nothing;
  int occuper_St_3_Nothing;
  Essai_controller__st_3 ck_3;
  int v_4;
  int v_3;
  int r_St_2_Mouvement;
  Essai_controller__st_2 s_St_2_Mouvement;
  int r_St_2_Stop;
  Essai_controller__st_2 s_St_2_Stop;
  int nr_St_2_Mouvement;
  Essai_controller__st_2 ns_St_2_Mouvement;
  int etat_St_2_Mouvement;
  int nr_St_2_Stop;
  Essai_controller__st_2 ns_St_2_Stop;
  int etat_St_2_Stop;
  Essai_controller__st_2 ck_5;
  int v;
  Essai_controller__st_3 s_1;
  Essai_controller__st_3 ns_1;
  int r_1;
  int nr_1;
  Essai_controller__st_2 s;
  Essai_controller__st_2 ns;
  int r;
  int nr;
  int demandeEtage;
  int arriveEtage;
  int etat;
  int presence;
  int occuper;
  int m;
  int l;
  presence = presenceMaison;
  switch (self->ck) {
    case Essai_controller__St_3_Presence:
      v_2 = !(presence);
      if (v_2) {
        s_1_St_3_Presence = Essai_controller__St_3_Nothing;
        r_1_St_3_Presence = true;
      } else {
        s_1_St_3_Presence = Essai_controller__St_3_Presence;
        r_1_St_3_Presence = self->pnr_1;
      };
      s_1 = s_1_St_3_Presence;
      r_1 = r_1_St_3_Presence;
      break;
    case Essai_controller__St_3_Nothing:
      if (presence) {
        s_1_St_3_Nothing = Essai_controller__St_3_Presence;
      } else {
        s_1_St_3_Nothing = Essai_controller__St_3_Nothing;
      };
      s_1 = s_1_St_3_Nothing;
      if (presence) {
        r_1_St_3_Nothing = true;
      } else {
        r_1_St_3_Nothing = self->pnr_1;
      };
      r_1 = r_1_St_3_Nothing;
      break;
    default:
      break;
  };
  ck_3 = s_1;
  switch (ck_3) {
    case Essai_controller__St_3_Presence:
      ns_1_St_3_Presence = Essai_controller__St_3_Presence;
      nr_1_St_3_Presence = false;
      occuper_St_3_Presence = true;
      ns_1 = ns_1_St_3_Presence;
      nr_1 = nr_1_St_3_Presence;
      occuper = occuper_St_3_Presence;
      break;
    case Essai_controller__St_3_Nothing:
      ns_1_St_3_Nothing = Essai_controller__St_3_Nothing;
      ns_1 = ns_1_St_3_Nothing;
      nr_1_St_3_Nothing = false;
      nr_1 = nr_1_St_3_Nothing;
      occuper_St_3_Nothing = false;
      occuper = occuper_St_3_Nothing;
      break;
    default:
      break;
  };
  m = occuper;
  _out->y = m;
  Essai_controller__essai_ctrlr0_step(self->ck, self->ck_4, ok, self->pnr,
                                      self->pnr_1, presenceMaison,
                                      &Essai_controller__essai_ctrlr0_out_st);
  entree = Essai_controller__essai_ctrlr0_out_st.entree;
  sortie = Essai_controller__essai_ctrlr0_out_st.sortie;
  arriveEtage = sortie;
  demandeEtage = entree;
  switch (self->ck_4) {
    case Essai_controller__St_2_Mouvement:
      v_3 = !(demandeEtage);
      v_4 = (v_3||arriveEtage);
      if (v_4) {
        s_St_2_Mouvement = Essai_controller__St_2_Stop;
        r_St_2_Mouvement = true;
      } else {
        s_St_2_Mouvement = Essai_controller__St_2_Mouvement;
        r_St_2_Mouvement = self->pnr;
      };
      s = s_St_2_Mouvement;
      r = r_St_2_Mouvement;
      break;
    case Essai_controller__St_2_Stop:
      if (demandeEtage) {
        s_St_2_Stop = Essai_controller__St_2_Mouvement;
      } else {
        s_St_2_Stop = Essai_controller__St_2_Stop;
      };
      s = s_St_2_Stop;
      if (demandeEtage) {
        r_St_2_Stop = true;
      } else {
        r_St_2_Stop = self->pnr;
      };
      r = r_St_2_Stop;
      break;
    default:
      break;
  };
  ck_5 = s;
  switch (ck_5) {
    case Essai_controller__St_2_Mouvement:
      ns_St_2_Mouvement = Essai_controller__St_2_Mouvement;
      nr_St_2_Mouvement = false;
      etat_St_2_Mouvement = true;
      ns = ns_St_2_Mouvement;
      nr = nr_St_2_Mouvement;
      etat = etat_St_2_Mouvement;
      break;
    case Essai_controller__St_2_Stop:
      ns_St_2_Stop = Essai_controller__St_2_Stop;
      ns = ns_St_2_Stop;
      nr_St_2_Stop = false;
      nr = nr_St_2_Stop;
      etat_St_2_Stop = false;
      etat = etat_St_2_Stop;
      break;
    default:
      break;
  };
  l = etat;
  v = !(l);
  _out->property = (m||v);
  self->ck = ns_1;
  self->pnr_1 = nr_1;
  self->ck_4 = ns;
  self->pnr = nr;;
}

