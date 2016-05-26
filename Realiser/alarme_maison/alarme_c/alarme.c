/* --- Generated the 24/3/2016 at 16:35 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. feb. 11 18:24:22 CET 2016) --- */
/* --- Command line: /usr/local/bin/heptc -hepts -s alarme -target c -target ctrln alarme.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "alarme.h"

void Alarme__alarme_reset(Alarme__alarme_mem* self) {
  self->pnr = false;
  self->temps_1 = 0;
  self->vigilence_1 = 0;
  self->reprise_1 = 0;
  self->v_11 = 0;
  self->v_14 = 0;
  self->v_22 = 0;
  self->ck = Alarme_controller__St_Arret;
}

void Alarme__alarme_step(int ma, int code, int pbGar, int pbHab,
                         int dReprise, int dVigilence, int dAlarme,
                         Alarme__alarme_out* _out, Alarme__alarme_mem* self) {
  Alarme_controller__alarme_ctrlr0_out Alarme_controller__alarme_ctrlr0_out_st;
  
  int v_6;
  int v_5;
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int v;
  int c;
  int ok;
  int v_10;
  int v_9;
  Alarme_controller__st v_8;
  int v_7;
  int v_13;
  int v_12;
  int v_21;
  int v_20;
  Alarme_controller__st v_19;
  int v_18;
  Alarme_controller__st v_17;
  int v_16;
  int v_15;
  int nr_St_Vigilence;
  Alarme_controller__st ns_St_Vigilence;
  int reprise_St_Vigilence;
  int vigilence_St_Vigilence;
  int temps_St_Vigilence;
  Alarme_controller__etat enMarche_St_Vigilence;
  int al_St_Vigilence;
  int nr_St_Sonner;
  Alarme_controller__st ns_St_Sonner;
  int reprise_St_Sonner;
  int vigilence_St_Sonner;
  int temps_St_Sonner;
  Alarme_controller__etat enMarche_St_Sonner;
  int al_St_Sonner;
  int nr_St_Allume;
  Alarme_controller__st ns_St_Allume;
  int reprise_St_Allume;
  int vigilence_St_Allume;
  int temps_St_Allume;
  Alarme_controller__etat enMarche_St_Allume;
  int al_St_Allume;
  int nr_St_Arret;
  Alarme_controller__st ns_St_Arret;
  int reprise_St_Arret;
  int vigilence_St_Arret;
  int temps_St_Arret;
  Alarme_controller__etat enMarche_St_Arret;
  int al_St_Arret;
  Alarme_controller__st ns;
  int r;
  int nr;
  int temps;
  int vigilence;
  int reprise;
  r = self->pnr;
  switch (self->ck) {
    case Alarme_controller__St_Vigilence:
      temps_St_Vigilence = self->temps_1;
      reprise_St_Vigilence = self->reprise_1;
      if (r) {
        vigilence_St_Vigilence = 0;
      } else {
        vigilence_St_Vigilence = self->v_11;
      };
      al_St_Vigilence = false;
      enMarche_St_Vigilence = Alarme_controller__DispositifVigilence;
      vigilence = vigilence_St_Vigilence;
      v_7 = (dVigilence<vigilence);
      if (v_7) {
        v_8 = Alarme_controller__St_Arret;
      } else {
        v_8 = Alarme_controller__St_Vigilence;
      };
      if (pbHab) {
        ns_St_Vigilence = Alarme_controller__St_Sonner;
      } else {
        ns_St_Vigilence = v_8;
      };
      if (v_7) {
        v_9 = true;
      } else {
        v_9 = false;
      };
      if (pbHab) {
        nr_St_Vigilence = true;
      } else {
        nr_St_Vigilence = v_9;
      };
      v_10 = (vigilence+1);
      reprise = reprise_St_Vigilence;
      _out->enMarche = enMarche_St_Vigilence;
      _out->al = al_St_Vigilence;
      temps = temps_St_Vigilence;
      ns = ns_St_Vigilence;
      nr = nr_St_Vigilence;
      break;
    case Alarme_controller__St_Sonner:
      temps_St_Sonner = self->temps_1;
      vigilence_St_Sonner = self->vigilence_1;
      if (r) {
        reprise_St_Sonner = 0;
      } else {
        reprise_St_Sonner = self->v_14;
      };
      al_St_Sonner = true;
      enMarche_St_Sonner = Alarme_controller__DispositifMarche;
      vigilence = vigilence_St_Sonner;
      reprise = reprise_St_Sonner;
      v_12 = (dReprise<reprise);
      if (v_12) {
        ns_St_Sonner = Alarme_controller__St_Allume;
        nr_St_Sonner = true;
      } else {
        ns_St_Sonner = Alarme_controller__St_Sonner;
        nr_St_Sonner = false;
      };
      v_13 = (reprise+1);
      _out->enMarche = enMarche_St_Sonner;
      _out->al = al_St_Sonner;
      temps = temps_St_Sonner;
      ns = ns_St_Sonner;
      nr = nr_St_Sonner;
      break;
    case Alarme_controller__St_Allume:
      vigilence_St_Allume = 0;
      reprise_St_Allume = 0;
      if (r) {
        temps_St_Allume = 0;
      } else {
        temps_St_Allume = self->v_22;
      };
      al_St_Allume = false;
      enMarche_St_Allume = Alarme_controller__DispositifMarche;
      vigilence = vigilence_St_Allume;
      reprise = reprise_St_Allume;
      _out->enMarche = enMarche_St_Allume;
      _out->al = al_St_Allume;
      temps = temps_St_Allume;
      v_15 = (dVigilence<temps);
      v_16 = (pbGar&&v_15);
      if (v_16) {
        v_17 = Alarme_controller__St_Sonner;
      } else {
        v_17 = Alarme_controller__St_Allume;
      };
      if (pbHab) {
        v_19 = Alarme_controller__St_Sonner;
      } else {
        v_19 = v_17;
      };
      if (code) {
        ns_St_Allume = Alarme_controller__St_Vigilence;
      } else {
        ns_St_Allume = v_19;
      };
      ns = ns_St_Allume;
      if (v_16) {
        v_18 = true;
      } else {
        v_18 = false;
      };
      if (pbHab) {
        v_20 = true;
      } else {
        v_20 = v_18;
      };
      if (code) {
        nr_St_Allume = true;
      } else {
        nr_St_Allume = v_20;
      };
      nr = nr_St_Allume;
      v_21 = (temps+1);
      break;
    case Alarme_controller__St_Arret:
      if (ma) {
        ns_St_Arret = Alarme_controller__St_Allume;
        nr_St_Arret = true;
      } else {
        ns_St_Arret = Alarme_controller__St_Arret;
        nr_St_Arret = false;
      };
      vigilence_St_Arret = self->vigilence_1;
      vigilence = vigilence_St_Arret;
      reprise_St_Arret = self->reprise_1;
      reprise = reprise_St_Arret;
      enMarche_St_Arret = Alarme_controller__ArretDispositif;
      _out->enMarche = enMarche_St_Arret;
      al_St_Arret = false;
      _out->al = al_St_Arret;
      temps_St_Arret = 0;
      temps = temps_St_Arret;
      ns = ns_St_Arret;
      nr = nr_St_Arret;
      break;
    default:
      break;
  };
  Alarme_controller__alarme_ctrlr0_step(self->ck, code, dAlarme, dReprise,
                                        dVigilence, ma, ok, pbGar, pbHab,
                                        self->pnr, self->reprise_1,
                                        self->temps_1, self->v_11,
                                        self->v_14, self->v_22,
                                        self->vigilence_1,
                                        &Alarme_controller__alarme_ctrlr0_out_st);
  c = Alarme_controller__alarme_ctrlr0_out_st.c;
  self->pnr = nr;
  self->temps_1 = temps;
  self->vigilence_1 = vigilence;
  self->reprise_1 = reprise;
  switch (self->ck) {
    case Alarme_controller__St_Vigilence:
      self->v_11 = v_10;
      break;
    case Alarme_controller__St_Sonner:
      self->v_14 = v_13;
      break;
    case Alarme_controller__St_Allume:
      self->v_22 = v_21;
      break;
    default:
      break;
  };
  self->ck = ns;
  v = !(_out->al);
  v_1 = (_out->enMarche==Alarme_controller__DispositifVigilence);
  v_2 = !(v_1);
  v_3 = (_out->enMarche==Alarme_controller__ArretDispositif);
  v_4 = !(v_3);
  v_5 = (v_2&&v_4);
  v_6 = (v||v_5);;
}

