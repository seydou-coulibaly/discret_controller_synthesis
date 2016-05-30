/* --- Generated the 29/5/2016 at 10:19 --- */
/* --- heptagon compiler, version 1.03.00 (compiled wed. may. 25 11:31:53 CET 2016) --- */
/* --- Command line: /home/sey/.opam/4.02.3/bin/heptc -target c smartHome_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "smartHome_controller.h"

void SmartHome_controller__smartHome_ctrlr0_step(SmartHome_controller__st_21 ck,
                                                 SmartHome_controller__st_20 ck_11,
                                                 SmartHome_controller__st_19 ck_13,
                                                 SmartHome_controller__st_18 ck_15,
                                                 SmartHome_controller__st_17 ck_17,
                                                 SmartHome_controller__st_16 ck_19,
                                                 SmartHome_controller__st_15 ck_21,
                                                 SmartHome_controller__st_14 ck_23,
                                                 SmartHome_controller__st_13 ck_25,
                                                 SmartHome_controller__st_12 ck_27,
                                                 SmartHome_controller__st_11 ck_29,
                                                 SmartHome_controller__st_10 ck_31,
                                                 SmartHome_controller__st_9 ck_33,
                                                 int codeAlarme,
                                                 int codeBarriere,
                                                 int codePorte, int dAlarme,
                                                 int dReprise,
                                                 int dVigilence,
                                                 int luminosite,
                                                 int marcheArretAlarme,
                                                 int ok, int pnr, int pnr_1,
                                                 int pnr_10, int pnr_11,
                                                 int pnr_12, int pnr_2,
                                                 int pnr_3, int pnr_4,
                                                 int pnr_5, int pnr_6,
                                                 int pnr_7, int pnr_8,
                                                 int pnr_9,
                                                 int presenceAscenseur,
                                                 int presenceDevantPoubelle,
                                                 int presenceEntreeBarriere,
                                                 int presenceEntreePorte,
                                                 int presenceGarage,
                                                 int presenceMaison,
                                                 int presenceSortieBarriere,
                                                 int presenceSortiePorte,
                                                 int reprise_2, int temps_2,
                                                 int v_172, int v_177,
                                                 int v_185, int vent,
                                                 int vigilence_2,
                                                 SmartHome_controller__smartHome_ctrlr0_out* _out) {
  
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
  int l18;
  int l17;
  int l16;
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
  l0 = !(luminosite);
  l1 = (l0||vent);
  _out->interrupteur = (presenceMaison&&l1);
  l2 = !(vent);
  l3 = (luminosite&&l2);
  l4 = (presenceMaison&&l3);
  v_10 = (ck_29==SmartHome_controller__St_11_Fermer);
  v_11 = !(v_10);
  l5 = (v_11||l4);
  _out->copen = l5;
  l6 = !(presenceMaison);
  l7 = (l6||l1);
  v_8 = (ck_29==SmartHome_controller__St_11_Ouvrir);
  v_9 = !(v_8);
  l8 = (v_9||l7);
  _out->close = l8;
  l9 = !(presenceSortiePorte);
  l10 = !(codePorte);
  if (presenceEntreePorte) {
    _out->openPorte = l10;
  } else {
    _out->openPorte = l9;
  };
  l11 = !(presenceSortieBarriere);
  l12 = !(codeBarriere);
  if (presenceEntreeBarriere) {
    _out->openBarriere = l12;
  } else {
    _out->openBarriere = l11;
  };
  v_6 = (ck_19==SmartHome_controller__St_16_Fermer);
  v_7 = !(v_6);
  l13 = (v_7||presenceDevantPoubelle);
  _out->con = l13;
  l14 = !(presenceDevantPoubelle);
  v_4 = (ck_19==SmartHome_controller__St_16_Ouvrir);
  v_5 = !(v_4);
  l15 = (v_5||l14);
  _out->coff = l15;
  v_2 = (ck_33==SmartHome_controller__St_9_Stop);
  v_3 = !(v_2);
  l16 = (v_3||presenceAscenseur);
  _out->demandeEtage = l16;
  l17 = !(presenceAscenseur);
  v = (ck_33==SmartHome_controller__St_9_Mouvement);
  v_1 = !(v);
  l18 = (v_1||l17);
  _out->arriveEtage = l18;;
}

