/* --- Generated the 30/5/2016 at 14:52 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -target c automobile_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "automobile_controller.h"

void Automobile_controller__automobile_ctrlr0_step(int activeRegulateurTemperature,
                                                   Automobile_controller__couleur capteurDectecteurFeu,
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
  int v_45;
  int v_44;
  int v_43;
  int v_42;
  int v_41;
  int v_40;
  int v_39;
  int v_38;
  int v_37;
  int v_36;
  int v_35;
  int v_34;
  int v_33;
  int v_32;
  int v_31;
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v_26;
  int v_25;
  int v_24;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_19;
  int v_18;
  int v_17;
  int v_16;
  int v_15;
  int v_14;
  int v_13;
  int v_12;
  int v_11;
  int v_10;
  int v_9;
  int v_8;
  int v_7;
  int v_6;
  int v_5;
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int l79;
  int l78;
  int l77;
  int l76;
  int l75;
  int l74;
  int l73;
  int l72;
  int l71;
  int l70;
  int l69;
  int l68;
  int l67;
  int l66;
  int l65;
  int l64;
  int l63;
  int l62;
  int l61;
  int l60;
  int l59;
  int l58;
  int l57;
  int l56;
  int l55;
  int l54;
  int l53;
  int l52;
  int l51;
  int l50;
  int l49;
  int l48;
  int l47;
  int l46;
  int l45;
  int l44;
  int l43;
  int l42;
  int l41;
  int l40;
  int l39;
  int l38;
  int l37;
  int l36;
  int l35;
  int l34;
  int l33;
  int l32;
  int l31;
  int l30;
  int l29;
  int l28;
  int l27;
  int l26;
  int l25;
  int l24;
  int l23;
  int l22;
  int l21;
  int l20;
  int l19;
  int l18;
  int l17;
  int l16;
  int l15;
  int l14;
  int l13;
  int l12;
  int l11;
  int l10;
  int l9;
  int l8;
  int l7;
  int l6;
  int l5;
  int l4;
  int l3;
  int l2;
  int l1;
  int l0;
  l0 = (cleVoiture||commandeVoiture);
  l1 = (capteurPluie&&l0);
  v_60 = (ck_18==Automobile_controller__St_15_Desactive);
  v_61 = !(v_60);
  l2 = (v_61||l1);
  _out->con = l2;
  l3 = !(capteurPluie);
  l4 = !(cleVoiture);
  l5 = !(commandeVoiture);
  l6 = (l4&&l5);
  l7 = (l3||l6);
  v_59 = (ck_18==Automobile_controller__St_15_Desactive);
  l8 = (v_59||l7);
  _out->cclose = l8;
  v_58 = (ck_28==Automobile_controller__St_10_Idle);
  l9 = !(v_58);
  v_57 = (lumiere==Automobile_controller__Low);
  l10 = !(v_57);
  v_55 = (ck_28==Automobile_controller__St_10_Idle);
  v_56 = !(v_55);
  l11 = (v_56||l10);
  v_54 = (lumiere==Automobile_controller__Null);
  v_53 = (lumiere==Automobile_controller__High);
  l12 = (v_53||v_54);
  v_52 = (ck_28==Automobile_controller__St_10_Veilleuses);
  if (v_52) {
    l13 = l12;
  } else {
    l13 = l11;
  };
  if (commandeVoiture) {
    l14 = l13;
  } else {
    l14 = l9;
  };
  if (cleVoiture) {
    _out->td = l13;
  } else {
    _out->td = l14;
  };
  v_51 = (ck_28==Automobile_controller__St_10_Codes);
  l15 = !(v_51);
  v_49 = (ck_28==Automobile_controller__St_10_Codes);
  v_50 = !(v_49);
  l16 = (v_50||l10);
  v_47 = (ck_28==Automobile_controller__St_10_Veilleuses);
  v_48 = !(v_47);
  l17 = (v_48&&l16);
  if (commandeVoiture) {
    l18 = l17;
  } else {
    l18 = l15;
  };
  if (cleVoiture) {
    _out->ti = l17;
  } else {
    _out->ti = l18;
  };
  v_46 = (ck_28==Automobile_controller__St_10_Veilleuses);
  v_45 = (ck_28==Automobile_controller__St_10_Idle);
  l19 = (v_45||v_46);
  v_43 = (ck_28==Automobile_controller__St_10_Phares);
  v_44 = !(v_43);
  l20 = (v_44||l12);
  if (commandeVoiture) {
    l21 = l20;
  } else {
    l21 = l19;
  };
  if (cleVoiture) {
    _out->cp = l20;
  } else {
    _out->cp = l21;
  };
  v_42 = (capteurDectecteurFeu==Automobile_controller__Vert);
  l22 = !(v_42);
  l23 = (detectionPresencePieton||l22);
  l24 = (detectionAccident||l23);
  v_41 = (ck_20==Automobile_controller__St_14_Active);
  l25 = (v_41||l24);
  l26 = (detectionVolantLibre||l25);
  l27 = (detectionAngleMort||l26);
  l28 = (detectionDefaillanceTechnique||l27);
  l29 = (detectionPresencevehicule||l28);
  l30 = (detectionLigne||l29);
  l31 = (l5||l30);
  if (cleVoiture) {
    l32 = l30;
  } else {
    l32 = l31;
  };
  v_40 = (ck_14==Automobile_controller__St_17_Stop);
  l33 = (v_40||l32);
  _out->frein = l33;
  l34 = !(detectionPresencevehicule);
  l35 = !(detectionAccident);
  l36 = !(detectionPresencePieton);
  l37 = (capteurDectecteurFeu==Automobile_controller__Vert);
  l38 = (l36&&l37);
  l39 = (l35&&l38);
  v_39 = (ck_20==Automobile_controller__St_14_Desactive);
  l40 = (v_39&&l39);
  l41 = (l34&&l40);
  l42 = (commandeVoiture&&l41);
  if (cleVoiture) {
    l43 = l41;
  } else {
    l43 = l42;
  };
  v_37 = (ck_14==Automobile_controller__St_17_Stop);
  v_38 = !(v_37);
  l44 = (v_38||l43);
  _out->accelerateur = l44;
  v_36 = (ck_16==Automobile_controller__St_16_PositionJour);
  l45 = !(v_36);
  v_34 = (lumiere==Automobile_controller__High);
  v_35 = !(v_34);
  l46 = (v_35||l45);
  v_33 = (ck_16==Automobile_controller__St_16_PositionNormale);
  v_32 = (ck_16==Automobile_controller__St_16_Desacitve);
  l47 = (v_32||v_33);
  v_31 = (lumiere==Automobile_controller__Low);
  if (v_31) {
    l48 = l47;
  } else {
    l48 = l46;
  };
  l49 = (commandeVoiture&&l48);
  if (cleVoiture) {
    _out->normal = l48;
  } else {
    _out->normal = l49;
  };
  l50 = (ck_16==Automobile_controller__St_16_PositionJour);
  v_30 = (lumiere==Automobile_controller__High);
  l51 = (v_30||l50);
  l52 = (commandeVoiture&&l51);
  if (cleVoiture) {
    _out->jour = l51;
  } else {
    _out->jour = l52;
  };
  v_29 = (ck_16==Automobile_controller__St_16_PositionNuit);
  v_28 = (ck_16==Automobile_controller__St_16_PositionJour);
  l53 = (v_28||v_29);
  v_27 = (lumiere==Automobile_controller__High);
  if (v_27) {
    l54 = l45;
  } else {
    l54 = l53;
  };
  v_26 = (lumiere==Automobile_controller__Low);
  l55 = (v_26||l54);
  l56 = (commandeVoiture&&l55);
  if (cleVoiture) {
    _out->nuit = l55;
  } else {
    _out->nuit = l56;
  };
  l57 = !(_out->nuit);
  l58 = (_out->normal||l57);
  v_24 = (ck_16==Automobile_controller__St_16_PositionNormale);
  v_23 = (ck_16==Automobile_controller__St_16_Desacitve);
  v_25 = (v_23||v_24);
  if (v_25) {
    l59 = l57;
  } else {
    l59 = l58;
  };
  v_21 = (ck_16==Automobile_controller__St_16_PositionJour);
  v_22 = !(v_21);
  l60 = (v_22||l58);
  if (_out->jour) {
    l61 = l60;
  } else {
    l61 = l59;
  };
  l62 = (_out->cp||l61);
  v_19 = (ck_28==Automobile_controller__St_10_Veilleuses);
  v_18 = (ck_28==Automobile_controller__St_10_Idle);
  v_20 = (v_18||v_19);
  l63 = (v_20||l62);
  _out->i = l63;
  l64 = (_out->normal||_out->nuit);
  l65 = (_out->jour||l64);
  v_16 = (ck_28==Automobile_controller__St_10_Codes);
  v_17 = !(v_16);
  l66 = (v_17||l65);
  l67 = (_out->normal&&l57);
  v_14 = (ck_16==Automobile_controller__St_16_PositionNormale);
  v_13 = (ck_16==Automobile_controller__St_16_Desacitve);
  v_15 = (v_13||v_14);
  if (v_15) {
    l68 = l67;
  } else {
    l68 = _out->normal;
  };
  if (_out->jour) {
    l69 = l60;
  } else {
    l69 = l68;
  };
  v_12 = (ck_28==Automobile_controller__St_10_Idle);
  if (v_12) {
    l70 = l69;
  } else {
    l70 = l66;
  };
  _out->c = l70;
  v_10 = (ck_28==Automobile_controller__St_10_Phares);
  v_11 = !(v_10);
  l71 = (v_11||l69);
  _out->v = l71;
  v_8 = (ck_28==Automobile_controller__St_10_Idle);
  v_9 = !(v_8);
  l72 = (v_9||l65);
  l73 = !(_out->normal);
  v_6 = (ck_16==Automobile_controller__St_16_PositionJour);
  v_7 = !(v_6);
  l74 = (v_7||l73);
  if (_out->jour) {
    l75 = l74;
  } else {
    l75 = l73;
  };
  v_4 = (lumiere==Automobile_controller__Null);
  v_3 = (lumiere==Automobile_controller__Low);
  v_5 = (v_3||v_4);
  l76 = (v_5||l75);
  v_2 = (ck_28==Automobile_controller__St_10_Veilleuses);
  if (v_2) {
    l77 = l76;
  } else {
    l77 = l72;
  };
  _out->p = l77;
  l78 = !(_out->accelerateur);
  v_1 = (ck_14==Automobile_controller__St_17_Move);
  if (v_1) {
    l79 = _out->frein;
  } else {
    l79 = l78;
  };
  if (l79) {
    _out->boiteDeVitesse = Automobile_controller__PointMort;
  } else {
    _out->boiteDeVitesse = Automobile_controller__Un;
  };;
}

