/* --- Generated the 26/5/2016 at 13:14 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -target c train_controller.ept --- */

#ifndef TRAIN_CONTROLLER_H
#define TRAIN_CONTROLLER_H

#include "train_controller_types.h"
typedef struct Train_controller__train_ctrlr0_out {
  int demandeActionnerAig1Bas;
  int demandeActionnerAig1Haut;
  int demandeActionnerAig2Bas;
  int demandeActionnerAig2Haut;
} Train_controller__train_ctrlr0_out;

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
                                         Train_controller__train_ctrlr0_out* _out);

#endif // TRAIN_CONTROLLER_H
