/* --- Generated the 24/3/2016 at 16:35 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. feb. 11 18:24:22 CET 2016) --- */
/* --- Command line: /usr/local/bin/heptc -hepts -s alarme -target c -target ctrln alarme.ept --- */

#ifndef ALARME_H
#define ALARME_H

#include "alarme_types.h"
#include "alarme_controller.h"
typedef struct Alarme__alarme_mem {
  int v_11;
  int v_14;
  int v_22;
  Alarme_controller__st ck;
  int pnr;
  int reprise_1;
  int vigilence_1;
  int temps_1;
} Alarme__alarme_mem;

typedef struct Alarme__alarme_out {
  int al;
  Alarme_controller__etat enMarche;
} Alarme__alarme_out;

void Alarme__alarme_reset(Alarme__alarme_mem* self);

void Alarme__alarme_step(int ma, int code, int pbGar, int pbHab,
                         int dReprise, int dVigilence, int dAlarme,
                         Alarme__alarme_out* _out, Alarme__alarme_mem* self);

#endif // ALARME_H
