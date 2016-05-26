/* --- Generated the 26/5/2016 at 18:11 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -target c automobile_controller.ept --- */

#ifndef AUTOMOBILE_CONTROLLER_H
#define AUTOMOBILE_CONTROLLER_H

#include "automobile_controller_types.h"
typedef struct Automobile_controller__automobile_ctrlr0_out {
  int accelerateur;
  Automobile_controller__numero boiteDeVitesse;
  int cclose;
  int con;
  int cp;
  int frein;
  int jour;
  int normal;
  int nuit;
  int td;
  int ti;
} Automobile_controller__automobile_ctrlr0_out;

void Automobile_controller__automobile_ctrlr0_step(Automobile_controller__couleur capteurDectecteurFeu,
                                                   int capteurPluie,
                                                   float capteurTemperature,
                                                   Automobile_controller__st_19 ck,
                                                   Automobile_controller__st_18 ck_12,
                                                   Automobile_controller__st_17 ck_14,
                                                   Automobile_controller__st_16 ck_16,
                                                   Automobile_controller__st_15 ck_18,
                                                   Automobile_controller__st_14 ck_20,
                                                   Automobile_controller__st_13 ck_22,
                                                   Automobile_controller__st_12 ck_24,
                                                   Automobile_controller__st_11 ck_26,
                                                   Automobile_controller__st_10 ck_28,
                                                   int cleVoiture,
                                                   int commandeVoiture,
                                                   Automobile_controller__lum densitePluie,
                                                   int desactiveRegulateurTemperature,
                                                   int detectionAccident,
                                                   int detectionAngleMort,
                                                   int detectionDefaillanceTechnique,
                                                   int detectionLigne,
                                                   int detectionPresencePieton,
                                                   int detectionPresencevehicule,
                                                   int detectionVolantLibre,
                                                   Automobile_controller__lum lumiere,
                                                   int ok, int pnr,
                                                   int pnr_1, int pnr_2,
                                                   int pnr_3, int pnr_4,
                                                   int pnr_5, int pnr_6,
                                                   int pnr_7, int pnr_8,
                                                   int pnr_9,
                                                   Automobile_controller__automobile_ctrlr0_out* _out);

#endif // AUTOMOBILE_CONTROLLER_H
