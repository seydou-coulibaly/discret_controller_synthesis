/* --- Generated the 30/5/2016 at 2:10 --- */
/* --- heptagon compiler, version 1.03.00 (compiled wed. may. 25 11:31:53 CET 2016) --- */
/* --- Command line: /home/sey/.opam/4.02.3/bin/heptc -target c automobile_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "automobile_controller.h"

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
                                                   Automobile_controller__automobile_ctrlr0_out* _out) {
  
  int v_1;
  int l0;
  _out->con = true;
  _out->cclose = true;
  _out->td = true;
  _out->ti = true;
  _out->cp = true;
  _out->frein = true;
  _out->accelerateur = true;
  _out->i = true;
  _out->c = true;
  _out->v = true;
  _out->p = true;
  _out->boiteDeVitesse = Automobile_controller__Un;
  v_1 = (lumiere==Automobile_controller__Null);
  l0 = !(v_1);
  _out->normal = l0;
  _out->jour = _out->normal;
  _out->nuit = _out->normal;;
}

