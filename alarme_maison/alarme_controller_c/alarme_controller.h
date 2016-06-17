/* --- Generated the 24/3/2016 at 16:35 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. feb. 11 18:24:22 CET 2016) --- */
/* --- Command line: /usr/local/bin/heptc -target c alarme_controller.ept --- */

#ifndef ALARME_CONTROLLER_H
#define ALARME_CONTROLLER_H

#include "alarme_controller_types.h"
typedef struct Alarme_controller__alarme_ctrlr0_out {
  int c;
} Alarme_controller__alarme_ctrlr0_out;

void Alarme_controller__alarme_ctrlr0_step(Alarme_controller__st ck,
                                           int code, int dAlarme,
                                           int dReprise, int dVigilence,
                                           int ma, int ok, int pbGar,
                                           int pbHab, int pnr, int reprise_1,
                                           int temps_1, int v_11, int v_14,
                                           int v_22, int vigilence_1,
                                           Alarme_controller__alarme_ctrlr0_out* _out);

#endif // ALARME_CONTROLLER_H
