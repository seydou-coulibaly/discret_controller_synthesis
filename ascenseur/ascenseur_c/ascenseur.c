/* --- Generated the 14/4/2016 at 17:39 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. feb. 11 18:24:22 CET 2016) --- */
/* --- Command line: /usr/local/bin/heptc -hepts -s ascenseur -target c -target ctrln ascenseur.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ascenseur.h"

void Ascenseur__ascenseur_reset(Ascenseur__ascenseur_mem* self) {
  self->pnr = false;
  self->compteur_1 = 0;
  self->v_8 = 0;
  self->v_11 = 0;
  self->v_14 = 0;
  self->ck = Ascenseur_controller__St_Stop;
}

void Ascenseur__ascenseur_step(int presence, int presenceEtageCourant,
                               int demandeEtage, int arriveEtage,
                               int secondo, Ascenseur__ascenseur_out* _out,
                               Ascenseur__ascenseur_mem* self) {
  Ascenseur_controller__ascenseur_ctrlr0_out Ascenseur_controller__ascenseur_ctrlr0_out_st;
  
  int c;
  int ok;
  int v_7;
  int v_6;
  Ascenseur_controller__st v_5;
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int v;
  int v_10;
  int v_9;
  int v_13;
  int v_12;
  int nr_St_Mouvement;
  Ascenseur_controller__st ns_St_Mouvement;
  int compteur_St_Mouvement;
  Ascenseur_controller__stat etat_St_Mouvement;
  int nr_St_Shut;
  Ascenseur_controller__st ns_St_Shut;
  int compteur_St_Shut;
  Ascenseur_controller__stat etat_St_Shut;
  int nr_St_Open;
  Ascenseur_controller__st ns_St_Open;
  int compteur_St_Open;
  Ascenseur_controller__stat etat_St_Open;
  int nr_St_Stop;
  Ascenseur_controller__st ns_St_Stop;
  int compteur_St_Stop;
  Ascenseur_controller__stat etat_St_Stop;
  Ascenseur_controller__st ns;
  int r;
  int nr;
  int compteur;
  r = self->pnr;
  switch (self->ck) {
    case Ascenseur_controller__St_Mouvement:
      if (arriveEtage) {
        ns_St_Mouvement = Ascenseur_controller__St_Stop;
        nr_St_Mouvement = true;
      } else {
        ns_St_Mouvement = Ascenseur_controller__St_Mouvement;
        nr_St_Mouvement = false;
      };
      compteur_St_Mouvement = self->compteur_1;
      etat_St_Mouvement = Ascenseur_controller__EnMouvement;
      compteur = compteur_St_Mouvement;
      ns = ns_St_Mouvement;
      nr = nr_St_Mouvement;
      _out->etat = etat_St_Mouvement;
      break;
    case Ascenseur_controller__St_Shut:
      v_2 = !(presence);
      v_3 = (v_2&&demandeEtage);
      if (r) {
        compteur_St_Shut = 0;
      } else {
        compteur_St_Shut = self->v_8;
      };
      etat_St_Shut = Ascenseur_controller__Fermer;
      compteur = compteur_St_Shut;
      v = (secondo>=compteur);
      v_1 = (presence&&v);
      v_4 = (v_1||v_3);
      if (v_4) {
        v_5 = Ascenseur_controller__St_Mouvement;
      } else {
        v_5 = Ascenseur_controller__St_Shut;
      };
      if (presenceEtageCourant) {
        ns_St_Shut = Ascenseur_controller__St_Open;
      } else {
        ns_St_Shut = v_5;
      };
      if (v_4) {
        v_6 = true;
      } else {
        v_6 = false;
      };
      if (presenceEtageCourant) {
        nr_St_Shut = true;
      } else {
        nr_St_Shut = v_6;
      };
      v_7 = (compteur+1);
      ns = ns_St_Shut;
      nr = nr_St_Shut;
      _out->etat = etat_St_Shut;
      break;
    case Ascenseur_controller__St_Open:
      if (r) {
        compteur_St_Open = 0;
      } else {
        compteur_St_Open = self->v_11;
      };
      etat_St_Open = Ascenseur_controller__Ouvert;
      compteur = compteur_St_Open;
      v_9 = (secondo>=compteur);
      if (v_9) {
        ns_St_Open = Ascenseur_controller__St_Shut;
        nr_St_Open = true;
      } else {
        ns_St_Open = Ascenseur_controller__St_Open;
        nr_St_Open = false;
      };
      v_10 = (compteur+1);
      ns = ns_St_Open;
      nr = nr_St_Open;
      _out->etat = etat_St_Open;
      break;
    case Ascenseur_controller__St_Stop:
      if (r) {
        compteur_St_Stop = 0;
      } else {
        compteur_St_Stop = self->v_14;
      };
      compteur = compteur_St_Stop;
      v_12 = (secondo>=compteur);
      if (v_12) {
        ns_St_Stop = Ascenseur_controller__St_Open;
      } else {
        ns_St_Stop = Ascenseur_controller__St_Stop;
      };
      ns = ns_St_Stop;
      if (v_12) {
        nr_St_Stop = true;
      } else {
        nr_St_Stop = false;
      };
      nr = nr_St_Stop;
      v_13 = (compteur+1);
      etat_St_Stop = Ascenseur_controller__Arret;
      _out->etat = etat_St_Stop;
      break;
    default:
      break;
  };
  Ascenseur_controller__ascenseur_ctrlr0_step(arriveEtage, self->ck,
                                              self->compteur_1, demandeEtage,
                                              ok, self->pnr, presence,
                                              presenceEtageCourant, secondo,
                                              self->v_11, self->v_14,
                                              self->v_8,
                                              &Ascenseur_controller__ascenseur_ctrlr0_out_st);
  c = Ascenseur_controller__ascenseur_ctrlr0_out_st.c;
  self->pnr = nr;
  self->compteur_1 = compteur;
  switch (self->ck) {
    case Ascenseur_controller__St_Shut:
      self->v_8 = v_7;
      break;
    case Ascenseur_controller__St_Open:
      self->v_11 = v_10;
      break;
    case Ascenseur_controller__St_Stop:
      self->v_14 = v_13;
      break;
    default:
      break;
  };
  self->ck = ns;;
}

