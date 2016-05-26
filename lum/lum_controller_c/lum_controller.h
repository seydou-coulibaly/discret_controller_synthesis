/* --- Generated the 20/5/2016 at 10:14 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. feb. 11 18:24:22 CET 2016) --- */
/* --- Command line: /usr/local/bin/heptc -target c lum_controller.ept --- */

#ifndef LUM_CONTROLLER_H
#define LUM_CONTROLLER_H

#include "lum_controller_types.h"
typedef struct Lum_controller__lum_ctrlr0_out {
  int cclose;
  int coff;
  int con;
  int copen;
} Lum_controller__lum_ctrlr0_out;

void Lum_controller__lum_ctrlr0_step(Lum_controller__st_5 ck,
                                     Lum_controller__st_4 ck_11,
                                     Lum_controller__st_3 ck_14, int ok,
                                     Lum_controller__lumValue outdoorlum,
                                     Lum_controller__lumValue outlumbefore,
                                     int pnr, int pnr_1, int pnr_2,
                                     int presence, int stopdown, int stopup,
                                     Lum_controller__lum_ctrlr0_out* _out);

#endif // LUM_CONTROLLER_H
