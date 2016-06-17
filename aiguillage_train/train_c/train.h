/* --- Generated the 17/6/2016 at 14:9 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -target c -target ctrln train.ept --- */

#ifndef TRAIN_H
#define TRAIN_H

#include "train_types.h"
#include "train_controller.h"
typedef struct Train__aiguillage_mem {
  Train_controller__st ck;
  int pnr;
} Train__aiguillage_mem;

typedef struct Train__aiguillage_out {
  int aiguillageHaut;
  int aiguillageBas;
} Train__aiguillage_out;

void Train__aiguillage_reset(Train__aiguillage_mem* self);

void Train__aiguillage_step(int demandeActionnerAigHaut,
                            int demandeActionnerAigBas,
                            Train__aiguillage_out* _out,
                            Train__aiguillage_mem* self);

typedef struct Train__feu_mem {
  Train_controller__st_1 ck;
  int pnr;
} Train__feu_mem;

typedef struct Train__feu_out {
  int feuEtat;
} Train__feu_out;

void Train__feu_reset(Train__feu_mem* self);

void Train__feu_step(int aiguillageHaut, int aiguillageBas,
                     Train__feu_out* _out, Train__feu_mem* self);

typedef struct Train__presence_mem {
  Train_controller__st_2 ck;
  int pnr;
} Train__presence_mem;

typedef struct Train__presence_out {
  int presenceResult;
} Train__presence_out;

void Train__presence_reset(Train__presence_mem* self);

void Train__presence_step(int presenceNiveau, Train__presence_out* _out,
                          Train__presence_mem* self);

typedef struct Train__train_mem {
  Train_controller__st_14 ck;
  Train_controller__st_13 ck_5;
  Train_controller__st_12 ck_7;
  Train_controller__st_11 ck_9;
  Train_controller__st_10 ck_11;
  Train_controller__st_9 ck_13;
  Train_controller__st_8 ck_15;
  Train_controller__st_7 ck_17;
  Train_controller__st_6 ck_19;
  Train_controller__st_5 ck_21;
  Train_controller__st_4 ck_23;
  Train_controller__st_3 ck_25;
  int pnr_11;
  int pnr_10;
  int pnr_9;
  int pnr_8;
  int pnr_7;
  int pnr_6;
  int pnr_5;
  int pnr_4;
  int pnr_3;
  int pnr_2;
  int pnr_1;
  int pnr;
} Train__train_mem;

typedef struct Train__train_out {
  int aiguillage1Haut;
  int aiguillage1Bas;
  int aiguillage2Haut;
  int aiguillage2Bas;
  int feu1;
  int feu2;
  int feuGare1;
  int feuGare2;
  int property;
} Train__train_out;

void Train__train_reset(Train__train_mem* self);

void Train__train_step(int presenceSection1, int presenceAiguillage1,
                       int presenceAiguillage2, int presenceGare1,
                       int presenceGare2, int presenceSection2,
                       Train__train_out* _out, Train__train_mem* self);

#endif // TRAIN_H
