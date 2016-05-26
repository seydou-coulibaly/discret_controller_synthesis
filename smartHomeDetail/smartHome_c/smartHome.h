/* --- Generated the 26/5/2016 at 13:5 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -hepts -s smartHome -target c -target ctrln smartHome.ept --- */

#ifndef SMARTHOME_H
#define SMARTHOME_H

#include "smartHome_types.h"
#include "smartHome_controller.h"
typedef struct SmartHome__presence_mem {
  SmartHome_controller__st ck;
  int pnr;
} SmartHome__presence_mem;

typedef struct SmartHome__presence_out {
  int occuper;
} SmartHome__presence_out;

void SmartHome__presence_reset(SmartHome__presence_mem* self);

void SmartHome__presence_step(int presence, SmartHome__presence_out* _out,
                              SmartHome__presence_mem* self);

typedef struct SmartHome__sens_mem {
  SmartHome_controller__st_1 ck;
  int pnr;
} SmartHome__sens_mem;

typedef struct SmartHome__sens_out {
  SmartHome_controller__position pos;
} SmartHome__sens_out;

void SmartHome__sens_reset(SmartHome__sens_mem* self);

void SmartHome__sens_step(int presence, int entree, int sortie,
                          SmartHome__sens_out* _out,
                          SmartHome__sens_mem* self);

typedef struct SmartHome__presenceSens_mem {
  SmartHome_controller__st_2 ck;
  int pnr;
} SmartHome__presenceSens_mem;

typedef struct SmartHome__presenceSens_out {
  SmartHome_controller__position pos;
} SmartHome__presenceSens_out;

void SmartHome__presenceSens_reset(SmartHome__presenceSens_mem* self);

void SmartHome__presenceSens_step(int entree, int sortie,
                                  SmartHome__presenceSens_out* _out,
                                  SmartHome__presenceSens_mem* self);

typedef struct SmartHome__lampe_mem {
  SmartHome_controller__st_3 ck;
  int pnr;
} SmartHome__lampe_mem;

typedef struct SmartHome__lampe_out {
  int lumiere;
} SmartHome__lampe_out;

void SmartHome__lampe_reset(SmartHome__lampe_mem* self);

void SmartHome__lampe_step(int interrupteur, SmartHome__lampe_out* _out,
                           SmartHome__lampe_mem* self);

typedef struct SmartHome__poubelle_mem {
  SmartHome_controller__st_4 ck;
  int pnr;
} SmartHome__poubelle_mem;

typedef struct SmartHome__poubelle_out {
  int ouvrir;
} SmartHome__poubelle_out;

void SmartHome__poubelle_reset(SmartHome__poubelle_mem* self);

void SmartHome__poubelle_step(int con, int coff,
                              SmartHome__poubelle_out* _out,
                              SmartHome__poubelle_mem* self);

typedef struct SmartHome__porte_mem {
  SmartHome_controller__st_5 ck;
  int pnr;
} SmartHome__porte_mem;

typedef struct SmartHome__porte_out {
  SmartHome_controller__porte ouvrir;
} SmartHome__porte_out;

void SmartHome__porte_reset(SmartHome__porte_mem* self);

void SmartHome__porte_step(int copen, SmartHome__porte_out* _out,
                           SmartHome__porte_mem* self);

typedef struct SmartHome__stores_mem {
  SmartHome_controller__st_6 ck;
  int pnr;
} SmartHome__stores_mem;

typedef struct SmartHome__stores_out {
  int store;
} SmartHome__stores_out;

void SmartHome__stores_reset(SmartHome__stores_mem* self);

void SmartHome__stores_step(int copen, int close,
                            SmartHome__stores_out* _out,
                            SmartHome__stores_mem* self);

typedef struct SmartHome__alarme_mem {
  SmartHome_controller__st_7 ck;
  int v_31;
  int v_36;
  int v_44;
  int pnr;
  int reprise_1;
  int vigilence_1;
  int temps_1;
} SmartHome__alarme_mem;

typedef struct SmartHome__alarme_out {
  int sonnerAlarme;
  SmartHome_controller__lum enMarche;
} SmartHome__alarme_out;

void SmartHome__alarme_reset(SmartHome__alarme_mem* self);

void SmartHome__alarme_step(int marcheArret, int code, int pbGar, int pbHab,
                            int dReprise, int dVigilence, int dAlarme,
                            SmartHome__alarme_out* _out,
                            SmartHome__alarme_mem* self);

typedef struct SmartHome__ascenseur_mem {
  SmartHome_controller__st_8 ck;
  int pnr;
} SmartHome__ascenseur_mem;

typedef struct SmartHome__ascenseur_out {
  int etat;
} SmartHome__ascenseur_out;

void SmartHome__ascenseur_reset(SmartHome__ascenseur_mem* self);

void SmartHome__ascenseur_step(int demandeEtage, int arriveEtage,
                               SmartHome__ascenseur_out* _out,
                               SmartHome__ascenseur_mem* self);

typedef struct SmartHome__smartHome_mem {
  SmartHome_controller__st_21 ck;
  SmartHome_controller__st_20 ck_11;
  SmartHome_controller__st_19 ck_13;
  SmartHome_controller__st_18 ck_15;
  SmartHome_controller__st_17 ck_17;
  SmartHome_controller__st_16 ck_19;
  SmartHome_controller__st_15 ck_21;
  SmartHome_controller__st_14 ck_23;
  SmartHome_controller__st_13 ck_25;
  SmartHome_controller__st_12 ck_27;
  SmartHome_controller__st_11 ck_29;
  SmartHome_controller__st_10 ck_31;
  int v_173;
  int v_178;
  int v_186;
  SmartHome_controller__st_9 ck_33;
  int pnr_12;
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
  int reprise_2;
  int vigilence_2;
  int temps_2;
} SmartHome__smartHome_mem;

typedef struct SmartHome__smartHome_out {
  int etatMaison;
  int lumiere;
  int poubelleOuvert;
  int ouvertureStore;
  int alarmeSonne;
  int property;
  SmartHome_controller__porte porteStatus;
  SmartHome_controller__porte barriere;
  SmartHome_controller__lum etatAlarme;
  SmartHome_controller__position capteurPositionPorte;
  SmartHome_controller__position capteurPositionBarriere;
  int ascenseur;
} SmartHome__smartHome_out;

void SmartHome__smartHome_reset(SmartHome__smartHome_mem* self);

void SmartHome__smartHome_step(int presenceMaison, int presenceAscenseur,
                               int presenceGarage,
                               int presenceDevantPoubelle, int vent,
                               int luminosite, int codeAlarme, int codePorte,
                               int codeBarriere, int presenceEntreePorte,
                               int presenceSortiePorte,
                               int presenceEntreeBarriere,
                               int presenceSortieBarriere, int dReprise,
                               int dVigilence, int dAlarme,
                               SmartHome__smartHome_out* _out,
                               SmartHome__smartHome_mem* self);

#endif // SMARTHOME_H
