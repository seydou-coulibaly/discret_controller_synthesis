/* --- Generated the 26/5/2016 at 18:11 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -hepts -s automobile -target c -target ctrln automobile.ept --- */

#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H

#include "automobile_types.h"
#include "automobile_controller.h"
typedef struct Automobile__moteur_mem {
  Automobile_controller__st ck;
  int pnr;
} Automobile__moteur_mem;

typedef struct Automobile__moteur_out {
  int etat;
} Automobile__moteur_out;

void Automobile__moteur_reset(Automobile__moteur_mem* self);

void Automobile__moteur_step(int commande, int cle,
                             Automobile__moteur_out* _out,
                             Automobile__moteur_mem* self);

typedef struct Automobile__vitesse_mem {
  Automobile_controller__st_1 ck;
  int pnr;
} Automobile__vitesse_mem;

typedef struct Automobile__vitesse_out {
  Automobile_controller__numero num;
} Automobile__vitesse_out;

void Automobile__vitesse_reset(Automobile__vitesse_mem* self);

void Automobile__vitesse_step(Automobile_controller__numero boiteDeVitesse,
                              Automobile__vitesse_out* _out,
                              Automobile__vitesse_mem* self);

typedef struct Automobile__acceleration_mem {
  Automobile_controller__st_2 ck;
  int pnr;
} Automobile__acceleration_mem;

typedef struct Automobile__acceleration_out {
  int avance;
} Automobile__acceleration_out;

void Automobile__acceleration_reset(Automobile__acceleration_mem* self);

void Automobile__acceleration_step(int frein, int accelerateur,
                                   Automobile__acceleration_out* _out,
                                   Automobile__acceleration_mem* self);

typedef struct Automobile__retroviseurs_mem {
  Automobile_controller__st_3 ck;
  int pnr;
} Automobile__retroviseurs_mem;

typedef struct Automobile__retroviseurs_out {
  int gerer;
  Automobile_controller__retro sortie;
} Automobile__retroviseurs_out;

void Automobile__retroviseurs_reset(Automobile__retroviseurs_mem* self);

void Automobile__retroviseurs_step(int normal, int jour, int nuit,
                                   Automobile__retroviseurs_out* _out,
                                   Automobile__retroviseurs_mem* self);

typedef struct Automobile__essuieGlace_mem {
  Automobile_controller__st_4 ck;
  int pnr;
} Automobile__essuieGlace_mem;

typedef struct Automobile__essuieGlace_out {
  Automobile_controller__typeBalayage etat;
} Automobile__essuieGlace_out;

void Automobile__essuieGlace_reset(Automobile__essuieGlace_mem* self);

void Automobile__essuieGlace_step(int con, int cclose,
                                  Automobile_controller__lum densite,
                                  Automobile__essuieGlace_out* _out,
                                  Automobile__essuieGlace_mem* self);

typedef struct Automobile__accident_mem {
  Automobile_controller__st_5 ck;
  int pnr;
} Automobile__accident_mem;

typedef struct Automobile__accident_out {
  int airbag;
  int emissionAppelUrgence;
} Automobile__accident_out;

void Automobile__accident_reset(Automobile__accident_mem* self);

void Automobile__accident_step(int detectionAccident,
                               Automobile__accident_out* _out,
                               Automobile__accident_mem* self);

typedef struct Automobile__avertissement_mem {
  Automobile_controller__st_6 ck;
  int pnr;
} Automobile__avertissement_mem;

typedef struct Automobile__avertissement_out {
  int depassementLigne;
  int volantLibre;
  int defaillanceTechnique;
  int dangerAngleMort;
} Automobile__avertissement_out;

void Automobile__avertissement_reset(Automobile__avertissement_mem* self);

void Automobile__avertissement_step(int detectionDepassementLigne,
                                    int detectionVolantLibre,
                                    int detectionDefaillanceTechnique,
                                    int detectionVehiculeAngleMort,
                                    Automobile__avertissement_out* _out,
                                    Automobile__avertissement_mem* self);

typedef struct Automobile__securite_mem {
  Automobile_controller__st_7 ck;
  int pnr;
} Automobile__securite_mem;

typedef struct Automobile__securite_out {
  int frein;
  Automobile_controller__cause causeFreinage;
} Automobile__securite_out;

void Automobile__securite_reset(Automobile__securite_mem* self);

void Automobile__securite_step(int presencePieton, int presencevehicule,
                               Automobile_controller__couleur feu,
                               Automobile__securite_out* _out,
                               Automobile__securite_mem* self);

typedef struct Automobile__temperature_mem {
  Automobile_controller__st_8 ck;
  int pnr;
} Automobile__temperature_mem;

typedef struct Automobile__temperature_out {
  float qt;
  int etat;
} Automobile__temperature_out;

void Automobile__temperature_reset(Automobile__temperature_mem* self);

void Automobile__temperature_step(int deactivated, float capteur,
                                  Automobile__temperature_out* _out,
                                  Automobile__temperature_mem* self);

typedef struct Automobile__controleurPhares_mem {
  Automobile_controller__st_9 ck;
  int pnr;
} Automobile__controleurPhares_mem;

typedef struct Automobile__controleurPhares_out {
  int codes;
  int phares;
  int veilleuses;
  Automobile_controller__etatPhares etat;
} Automobile__controleurPhares_out;

void Automobile__controleurPhares_reset(Automobile__controleurPhares_mem* self);

void Automobile__controleurPhares_step(int tdn, int tin, int cpn,
                                       Automobile__controleurPhares_out* _out,
                                       Automobile__controleurPhares_mem* self);

typedef struct Automobile__automobile_mem {
  Automobile_controller__st_19 ck;
  Automobile_controller__st_18 ck_12;
  Automobile_controller__st_17 ck_14;
  Automobile_controller__st_16 ck_16;
  Automobile_controller__st_15 ck_18;
  Automobile_controller__st_14 ck_20;
  Automobile_controller__st_13 ck_22;
  Automobile_controller__st_12 ck_24;
  Automobile_controller__st_11 ck_26;
  Automobile_controller__st_10 ck_28;
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
} Automobile__automobile_mem;

typedef struct Automobile__automobile_out {
  int moteur;
  int avance;
  int retroviseurActive;
  int etatRegulateurTemperature;
  int accident;
  int ligne;
  int volantLibre;
  int defaillanceTechnique;
  int angleMort;
  int freinage;
  int property;
  Automobile_controller__cause causeFreinage;
  Automobile_controller__numero vitesses;
  float quantiteRegule;
  Automobile_controller__etatPhares phares;
  Automobile_controller__retro retroviseurStatus;
  Automobile_controller__typeBalayage essuieGlace;
} Automobile__automobile_out;

void Automobile__automobile_reset(Automobile__automobile_mem* self);

void Automobile__automobile_step(int cleVoiture, int commandeVoiture,
                                 int capteurPluie, int detectionAccident,
                                 int detectionLigne,
                                 int detectionVolantLibre,
                                 int detectionDefaillanceTechnique,
                                 int detectionAngleMort,
                                 int detectionPresencePieton,
                                 int detectionPresencevehicule,
                                 int desactiveRegulateurTemperature,
                                 Automobile_controller__lum lumiere,
                                 Automobile_controller__lum densitePluie,
                                 float capteurTemperature,
                                 Automobile_controller__couleur capteurDectecteurFeu,
                                 Automobile__automobile_out* _out,
                                 Automobile__automobile_mem* self);

#endif // AUTOMOBILE_H
