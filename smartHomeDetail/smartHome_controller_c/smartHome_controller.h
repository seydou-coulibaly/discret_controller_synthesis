/* --- Generated the 26/5/2016 at 13:5 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -target c smartHome_controller.ept --- */

#ifndef SMARTHOME_CONTROLLER_H
#define SMARTHOME_CONTROLLER_H

#include "smartHome_controller_types.h"
typedef struct SmartHome_controller__smartHome_ctrlr0_out {
  int arriveEtage;
  int close;
  int coff;
  int con;
  int copen;
  int demandeEtage;
  int interrupteur;
  int marcheArret;
  int openBarriere;
  int openPorte;
} SmartHome_controller__smartHome_ctrlr0_out;

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
                                                 int luminosite, int ok,
                                                 int pnr, int pnr_1,
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
                                                 int v_173, int v_178,
                                                 int v_186, int vent,
                                                 int vigilence_2,
                                                 SmartHome_controller__smartHome_ctrlr0_out* _out);

#endif // SMARTHOME_CONTROLLER_H
