/* --- Generated the 26/5/2016 at 13:9 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -hepts -s smartHome -target c -target ctrln smartHome.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "smartHome.h"

void SmartHome__presence_reset(SmartHome__presence_mem* self) {
  self->ck = SmartHome_controller__St_Nothing;
  self->pnr = false;
}

void SmartHome__presence_step(int presence, SmartHome__presence_out* _out,
                              SmartHome__presence_mem* self) {
  
  int v;
  int r_St_Presence;
  SmartHome_controller__st s_St_Presence;
  int r_St_Nothing;
  SmartHome_controller__st s_St_Nothing;
  int nr_St_Presence;
  SmartHome_controller__st ns_St_Presence;
  int occuper_St_Presence;
  int nr_St_Nothing;
  SmartHome_controller__st ns_St_Nothing;
  int occuper_St_Nothing;
  SmartHome_controller__st ck_1;
  SmartHome_controller__st s;
  SmartHome_controller__st ns;
  int r;
  int nr;
  switch (self->ck) {
    case SmartHome_controller__St_Presence:
      v = !(presence);
      if (v) {
        s_St_Presence = SmartHome_controller__St_Nothing;
        r_St_Presence = true;
      } else {
        s_St_Presence = SmartHome_controller__St_Presence;
        r_St_Presence = self->pnr;
      };
      s = s_St_Presence;
      r = r_St_Presence;
      break;
    case SmartHome_controller__St_Nothing:
      if (presence) {
        s_St_Nothing = SmartHome_controller__St_Presence;
      } else {
        s_St_Nothing = SmartHome_controller__St_Nothing;
      };
      s = s_St_Nothing;
      if (presence) {
        r_St_Nothing = true;
      } else {
        r_St_Nothing = self->pnr;
      };
      r = r_St_Nothing;
      break;
    default:
      break;
  };
  ck_1 = s;
  switch (ck_1) {
    case SmartHome_controller__St_Presence:
      ns_St_Presence = SmartHome_controller__St_Presence;
      nr_St_Presence = false;
      occuper_St_Presence = true;
      ns = ns_St_Presence;
      nr = nr_St_Presence;
      _out->occuper = occuper_St_Presence;
      break;
    case SmartHome_controller__St_Nothing:
      ns_St_Nothing = SmartHome_controller__St_Nothing;
      ns = ns_St_Nothing;
      nr_St_Nothing = false;
      nr = nr_St_Nothing;
      occuper_St_Nothing = false;
      _out->occuper = occuper_St_Nothing;
      break;
    default:
      break;
  };
  self->ck = ns;
  self->pnr = nr;;
}

void SmartHome__sens_reset(SmartHome__sens_mem* self) {
  self->ck = SmartHome_controller__St_1_NoPresence;
  self->pnr = false;
}

void SmartHome__sens_step(int presence, int entree, int sortie,
                          SmartHome__sens_out* _out,
                          SmartHome__sens_mem* self) {
  
  int v_2;
  SmartHome_controller__st_1 v_1;
  int v;
  int v_8;
  SmartHome_controller__st_1 v_7;
  int v_6;
  int v_5;
  int v_4;
  int v_3;
  int v_12;
  SmartHome_controller__st_1 v_11;
  int v_10;
  int v_9;
  int r_St_1_Arriere;
  SmartHome_controller__st_1 s_St_1_Arriere;
  int r_St_1_Avant;
  SmartHome_controller__st_1 s_St_1_Avant;
  int r_St_1_NoPresence;
  SmartHome_controller__st_1 s_St_1_NoPresence;
  int nr_St_1_Arriere;
  SmartHome_controller__st_1 ns_St_1_Arriere;
  SmartHome_controller__position pos_St_1_Arriere;
  int nr_St_1_Avant;
  SmartHome_controller__st_1 ns_St_1_Avant;
  SmartHome_controller__position pos_St_1_Avant;
  int nr_St_1_NoPresence;
  SmartHome_controller__st_1 ns_St_1_NoPresence;
  SmartHome_controller__position pos_St_1_NoPresence;
  SmartHome_controller__st_1 ck_2;
  SmartHome_controller__st_1 s;
  SmartHome_controller__st_1 ns;
  int r;
  int nr;
  switch (self->ck) {
    case SmartHome_controller__St_1_Arriere:
      v = !(presence);
      if (v) {
        v_1 = SmartHome_controller__St_1_NoPresence;
      } else {
        v_1 = SmartHome_controller__St_1_Arriere;
      };
      if (entree) {
        s_St_1_Arriere = SmartHome_controller__St_1_Avant;
      } else {
        s_St_1_Arriere = v_1;
      };
      if (v) {
        v_2 = true;
      } else {
        v_2 = self->pnr;
      };
      if (entree) {
        r_St_1_Arriere = true;
      } else {
        r_St_1_Arriere = v_2;
      };
      s = s_St_1_Arriere;
      r = r_St_1_Arriere;
      break;
    case SmartHome_controller__St_1_Avant:
      v_3 = !(entree);
      v_4 = (sortie&&v_3);
      v_5 = !(presence);
      v_6 = !(v_5);
      if (v_6) {
        v_7 = SmartHome_controller__St_1_NoPresence;
      } else {
        v_7 = SmartHome_controller__St_1_Avant;
      };
      if (v_4) {
        s_St_1_Avant = SmartHome_controller__St_1_Arriere;
      } else {
        s_St_1_Avant = v_7;
      };
      if (v_6) {
        v_8 = true;
      } else {
        v_8 = self->pnr;
      };
      if (v_4) {
        r_St_1_Avant = true;
      } else {
        r_St_1_Avant = v_8;
      };
      s = s_St_1_Avant;
      r = r_St_1_Avant;
      break;
    case SmartHome_controller__St_1_NoPresence:
      v_9 = !(entree);
      v_10 = (v_9&&sortie);
      if (v_10) {
        v_11 = SmartHome_controller__St_1_Arriere;
      } else {
        v_11 = SmartHome_controller__St_1_NoPresence;
      };
      if (entree) {
        s_St_1_NoPresence = SmartHome_controller__St_1_Avant;
      } else {
        s_St_1_NoPresence = v_11;
      };
      s = s_St_1_NoPresence;
      if (v_10) {
        v_12 = true;
      } else {
        v_12 = self->pnr;
      };
      if (entree) {
        r_St_1_NoPresence = true;
      } else {
        r_St_1_NoPresence = v_12;
      };
      r = r_St_1_NoPresence;
      break;
    default:
      break;
  };
  ck_2 = s;
  switch (ck_2) {
    case SmartHome_controller__St_1_Arriere:
      ns_St_1_Arriere = SmartHome_controller__St_1_Arriere;
      nr_St_1_Arriere = false;
      pos_St_1_Arriere = SmartHome_controller__Arriere;
      ns = ns_St_1_Arriere;
      nr = nr_St_1_Arriere;
      _out->pos = pos_St_1_Arriere;
      break;
    case SmartHome_controller__St_1_Avant:
      ns_St_1_Avant = SmartHome_controller__St_1_Avant;
      nr_St_1_Avant = false;
      pos_St_1_Avant = SmartHome_controller__Avant;
      ns = ns_St_1_Avant;
      nr = nr_St_1_Avant;
      _out->pos = pos_St_1_Avant;
      break;
    case SmartHome_controller__St_1_NoPresence:
      ns_St_1_NoPresence = SmartHome_controller__St_1_NoPresence;
      ns = ns_St_1_NoPresence;
      nr_St_1_NoPresence = false;
      nr = nr_St_1_NoPresence;
      pos_St_1_NoPresence = SmartHome_controller__Null;
      _out->pos = pos_St_1_NoPresence;
      break;
    default:
      break;
  };
  self->ck = ns;
  self->pnr = nr;;
}

void SmartHome__presenceSens_reset(SmartHome__presenceSens_mem* self) {
  self->ck = SmartHome_controller__St_2_Idle;
  self->pnr = false;
}

void SmartHome__presenceSens_step(int entree, int sortie,
                                  SmartHome__presenceSens_out* _out,
                                  SmartHome__presenceSens_mem* self) {
  
  int v_16;
  SmartHome_controller__st_2 v_15;
  int v_14;
  int v_13;
  int v;
  int v_23;
  SmartHome_controller__st_2 v_22;
  int v_21;
  int v_20;
  int v_19;
  int v_18;
  int v_17;
  int v_27;
  SmartHome_controller__st_2 v_26;
  int v_25;
  int v_24;
  int r_St_2_Arriere;
  SmartHome_controller__st_2 s_St_2_Arriere;
  int r_St_2_Avant;
  SmartHome_controller__st_2 s_St_2_Avant;
  int r_St_2_Idle;
  SmartHome_controller__st_2 s_St_2_Idle;
  int nr_St_2_Arriere;
  SmartHome_controller__st_2 ns_St_2_Arriere;
  SmartHome_controller__position pos_St_2_Arriere;
  int nr_St_2_Avant;
  SmartHome_controller__st_2 ns_St_2_Avant;
  SmartHome_controller__position pos_St_2_Avant;
  int nr_St_2_Idle;
  SmartHome_controller__st_2 ns_St_2_Idle;
  SmartHome_controller__position pos_St_2_Idle;
  SmartHome_controller__st_2 ck_3;
  SmartHome_controller__st_2 s;
  SmartHome_controller__st_2 ns;
  int r;
  int nr;
  switch (self->ck) {
    case SmartHome_controller__St_2_Arriere:
      v = !(entree);
      v_13 = !(sortie);
      v_14 = (v&&v_13);
      if (v_14) {
        v_15 = SmartHome_controller__St_2_Idle;
      } else {
        v_15 = SmartHome_controller__St_2_Arriere;
      };
      if (entree) {
        s_St_2_Arriere = SmartHome_controller__St_2_Avant;
      } else {
        s_St_2_Arriere = v_15;
      };
      if (v_14) {
        v_16 = true;
      } else {
        v_16 = self->pnr;
      };
      if (entree) {
        r_St_2_Arriere = true;
      } else {
        r_St_2_Arriere = v_16;
      };
      s = s_St_2_Arriere;
      r = r_St_2_Arriere;
      break;
    case SmartHome_controller__St_2_Avant:
      v_17 = !(entree);
      v_18 = !(sortie);
      v_19 = (v_17&&v_18);
      v_20 = !(entree);
      v_21 = (sortie&&v_20);
      if (v_21) {
        v_22 = SmartHome_controller__St_2_Arriere;
      } else {
        v_22 = SmartHome_controller__St_2_Avant;
      };
      if (v_19) {
        s_St_2_Avant = SmartHome_controller__St_2_Idle;
      } else {
        s_St_2_Avant = v_22;
      };
      if (v_21) {
        v_23 = true;
      } else {
        v_23 = self->pnr;
      };
      if (v_19) {
        r_St_2_Avant = true;
      } else {
        r_St_2_Avant = v_23;
      };
      s = s_St_2_Avant;
      r = r_St_2_Avant;
      break;
    case SmartHome_controller__St_2_Idle:
      v_24 = !(entree);
      v_25 = (v_24&&sortie);
      if (v_25) {
        v_26 = SmartHome_controller__St_2_Arriere;
      } else {
        v_26 = SmartHome_controller__St_2_Idle;
      };
      if (entree) {
        s_St_2_Idle = SmartHome_controller__St_2_Avant;
      } else {
        s_St_2_Idle = v_26;
      };
      s = s_St_2_Idle;
      if (v_25) {
        v_27 = true;
      } else {
        v_27 = self->pnr;
      };
      if (entree) {
        r_St_2_Idle = true;
      } else {
        r_St_2_Idle = v_27;
      };
      r = r_St_2_Idle;
      break;
    default:
      break;
  };
  ck_3 = s;
  switch (ck_3) {
    case SmartHome_controller__St_2_Arriere:
      ns_St_2_Arriere = SmartHome_controller__St_2_Arriere;
      nr_St_2_Arriere = false;
      pos_St_2_Arriere = SmartHome_controller__Arriere;
      ns = ns_St_2_Arriere;
      nr = nr_St_2_Arriere;
      _out->pos = pos_St_2_Arriere;
      break;
    case SmartHome_controller__St_2_Avant:
      ns_St_2_Avant = SmartHome_controller__St_2_Avant;
      nr_St_2_Avant = false;
      pos_St_2_Avant = SmartHome_controller__Avant;
      ns = ns_St_2_Avant;
      nr = nr_St_2_Avant;
      _out->pos = pos_St_2_Avant;
      break;
    case SmartHome_controller__St_2_Idle:
      ns_St_2_Idle = SmartHome_controller__St_2_Idle;
      ns = ns_St_2_Idle;
      nr_St_2_Idle = false;
      nr = nr_St_2_Idle;
      pos_St_2_Idle = SmartHome_controller__Null;
      _out->pos = pos_St_2_Idle;
      break;
    default:
      break;
  };
  self->ck = ns;
  self->pnr = nr;;
}

void SmartHome__lampe_reset(SmartHome__lampe_mem* self) {
  self->ck = SmartHome_controller__St_3_Off;
  self->pnr = false;
}

void SmartHome__lampe_step(int interrupteur, SmartHome__lampe_out* _out,
                           SmartHome__lampe_mem* self) {
  
  int v;
  int r_St_3_On;
  SmartHome_controller__st_3 s_St_3_On;
  int r_St_3_Off;
  SmartHome_controller__st_3 s_St_3_Off;
  int nr_St_3_On;
  SmartHome_controller__st_3 ns_St_3_On;
  int lumiere_St_3_On;
  int nr_St_3_Off;
  SmartHome_controller__st_3 ns_St_3_Off;
  int lumiere_St_3_Off;
  SmartHome_controller__st_3 ck_4;
  SmartHome_controller__st_3 s;
  SmartHome_controller__st_3 ns;
  int r;
  int nr;
  switch (self->ck) {
    case SmartHome_controller__St_3_On:
      v = !(interrupteur);
      if (v) {
        s_St_3_On = SmartHome_controller__St_3_Off;
        r_St_3_On = true;
      } else {
        s_St_3_On = SmartHome_controller__St_3_On;
        r_St_3_On = self->pnr;
      };
      s = s_St_3_On;
      r = r_St_3_On;
      break;
    case SmartHome_controller__St_3_Off:
      if (interrupteur) {
        s_St_3_Off = SmartHome_controller__St_3_On;
      } else {
        s_St_3_Off = SmartHome_controller__St_3_Off;
      };
      s = s_St_3_Off;
      if (interrupteur) {
        r_St_3_Off = true;
      } else {
        r_St_3_Off = self->pnr;
      };
      r = r_St_3_Off;
      break;
    default:
      break;
  };
  ck_4 = s;
  switch (ck_4) {
    case SmartHome_controller__St_3_On:
      ns_St_3_On = SmartHome_controller__St_3_On;
      nr_St_3_On = false;
      lumiere_St_3_On = true;
      ns = ns_St_3_On;
      nr = nr_St_3_On;
      _out->lumiere = lumiere_St_3_On;
      break;
    case SmartHome_controller__St_3_Off:
      ns_St_3_Off = SmartHome_controller__St_3_Off;
      ns = ns_St_3_Off;
      nr_St_3_Off = false;
      nr = nr_St_3_Off;
      lumiere_St_3_Off = false;
      _out->lumiere = lumiere_St_3_Off;
      break;
    default:
      break;
  };
  self->ck = ns;
  self->pnr = nr;;
}

void SmartHome__poubelle_reset(SmartHome__poubelle_mem* self) {
  self->ck = SmartHome_controller__St_4_Fermer;
  self->pnr = false;
}

void SmartHome__poubelle_step(int con, int coff,
                              SmartHome__poubelle_out* _out,
                              SmartHome__poubelle_mem* self) {
  
  int r_St_4_Ouvrir;
  SmartHome_controller__st_4 s_St_4_Ouvrir;
  int r_St_4_Fermer;
  SmartHome_controller__st_4 s_St_4_Fermer;
  int nr_St_4_Ouvrir;
  SmartHome_controller__st_4 ns_St_4_Ouvrir;
  int ouvrir_St_4_Ouvrir;
  int nr_St_4_Fermer;
  SmartHome_controller__st_4 ns_St_4_Fermer;
  int ouvrir_St_4_Fermer;
  SmartHome_controller__st_4 ck_5;
  SmartHome_controller__st_4 s;
  SmartHome_controller__st_4 ns;
  int r;
  int nr;
  switch (self->ck) {
    case SmartHome_controller__St_4_Ouvrir:
      if (coff) {
        s_St_4_Ouvrir = SmartHome_controller__St_4_Fermer;
        r_St_4_Ouvrir = true;
      } else {
        s_St_4_Ouvrir = SmartHome_controller__St_4_Ouvrir;
        r_St_4_Ouvrir = self->pnr;
      };
      s = s_St_4_Ouvrir;
      r = r_St_4_Ouvrir;
      break;
    case SmartHome_controller__St_4_Fermer:
      if (con) {
        s_St_4_Fermer = SmartHome_controller__St_4_Ouvrir;
      } else {
        s_St_4_Fermer = SmartHome_controller__St_4_Fermer;
      };
      s = s_St_4_Fermer;
      if (con) {
        r_St_4_Fermer = true;
      } else {
        r_St_4_Fermer = self->pnr;
      };
      r = r_St_4_Fermer;
      break;
    default:
      break;
  };
  ck_5 = s;
  switch (ck_5) {
    case SmartHome_controller__St_4_Ouvrir:
      ns_St_4_Ouvrir = SmartHome_controller__St_4_Ouvrir;
      nr_St_4_Ouvrir = false;
      ouvrir_St_4_Ouvrir = true;
      ns = ns_St_4_Ouvrir;
      nr = nr_St_4_Ouvrir;
      _out->ouvrir = ouvrir_St_4_Ouvrir;
      break;
    case SmartHome_controller__St_4_Fermer:
      ns_St_4_Fermer = SmartHome_controller__St_4_Fermer;
      ns = ns_St_4_Fermer;
      nr_St_4_Fermer = false;
      nr = nr_St_4_Fermer;
      ouvrir_St_4_Fermer = false;
      _out->ouvrir = ouvrir_St_4_Fermer;
      break;
    default:
      break;
  };
  self->ck = ns;
  self->pnr = nr;;
}

void SmartHome__porte_reset(SmartHome__porte_mem* self) {
  self->ck = SmartHome_controller__St_5_Fermer;
  self->pnr = false;
}

void SmartHome__porte_step(int copen, SmartHome__porte_out* _out,
                           SmartHome__porte_mem* self) {
  
  int v;
  int r_St_5_Ouvrir;
  SmartHome_controller__st_5 s_St_5_Ouvrir;
  int r_St_5_Fermer;
  SmartHome_controller__st_5 s_St_5_Fermer;
  int nr_St_5_Ouvrir;
  SmartHome_controller__st_5 ns_St_5_Ouvrir;
  SmartHome_controller__porte ouvrir_St_5_Ouvrir;
  int nr_St_5_Fermer;
  SmartHome_controller__st_5 ns_St_5_Fermer;
  SmartHome_controller__porte ouvrir_St_5_Fermer;
  SmartHome_controller__st_5 ck_6;
  SmartHome_controller__st_5 s;
  SmartHome_controller__st_5 ns;
  int r;
  int nr;
  switch (self->ck) {
    case SmartHome_controller__St_5_Ouvrir:
      v = !(copen);
      if (v) {
        s_St_5_Ouvrir = SmartHome_controller__St_5_Fermer;
        r_St_5_Ouvrir = true;
      } else {
        s_St_5_Ouvrir = SmartHome_controller__St_5_Ouvrir;
        r_St_5_Ouvrir = self->pnr;
      };
      s = s_St_5_Ouvrir;
      r = r_St_5_Ouvrir;
      break;
    case SmartHome_controller__St_5_Fermer:
      if (copen) {
        s_St_5_Fermer = SmartHome_controller__St_5_Ouvrir;
      } else {
        s_St_5_Fermer = SmartHome_controller__St_5_Fermer;
      };
      s = s_St_5_Fermer;
      if (copen) {
        r_St_5_Fermer = true;
      } else {
        r_St_5_Fermer = self->pnr;
      };
      r = r_St_5_Fermer;
      break;
    default:
      break;
  };
  ck_6 = s;
  switch (ck_6) {
    case SmartHome_controller__St_5_Ouvrir:
      ns_St_5_Ouvrir = SmartHome_controller__St_5_Ouvrir;
      nr_St_5_Ouvrir = false;
      ouvrir_St_5_Ouvrir = SmartHome_controller__Fermer;
      ns = ns_St_5_Ouvrir;
      nr = nr_St_5_Ouvrir;
      _out->ouvrir = ouvrir_St_5_Ouvrir;
      break;
    case SmartHome_controller__St_5_Fermer:
      ns_St_5_Fermer = SmartHome_controller__St_5_Fermer;
      ns = ns_St_5_Fermer;
      nr_St_5_Fermer = false;
      nr = nr_St_5_Fermer;
      ouvrir_St_5_Fermer = SmartHome_controller__Ouvert;
      _out->ouvrir = ouvrir_St_5_Fermer;
      break;
    default:
      break;
  };
  self->ck = ns;
  self->pnr = nr;;
}

void SmartHome__stores_reset(SmartHome__stores_mem* self) {
  self->ck = SmartHome_controller__St_6_Fermer;
  self->pnr = false;
}

void SmartHome__stores_step(int copen, int close,
                            SmartHome__stores_out* _out,
                            SmartHome__stores_mem* self) {
  
  int r_St_6_Ouvrir;
  SmartHome_controller__st_6 s_St_6_Ouvrir;
  int r_St_6_Fermer;
  SmartHome_controller__st_6 s_St_6_Fermer;
  int nr_St_6_Ouvrir;
  SmartHome_controller__st_6 ns_St_6_Ouvrir;
  int store_St_6_Ouvrir;
  int nr_St_6_Fermer;
  SmartHome_controller__st_6 ns_St_6_Fermer;
  int store_St_6_Fermer;
  SmartHome_controller__st_6 ck_7;
  SmartHome_controller__st_6 s;
  SmartHome_controller__st_6 ns;
  int r;
  int nr;
  switch (self->ck) {
    case SmartHome_controller__St_6_Ouvrir:
      if (close) {
        s_St_6_Ouvrir = SmartHome_controller__St_6_Fermer;
        r_St_6_Ouvrir = true;
      } else {
        s_St_6_Ouvrir = SmartHome_controller__St_6_Ouvrir;
        r_St_6_Ouvrir = self->pnr;
      };
      s = s_St_6_Ouvrir;
      r = r_St_6_Ouvrir;
      break;
    case SmartHome_controller__St_6_Fermer:
      if (copen) {
        s_St_6_Fermer = SmartHome_controller__St_6_Ouvrir;
      } else {
        s_St_6_Fermer = SmartHome_controller__St_6_Fermer;
      };
      s = s_St_6_Fermer;
      if (copen) {
        r_St_6_Fermer = true;
      } else {
        r_St_6_Fermer = self->pnr;
      };
      r = r_St_6_Fermer;
      break;
    default:
      break;
  };
  ck_7 = s;
  switch (ck_7) {
    case SmartHome_controller__St_6_Ouvrir:
      ns_St_6_Ouvrir = SmartHome_controller__St_6_Ouvrir;
      nr_St_6_Ouvrir = false;
      store_St_6_Ouvrir = true;
      ns = ns_St_6_Ouvrir;
      nr = nr_St_6_Ouvrir;
      _out->store = store_St_6_Ouvrir;
      break;
    case SmartHome_controller__St_6_Fermer:
      ns_St_6_Fermer = SmartHome_controller__St_6_Fermer;
      ns = ns_St_6_Fermer;
      nr_St_6_Fermer = false;
      nr = nr_St_6_Fermer;
      store_St_6_Fermer = false;
      _out->store = store_St_6_Fermer;
      break;
    default:
      break;
  };
  self->ck = ns;
  self->pnr = nr;;
}

void SmartHome__alarme_reset(SmartHome__alarme_mem* self) {
  self->v_31 = 0;
  self->v_36 = 0;
  self->v_44 = 0;
  self->ck = SmartHome_controller__St_7_Arret;
  self->pnr = false;
  self->temps_1 = 0;
  self->vigilence_1 = 0;
  self->reprise_1 = 0;
}

void SmartHome__alarme_step(int marcheArret, int code, int pbGar, int pbHab,
                            int dReprise, int dVigilence, int dAlarme,
                            SmartHome__alarme_out* _out,
                            SmartHome__alarme_mem* self) {
  
  int r_St_7_Vigilence;
  SmartHome_controller__st_7 s_St_7_Vigilence;
  int r_St_7_Sonner;
  SmartHome_controller__st_7 s_St_7_Sonner;
  int r_St_7_Allume;
  SmartHome_controller__st_7 s_St_7_Allume;
  int r_St_7_Arret;
  SmartHome_controller__st_7 s_St_7_Arret;
  int v_30;
  int v_29;
  SmartHome_controller__st_7 v_28;
  int v;
  int v_35;
  int v_34;
  SmartHome_controller__st_7 v_33;
  int v_32;
  int v_43;
  int v_42;
  SmartHome_controller__st_7 v_41;
  int v_40;
  SmartHome_controller__st_7 v_39;
  int v_38;
  int v_37;
  int nr_St_7_Vigilence;
  SmartHome_controller__st_7 ns_St_7_Vigilence;
  int reprise_St_7_Vigilence;
  int vigilence_St_7_Vigilence;
  int temps_St_7_Vigilence;
  SmartHome_controller__lum enMarche_St_7_Vigilence;
  int sonnerAlarme_St_7_Vigilence;
  int nr_St_7_Sonner;
  SmartHome_controller__st_7 ns_St_7_Sonner;
  int reprise_St_7_Sonner;
  int vigilence_St_7_Sonner;
  int temps_St_7_Sonner;
  SmartHome_controller__lum enMarche_St_7_Sonner;
  int sonnerAlarme_St_7_Sonner;
  int nr_St_7_Allume;
  SmartHome_controller__st_7 ns_St_7_Allume;
  int reprise_St_7_Allume;
  int vigilence_St_7_Allume;
  int temps_St_7_Allume;
  SmartHome_controller__lum enMarche_St_7_Allume;
  int sonnerAlarme_St_7_Allume;
  int nr_St_7_Arret;
  SmartHome_controller__st_7 ns_St_7_Arret;
  int reprise_St_7_Arret;
  int vigilence_St_7_Arret;
  int temps_St_7_Arret;
  SmartHome_controller__lum enMarche_St_7_Arret;
  int sonnerAlarme_St_7_Arret;
  SmartHome_controller__st_7 ck_8;
  SmartHome_controller__st_7 s;
  SmartHome_controller__st_7 ns;
  int r;
  int nr;
  int temps;
  int vigilence;
  int reprise;
  switch (self->ck) {
    case SmartHome_controller__St_7_Vigilence:
      s_St_7_Vigilence = SmartHome_controller__St_7_Vigilence;
      r_St_7_Vigilence = self->pnr;
      s = s_St_7_Vigilence;
      r = r_St_7_Vigilence;
      break;
    case SmartHome_controller__St_7_Sonner:
      s_St_7_Sonner = SmartHome_controller__St_7_Sonner;
      r_St_7_Sonner = self->pnr;
      s = s_St_7_Sonner;
      r = r_St_7_Sonner;
      break;
    case SmartHome_controller__St_7_Allume:
      s_St_7_Allume = SmartHome_controller__St_7_Allume;
      r_St_7_Allume = self->pnr;
      s = s_St_7_Allume;
      r = r_St_7_Allume;
      break;
    case SmartHome_controller__St_7_Arret:
      if (marcheArret) {
        s_St_7_Arret = SmartHome_controller__St_7_Allume;
      } else {
        s_St_7_Arret = SmartHome_controller__St_7_Arret;
      };
      s = s_St_7_Arret;
      if (marcheArret) {
        r_St_7_Arret = true;
      } else {
        r_St_7_Arret = self->pnr;
      };
      r = r_St_7_Arret;
      break;
    default:
      break;
  };
  ck_8 = s;
  switch (ck_8) {
    case SmartHome_controller__St_7_Vigilence:
      temps_St_7_Vigilence = self->temps_1;
      reprise_St_7_Vigilence = self->reprise_1;
      if (r) {
        vigilence_St_7_Vigilence = 0;
      } else {
        vigilence_St_7_Vigilence = self->v_31;
      };
      sonnerAlarme_St_7_Vigilence = false;
      enMarche_St_7_Vigilence = SmartHome_controller__Jaune;
      temps = temps_St_7_Vigilence;
      vigilence = vigilence_St_7_Vigilence;
      v = (dVigilence<=vigilence);
      if (v) {
        v_28 = SmartHome_controller__St_7_Arret;
      } else {
        v_28 = SmartHome_controller__St_7_Vigilence;
      };
      if (pbHab) {
        ns_St_7_Vigilence = SmartHome_controller__St_7_Sonner;
      } else {
        ns_St_7_Vigilence = v_28;
      };
      if (v) {
        v_29 = true;
      } else {
        v_29 = false;
      };
      if (pbHab) {
        nr_St_7_Vigilence = true;
      } else {
        nr_St_7_Vigilence = v_29;
      };
      v_30 = (vigilence+1);
      reprise = reprise_St_7_Vigilence;
      ns = ns_St_7_Vigilence;
      nr = nr_St_7_Vigilence;
      _out->enMarche = enMarche_St_7_Vigilence;
      _out->sonnerAlarme = sonnerAlarme_St_7_Vigilence;
      self->v_31 = v_30;
      break;
    case SmartHome_controller__St_7_Sonner:
      temps_St_7_Sonner = self->temps_1;
      vigilence_St_7_Sonner = self->vigilence_1;
      if (r) {
        reprise_St_7_Sonner = 0;
      } else {
        reprise_St_7_Sonner = self->v_36;
      };
      sonnerAlarme_St_7_Sonner = true;
      enMarche_St_7_Sonner = SmartHome_controller__Vert;
      temps = temps_St_7_Sonner;
      vigilence = vigilence_St_7_Sonner;
      reprise = reprise_St_7_Sonner;
      v_32 = (dReprise<=reprise);
      if (v_32) {
        v_33 = SmartHome_controller__St_7_Allume;
      } else {
        v_33 = SmartHome_controller__St_7_Sonner;
      };
      if (code) {
        ns_St_7_Sonner = SmartHome_controller__St_7_Arret;
      } else {
        ns_St_7_Sonner = v_33;
      };
      ns = ns_St_7_Sonner;
      if (v_32) {
        v_34 = true;
      } else {
        v_34 = false;
      };
      if (code) {
        nr_St_7_Sonner = true;
      } else {
        nr_St_7_Sonner = v_34;
      };
      nr = nr_St_7_Sonner;
      v_35 = (reprise+1);
      _out->enMarche = enMarche_St_7_Sonner;
      _out->sonnerAlarme = sonnerAlarme_St_7_Sonner;
      self->v_36 = v_35;
      break;
    case SmartHome_controller__St_7_Allume:
      vigilence_St_7_Allume = self->vigilence_1;
      reprise_St_7_Allume = self->reprise_1;
      if (r) {
        temps_St_7_Allume = 0;
      } else {
        temps_St_7_Allume = self->v_44;
      };
      sonnerAlarme_St_7_Allume = false;
      enMarche_St_7_Allume = SmartHome_controller__Vert;
      temps = temps_St_7_Allume;
      v_37 = (dVigilence<=temps);
      v_38 = (pbGar&&v_37);
      if (v_38) {
        v_39 = SmartHome_controller__St_7_Sonner;
      } else {
        v_39 = SmartHome_controller__St_7_Allume;
      };
      if (pbHab) {
        v_41 = SmartHome_controller__St_7_Sonner;
      } else {
        v_41 = v_39;
      };
      if (code) {
        ns_St_7_Allume = SmartHome_controller__St_7_Vigilence;
      } else {
        ns_St_7_Allume = v_41;
      };
      if (v_38) {
        v_40 = true;
      } else {
        v_40 = false;
      };
      if (pbHab) {
        v_42 = true;
      } else {
        v_42 = v_40;
      };
      if (code) {
        nr_St_7_Allume = true;
      } else {
        nr_St_7_Allume = v_42;
      };
      v_43 = (temps+1);
      vigilence = vigilence_St_7_Allume;
      reprise = reprise_St_7_Allume;
      ns = ns_St_7_Allume;
      nr = nr_St_7_Allume;
      _out->enMarche = enMarche_St_7_Allume;
      _out->sonnerAlarme = sonnerAlarme_St_7_Allume;
      self->v_44 = v_43;
      break;
    case SmartHome_controller__St_7_Arret:
      ns_St_7_Arret = SmartHome_controller__St_7_Arret;
      nr_St_7_Arret = false;
      temps_St_7_Arret = self->temps_1;
      temps = temps_St_7_Arret;
      vigilence_St_7_Arret = self->vigilence_1;
      vigilence = vigilence_St_7_Arret;
      reprise_St_7_Arret = self->reprise_1;
      reprise = reprise_St_7_Arret;
      ns = ns_St_7_Arret;
      nr = nr_St_7_Arret;
      enMarche_St_7_Arret = SmartHome_controller__Rouge;
      _out->enMarche = enMarche_St_7_Arret;
      sonnerAlarme_St_7_Arret = false;
      _out->sonnerAlarme = sonnerAlarme_St_7_Arret;
      break;
    default:
      break;
  };
  self->ck = ns;
  self->pnr = nr;
  self->temps_1 = temps;
  self->vigilence_1 = vigilence;
  self->reprise_1 = reprise;;
}

void SmartHome__ascenseur_reset(SmartHome__ascenseur_mem* self) {
  self->ck = SmartHome_controller__St_8_Stop;
  self->pnr = false;
}

void SmartHome__ascenseur_step(int demandeEtage, int arriveEtage,
                               SmartHome__ascenseur_out* _out,
                               SmartHome__ascenseur_mem* self) {
  
  int v_45;
  int v;
  int r_St_8_Mouvement;
  SmartHome_controller__st_8 s_St_8_Mouvement;
  int r_St_8_Stop;
  SmartHome_controller__st_8 s_St_8_Stop;
  int nr_St_8_Mouvement;
  SmartHome_controller__st_8 ns_St_8_Mouvement;
  int etat_St_8_Mouvement;
  int nr_St_8_Stop;
  SmartHome_controller__st_8 ns_St_8_Stop;
  int etat_St_8_Stop;
  SmartHome_controller__st_8 ck_9;
  SmartHome_controller__st_8 s;
  SmartHome_controller__st_8 ns;
  int r;
  int nr;
  switch (self->ck) {
    case SmartHome_controller__St_8_Mouvement:
      v = !(demandeEtage);
      v_45 = (v||arriveEtage);
      if (v_45) {
        s_St_8_Mouvement = SmartHome_controller__St_8_Stop;
        r_St_8_Mouvement = true;
      } else {
        s_St_8_Mouvement = SmartHome_controller__St_8_Mouvement;
        r_St_8_Mouvement = self->pnr;
      };
      s = s_St_8_Mouvement;
      r = r_St_8_Mouvement;
      break;
    case SmartHome_controller__St_8_Stop:
      if (demandeEtage) {
        s_St_8_Stop = SmartHome_controller__St_8_Mouvement;
      } else {
        s_St_8_Stop = SmartHome_controller__St_8_Stop;
      };
      s = s_St_8_Stop;
      if (demandeEtage) {
        r_St_8_Stop = true;
      } else {
        r_St_8_Stop = self->pnr;
      };
      r = r_St_8_Stop;
      break;
    default:
      break;
  };
  ck_9 = s;
  switch (ck_9) {
    case SmartHome_controller__St_8_Mouvement:
      ns_St_8_Mouvement = SmartHome_controller__St_8_Mouvement;
      nr_St_8_Mouvement = false;
      etat_St_8_Mouvement = true;
      ns = ns_St_8_Mouvement;
      nr = nr_St_8_Mouvement;
      _out->etat = etat_St_8_Mouvement;
      break;
    case SmartHome_controller__St_8_Stop:
      ns_St_8_Stop = SmartHome_controller__St_8_Stop;
      ns = ns_St_8_Stop;
      nr_St_8_Stop = false;
      nr = nr_St_8_Stop;
      etat_St_8_Stop = false;
      _out->etat = etat_St_8_Stop;
      break;
    default:
      break;
  };
  self->ck = ns;
  self->pnr = nr;;
}

void SmartHome__smartHome_reset(SmartHome__smartHome_mem* self) {
  self->ck = SmartHome_controller__St_21_Nothing;
  self->pnr_12 = false;
  self->ck_11 = SmartHome_controller__St_20_Nothing;
  self->pnr_11 = false;
  self->ck_13 = SmartHome_controller__St_19_Nothing;
  self->pnr_10 = false;
  self->ck_15 = SmartHome_controller__St_18_Off;
  self->pnr_9 = false;
  self->ck_17 = SmartHome_controller__St_17_Nothing;
  self->pnr_8 = false;
  self->ck_19 = SmartHome_controller__St_16_Fermer;
  self->pnr_7 = false;
  self->ck_21 = SmartHome_controller__St_15_Fermer;
  self->pnr_6 = false;
  self->ck_23 = SmartHome_controller__St_14_Idle;
  self->pnr_5 = false;
  self->ck_25 = SmartHome_controller__St_13_Fermer;
  self->pnr_4 = false;
  self->ck_27 = SmartHome_controller__St_12_Idle;
  self->pnr_3 = false;
  self->ck_29 = SmartHome_controller__St_11_Fermer;
  self->pnr_2 = false;
  self->ck_31 = SmartHome_controller__St_10_Arret;
  self->pnr_1 = false;
  self->ck_33 = SmartHome_controller__St_9_Stop;
  self->pnr = false;
  self->temps_2 = 0;
  self->vigilence_2 = 0;
  self->reprise_2 = 0;
  self->v_172 = 0;
  self->v_177 = 0;
  self->v_185 = 0;
}

void SmartHome__smartHome_step(int presenceMaison, int presenceAscenseur,
                               int presenceGarage,
                               int presenceDevantPoubelle, int vent,
                               int luminosite, int marcheArretAlarme,
                               int codeAlarme, int codePorte,
                               int codeBarriere, int presenceEntreePorte,
                               int presenceSortiePorte,
                               int presenceEntreeBarriere,
                               int presenceSortieBarriere, int dReprise,
                               int dVigilence, int dAlarme,
                               SmartHome__smartHome_out* _out,
                               SmartHome__smartHome_mem* self) {
  SmartHome_controller__smartHome_ctrlr0_out SmartHome_controller__smartHome_ctrlr0_out_st;
  
  int interrupteur;
  int copen;
  int close;
  int openPorte;
  int openBarriere;
  int con;
  int coff;
  int demandeEtage;
  int arriveEtage;
  int ok;
  int v_129;
  int r_12_St_21_Presence;
  SmartHome_controller__st_21 s_12_St_21_Presence;
  int r_12_St_21_Nothing;
  SmartHome_controller__st_21 s_12_St_21_Nothing;
  int nr_12_St_21_Presence;
  SmartHome_controller__st_21 ns_12_St_21_Presence;
  int occuper_St_21_Presence;
  int nr_12_St_21_Nothing;
  SmartHome_controller__st_21 ns_12_St_21_Nothing;
  int occuper_St_21_Nothing;
  SmartHome_controller__st_21 ck_10;
  int v_130;
  int r_11_St_20_Presence;
  SmartHome_controller__st_20 s_11_St_20_Presence;
  int r_11_St_20_Nothing;
  SmartHome_controller__st_20 s_11_St_20_Nothing;
  int nr_11_St_20_Presence;
  SmartHome_controller__st_20 ns_11_St_20_Presence;
  int occuper_1_St_20_Presence;
  int nr_11_St_20_Nothing;
  SmartHome_controller__st_20 ns_11_St_20_Nothing;
  int occuper_1_St_20_Nothing;
  SmartHome_controller__st_20 ck_12;
  int v_131;
  int r_10_St_19_Presence;
  SmartHome_controller__st_19 s_10_St_19_Presence;
  int r_10_St_19_Nothing;
  SmartHome_controller__st_19 s_10_St_19_Nothing;
  int nr_10_St_19_Presence;
  SmartHome_controller__st_19 ns_10_St_19_Presence;
  int occuper_2_St_19_Presence;
  int nr_10_St_19_Nothing;
  SmartHome_controller__st_19 ns_10_St_19_Nothing;
  int occuper_2_St_19_Nothing;
  SmartHome_controller__st_19 ck_14;
  int v_132;
  int r_9_St_18_On;
  SmartHome_controller__st_18 s_9_St_18_On;
  int r_9_St_18_Off;
  SmartHome_controller__st_18 s_9_St_18_Off;
  int nr_9_St_18_On;
  SmartHome_controller__st_18 ns_9_St_18_On;
  int lumiere_1_St_18_On;
  int nr_9_St_18_Off;
  SmartHome_controller__st_18 ns_9_St_18_Off;
  int lumiere_1_St_18_Off;
  SmartHome_controller__st_18 ck_16;
  int v_133;
  int r_8_St_17_Presence;
  SmartHome_controller__st_17 s_8_St_17_Presence;
  int r_8_St_17_Nothing;
  SmartHome_controller__st_17 s_8_St_17_Nothing;
  int nr_8_St_17_Presence;
  SmartHome_controller__st_17 ns_8_St_17_Presence;
  int occuper_3_St_17_Presence;
  int nr_8_St_17_Nothing;
  SmartHome_controller__st_17 ns_8_St_17_Nothing;
  int occuper_3_St_17_Nothing;
  SmartHome_controller__st_17 ck_18;
  int r_7_St_16_Ouvrir;
  SmartHome_controller__st_16 s_7_St_16_Ouvrir;
  int r_7_St_16_Fermer;
  SmartHome_controller__st_16 s_7_St_16_Fermer;
  int nr_7_St_16_Ouvrir;
  SmartHome_controller__st_16 ns_7_St_16_Ouvrir;
  int ouvrir_St_16_Ouvrir;
  int nr_7_St_16_Fermer;
  SmartHome_controller__st_16 ns_7_St_16_Fermer;
  int ouvrir_St_16_Fermer;
  SmartHome_controller__st_16 ck_20;
  int v_134;
  int r_6_St_15_Ouvrir;
  SmartHome_controller__st_15 s_6_St_15_Ouvrir;
  int r_6_St_15_Fermer;
  SmartHome_controller__st_15 s_6_St_15_Fermer;
  int nr_6_St_15_Ouvrir;
  SmartHome_controller__st_15 ns_6_St_15_Ouvrir;
  SmartHome_controller__porte ouvrir_1_St_15_Ouvrir;
  int nr_6_St_15_Fermer;
  SmartHome_controller__st_15 ns_6_St_15_Fermer;
  SmartHome_controller__porte ouvrir_1_St_15_Fermer;
  SmartHome_controller__st_15 ck_22;
  int v_139;
  SmartHome_controller__st_14 v_138;
  int v_137;
  int v_136;
  int v_135;
  int v_146;
  SmartHome_controller__st_14 v_145;
  int v_144;
  int v_143;
  int v_142;
  int v_141;
  int v_140;
  int v_150;
  SmartHome_controller__st_14 v_149;
  int v_148;
  int v_147;
  int r_5_St_14_Arriere;
  SmartHome_controller__st_14 s_5_St_14_Arriere;
  int r_5_St_14_Avant;
  SmartHome_controller__st_14 s_5_St_14_Avant;
  int r_5_St_14_Idle;
  SmartHome_controller__st_14 s_5_St_14_Idle;
  int nr_5_St_14_Arriere;
  SmartHome_controller__st_14 ns_5_St_14_Arriere;
  SmartHome_controller__position pos_St_14_Arriere;
  int nr_5_St_14_Avant;
  SmartHome_controller__st_14 ns_5_St_14_Avant;
  SmartHome_controller__position pos_St_14_Avant;
  int nr_5_St_14_Idle;
  SmartHome_controller__st_14 ns_5_St_14_Idle;
  SmartHome_controller__position pos_St_14_Idle;
  SmartHome_controller__st_14 ck_24;
  int v_151;
  int r_4_St_13_Ouvrir;
  SmartHome_controller__st_13 s_4_St_13_Ouvrir;
  int r_4_St_13_Fermer;
  SmartHome_controller__st_13 s_4_St_13_Fermer;
  int nr_4_St_13_Ouvrir;
  SmartHome_controller__st_13 ns_4_St_13_Ouvrir;
  SmartHome_controller__porte ouvrir_2_St_13_Ouvrir;
  int nr_4_St_13_Fermer;
  SmartHome_controller__st_13 ns_4_St_13_Fermer;
  SmartHome_controller__porte ouvrir_2_St_13_Fermer;
  SmartHome_controller__st_13 ck_26;
  int v_156;
  SmartHome_controller__st_12 v_155;
  int v_154;
  int v_153;
  int v_152;
  int v_163;
  SmartHome_controller__st_12 v_162;
  int v_161;
  int v_160;
  int v_159;
  int v_158;
  int v_157;
  int v_167;
  SmartHome_controller__st_12 v_166;
  int v_165;
  int v_164;
  int r_3_St_12_Arriere;
  SmartHome_controller__st_12 s_3_St_12_Arriere;
  int r_3_St_12_Avant;
  SmartHome_controller__st_12 s_3_St_12_Avant;
  int r_3_St_12_Idle;
  SmartHome_controller__st_12 s_3_St_12_Idle;
  int nr_3_St_12_Arriere;
  SmartHome_controller__st_12 ns_3_St_12_Arriere;
  SmartHome_controller__position pos_1_St_12_Arriere;
  int nr_3_St_12_Avant;
  SmartHome_controller__st_12 ns_3_St_12_Avant;
  SmartHome_controller__position pos_1_St_12_Avant;
  int nr_3_St_12_Idle;
  SmartHome_controller__st_12 ns_3_St_12_Idle;
  SmartHome_controller__position pos_1_St_12_Idle;
  SmartHome_controller__st_12 ck_28;
  int r_2_St_11_Ouvrir;
  SmartHome_controller__st_11 s_2_St_11_Ouvrir;
  int r_2_St_11_Fermer;
  SmartHome_controller__st_11 s_2_St_11_Fermer;
  int nr_2_St_11_Ouvrir;
  SmartHome_controller__st_11 ns_2_St_11_Ouvrir;
  int store_St_11_Ouvrir;
  int nr_2_St_11_Fermer;
  SmartHome_controller__st_11 ns_2_St_11_Fermer;
  int store_St_11_Fermer;
  SmartHome_controller__st_11 ck_30;
  int r_1_St_10_Vigilence;
  SmartHome_controller__st_10 s_1_St_10_Vigilence;
  int r_1_St_10_Sonner;
  SmartHome_controller__st_10 s_1_St_10_Sonner;
  int r_1_St_10_Allume;
  SmartHome_controller__st_10 s_1_St_10_Allume;
  int r_1_St_10_Arret;
  SmartHome_controller__st_10 s_1_St_10_Arret;
  int v_171;
  int v_170;
  SmartHome_controller__st_10 v_169;
  int v_168;
  int v_176;
  int v_175;
  SmartHome_controller__st_10 v_174;
  int v_173;
  int v_184;
  int v_183;
  SmartHome_controller__st_10 v_182;
  int v_181;
  SmartHome_controller__st_10 v_180;
  int v_179;
  int v_178;
  int nr_1_St_10_Vigilence;
  SmartHome_controller__st_10 ns_1_St_10_Vigilence;
  int reprise_St_10_Vigilence;
  int vigilence_St_10_Vigilence;
  int temps_St_10_Vigilence;
  SmartHome_controller__lum enMarche_St_10_Vigilence;
  int sonnerAlarme_St_10_Vigilence;
  int nr_1_St_10_Sonner;
  SmartHome_controller__st_10 ns_1_St_10_Sonner;
  int reprise_St_10_Sonner;
  int vigilence_St_10_Sonner;
  int temps_St_10_Sonner;
  SmartHome_controller__lum enMarche_St_10_Sonner;
  int sonnerAlarme_St_10_Sonner;
  int nr_1_St_10_Allume;
  SmartHome_controller__st_10 ns_1_St_10_Allume;
  int reprise_St_10_Allume;
  int vigilence_St_10_Allume;
  int temps_St_10_Allume;
  SmartHome_controller__lum enMarche_St_10_Allume;
  int sonnerAlarme_St_10_Allume;
  int nr_1_St_10_Arret;
  SmartHome_controller__st_10 ns_1_St_10_Arret;
  int reprise_St_10_Arret;
  int vigilence_St_10_Arret;
  int temps_St_10_Arret;
  SmartHome_controller__lum enMarche_St_10_Arret;
  int sonnerAlarme_St_10_Arret;
  SmartHome_controller__st_10 ck_32;
  int v_187;
  int v_186;
  int r_St_9_Mouvement;
  SmartHome_controller__st_9 s_St_9_Mouvement;
  int r_St_9_Stop;
  SmartHome_controller__st_9 s_St_9_Stop;
  int nr_St_9_Mouvement;
  SmartHome_controller__st_9 ns_St_9_Mouvement;
  int etat_St_9_Mouvement;
  int nr_St_9_Stop;
  SmartHome_controller__st_9 ns_St_9_Stop;
  int etat_St_9_Stop;
  SmartHome_controller__st_9 ck_34;
  int v_128;
  int v_127;
  int v_126;
  int v_125;
  int v_124;
  int v_123;
  int v_122;
  int v_121;
  int v_120;
  int v_119;
  int v_118;
  int v_117;
  int v_116;
  int v_115;
  int v_114;
  int v_113;
  int v_112;
  int v_111;
  int v_110;
  int v_109;
  int v_108;
  int v_107;
  int v_106;
  int v_105;
  int v_104;
  int v_103;
  int v_102;
  int v_101;
  int v_100;
  int v_99;
  int v_98;
  int v_97;
  int v_96;
  int v_95;
  int v_94;
  int v_93;
  int v_92;
  int v_91;
  int v_90;
  int v_89;
  int v_88;
  int v_87;
  int v_86;
  int v_85;
  int v_84;
  int v_83;
  int v_82;
  int v_81;
  int v_80;
  int v_79;
  int v_78;
  int v_77;
  int v_76;
  int v_75;
  int v_74;
  int v_73;
  int v_72;
  int v_71;
  int v_70;
  int v_69;
  int v_68;
  int v_67;
  int v_66;
  int v_65;
  int v_64;
  int v_63;
  int v_62;
  int v_61;
  int v_60;
  int v_59;
  int v_58;
  int v_57;
  int v_56;
  int v_55;
  int v_54;
  int v_53;
  int v_52;
  int v_51;
  int v_50;
  int v_49;
  int v_48;
  int v_47;
  int v_46;
  int v;
  SmartHome_controller__st_21 s_12;
  SmartHome_controller__st_21 ns_12;
  int r_12;
  int nr_12;
  SmartHome_controller__st_20 s_11;
  SmartHome_controller__st_20 ns_11;
  int r_11;
  int nr_11;
  SmartHome_controller__st_19 s_10;
  SmartHome_controller__st_19 ns_10;
  int r_10;
  int nr_10;
  SmartHome_controller__st_18 s_9;
  SmartHome_controller__st_18 ns_9;
  int r_9;
  int nr_9;
  SmartHome_controller__st_17 s_8;
  SmartHome_controller__st_17 ns_8;
  int r_8;
  int nr_8;
  SmartHome_controller__st_16 s_7;
  SmartHome_controller__st_16 ns_7;
  int r_7;
  int nr_7;
  SmartHome_controller__st_15 s_6;
  SmartHome_controller__st_15 ns_6;
  int r_6;
  int nr_6;
  SmartHome_controller__st_14 s_5;
  SmartHome_controller__st_14 ns_5;
  int r_5;
  int nr_5;
  SmartHome_controller__st_13 s_4;
  SmartHome_controller__st_13 ns_4;
  int r_4;
  int nr_4;
  SmartHome_controller__st_12 s_3;
  SmartHome_controller__st_12 ns_3;
  int r_3;
  int nr_3;
  SmartHome_controller__st_11 s_2;
  SmartHome_controller__st_11 ns_2;
  int r_2;
  int nr_2;
  SmartHome_controller__st_10 s_1;
  SmartHome_controller__st_10 ns_1;
  int r_1;
  int nr_1;
  SmartHome_controller__st_9 s;
  SmartHome_controller__st_9 ns;
  int r;
  int nr;
  int demandeEtage_1;
  int arriveEtage_1;
  int etat;
  int marcheArret;
  int code;
  int pbGar;
  int pbHab;
  int dReprise_1;
  int dVigilence_1;
  int dAlarme_1;
  int temps;
  int vigilence;
  int reprise;
  int sonnerAlarme;
  SmartHome_controller__lum enMarche;
  int copen_3;
  int close_1;
  int store;
  int entree_1;
  int sortie_1;
  SmartHome_controller__position pos_1;
  int copen_2;
  SmartHome_controller__porte ouvrir_2;
  int entree;
  int sortie;
  SmartHome_controller__position pos;
  int copen_1;
  SmartHome_controller__porte ouvrir_1;
  int con_1;
  int coff_1;
  int ouvrir;
  int presence_3;
  int occuper_3;
  int interrupteur_1;
  int lumiere_1;
  int presence_2;
  int occuper_2;
  int presence_1;
  int occuper_1;
  int presence;
  int occuper;
  int loccuperMaison;
  int loccuperGarage;
  int loccuperAscenseur;
  int lpresencePoubelle;
  int lLumiere;
  int louvrirPoubelle;
  int lstores;
  int lsonnerAlarme;
  int lascenseur;
  int prop1;
  int prop2;
  int prop3;
  int prop4;
  int prop5;
  int prop6;
  int prop7;
  int prop8;
  int prop8a;
  int prop9;
  int prop10;
  int prop11;
  int prop12;
  int prop13;
  int prop14;
  int prop15;
  int prop16;
  int prop12a;
  int prop12b;
  int prop17;
  int prop18;
  int prop19;
  int prop20;
  int prop21;
  int prop22;
  int prop23;
  int prop24;
  SmartHome_controller__porte louvrirPorte;
  SmartHome_controller__porte louvrirBarriere;
  SmartHome_controller__lum lenMarche;
  SmartHome_controller__position lpositionDevantPorte;
  SmartHome_controller__position lpositionDevantBarriere;
  v_89 = !(vent);
  v_90 = !(luminosite);
  v_91 = (v_89&&v_90);
  v_92 = !(v_91);
  v_94 = (vent&&luminosite);
  v_95 = !(v_94);
  v_97 = !(luminosite);
  v_98 = (vent&&v_97);
  v_99 = !(v_98);
  v_101 = !(vent);
  v_102 = (v_101&&luminosite);
  v_107 = !(vent);
  v_108 = (v_107&&luminosite);
  v_111 = !(vent);
  v_112 = (v_111&&luminosite);
  v_113 = !(v_112);
  v_122 = !(vent);
  v_124 = !(luminosite);
  presence = presenceMaison;
  presence_1 = presenceGarage;
  presence_2 = presenceAscenseur;
  presence_3 = presenceDevantPoubelle;
  sortie = presenceSortiePorte;
  entree = presenceEntreePorte;
  sortie_1 = presenceSortieBarriere;
  entree_1 = presenceEntreeBarriere;
  dAlarme_1 = dAlarme;
  dVigilence_1 = dVigilence;
  dReprise_1 = dReprise;
  code = codeAlarme;
  marcheArret = marcheArretAlarme;
  switch (self->ck) {
    case SmartHome_controller__St_21_Presence:
      v_129 = !(presence);
      if (v_129) {
        s_12_St_21_Presence = SmartHome_controller__St_21_Nothing;
        r_12_St_21_Presence = true;
      } else {
        s_12_St_21_Presence = SmartHome_controller__St_21_Presence;
        r_12_St_21_Presence = self->pnr_12;
      };
      s_12 = s_12_St_21_Presence;
      r_12 = r_12_St_21_Presence;
      break;
    case SmartHome_controller__St_21_Nothing:
      if (presence) {
        s_12_St_21_Nothing = SmartHome_controller__St_21_Presence;
      } else {
        s_12_St_21_Nothing = SmartHome_controller__St_21_Nothing;
      };
      s_12 = s_12_St_21_Nothing;
      if (presence) {
        r_12_St_21_Nothing = true;
      } else {
        r_12_St_21_Nothing = self->pnr_12;
      };
      r_12 = r_12_St_21_Nothing;
      break;
    default:
      break;
  };
  ck_10 = s_12;
  switch (ck_10) {
    case SmartHome_controller__St_21_Presence:
      ns_12_St_21_Presence = SmartHome_controller__St_21_Presence;
      nr_12_St_21_Presence = false;
      occuper_St_21_Presence = true;
      ns_12 = ns_12_St_21_Presence;
      nr_12 = nr_12_St_21_Presence;
      occuper = occuper_St_21_Presence;
      break;
    case SmartHome_controller__St_21_Nothing:
      ns_12_St_21_Nothing = SmartHome_controller__St_21_Nothing;
      ns_12 = ns_12_St_21_Nothing;
      nr_12_St_21_Nothing = false;
      nr_12 = nr_12_St_21_Nothing;
      occuper_St_21_Nothing = false;
      occuper = occuper_St_21_Nothing;
      break;
    default:
      break;
  };
  loccuperMaison = occuper;
  _out->etatMaison = loccuperMaison;
  v_103 = !(loccuperMaison);
  v_104 = (v_102&&v_103);
  v_105 = !(v_104);
  v_109 = (v_108&&loccuperMaison);
  v_110 = !(v_109);
  v_125 = !(loccuperMaison);
  pbHab = loccuperMaison;
  switch (self->ck_11) {
    case SmartHome_controller__St_20_Presence:
      v_130 = !(presence_1);
      if (v_130) {
        s_11_St_20_Presence = SmartHome_controller__St_20_Nothing;
        r_11_St_20_Presence = true;
      } else {
        s_11_St_20_Presence = SmartHome_controller__St_20_Presence;
        r_11_St_20_Presence = self->pnr_11;
      };
      s_11 = s_11_St_20_Presence;
      r_11 = r_11_St_20_Presence;
      break;
    case SmartHome_controller__St_20_Nothing:
      if (presence_1) {
        s_11_St_20_Nothing = SmartHome_controller__St_20_Presence;
      } else {
        s_11_St_20_Nothing = SmartHome_controller__St_20_Nothing;
      };
      s_11 = s_11_St_20_Nothing;
      if (presence_1) {
        r_11_St_20_Nothing = true;
      } else {
        r_11_St_20_Nothing = self->pnr_11;
      };
      r_11 = r_11_St_20_Nothing;
      break;
    default:
      break;
  };
  ck_12 = s_11;
  switch (ck_12) {
    case SmartHome_controller__St_20_Presence:
      ns_11_St_20_Presence = SmartHome_controller__St_20_Presence;
      nr_11_St_20_Presence = false;
      occuper_1_St_20_Presence = true;
      ns_11 = ns_11_St_20_Presence;
      nr_11 = nr_11_St_20_Presence;
      occuper_1 = occuper_1_St_20_Presence;
      break;
    case SmartHome_controller__St_20_Nothing:
      ns_11_St_20_Nothing = SmartHome_controller__St_20_Nothing;
      ns_11 = ns_11_St_20_Nothing;
      nr_11_St_20_Nothing = false;
      nr_11 = nr_11_St_20_Nothing;
      occuper_1_St_20_Nothing = false;
      occuper_1 = occuper_1_St_20_Nothing;
      break;
    default:
      break;
  };
  loccuperGarage = occuper_1;
  pbGar = loccuperGarage;
  switch (self->ck_13) {
    case SmartHome_controller__St_19_Presence:
      v_131 = !(presence_2);
      if (v_131) {
        s_10_St_19_Presence = SmartHome_controller__St_19_Nothing;
        r_10_St_19_Presence = true;
      } else {
        s_10_St_19_Presence = SmartHome_controller__St_19_Presence;
        r_10_St_19_Presence = self->pnr_10;
      };
      s_10 = s_10_St_19_Presence;
      r_10 = r_10_St_19_Presence;
      break;
    case SmartHome_controller__St_19_Nothing:
      if (presence_2) {
        s_10_St_19_Nothing = SmartHome_controller__St_19_Presence;
      } else {
        s_10_St_19_Nothing = SmartHome_controller__St_19_Nothing;
      };
      s_10 = s_10_St_19_Nothing;
      if (presence_2) {
        r_10_St_19_Nothing = true;
      } else {
        r_10_St_19_Nothing = self->pnr_10;
      };
      r_10 = r_10_St_19_Nothing;
      break;
    default:
      break;
  };
  ck_14 = s_10;
  switch (ck_14) {
    case SmartHome_controller__St_19_Presence:
      ns_10_St_19_Presence = SmartHome_controller__St_19_Presence;
      nr_10_St_19_Presence = false;
      occuper_2_St_19_Presence = true;
      ns_10 = ns_10_St_19_Presence;
      nr_10 = nr_10_St_19_Presence;
      occuper_2 = occuper_2_St_19_Presence;
      break;
    case SmartHome_controller__St_19_Nothing:
      ns_10_St_19_Nothing = SmartHome_controller__St_19_Nothing;
      ns_10 = ns_10_St_19_Nothing;
      nr_10_St_19_Nothing = false;
      nr_10 = nr_10_St_19_Nothing;
      occuper_2_St_19_Nothing = false;
      occuper_2 = occuper_2_St_19_Nothing;
      break;
    default:
      break;
  };
  loccuperAscenseur = occuper_2;
  v_65 = !(loccuperAscenseur);
  switch (self->ck_17) {
    case SmartHome_controller__St_17_Presence:
      v_133 = !(presence_3);
      if (v_133) {
        s_8_St_17_Presence = SmartHome_controller__St_17_Nothing;
        r_8_St_17_Presence = true;
      } else {
        s_8_St_17_Presence = SmartHome_controller__St_17_Presence;
        r_8_St_17_Presence = self->pnr_8;
      };
      s_8 = s_8_St_17_Presence;
      r_8 = r_8_St_17_Presence;
      break;
    case SmartHome_controller__St_17_Nothing:
      if (presence_3) {
        s_8_St_17_Nothing = SmartHome_controller__St_17_Presence;
      } else {
        s_8_St_17_Nothing = SmartHome_controller__St_17_Nothing;
      };
      s_8 = s_8_St_17_Nothing;
      if (presence_3) {
        r_8_St_17_Nothing = true;
      } else {
        r_8_St_17_Nothing = self->pnr_8;
      };
      r_8 = r_8_St_17_Nothing;
      break;
    default:
      break;
  };
  ck_18 = s_8;
  switch (ck_18) {
    case SmartHome_controller__St_17_Presence:
      ns_8_St_17_Presence = SmartHome_controller__St_17_Presence;
      nr_8_St_17_Presence = false;
      occuper_3_St_17_Presence = true;
      ns_8 = ns_8_St_17_Presence;
      nr_8 = nr_8_St_17_Presence;
      occuper_3 = occuper_3_St_17_Presence;
      break;
    case SmartHome_controller__St_17_Nothing:
      ns_8_St_17_Nothing = SmartHome_controller__St_17_Nothing;
      ns_8 = ns_8_St_17_Nothing;
      nr_8_St_17_Nothing = false;
      nr_8 = nr_8_St_17_Nothing;
      occuper_3_St_17_Nothing = false;
      occuper_3 = occuper_3_St_17_Nothing;
      break;
    default:
      break;
  };
  lpresencePoubelle = occuper_3;
  v_114 = !(lpresencePoubelle);
  switch (self->ck_23) {
    case SmartHome_controller__St_14_Arriere:
      v_135 = !(entree);
      v_136 = !(sortie);
      v_137 = (v_135&&v_136);
      if (v_137) {
        v_138 = SmartHome_controller__St_14_Idle;
      } else {
        v_138 = SmartHome_controller__St_14_Arriere;
      };
      if (entree) {
        s_5_St_14_Arriere = SmartHome_controller__St_14_Avant;
      } else {
        s_5_St_14_Arriere = v_138;
      };
      if (v_137) {
        v_139 = true;
      } else {
        v_139 = self->pnr_5;
      };
      if (entree) {
        r_5_St_14_Arriere = true;
      } else {
        r_5_St_14_Arriere = v_139;
      };
      s_5 = s_5_St_14_Arriere;
      r_5 = r_5_St_14_Arriere;
      break;
    case SmartHome_controller__St_14_Avant:
      v_140 = !(entree);
      v_141 = !(sortie);
      v_142 = (v_140&&v_141);
      v_143 = !(entree);
      v_144 = (sortie&&v_143);
      if (v_144) {
        v_145 = SmartHome_controller__St_14_Arriere;
      } else {
        v_145 = SmartHome_controller__St_14_Avant;
      };
      if (v_142) {
        s_5_St_14_Avant = SmartHome_controller__St_14_Idle;
      } else {
        s_5_St_14_Avant = v_145;
      };
      if (v_144) {
        v_146 = true;
      } else {
        v_146 = self->pnr_5;
      };
      if (v_142) {
        r_5_St_14_Avant = true;
      } else {
        r_5_St_14_Avant = v_146;
      };
      s_5 = s_5_St_14_Avant;
      r_5 = r_5_St_14_Avant;
      break;
    case SmartHome_controller__St_14_Idle:
      v_147 = !(entree);
      v_148 = (v_147&&sortie);
      if (v_148) {
        v_149 = SmartHome_controller__St_14_Arriere;
      } else {
        v_149 = SmartHome_controller__St_14_Idle;
      };
      if (entree) {
        s_5_St_14_Idle = SmartHome_controller__St_14_Avant;
      } else {
        s_5_St_14_Idle = v_149;
      };
      s_5 = s_5_St_14_Idle;
      if (v_148) {
        v_150 = true;
      } else {
        v_150 = self->pnr_5;
      };
      if (entree) {
        r_5_St_14_Idle = true;
      } else {
        r_5_St_14_Idle = v_150;
      };
      r_5 = r_5_St_14_Idle;
      break;
    default:
      break;
  };
  ck_24 = s_5;
  switch (ck_24) {
    case SmartHome_controller__St_14_Arriere:
      ns_5_St_14_Arriere = SmartHome_controller__St_14_Arriere;
      nr_5_St_14_Arriere = false;
      pos_St_14_Arriere = SmartHome_controller__Arriere;
      ns_5 = ns_5_St_14_Arriere;
      nr_5 = nr_5_St_14_Arriere;
      pos = pos_St_14_Arriere;
      break;
    case SmartHome_controller__St_14_Avant:
      ns_5_St_14_Avant = SmartHome_controller__St_14_Avant;
      nr_5_St_14_Avant = false;
      pos_St_14_Avant = SmartHome_controller__Avant;
      ns_5 = ns_5_St_14_Avant;
      nr_5 = nr_5_St_14_Avant;
      pos = pos_St_14_Avant;
      break;
    case SmartHome_controller__St_14_Idle:
      ns_5_St_14_Idle = SmartHome_controller__St_14_Idle;
      ns_5 = ns_5_St_14_Idle;
      nr_5_St_14_Idle = false;
      nr_5 = nr_5_St_14_Idle;
      pos_St_14_Idle = SmartHome_controller__Null;
      pos = pos_St_14_Idle;
      break;
    default:
      break;
  };
  lpositionDevantPorte = pos;
  _out->capteurPositionPorte = lpositionDevantPorte;
  v_78 = (lpositionDevantPorte==SmartHome_controller__Avant);
  v_79 = (codePorte&&v_78);
  v_80 = !(v_79);
  v_82 = (lpositionDevantPorte==SmartHome_controller__Null);
  v_83 = !(v_82);
  v_86 = (lpositionDevantPorte==SmartHome_controller__Arriere);
  v_87 = !(v_86);
  switch (self->ck_27) {
    case SmartHome_controller__St_12_Arriere:
      v_152 = !(entree_1);
      v_153 = !(sortie_1);
      v_154 = (v_152&&v_153);
      if (v_154) {
        v_155 = SmartHome_controller__St_12_Idle;
      } else {
        v_155 = SmartHome_controller__St_12_Arriere;
      };
      if (entree_1) {
        s_3_St_12_Arriere = SmartHome_controller__St_12_Avant;
      } else {
        s_3_St_12_Arriere = v_155;
      };
      if (v_154) {
        v_156 = true;
      } else {
        v_156 = self->pnr_3;
      };
      if (entree_1) {
        r_3_St_12_Arriere = true;
      } else {
        r_3_St_12_Arriere = v_156;
      };
      s_3 = s_3_St_12_Arriere;
      r_3 = r_3_St_12_Arriere;
      break;
    case SmartHome_controller__St_12_Avant:
      v_157 = !(entree_1);
      v_158 = !(sortie_1);
      v_159 = (v_157&&v_158);
      v_160 = !(entree_1);
      v_161 = (sortie_1&&v_160);
      if (v_161) {
        v_162 = SmartHome_controller__St_12_Arriere;
      } else {
        v_162 = SmartHome_controller__St_12_Avant;
      };
      if (v_159) {
        s_3_St_12_Avant = SmartHome_controller__St_12_Idle;
      } else {
        s_3_St_12_Avant = v_162;
      };
      if (v_161) {
        v_163 = true;
      } else {
        v_163 = self->pnr_3;
      };
      if (v_159) {
        r_3_St_12_Avant = true;
      } else {
        r_3_St_12_Avant = v_163;
      };
      s_3 = s_3_St_12_Avant;
      r_3 = r_3_St_12_Avant;
      break;
    case SmartHome_controller__St_12_Idle:
      v_164 = !(entree_1);
      v_165 = (v_164&&sortie_1);
      if (v_165) {
        v_166 = SmartHome_controller__St_12_Arriere;
      } else {
        v_166 = SmartHome_controller__St_12_Idle;
      };
      if (entree_1) {
        s_3_St_12_Idle = SmartHome_controller__St_12_Avant;
      } else {
        s_3_St_12_Idle = v_166;
      };
      s_3 = s_3_St_12_Idle;
      if (v_165) {
        v_167 = true;
      } else {
        v_167 = self->pnr_3;
      };
      if (entree_1) {
        r_3_St_12_Idle = true;
      } else {
        r_3_St_12_Idle = v_167;
      };
      r_3 = r_3_St_12_Idle;
      break;
    default:
      break;
  };
  ck_28 = s_3;
  switch (ck_28) {
    case SmartHome_controller__St_12_Arriere:
      ns_3_St_12_Arriere = SmartHome_controller__St_12_Arriere;
      nr_3_St_12_Arriere = false;
      pos_1_St_12_Arriere = SmartHome_controller__Arriere;
      ns_3 = ns_3_St_12_Arriere;
      nr_3 = nr_3_St_12_Arriere;
      pos_1 = pos_1_St_12_Arriere;
      break;
    case SmartHome_controller__St_12_Avant:
      ns_3_St_12_Avant = SmartHome_controller__St_12_Avant;
      nr_3_St_12_Avant = false;
      pos_1_St_12_Avant = SmartHome_controller__Avant;
      ns_3 = ns_3_St_12_Avant;
      nr_3 = nr_3_St_12_Avant;
      pos_1 = pos_1_St_12_Avant;
      break;
    case SmartHome_controller__St_12_Idle:
      ns_3_St_12_Idle = SmartHome_controller__St_12_Idle;
      ns_3 = ns_3_St_12_Idle;
      nr_3_St_12_Idle = false;
      nr_3 = nr_3_St_12_Idle;
      pos_1_St_12_Idle = SmartHome_controller__Null;
      pos_1 = pos_1_St_12_Idle;
      break;
    default:
      break;
  };
  lpositionDevantBarriere = pos_1;
  _out->capteurPositionBarriere = lpositionDevantBarriere;
  v_67 = (lpositionDevantBarriere==SmartHome_controller__Avant);
  v_68 = (codeBarriere&&v_67);
  v_69 = !(v_68);
  v_71 = (lpositionDevantBarriere==SmartHome_controller__Null);
  v_72 = !(v_71);
  v_75 = (lpositionDevantBarriere==SmartHome_controller__Arriere);
  v_76 = !(v_75);
  switch (self->ck_31) {
    case SmartHome_controller__St_10_Vigilence:
      s_1_St_10_Vigilence = SmartHome_controller__St_10_Vigilence;
      r_1_St_10_Vigilence = self->pnr_1;
      s_1 = s_1_St_10_Vigilence;
      r_1 = r_1_St_10_Vigilence;
      break;
    case SmartHome_controller__St_10_Sonner:
      s_1_St_10_Sonner = SmartHome_controller__St_10_Sonner;
      r_1_St_10_Sonner = self->pnr_1;
      s_1 = s_1_St_10_Sonner;
      r_1 = r_1_St_10_Sonner;
      break;
    case SmartHome_controller__St_10_Allume:
      s_1_St_10_Allume = SmartHome_controller__St_10_Allume;
      r_1_St_10_Allume = self->pnr_1;
      s_1 = s_1_St_10_Allume;
      r_1 = r_1_St_10_Allume;
      break;
    case SmartHome_controller__St_10_Arret:
      if (marcheArret) {
        s_1_St_10_Arret = SmartHome_controller__St_10_Allume;
      } else {
        s_1_St_10_Arret = SmartHome_controller__St_10_Arret;
      };
      s_1 = s_1_St_10_Arret;
      if (marcheArret) {
        r_1_St_10_Arret = true;
      } else {
        r_1_St_10_Arret = self->pnr_1;
      };
      r_1 = r_1_St_10_Arret;
      break;
    default:
      break;
  };
  ck_32 = s_1;
  switch (ck_32) {
    case SmartHome_controller__St_10_Vigilence:
      temps_St_10_Vigilence = self->temps_2;
      reprise_St_10_Vigilence = self->reprise_2;
      if (r_1) {
        vigilence_St_10_Vigilence = 0;
      } else {
        vigilence_St_10_Vigilence = self->v_172;
      };
      sonnerAlarme_St_10_Vigilence = false;
      enMarche_St_10_Vigilence = SmartHome_controller__Jaune;
      temps = temps_St_10_Vigilence;
      vigilence = vigilence_St_10_Vigilence;
      v_168 = (dVigilence_1<=vigilence);
      if (v_168) {
        v_169 = SmartHome_controller__St_10_Arret;
      } else {
        v_169 = SmartHome_controller__St_10_Vigilence;
      };
      if (pbHab) {
        ns_1_St_10_Vigilence = SmartHome_controller__St_10_Sonner;
      } else {
        ns_1_St_10_Vigilence = v_169;
      };
      if (v_168) {
        v_170 = true;
      } else {
        v_170 = false;
      };
      if (pbHab) {
        nr_1_St_10_Vigilence = true;
      } else {
        nr_1_St_10_Vigilence = v_170;
      };
      v_171 = (vigilence+1);
      reprise = reprise_St_10_Vigilence;
      ns_1 = ns_1_St_10_Vigilence;
      nr_1 = nr_1_St_10_Vigilence;
      enMarche = enMarche_St_10_Vigilence;
      sonnerAlarme = sonnerAlarme_St_10_Vigilence;
      break;
    case SmartHome_controller__St_10_Sonner:
      temps_St_10_Sonner = self->temps_2;
      vigilence_St_10_Sonner = self->vigilence_2;
      if (r_1) {
        reprise_St_10_Sonner = 0;
      } else {
        reprise_St_10_Sonner = self->v_177;
      };
      sonnerAlarme_St_10_Sonner = true;
      enMarche_St_10_Sonner = SmartHome_controller__Vert;
      temps = temps_St_10_Sonner;
      vigilence = vigilence_St_10_Sonner;
      reprise = reprise_St_10_Sonner;
      v_173 = (dReprise_1<=reprise);
      if (v_173) {
        v_174 = SmartHome_controller__St_10_Allume;
      } else {
        v_174 = SmartHome_controller__St_10_Sonner;
      };
      if (code) {
        ns_1_St_10_Sonner = SmartHome_controller__St_10_Arret;
      } else {
        ns_1_St_10_Sonner = v_174;
      };
      ns_1 = ns_1_St_10_Sonner;
      if (v_173) {
        v_175 = true;
      } else {
        v_175 = false;
      };
      if (code) {
        nr_1_St_10_Sonner = true;
      } else {
        nr_1_St_10_Sonner = v_175;
      };
      nr_1 = nr_1_St_10_Sonner;
      v_176 = (reprise+1);
      enMarche = enMarche_St_10_Sonner;
      sonnerAlarme = sonnerAlarme_St_10_Sonner;
      break;
    case SmartHome_controller__St_10_Allume:
      vigilence_St_10_Allume = self->vigilence_2;
      reprise_St_10_Allume = self->reprise_2;
      if (r_1) {
        temps_St_10_Allume = 0;
      } else {
        temps_St_10_Allume = self->v_185;
      };
      sonnerAlarme_St_10_Allume = false;
      enMarche_St_10_Allume = SmartHome_controller__Vert;
      temps = temps_St_10_Allume;
      v_178 = (dVigilence_1<=temps);
      v_179 = (pbGar&&v_178);
      if (v_179) {
        v_180 = SmartHome_controller__St_10_Sonner;
      } else {
        v_180 = SmartHome_controller__St_10_Allume;
      };
      if (pbHab) {
        v_182 = SmartHome_controller__St_10_Sonner;
      } else {
        v_182 = v_180;
      };
      if (code) {
        ns_1_St_10_Allume = SmartHome_controller__St_10_Vigilence;
      } else {
        ns_1_St_10_Allume = v_182;
      };
      if (v_179) {
        v_181 = true;
      } else {
        v_181 = false;
      };
      if (pbHab) {
        v_183 = true;
      } else {
        v_183 = v_181;
      };
      if (code) {
        nr_1_St_10_Allume = true;
      } else {
        nr_1_St_10_Allume = v_183;
      };
      v_184 = (temps+1);
      vigilence = vigilence_St_10_Allume;
      reprise = reprise_St_10_Allume;
      ns_1 = ns_1_St_10_Allume;
      nr_1 = nr_1_St_10_Allume;
      enMarche = enMarche_St_10_Allume;
      sonnerAlarme = sonnerAlarme_St_10_Allume;
      break;
    case SmartHome_controller__St_10_Arret:
      ns_1_St_10_Arret = SmartHome_controller__St_10_Arret;
      nr_1_St_10_Arret = false;
      temps_St_10_Arret = self->temps_2;
      temps = temps_St_10_Arret;
      vigilence_St_10_Arret = self->vigilence_2;
      vigilence = vigilence_St_10_Arret;
      reprise_St_10_Arret = self->reprise_2;
      reprise = reprise_St_10_Arret;
      ns_1 = ns_1_St_10_Arret;
      nr_1 = nr_1_St_10_Arret;
      enMarche_St_10_Arret = SmartHome_controller__Rouge;
      enMarche = enMarche_St_10_Arret;
      sonnerAlarme_St_10_Arret = false;
      sonnerAlarme = sonnerAlarme_St_10_Arret;
      break;
    default:
      break;
  };
  lsonnerAlarme = sonnerAlarme;
  _out->alarmeSonne = lsonnerAlarme;
  lenMarche = enMarche;
  _out->etatAlarme = lenMarche;
  v_63 = (lenMarche==SmartHome_controller__Rouge);
  v_64 = !(v_63);
  prop22 = (loccuperMaison||v_64);
  SmartHome_controller__smartHome_ctrlr0_step(self->ck, self->ck_11,
                                              self->ck_13, self->ck_15,
                                              self->ck_17, self->ck_19,
                                              self->ck_21, self->ck_23,
                                              self->ck_25, self->ck_27,
                                              self->ck_29, self->ck_31,
                                              self->ck_33, codeAlarme,
                                              codeBarriere, codePorte,
                                              dAlarme, dReprise, dVigilence,
                                              luminosite, marcheArretAlarme,
                                              ok, self->pnr, self->pnr_1,
                                              self->pnr_10, self->pnr_11,
                                              self->pnr_12, self->pnr_2,
                                              self->pnr_3, self->pnr_4,
                                              self->pnr_5, self->pnr_6,
                                              self->pnr_7, self->pnr_8,
                                              self->pnr_9, presenceAscenseur,
                                              presenceDevantPoubelle,
                                              presenceEntreeBarriere,
                                              presenceEntreePorte,
                                              presenceGarage, presenceMaison,
                                              presenceSortieBarriere,
                                              presenceSortiePorte,
                                              self->reprise_2, self->temps_2,
                                              self->v_172, self->v_177,
                                              self->v_185, vent,
                                              self->vigilence_2,
                                              &SmartHome_controller__smartHome_ctrlr0_out_st);
  arriveEtage = SmartHome_controller__smartHome_ctrlr0_out_st.arriveEtage;
  close = SmartHome_controller__smartHome_ctrlr0_out_st.close;
  coff = SmartHome_controller__smartHome_ctrlr0_out_st.coff;
  con = SmartHome_controller__smartHome_ctrlr0_out_st.con;
  copen = SmartHome_controller__smartHome_ctrlr0_out_st.copen;
  demandeEtage = SmartHome_controller__smartHome_ctrlr0_out_st.demandeEtage;
  interrupteur = SmartHome_controller__smartHome_ctrlr0_out_st.interrupteur;
  openBarriere = SmartHome_controller__smartHome_ctrlr0_out_st.openBarriere;
  openPorte = SmartHome_controller__smartHome_ctrlr0_out_st.openPorte;
  interrupteur_1 = interrupteur;
  coff_1 = coff;
  con_1 = con;
  copen_1 = openPorte;
  copen_2 = openBarriere;
  close_1 = close;
  copen_3 = copen;
  arriveEtage_1 = arriveEtage;
  demandeEtage_1 = demandeEtage;
  switch (self->ck_15) {
    case SmartHome_controller__St_18_On:
      v_132 = !(interrupteur_1);
      if (v_132) {
        s_9_St_18_On = SmartHome_controller__St_18_Off;
        r_9_St_18_On = true;
      } else {
        s_9_St_18_On = SmartHome_controller__St_18_On;
        r_9_St_18_On = self->pnr_9;
      };
      s_9 = s_9_St_18_On;
      r_9 = r_9_St_18_On;
      break;
    case SmartHome_controller__St_18_Off:
      if (interrupteur_1) {
        s_9_St_18_Off = SmartHome_controller__St_18_On;
      } else {
        s_9_St_18_Off = SmartHome_controller__St_18_Off;
      };
      s_9 = s_9_St_18_Off;
      if (interrupteur_1) {
        r_9_St_18_Off = true;
      } else {
        r_9_St_18_Off = self->pnr_9;
      };
      r_9 = r_9_St_18_Off;
      break;
    default:
      break;
  };
  ck_16 = s_9;
  switch (ck_16) {
    case SmartHome_controller__St_18_On:
      ns_9_St_18_On = SmartHome_controller__St_18_On;
      nr_9_St_18_On = false;
      lumiere_1_St_18_On = true;
      ns_9 = ns_9_St_18_On;
      nr_9 = nr_9_St_18_On;
      lumiere_1 = lumiere_1_St_18_On;
      break;
    case SmartHome_controller__St_18_Off:
      ns_9_St_18_Off = SmartHome_controller__St_18_Off;
      ns_9 = ns_9_St_18_Off;
      nr_9_St_18_Off = false;
      nr_9 = nr_9_St_18_Off;
      lumiere_1_St_18_Off = false;
      lumiere_1 = lumiere_1_St_18_Off;
      break;
    default:
      break;
  };
  lLumiere = lumiere_1;
  _out->lumiere = lLumiere;
  v_117 = !(lLumiere);
  v_128 = !(lLumiere);
  prop1 = (loccuperMaison||v_128);
  switch (self->ck_19) {
    case SmartHome_controller__St_16_Ouvrir:
      if (coff_1) {
        s_7_St_16_Ouvrir = SmartHome_controller__St_16_Fermer;
        r_7_St_16_Ouvrir = true;
      } else {
        s_7_St_16_Ouvrir = SmartHome_controller__St_16_Ouvrir;
        r_7_St_16_Ouvrir = self->pnr_7;
      };
      s_7 = s_7_St_16_Ouvrir;
      r_7 = r_7_St_16_Ouvrir;
      break;
    case SmartHome_controller__St_16_Fermer:
      if (con_1) {
        s_7_St_16_Fermer = SmartHome_controller__St_16_Ouvrir;
      } else {
        s_7_St_16_Fermer = SmartHome_controller__St_16_Fermer;
      };
      s_7 = s_7_St_16_Fermer;
      if (con_1) {
        r_7_St_16_Fermer = true;
      } else {
        r_7_St_16_Fermer = self->pnr_7;
      };
      r_7 = r_7_St_16_Fermer;
      break;
    default:
      break;
  };
  ck_20 = s_7;
  switch (ck_20) {
    case SmartHome_controller__St_16_Ouvrir:
      ns_7_St_16_Ouvrir = SmartHome_controller__St_16_Ouvrir;
      nr_7_St_16_Ouvrir = false;
      ouvrir_St_16_Ouvrir = true;
      ns_7 = ns_7_St_16_Ouvrir;
      nr_7 = nr_7_St_16_Ouvrir;
      ouvrir = ouvrir_St_16_Ouvrir;
      break;
    case SmartHome_controller__St_16_Fermer:
      ns_7_St_16_Fermer = SmartHome_controller__St_16_Fermer;
      ns_7 = ns_7_St_16_Fermer;
      nr_7_St_16_Fermer = false;
      nr_7 = nr_7_St_16_Fermer;
      ouvrir_St_16_Fermer = false;
      ouvrir = ouvrir_St_16_Fermer;
      break;
    default:
      break;
  };
  louvrirPoubelle = ouvrir;
  prop11 = (v_114||louvrirPoubelle);
  _out->poubelleOuvert = louvrirPoubelle;
  v_115 = !(louvrirPoubelle);
  prop10 = (lpresencePoubelle||v_115);
  switch (self->ck_21) {
    case SmartHome_controller__St_15_Ouvrir:
      v_134 = !(copen_1);
      if (v_134) {
        s_6_St_15_Ouvrir = SmartHome_controller__St_15_Fermer;
        r_6_St_15_Ouvrir = true;
      } else {
        s_6_St_15_Ouvrir = SmartHome_controller__St_15_Ouvrir;
        r_6_St_15_Ouvrir = self->pnr_6;
      };
      s_6 = s_6_St_15_Ouvrir;
      r_6 = r_6_St_15_Ouvrir;
      break;
    case SmartHome_controller__St_15_Fermer:
      if (copen_1) {
        s_6_St_15_Fermer = SmartHome_controller__St_15_Ouvrir;
      } else {
        s_6_St_15_Fermer = SmartHome_controller__St_15_Fermer;
      };
      s_6 = s_6_St_15_Fermer;
      if (copen_1) {
        r_6_St_15_Fermer = true;
      } else {
        r_6_St_15_Fermer = self->pnr_6;
      };
      r_6 = r_6_St_15_Fermer;
      break;
    default:
      break;
  };
  ck_22 = s_6;
  switch (ck_22) {
    case SmartHome_controller__St_15_Ouvrir:
      ns_6_St_15_Ouvrir = SmartHome_controller__St_15_Ouvrir;
      nr_6_St_15_Ouvrir = false;
      ouvrir_1_St_15_Ouvrir = SmartHome_controller__Fermer;
      ns_6 = ns_6_St_15_Ouvrir;
      nr_6 = nr_6_St_15_Ouvrir;
      ouvrir_1 = ouvrir_1_St_15_Ouvrir;
      break;
    case SmartHome_controller__St_15_Fermer:
      ns_6_St_15_Fermer = SmartHome_controller__St_15_Fermer;
      ns_6 = ns_6_St_15_Fermer;
      nr_6_St_15_Fermer = false;
      nr_6 = nr_6_St_15_Fermer;
      ouvrir_1_St_15_Fermer = SmartHome_controller__Ouvert;
      ouvrir_1 = ouvrir_1_St_15_Fermer;
      break;
    default:
      break;
  };
  louvrirPorte = ouvrir_1;
  _out->porteStatus = louvrirPorte;
  v_81 = (louvrirPorte==SmartHome_controller__Ouvert);
  prop16 = (v_80||v_81);
  v_84 = (louvrirPorte==SmartHome_controller__Ouvert);
  v_85 = !(v_84);
  prop23 = (v_83||v_85);
  v_88 = (louvrirPorte==SmartHome_controller__Ouvert);
  prop17 = (v_87||v_88);
  switch (self->ck_25) {
    case SmartHome_controller__St_13_Ouvrir:
      v_151 = !(copen_2);
      if (v_151) {
        s_4_St_13_Ouvrir = SmartHome_controller__St_13_Fermer;
        r_4_St_13_Ouvrir = true;
      } else {
        s_4_St_13_Ouvrir = SmartHome_controller__St_13_Ouvrir;
        r_4_St_13_Ouvrir = self->pnr_4;
      };
      s_4 = s_4_St_13_Ouvrir;
      r_4 = r_4_St_13_Ouvrir;
      break;
    case SmartHome_controller__St_13_Fermer:
      if (copen_2) {
        s_4_St_13_Fermer = SmartHome_controller__St_13_Ouvrir;
      } else {
        s_4_St_13_Fermer = SmartHome_controller__St_13_Fermer;
      };
      s_4 = s_4_St_13_Fermer;
      if (copen_2) {
        r_4_St_13_Fermer = true;
      } else {
        r_4_St_13_Fermer = self->pnr_4;
      };
      r_4 = r_4_St_13_Fermer;
      break;
    default:
      break;
  };
  ck_26 = s_4;
  switch (ck_26) {
    case SmartHome_controller__St_13_Ouvrir:
      ns_4_St_13_Ouvrir = SmartHome_controller__St_13_Ouvrir;
      nr_4_St_13_Ouvrir = false;
      ouvrir_2_St_13_Ouvrir = SmartHome_controller__Fermer;
      ns_4 = ns_4_St_13_Ouvrir;
      nr_4 = nr_4_St_13_Ouvrir;
      ouvrir_2 = ouvrir_2_St_13_Ouvrir;
      break;
    case SmartHome_controller__St_13_Fermer:
      ns_4_St_13_Fermer = SmartHome_controller__St_13_Fermer;
      ns_4 = ns_4_St_13_Fermer;
      nr_4_St_13_Fermer = false;
      nr_4 = nr_4_St_13_Fermer;
      ouvrir_2_St_13_Fermer = SmartHome_controller__Ouvert;
      ouvrir_2 = ouvrir_2_St_13_Fermer;
      break;
    default:
      break;
  };
  louvrirBarriere = ouvrir_2;
  _out->barriere = louvrirBarriere;
  v_70 = (louvrirBarriere==SmartHome_controller__Ouvert);
  prop18 = (v_69||v_70);
  v_73 = (louvrirBarriere==SmartHome_controller__Ouvert);
  v_74 = !(v_73);
  prop24 = (v_72||v_74);
  v_77 = (louvrirBarriere==SmartHome_controller__Ouvert);
  prop19 = (v_76||v_77);
  switch (self->ck_29) {
    case SmartHome_controller__St_11_Ouvrir:
      if (close_1) {
        s_2_St_11_Ouvrir = SmartHome_controller__St_11_Fermer;
        r_2_St_11_Ouvrir = true;
      } else {
        s_2_St_11_Ouvrir = SmartHome_controller__St_11_Ouvrir;
        r_2_St_11_Ouvrir = self->pnr_2;
      };
      s_2 = s_2_St_11_Ouvrir;
      r_2 = r_2_St_11_Ouvrir;
      break;
    case SmartHome_controller__St_11_Fermer:
      if (copen_3) {
        s_2_St_11_Fermer = SmartHome_controller__St_11_Ouvrir;
      } else {
        s_2_St_11_Fermer = SmartHome_controller__St_11_Fermer;
      };
      s_2 = s_2_St_11_Fermer;
      if (copen_3) {
        r_2_St_11_Fermer = true;
      } else {
        r_2_St_11_Fermer = self->pnr_2;
      };
      r_2 = r_2_St_11_Fermer;
      break;
    default:
      break;
  };
  ck_30 = s_2;
  switch (ck_30) {
    case SmartHome_controller__St_11_Ouvrir:
      ns_2_St_11_Ouvrir = SmartHome_controller__St_11_Ouvrir;
      nr_2_St_11_Ouvrir = false;
      store_St_11_Ouvrir = true;
      ns_2 = ns_2_St_11_Ouvrir;
      nr_2 = nr_2_St_11_Ouvrir;
      store = store_St_11_Ouvrir;
      break;
    case SmartHome_controller__St_11_Fermer:
      ns_2_St_11_Fermer = SmartHome_controller__St_11_Fermer;
      ns_2 = ns_2_St_11_Fermer;
      nr_2_St_11_Fermer = false;
      nr_2 = nr_2_St_11_Fermer;
      store_St_11_Fermer = false;
      store = store_St_11_Fermer;
      break;
    default:
      break;
  };
  lstores = store;
  prop12a = (v_110||lstores);
  prop8 = (lstores||lLumiere);
  v_126 = (lstores||lLumiere);
  prop3 = (v_125||v_126);
  _out->ouvertureStore = lstores;
  v_93 = !(lstores);
  prop15 = (v_92||v_93);
  v_96 = !(lstores);
  prop14 = (v_95||v_96);
  v_100 = !(lstores);
  prop13 = (v_99||v_100);
  v_106 = !(lstores);
  prop12b = (v_105||v_106);
  prop12 = (v_113||lstores);
  v_116 = !(lstores);
  prop9 = (v_116||v_117);
  v_118 = !(lstores);
  v_119 = (v_118&&loccuperMaison);
  v_120 = !(v_119);
  prop8a = (v_120||lLumiere);
  v_121 = !(lstores);
  prop7 = (luminosite||v_121);
  v_123 = !(lstores);
  prop6 = (v_122||v_123);
  prop5 = (v_124||lstores);
  prop4 = (vent||lstores);
  v_127 = !(lstores);
  prop2 = (loccuperMaison||v_127);
  v = (prop1&&prop2);
  v_46 = (v&&prop3);
  v_47 = (v_46&&prop8a);
  v_48 = (v_47&&prop9);
  v_49 = (v_48&&prop10);
  v_50 = (v_49&&prop11);
  v_51 = (v_50&&prop12a);
  v_52 = (v_51&&prop12b);
  v_53 = (v_52&&prop13);
  v_54 = (v_53&&prop14);
  v_55 = (v_54&&prop15);
  v_56 = (v_55&&prop17);
  v_57 = (v_56&&prop18);
  v_58 = (v_57&&prop19);
  v_59 = (v_58&&prop23);
  v_60 = (v_59&&prop24);
  v_61 = (v_60&&prop16);
  switch (self->ck_33) {
    case SmartHome_controller__St_9_Mouvement:
      v_186 = !(demandeEtage_1);
      v_187 = (v_186||arriveEtage_1);
      if (v_187) {
        s_St_9_Mouvement = SmartHome_controller__St_9_Stop;
        r_St_9_Mouvement = true;
      } else {
        s_St_9_Mouvement = SmartHome_controller__St_9_Mouvement;
        r_St_9_Mouvement = self->pnr;
      };
      s = s_St_9_Mouvement;
      r = r_St_9_Mouvement;
      break;
    case SmartHome_controller__St_9_Stop:
      if (demandeEtage_1) {
        s_St_9_Stop = SmartHome_controller__St_9_Mouvement;
      } else {
        s_St_9_Stop = SmartHome_controller__St_9_Stop;
      };
      s = s_St_9_Stop;
      if (demandeEtage_1) {
        r_St_9_Stop = true;
      } else {
        r_St_9_Stop = self->pnr;
      };
      r = r_St_9_Stop;
      break;
    default:
      break;
  };
  ck_34 = s;
  switch (ck_34) {
    case SmartHome_controller__St_9_Mouvement:
      ns_St_9_Mouvement = SmartHome_controller__St_9_Mouvement;
      nr_St_9_Mouvement = false;
      etat_St_9_Mouvement = true;
      ns = ns_St_9_Mouvement;
      nr = nr_St_9_Mouvement;
      etat = etat_St_9_Mouvement;
      break;
    case SmartHome_controller__St_9_Stop:
      ns_St_9_Stop = SmartHome_controller__St_9_Stop;
      ns = ns_St_9_Stop;
      nr_St_9_Stop = false;
      nr = nr_St_9_Stop;
      etat_St_9_Stop = false;
      etat = etat_St_9_Stop;
      break;
    default:
      break;
  };
  lascenseur = etat;
  prop21 = (v_65||lascenseur);
  _out->ascenseur = lascenseur;
  v_66 = !(lascenseur);
  prop20 = (loccuperAscenseur||v_66);
  v_62 = (v_61&&prop20);
  _out->property = (v_62&&prop21);
  self->ck = ns_12;
  self->pnr_12 = nr_12;
  self->ck_11 = ns_11;
  self->pnr_11 = nr_11;
  self->ck_13 = ns_10;
  self->pnr_10 = nr_10;
  self->ck_15 = ns_9;
  self->pnr_9 = nr_9;
  self->ck_17 = ns_8;
  self->pnr_8 = nr_8;
  self->ck_19 = ns_7;
  self->pnr_7 = nr_7;
  self->ck_21 = ns_6;
  self->pnr_6 = nr_6;
  self->ck_23 = ns_5;
  self->pnr_5 = nr_5;
  self->ck_25 = ns_4;
  self->pnr_4 = nr_4;
  self->ck_27 = ns_3;
  self->pnr_3 = nr_3;
  self->ck_29 = ns_2;
  self->pnr_2 = nr_2;
  self->ck_31 = ns_1;
  self->pnr_1 = nr_1;
  self->ck_33 = ns;
  self->pnr = nr;
  self->temps_2 = temps;
  self->vigilence_2 = vigilence;
  self->reprise_2 = reprise;
  switch (ck_32) {
    case SmartHome_controller__St_10_Vigilence:
      self->v_172 = v_171;
      break;
    case SmartHome_controller__St_10_Sonner:
      self->v_177 = v_176;
      break;
    case SmartHome_controller__St_10_Allume:
      self->v_185 = v_184;
      break;
    default:
      break;
  };;
}

