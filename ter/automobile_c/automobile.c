/* --- Generated the 26/5/2016 at 18:11 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -hepts -s automobile -target c -target ctrln automobile.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "automobile.h"

void Automobile__moteur_reset(Automobile__moteur_mem* self) {
  self->ck = Automobile_controller__St_Allumer;
  self->pnr = false;
}

void Automobile__moteur_step(int commande, int cle,
                             Automobile__moteur_out* _out,
                             Automobile__moteur_mem* self) {
  
  int v;
  int v_3;
  int v_2;
  int v_1;
  int r_St_Eteint;
  Automobile_controller__st s_St_Eteint;
  int r_St_Allumer;
  Automobile_controller__st s_St_Allumer;
  int nr_St_Eteint;
  Automobile_controller__st ns_St_Eteint;
  int etat_St_Eteint;
  int nr_St_Allumer;
  Automobile_controller__st ns_St_Allumer;
  int etat_St_Allumer;
  Automobile_controller__st ck_1;
  Automobile_controller__st s;
  Automobile_controller__st ns;
  int r;
  int nr;
  switch (self->ck) {
    case Automobile_controller__St_Eteint:
      v = (commande||cle);
      if (v) {
        s_St_Eteint = Automobile_controller__St_Allumer;
        r_St_Eteint = true;
      } else {
        s_St_Eteint = Automobile_controller__St_Eteint;
        r_St_Eteint = self->pnr;
      };
      s = s_St_Eteint;
      r = r_St_Eteint;
      break;
    case Automobile_controller__St_Allumer:
      v_1 = !(commande);
      v_2 = !(cle);
      v_3 = (v_1&&v_2);
      if (v_3) {
        s_St_Allumer = Automobile_controller__St_Eteint;
      } else {
        s_St_Allumer = Automobile_controller__St_Allumer;
      };
      s = s_St_Allumer;
      if (v_3) {
        r_St_Allumer = true;
      } else {
        r_St_Allumer = self->pnr;
      };
      r = r_St_Allumer;
      break;
    default:
      break;
  };
  ck_1 = s;
  switch (ck_1) {
    case Automobile_controller__St_Eteint:
      ns_St_Eteint = Automobile_controller__St_Eteint;
      nr_St_Eteint = false;
      etat_St_Eteint = false;
      ns = ns_St_Eteint;
      nr = nr_St_Eteint;
      _out->etat = etat_St_Eteint;
      break;
    case Automobile_controller__St_Allumer:
      ns_St_Allumer = Automobile_controller__St_Allumer;
      ns = ns_St_Allumer;
      nr_St_Allumer = false;
      nr = nr_St_Allumer;
      etat_St_Allumer = true;
      _out->etat = etat_St_Allumer;
      break;
    default:
      break;
  };
  self->ck = ns;
  self->pnr = nr;;
}

void Automobile__vitesse_reset(Automobile__vitesse_mem* self) {
  self->ck = Automobile_controller__St_1_Zero;
  self->pnr = false;
}

void Automobile__vitesse_step(Automobile_controller__numero boiteDeVitesse,
                              Automobile__vitesse_out* _out,
                              Automobile__vitesse_mem* self) {
  
  int v_18;
  Automobile_controller__st_1 v_17;
  int v_16;
  Automobile_controller__st_1 v_15;
  int v_14;
  Automobile_controller__st_1 v_13;
  int v_12;
  Automobile_controller__st_1 v_11;
  int v_10;
  Automobile_controller__st_1 v_9;
  int v_8;
  int v_7;
  int v_6;
  int v_5;
  int v_4;
  int v;
  int v_34;
  Automobile_controller__st_1 v_33;
  int v_32;
  Automobile_controller__st_1 v_31;
  int v_30;
  Automobile_controller__st_1 v_29;
  int v_28;
  Automobile_controller__st_1 v_27;
  int v_26;
  Automobile_controller__st_1 v_25;
  int v_24;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_19;
  int v_50;
  Automobile_controller__st_1 v_49;
  int v_48;
  Automobile_controller__st_1 v_47;
  int v_46;
  Automobile_controller__st_1 v_45;
  int v_44;
  Automobile_controller__st_1 v_43;
  int v_42;
  Automobile_controller__st_1 v_41;
  int v_40;
  int v_39;
  int v_38;
  int v_37;
  int v_36;
  int v_35;
  int v_66;
  Automobile_controller__st_1 v_65;
  int v_64;
  Automobile_controller__st_1 v_63;
  int v_62;
  Automobile_controller__st_1 v_61;
  int v_60;
  Automobile_controller__st_1 v_59;
  int v_58;
  Automobile_controller__st_1 v_57;
  int v_56;
  int v_55;
  int v_54;
  int v_53;
  int v_52;
  int v_51;
  int v_82;
  Automobile_controller__st_1 v_81;
  int v_80;
  Automobile_controller__st_1 v_79;
  int v_78;
  Automobile_controller__st_1 v_77;
  int v_76;
  Automobile_controller__st_1 v_75;
  int v_74;
  Automobile_controller__st_1 v_73;
  int v_72;
  int v_71;
  int v_70;
  int v_69;
  int v_68;
  int v_67;
  int v_98;
  Automobile_controller__st_1 v_97;
  int v_96;
  Automobile_controller__st_1 v_95;
  int v_94;
  Automobile_controller__st_1 v_93;
  int v_92;
  Automobile_controller__st_1 v_91;
  int v_90;
  Automobile_controller__st_1 v_89;
  int v_88;
  int v_87;
  int v_86;
  int v_85;
  int v_84;
  int v_83;
  int v_114;
  Automobile_controller__st_1 v_113;
  int v_112;
  Automobile_controller__st_1 v_111;
  int v_110;
  Automobile_controller__st_1 v_109;
  int v_108;
  Automobile_controller__st_1 v_107;
  int v_106;
  Automobile_controller__st_1 v_105;
  int v_104;
  int v_103;
  int v_102;
  int v_101;
  int v_100;
  int v_99;
  int r_St_1_Arriere;
  Automobile_controller__st_1 s_St_1_Arriere;
  int r_St_1_Cinquieme;
  Automobile_controller__st_1 s_St_1_Cinquieme;
  int r_St_1_Quatrieme;
  Automobile_controller__st_1 s_St_1_Quatrieme;
  int r_St_1_Troisieme;
  Automobile_controller__st_1 s_St_1_Troisieme;
  int r_St_1_Deuxieme;
  Automobile_controller__st_1 s_St_1_Deuxieme;
  int r_St_1_Premier;
  Automobile_controller__st_1 s_St_1_Premier;
  int r_St_1_Zero;
  Automobile_controller__st_1 s_St_1_Zero;
  int nr_St_1_Arriere;
  Automobile_controller__st_1 ns_St_1_Arriere;
  Automobile_controller__numero num_St_1_Arriere;
  int nr_St_1_Cinquieme;
  Automobile_controller__st_1 ns_St_1_Cinquieme;
  Automobile_controller__numero num_St_1_Cinquieme;
  int nr_St_1_Quatrieme;
  Automobile_controller__st_1 ns_St_1_Quatrieme;
  Automobile_controller__numero num_St_1_Quatrieme;
  int nr_St_1_Troisieme;
  Automobile_controller__st_1 ns_St_1_Troisieme;
  Automobile_controller__numero num_St_1_Troisieme;
  int nr_St_1_Deuxieme;
  Automobile_controller__st_1 ns_St_1_Deuxieme;
  Automobile_controller__numero num_St_1_Deuxieme;
  int nr_St_1_Premier;
  Automobile_controller__st_1 ns_St_1_Premier;
  Automobile_controller__numero num_St_1_Premier;
  int nr_St_1_Zero;
  Automobile_controller__st_1 ns_St_1_Zero;
  Automobile_controller__numero num_St_1_Zero;
  Automobile_controller__st_1 ck_2;
  Automobile_controller__st_1 s;
  Automobile_controller__st_1 ns;
  int r;
  int nr;
  switch (self->ck) {
    case Automobile_controller__St_1_Arriere:
      v = (boiteDeVitesse==Automobile_controller__Un);
      v_4 = (boiteDeVitesse==Automobile_controller__Deux);
      v_5 = (boiteDeVitesse==Automobile_controller__Quatre);
      v_6 = (boiteDeVitesse==Automobile_controller__Trois);
      v_7 = (boiteDeVitesse==Automobile_controller__Cinq);
      v_8 = (boiteDeVitesse==Automobile_controller__PointMort);
      if (v_8) {
        v_9 = Automobile_controller__St_1_Zero;
      } else {
        v_9 = Automobile_controller__St_1_Arriere;
      };
      if (v_7) {
        v_11 = Automobile_controller__St_1_Cinquieme;
      } else {
        v_11 = v_9;
      };
      if (v_6) {
        v_13 = Automobile_controller__St_1_Troisieme;
      } else {
        v_13 = v_11;
      };
      if (v_5) {
        v_15 = Automobile_controller__St_1_Troisieme;
      } else {
        v_15 = v_13;
      };
      if (v_4) {
        v_17 = Automobile_controller__St_1_Deuxieme;
      } else {
        v_17 = v_15;
      };
      if (v) {
        s_St_1_Arriere = Automobile_controller__St_1_Premier;
      } else {
        s_St_1_Arriere = v_17;
      };
      if (v_8) {
        v_10 = true;
      } else {
        v_10 = self->pnr;
      };
      if (v_7) {
        v_12 = true;
      } else {
        v_12 = v_10;
      };
      if (v_6) {
        v_14 = true;
      } else {
        v_14 = v_12;
      };
      if (v_5) {
        v_16 = true;
      } else {
        v_16 = v_14;
      };
      if (v_4) {
        v_18 = true;
      } else {
        v_18 = v_16;
      };
      if (v) {
        r_St_1_Arriere = true;
      } else {
        r_St_1_Arriere = v_18;
      };
      s = s_St_1_Arriere;
      r = r_St_1_Arriere;
      break;
    case Automobile_controller__St_1_Cinquieme:
      v_19 = (boiteDeVitesse==Automobile_controller__Un);
      v_20 = (boiteDeVitesse==Automobile_controller__Deux);
      v_21 = (boiteDeVitesse==Automobile_controller__Quatre);
      v_22 = (boiteDeVitesse==Automobile_controller__Trois);
      v_23 = (boiteDeVitesse==Automobile_controller__Six);
      v_24 = (boiteDeVitesse==Automobile_controller__PointMort);
      if (v_24) {
        v_25 = Automobile_controller__St_1_Zero;
      } else {
        v_25 = Automobile_controller__St_1_Cinquieme;
      };
      if (v_23) {
        v_27 = Automobile_controller__St_1_Arriere;
      } else {
        v_27 = v_25;
      };
      if (v_22) {
        v_29 = Automobile_controller__St_1_Troisieme;
      } else {
        v_29 = v_27;
      };
      if (v_21) {
        v_31 = Automobile_controller__St_1_Troisieme;
      } else {
        v_31 = v_29;
      };
      if (v_20) {
        v_33 = Automobile_controller__St_1_Deuxieme;
      } else {
        v_33 = v_31;
      };
      if (v_19) {
        s_St_1_Cinquieme = Automobile_controller__St_1_Premier;
      } else {
        s_St_1_Cinquieme = v_33;
      };
      if (v_24) {
        v_26 = true;
      } else {
        v_26 = self->pnr;
      };
      if (v_23) {
        v_28 = true;
      } else {
        v_28 = v_26;
      };
      if (v_22) {
        v_30 = true;
      } else {
        v_30 = v_28;
      };
      if (v_21) {
        v_32 = true;
      } else {
        v_32 = v_30;
      };
      if (v_20) {
        v_34 = true;
      } else {
        v_34 = v_32;
      };
      if (v_19) {
        r_St_1_Cinquieme = true;
      } else {
        r_St_1_Cinquieme = v_34;
      };
      s = s_St_1_Cinquieme;
      r = r_St_1_Cinquieme;
      break;
    case Automobile_controller__St_1_Quatrieme:
      v_35 = (boiteDeVitesse==Automobile_controller__Un);
      v_36 = (boiteDeVitesse==Automobile_controller__Deux);
      v_37 = (boiteDeVitesse==Automobile_controller__Trois);
      v_38 = (boiteDeVitesse==Automobile_controller__Cinq);
      v_39 = (boiteDeVitesse==Automobile_controller__Six);
      v_40 = (boiteDeVitesse==Automobile_controller__PointMort);
      if (v_40) {
        v_41 = Automobile_controller__St_1_Zero;
      } else {
        v_41 = Automobile_controller__St_1_Quatrieme;
      };
      if (v_39) {
        v_43 = Automobile_controller__St_1_Arriere;
      } else {
        v_43 = v_41;
      };
      if (v_38) {
        v_45 = Automobile_controller__St_1_Cinquieme;
      } else {
        v_45 = v_43;
      };
      if (v_37) {
        v_47 = Automobile_controller__St_1_Troisieme;
      } else {
        v_47 = v_45;
      };
      if (v_36) {
        v_49 = Automobile_controller__St_1_Deuxieme;
      } else {
        v_49 = v_47;
      };
      if (v_35) {
        s_St_1_Quatrieme = Automobile_controller__St_1_Premier;
      } else {
        s_St_1_Quatrieme = v_49;
      };
      if (v_40) {
        v_42 = true;
      } else {
        v_42 = self->pnr;
      };
      if (v_39) {
        v_44 = true;
      } else {
        v_44 = v_42;
      };
      if (v_38) {
        v_46 = true;
      } else {
        v_46 = v_44;
      };
      if (v_37) {
        v_48 = true;
      } else {
        v_48 = v_46;
      };
      if (v_36) {
        v_50 = true;
      } else {
        v_50 = v_48;
      };
      if (v_35) {
        r_St_1_Quatrieme = true;
      } else {
        r_St_1_Quatrieme = v_50;
      };
      s = s_St_1_Quatrieme;
      r = r_St_1_Quatrieme;
      break;
    case Automobile_controller__St_1_Troisieme:
      v_51 = (boiteDeVitesse==Automobile_controller__Un);
      v_52 = (boiteDeVitesse==Automobile_controller__Deux);
      v_53 = (boiteDeVitesse==Automobile_controller__Quatre);
      v_54 = (boiteDeVitesse==Automobile_controller__Cinq);
      v_55 = (boiteDeVitesse==Automobile_controller__Six);
      v_56 = (boiteDeVitesse==Automobile_controller__PointMort);
      if (v_56) {
        v_57 = Automobile_controller__St_1_Zero;
      } else {
        v_57 = Automobile_controller__St_1_Troisieme;
      };
      if (v_55) {
        v_59 = Automobile_controller__St_1_Arriere;
      } else {
        v_59 = v_57;
      };
      if (v_54) {
        v_61 = Automobile_controller__St_1_Cinquieme;
      } else {
        v_61 = v_59;
      };
      if (v_53) {
        v_63 = Automobile_controller__St_1_Quatrieme;
      } else {
        v_63 = v_61;
      };
      if (v_52) {
        v_65 = Automobile_controller__St_1_Deuxieme;
      } else {
        v_65 = v_63;
      };
      if (v_51) {
        s_St_1_Troisieme = Automobile_controller__St_1_Premier;
      } else {
        s_St_1_Troisieme = v_65;
      };
      if (v_56) {
        v_58 = true;
      } else {
        v_58 = self->pnr;
      };
      if (v_55) {
        v_60 = true;
      } else {
        v_60 = v_58;
      };
      if (v_54) {
        v_62 = true;
      } else {
        v_62 = v_60;
      };
      if (v_53) {
        v_64 = true;
      } else {
        v_64 = v_62;
      };
      if (v_52) {
        v_66 = true;
      } else {
        v_66 = v_64;
      };
      if (v_51) {
        r_St_1_Troisieme = true;
      } else {
        r_St_1_Troisieme = v_66;
      };
      s = s_St_1_Troisieme;
      r = r_St_1_Troisieme;
      break;
    case Automobile_controller__St_1_Deuxieme:
      v_67 = (boiteDeVitesse==Automobile_controller__Un);
      v_68 = (boiteDeVitesse==Automobile_controller__Trois);
      v_69 = (boiteDeVitesse==Automobile_controller__Quatre);
      v_70 = (boiteDeVitesse==Automobile_controller__Cinq);
      v_71 = (boiteDeVitesse==Automobile_controller__Six);
      v_72 = (boiteDeVitesse==Automobile_controller__PointMort);
      if (v_72) {
        v_73 = Automobile_controller__St_1_Zero;
      } else {
        v_73 = Automobile_controller__St_1_Deuxieme;
      };
      if (v_71) {
        v_75 = Automobile_controller__St_1_Arriere;
      } else {
        v_75 = v_73;
      };
      if (v_70) {
        v_77 = Automobile_controller__St_1_Cinquieme;
      } else {
        v_77 = v_75;
      };
      if (v_69) {
        v_79 = Automobile_controller__St_1_Quatrieme;
      } else {
        v_79 = v_77;
      };
      if (v_68) {
        v_81 = Automobile_controller__St_1_Troisieme;
      } else {
        v_81 = v_79;
      };
      if (v_67) {
        s_St_1_Deuxieme = Automobile_controller__St_1_Premier;
      } else {
        s_St_1_Deuxieme = v_81;
      };
      if (v_72) {
        v_74 = true;
      } else {
        v_74 = self->pnr;
      };
      if (v_71) {
        v_76 = true;
      } else {
        v_76 = v_74;
      };
      if (v_70) {
        v_78 = true;
      } else {
        v_78 = v_76;
      };
      if (v_69) {
        v_80 = true;
      } else {
        v_80 = v_78;
      };
      if (v_68) {
        v_82 = true;
      } else {
        v_82 = v_80;
      };
      if (v_67) {
        r_St_1_Deuxieme = true;
      } else {
        r_St_1_Deuxieme = v_82;
      };
      s = s_St_1_Deuxieme;
      r = r_St_1_Deuxieme;
      break;
    case Automobile_controller__St_1_Premier:
      v_83 = (boiteDeVitesse==Automobile_controller__Deux);
      v_84 = (boiteDeVitesse==Automobile_controller__Trois);
      v_85 = (boiteDeVitesse==Automobile_controller__Quatre);
      v_86 = (boiteDeVitesse==Automobile_controller__Cinq);
      v_87 = (boiteDeVitesse==Automobile_controller__Six);
      v_88 = (boiteDeVitesse==Automobile_controller__PointMort);
      if (v_88) {
        v_89 = Automobile_controller__St_1_Zero;
      } else {
        v_89 = Automobile_controller__St_1_Premier;
      };
      if (v_87) {
        v_91 = Automobile_controller__St_1_Arriere;
      } else {
        v_91 = v_89;
      };
      if (v_86) {
        v_93 = Automobile_controller__St_1_Cinquieme;
      } else {
        v_93 = v_91;
      };
      if (v_85) {
        v_95 = Automobile_controller__St_1_Quatrieme;
      } else {
        v_95 = v_93;
      };
      if (v_84) {
        v_97 = Automobile_controller__St_1_Troisieme;
      } else {
        v_97 = v_95;
      };
      if (v_83) {
        s_St_1_Premier = Automobile_controller__St_1_Deuxieme;
      } else {
        s_St_1_Premier = v_97;
      };
      if (v_88) {
        v_90 = true;
      } else {
        v_90 = self->pnr;
      };
      if (v_87) {
        v_92 = true;
      } else {
        v_92 = v_90;
      };
      if (v_86) {
        v_94 = true;
      } else {
        v_94 = v_92;
      };
      if (v_85) {
        v_96 = true;
      } else {
        v_96 = v_94;
      };
      if (v_84) {
        v_98 = true;
      } else {
        v_98 = v_96;
      };
      if (v_83) {
        r_St_1_Premier = true;
      } else {
        r_St_1_Premier = v_98;
      };
      s = s_St_1_Premier;
      r = r_St_1_Premier;
      break;
    case Automobile_controller__St_1_Zero:
      v_99 = (boiteDeVitesse==Automobile_controller__Deux);
      v_100 = (boiteDeVitesse==Automobile_controller__Trois);
      v_101 = (boiteDeVitesse==Automobile_controller__Quatre);
      v_102 = (boiteDeVitesse==Automobile_controller__Cinq);
      v_103 = (boiteDeVitesse==Automobile_controller__Six);
      v_104 = (boiteDeVitesse==Automobile_controller__Un);
      if (v_104) {
        v_105 = Automobile_controller__St_1_Premier;
      } else {
        v_105 = Automobile_controller__St_1_Zero;
      };
      if (v_103) {
        v_107 = Automobile_controller__St_1_Arriere;
      } else {
        v_107 = v_105;
      };
      if (v_102) {
        v_109 = Automobile_controller__St_1_Cinquieme;
      } else {
        v_109 = v_107;
      };
      if (v_101) {
        v_111 = Automobile_controller__St_1_Quatrieme;
      } else {
        v_111 = v_109;
      };
      if (v_100) {
        v_113 = Automobile_controller__St_1_Troisieme;
      } else {
        v_113 = v_111;
      };
      if (v_99) {
        s_St_1_Zero = Automobile_controller__St_1_Deuxieme;
      } else {
        s_St_1_Zero = v_113;
      };
      s = s_St_1_Zero;
      if (v_104) {
        v_106 = true;
      } else {
        v_106 = self->pnr;
      };
      if (v_103) {
        v_108 = true;
      } else {
        v_108 = v_106;
      };
      if (v_102) {
        v_110 = true;
      } else {
        v_110 = v_108;
      };
      if (v_101) {
        v_112 = true;
      } else {
        v_112 = v_110;
      };
      if (v_100) {
        v_114 = true;
      } else {
        v_114 = v_112;
      };
      if (v_99) {
        r_St_1_Zero = true;
      } else {
        r_St_1_Zero = v_114;
      };
      r = r_St_1_Zero;
      break;
    default:
      break;
  };
  ck_2 = s;
  switch (ck_2) {
    case Automobile_controller__St_1_Arriere:
      ns_St_1_Arriere = Automobile_controller__St_1_Arriere;
      nr_St_1_Arriere = false;
      num_St_1_Arriere = Automobile_controller__Six;
      ns = ns_St_1_Arriere;
      nr = nr_St_1_Arriere;
      _out->num = num_St_1_Arriere;
      break;
    case Automobile_controller__St_1_Cinquieme:
      ns_St_1_Cinquieme = Automobile_controller__St_1_Cinquieme;
      nr_St_1_Cinquieme = false;
      num_St_1_Cinquieme = Automobile_controller__Cinq;
      ns = ns_St_1_Cinquieme;
      nr = nr_St_1_Cinquieme;
      _out->num = num_St_1_Cinquieme;
      break;
    case Automobile_controller__St_1_Quatrieme:
      ns_St_1_Quatrieme = Automobile_controller__St_1_Quatrieme;
      nr_St_1_Quatrieme = false;
      num_St_1_Quatrieme = Automobile_controller__Quatre;
      ns = ns_St_1_Quatrieme;
      nr = nr_St_1_Quatrieme;
      _out->num = num_St_1_Quatrieme;
      break;
    case Automobile_controller__St_1_Troisieme:
      ns_St_1_Troisieme = Automobile_controller__St_1_Troisieme;
      nr_St_1_Troisieme = false;
      num_St_1_Troisieme = Automobile_controller__Trois;
      ns = ns_St_1_Troisieme;
      nr = nr_St_1_Troisieme;
      _out->num = num_St_1_Troisieme;
      break;
    case Automobile_controller__St_1_Deuxieme:
      ns_St_1_Deuxieme = Automobile_controller__St_1_Deuxieme;
      nr_St_1_Deuxieme = false;
      num_St_1_Deuxieme = Automobile_controller__Deux;
      ns = ns_St_1_Deuxieme;
      nr = nr_St_1_Deuxieme;
      _out->num = num_St_1_Deuxieme;
      break;
    case Automobile_controller__St_1_Premier:
      ns_St_1_Premier = Automobile_controller__St_1_Premier;
      nr_St_1_Premier = false;
      num_St_1_Premier = Automobile_controller__Un;
      ns = ns_St_1_Premier;
      nr = nr_St_1_Premier;
      _out->num = num_St_1_Premier;
      break;
    case Automobile_controller__St_1_Zero:
      ns_St_1_Zero = Automobile_controller__St_1_Zero;
      ns = ns_St_1_Zero;
      nr_St_1_Zero = false;
      nr = nr_St_1_Zero;
      num_St_1_Zero = Automobile_controller__PointMort;
      _out->num = num_St_1_Zero;
      break;
    default:
      break;
  };
  self->ck = ns;
  self->pnr = nr;;
}

void Automobile__acceleration_reset(Automobile__acceleration_mem* self) {
  self->ck = Automobile_controller__St_2_Move;
  self->pnr = false;
}

void Automobile__acceleration_step(int frein, int accelerateur,
                                   Automobile__acceleration_out* _out,
                                   Automobile__acceleration_mem* self) {
  
  int r_St_2_Stop;
  Automobile_controller__st_2 s_St_2_Stop;
  int r_St_2_Move;
  Automobile_controller__st_2 s_St_2_Move;
  int nr_St_2_Stop;
  Automobile_controller__st_2 ns_St_2_Stop;
  int avance_St_2_Stop;
  int nr_St_2_Move;
  Automobile_controller__st_2 ns_St_2_Move;
  int avance_St_2_Move;
  Automobile_controller__st_2 ck_3;
  Automobile_controller__st_2 s;
  Automobile_controller__st_2 ns;
  int r;
  int nr;
  switch (self->ck) {
    case Automobile_controller__St_2_Stop:
      if (accelerateur) {
        s_St_2_Stop = Automobile_controller__St_2_Move;
        r_St_2_Stop = true;
      } else {
        s_St_2_Stop = Automobile_controller__St_2_Stop;
        r_St_2_Stop = self->pnr;
      };
      s = s_St_2_Stop;
      r = r_St_2_Stop;
      break;
    case Automobile_controller__St_2_Move:
      if (frein) {
        s_St_2_Move = Automobile_controller__St_2_Stop;
      } else {
        s_St_2_Move = Automobile_controller__St_2_Move;
      };
      s = s_St_2_Move;
      if (frein) {
        r_St_2_Move = true;
      } else {
        r_St_2_Move = self->pnr;
      };
      r = r_St_2_Move;
      break;
    default:
      break;
  };
  ck_3 = s;
  switch (ck_3) {
    case Automobile_controller__St_2_Stop:
      ns_St_2_Stop = Automobile_controller__St_2_Stop;
      nr_St_2_Stop = false;
      avance_St_2_Stop = false;
      ns = ns_St_2_Stop;
      nr = nr_St_2_Stop;
      _out->avance = avance_St_2_Stop;
      break;
    case Automobile_controller__St_2_Move:
      ns_St_2_Move = Automobile_controller__St_2_Move;
      ns = ns_St_2_Move;
      nr_St_2_Move = false;
      nr = nr_St_2_Move;
      avance_St_2_Move = true;
      _out->avance = avance_St_2_Move;
      break;
    default:
      break;
  };
  self->ck = ns;
  self->pnr = nr;;
}

void Automobile__retroviseurs_reset(Automobile__retroviseurs_mem* self) {
  self->ck = Automobile_controller__St_3_Desacitve;
  self->pnr = false;
}

void Automobile__retroviseurs_step(int normal, int jour, int nuit,
                                   Automobile__retroviseurs_out* _out,
                                   Automobile__retroviseurs_mem* self) {
  
  int v_122;
  Automobile_controller__st_3 v_121;
  int v_120;
  Automobile_controller__st_3 v_119;
  int v_118;
  int v_117;
  int v_116;
  int v_115;
  int v;
  int v_131;
  Automobile_controller__st_3 v_130;
  int v_129;
  Automobile_controller__st_3 v_128;
  int v_127;
  int v_126;
  int v_125;
  int v_124;
  int v_123;
  int v_140;
  Automobile_controller__st_3 v_139;
  int v_138;
  Automobile_controller__st_3 v_137;
  int v_136;
  int v_135;
  int v_134;
  int v_133;
  int v_132;
  int v_144;
  Automobile_controller__st_3 v_143;
  int v_142;
  Automobile_controller__st_3 v_141;
  int r_St_3_PositionNuit;
  Automobile_controller__st_3 s_St_3_PositionNuit;
  int r_St_3_PositionJour;
  Automobile_controller__st_3 s_St_3_PositionJour;
  int r_St_3_PositionNormale;
  Automobile_controller__st_3 s_St_3_PositionNormale;
  int r_St_3_Desacitve;
  Automobile_controller__st_3 s_St_3_Desacitve;
  int nr_St_3_PositionNuit;
  Automobile_controller__st_3 ns_St_3_PositionNuit;
  Automobile_controller__retro sortie_St_3_PositionNuit;
  int gerer_St_3_PositionNuit;
  int nr_St_3_PositionJour;
  Automobile_controller__st_3 ns_St_3_PositionJour;
  Automobile_controller__retro sortie_St_3_PositionJour;
  int gerer_St_3_PositionJour;
  int nr_St_3_PositionNormale;
  Automobile_controller__st_3 ns_St_3_PositionNormale;
  Automobile_controller__retro sortie_St_3_PositionNormale;
  int gerer_St_3_PositionNormale;
  int nr_St_3_Desacitve;
  Automobile_controller__st_3 ns_St_3_Desacitve;
  Automobile_controller__retro sortie_St_3_Desacitve;
  int gerer_St_3_Desacitve;
  Automobile_controller__st_3 ck_4;
  Automobile_controller__st_3 s;
  Automobile_controller__st_3 ns;
  int r;
  int nr;
  switch (self->ck) {
    case Automobile_controller__St_3_PositionNuit:
      v = !(normal);
      v_115 = !(jour);
      v_116 = (v&&v_115);
      v_117 = !(nuit);
      v_118 = (v_116&&v_117);
      if (v_118) {
        v_119 = Automobile_controller__St_3_Desacitve;
      } else {
        v_119 = Automobile_controller__St_3_PositionNuit;
      };
      if (normal) {
        v_121 = Automobile_controller__St_3_PositionNormale;
      } else {
        v_121 = v_119;
      };
      if (jour) {
        s_St_3_PositionNuit = Automobile_controller__St_3_PositionJour;
      } else {
        s_St_3_PositionNuit = v_121;
      };
      if (v_118) {
        v_120 = true;
      } else {
        v_120 = self->pnr;
      };
      if (normal) {
        v_122 = true;
      } else {
        v_122 = v_120;
      };
      if (jour) {
        r_St_3_PositionNuit = true;
      } else {
        r_St_3_PositionNuit = v_122;
      };
      s = s_St_3_PositionNuit;
      r = r_St_3_PositionNuit;
      break;
    case Automobile_controller__St_3_PositionJour:
      v_123 = !(normal);
      v_124 = !(jour);
      v_125 = (v_123&&v_124);
      v_126 = !(nuit);
      v_127 = (v_125&&v_126);
      if (v_127) {
        v_128 = Automobile_controller__St_3_Desacitve;
      } else {
        v_128 = Automobile_controller__St_3_PositionJour;
      };
      if (nuit) {
        v_130 = Automobile_controller__St_3_PositionNuit;
      } else {
        v_130 = v_128;
      };
      if (normal) {
        s_St_3_PositionJour = Automobile_controller__St_3_PositionNormale;
      } else {
        s_St_3_PositionJour = v_130;
      };
      if (v_127) {
        v_129 = true;
      } else {
        v_129 = self->pnr;
      };
      if (nuit) {
        v_131 = true;
      } else {
        v_131 = v_129;
      };
      if (normal) {
        r_St_3_PositionJour = true;
      } else {
        r_St_3_PositionJour = v_131;
      };
      s = s_St_3_PositionJour;
      r = r_St_3_PositionJour;
      break;
    case Automobile_controller__St_3_PositionNormale:
      v_132 = !(normal);
      v_133 = !(jour);
      v_134 = (v_132&&v_133);
      v_135 = !(nuit);
      v_136 = (v_134&&v_135);
      if (v_136) {
        v_137 = Automobile_controller__St_3_Desacitve;
      } else {
        v_137 = Automobile_controller__St_3_PositionNormale;
      };
      if (nuit) {
        v_139 = Automobile_controller__St_3_PositionNuit;
      } else {
        v_139 = v_137;
      };
      if (jour) {
        s_St_3_PositionNormale = Automobile_controller__St_3_PositionJour;
      } else {
        s_St_3_PositionNormale = v_139;
      };
      if (v_136) {
        v_138 = true;
      } else {
        v_138 = self->pnr;
      };
      if (nuit) {
        v_140 = true;
      } else {
        v_140 = v_138;
      };
      if (jour) {
        r_St_3_PositionNormale = true;
      } else {
        r_St_3_PositionNormale = v_140;
      };
      s = s_St_3_PositionNormale;
      r = r_St_3_PositionNormale;
      break;
    case Automobile_controller__St_3_Desacitve:
      if (normal) {
        v_141 = Automobile_controller__St_3_PositionNormale;
      } else {
        v_141 = Automobile_controller__St_3_Desacitve;
      };
      if (nuit) {
        v_143 = Automobile_controller__St_3_PositionNuit;
      } else {
        v_143 = v_141;
      };
      if (jour) {
        s_St_3_Desacitve = Automobile_controller__St_3_PositionJour;
      } else {
        s_St_3_Desacitve = v_143;
      };
      s = s_St_3_Desacitve;
      if (normal) {
        v_142 = true;
      } else {
        v_142 = self->pnr;
      };
      if (nuit) {
        v_144 = true;
      } else {
        v_144 = v_142;
      };
      if (jour) {
        r_St_3_Desacitve = true;
      } else {
        r_St_3_Desacitve = v_144;
      };
      r = r_St_3_Desacitve;
      break;
    default:
      break;
  };
  ck_4 = s;
  switch (ck_4) {
    case Automobile_controller__St_3_PositionNuit:
      ns_St_3_PositionNuit = Automobile_controller__St_3_PositionNuit;
      nr_St_3_PositionNuit = false;
      sortie_St_3_PositionNuit = Automobile_controller__PositionNuit;
      gerer_St_3_PositionNuit = true;
      ns = ns_St_3_PositionNuit;
      nr = nr_St_3_PositionNuit;
      _out->sortie = sortie_St_3_PositionNuit;
      _out->gerer = gerer_St_3_PositionNuit;
      break;
    case Automobile_controller__St_3_PositionJour:
      ns_St_3_PositionJour = Automobile_controller__St_3_PositionJour;
      nr_St_3_PositionJour = false;
      sortie_St_3_PositionJour = Automobile_controller__PositionJour;
      gerer_St_3_PositionJour = true;
      ns = ns_St_3_PositionJour;
      nr = nr_St_3_PositionJour;
      _out->sortie = sortie_St_3_PositionJour;
      _out->gerer = gerer_St_3_PositionJour;
      break;
    case Automobile_controller__St_3_PositionNormale:
      ns_St_3_PositionNormale = Automobile_controller__St_3_PositionNormale;
      nr_St_3_PositionNormale = false;
      sortie_St_3_PositionNormale = Automobile_controller__PositionNormale;
      gerer_St_3_PositionNormale = true;
      ns = ns_St_3_PositionNormale;
      nr = nr_St_3_PositionNormale;
      _out->sortie = sortie_St_3_PositionNormale;
      _out->gerer = gerer_St_3_PositionNormale;
      break;
    case Automobile_controller__St_3_Desacitve:
      ns_St_3_Desacitve = Automobile_controller__St_3_Desacitve;
      ns = ns_St_3_Desacitve;
      nr_St_3_Desacitve = false;
      nr = nr_St_3_Desacitve;
      sortie_St_3_Desacitve = Automobile_controller__Desactive;
      _out->sortie = sortie_St_3_Desacitve;
      gerer_St_3_Desacitve = false;
      _out->gerer = gerer_St_3_Desacitve;
      break;
    default:
      break;
  };
  self->ck = ns;
  self->pnr = nr;;
}

void Automobile__essuieGlace_reset(Automobile__essuieGlace_mem* self) {
  self->ck = Automobile_controller__St_4_Desactive;
  self->pnr = false;
}

void Automobile__essuieGlace_step(int con, int cclose,
                                  Automobile_controller__lum densite,
                                  Automobile__essuieGlace_out* _out,
                                  Automobile__essuieGlace_mem* self) {
  
  int v_151;
  Automobile_controller__st_4 v_150;
  int v_149;
  Automobile_controller__st_4 v_148;
  int v_147;
  int v_146;
  int v_145;
  int v;
  int v_159;
  Automobile_controller__st_4 v_158;
  int v_157;
  Automobile_controller__st_4 v_156;
  int v_155;
  int v_154;
  int v_153;
  int v_152;
  int v_167;
  Automobile_controller__st_4 v_166;
  int v_165;
  Automobile_controller__st_4 v_164;
  int v_163;
  int v_162;
  int v_161;
  int v_160;
  int r_St_4_BalayageContiu;
  Automobile_controller__st_4 s_St_4_BalayageContiu;
  int r_St_4_BalayageIntermittent;
  Automobile_controller__st_4 s_St_4_BalayageIntermittent;
  int r_St_4_BalayageUnique;
  Automobile_controller__st_4 s_St_4_BalayageUnique;
  int r_St_4_Desactive;
  Automobile_controller__st_4 s_St_4_Desactive;
  int nr_St_4_BalayageContiu;
  Automobile_controller__st_4 ns_St_4_BalayageContiu;
  Automobile_controller__typeBalayage etat_St_4_BalayageContiu;
  int nr_St_4_BalayageIntermittent;
  Automobile_controller__st_4 ns_St_4_BalayageIntermittent;
  Automobile_controller__typeBalayage etat_St_4_BalayageIntermittent;
  int nr_St_4_BalayageUnique;
  Automobile_controller__st_4 ns_St_4_BalayageUnique;
  Automobile_controller__typeBalayage etat_St_4_BalayageUnique;
  int nr_St_4_Desactive;
  Automobile_controller__st_4 ns_St_4_Desactive;
  Automobile_controller__typeBalayage etat_St_4_Desactive;
  Automobile_controller__st_4 ck_5;
  Automobile_controller__st_4 s;
  Automobile_controller__st_4 ns;
  int r;
  int nr;
  switch (self->ck) {
    case Automobile_controller__St_4_BalayageContiu:
      v = (densite==Automobile_controller__Low);
      v_145 = (con&&v);
      v_146 = (densite==Automobile_controller__Normal);
      v_147 = (con&&v_146);
      if (v_147) {
        v_148 = Automobile_controller__St_4_BalayageIntermittent;
      } else {
        v_148 = Automobile_controller__St_4_BalayageContiu;
      };
      if (v_145) {
        v_150 = Automobile_controller__St_4_BalayageUnique;
      } else {
        v_150 = v_148;
      };
      if (cclose) {
        s_St_4_BalayageContiu = Automobile_controller__St_4_Desactive;
      } else {
        s_St_4_BalayageContiu = v_150;
      };
      if (v_147) {
        v_149 = true;
      } else {
        v_149 = self->pnr;
      };
      if (v_145) {
        v_151 = true;
      } else {
        v_151 = v_149;
      };
      if (cclose) {
        r_St_4_BalayageContiu = true;
      } else {
        r_St_4_BalayageContiu = v_151;
      };
      s = s_St_4_BalayageContiu;
      r = r_St_4_BalayageContiu;
      break;
    case Automobile_controller__St_4_BalayageIntermittent:
      v_152 = (densite==Automobile_controller__High);
      v_153 = (con&&v_152);
      v_154 = (densite==Automobile_controller__Low);
      v_155 = (con&&v_154);
      if (v_155) {
        v_156 = Automobile_controller__St_4_BalayageUnique;
      } else {
        v_156 = Automobile_controller__St_4_BalayageIntermittent;
      };
      if (v_153) {
        v_158 = Automobile_controller__St_4_BalayageContiu;
      } else {
        v_158 = v_156;
      };
      if (cclose) {
        s_St_4_BalayageIntermittent = Automobile_controller__St_4_Desactive;
      } else {
        s_St_4_BalayageIntermittent = v_158;
      };
      if (v_155) {
        v_157 = true;
      } else {
        v_157 = self->pnr;
      };
      if (v_153) {
        v_159 = true;
      } else {
        v_159 = v_157;
      };
      if (cclose) {
        r_St_4_BalayageIntermittent = true;
      } else {
        r_St_4_BalayageIntermittent = v_159;
      };
      s = s_St_4_BalayageIntermittent;
      r = r_St_4_BalayageIntermittent;
      break;
    case Automobile_controller__St_4_BalayageUnique:
      v_160 = (densite==Automobile_controller__High);
      v_161 = (con&&v_160);
      v_162 = (densite==Automobile_controller__Normal);
      v_163 = (con&&v_162);
      if (v_163) {
        v_164 = Automobile_controller__St_4_BalayageIntermittent;
      } else {
        v_164 = Automobile_controller__St_4_BalayageUnique;
      };
      if (v_161) {
        v_166 = Automobile_controller__St_4_BalayageContiu;
      } else {
        v_166 = v_164;
      };
      if (cclose) {
        s_St_4_BalayageUnique = Automobile_controller__St_4_Desactive;
      } else {
        s_St_4_BalayageUnique = v_166;
      };
      if (v_163) {
        v_165 = true;
      } else {
        v_165 = self->pnr;
      };
      if (v_161) {
        v_167 = true;
      } else {
        v_167 = v_165;
      };
      if (cclose) {
        r_St_4_BalayageUnique = true;
      } else {
        r_St_4_BalayageUnique = v_167;
      };
      s = s_St_4_BalayageUnique;
      r = r_St_4_BalayageUnique;
      break;
    case Automobile_controller__St_4_Desactive:
      if (con) {
        s_St_4_Desactive = Automobile_controller__St_4_BalayageUnique;
      } else {
        s_St_4_Desactive = Automobile_controller__St_4_Desactive;
      };
      s = s_St_4_Desactive;
      if (con) {
        r_St_4_Desactive = true;
      } else {
        r_St_4_Desactive = self->pnr;
      };
      r = r_St_4_Desactive;
      break;
    default:
      break;
  };
  ck_5 = s;
  switch (ck_5) {
    case Automobile_controller__St_4_BalayageContiu:
      ns_St_4_BalayageContiu = Automobile_controller__St_4_BalayageContiu;
      nr_St_4_BalayageContiu = false;
      etat_St_4_BalayageContiu = Automobile_controller__Contiu;
      ns = ns_St_4_BalayageContiu;
      nr = nr_St_4_BalayageContiu;
      _out->etat = etat_St_4_BalayageContiu;
      break;
    case Automobile_controller__St_4_BalayageIntermittent:
      ns_St_4_BalayageIntermittent = Automobile_controller__St_4_BalayageIntermittent;
      nr_St_4_BalayageIntermittent = false;
      etat_St_4_BalayageIntermittent = Automobile_controller__Intermittent;
      ns = ns_St_4_BalayageIntermittent;
      nr = nr_St_4_BalayageIntermittent;
      _out->etat = etat_St_4_BalayageIntermittent;
      break;
    case Automobile_controller__St_4_BalayageUnique:
      ns_St_4_BalayageUnique = Automobile_controller__St_4_BalayageUnique;
      nr_St_4_BalayageUnique = false;
      etat_St_4_BalayageUnique = Automobile_controller__Unique;
      ns = ns_St_4_BalayageUnique;
      nr = nr_St_4_BalayageUnique;
      _out->etat = etat_St_4_BalayageUnique;
      break;
    case Automobile_controller__St_4_Desactive:
      ns_St_4_Desactive = Automobile_controller__St_4_Desactive;
      ns = ns_St_4_Desactive;
      nr_St_4_Desactive = false;
      nr = nr_St_4_Desactive;
      etat_St_4_Desactive = Automobile_controller__Deactivated;
      _out->etat = etat_St_4_Desactive;
      break;
    default:
      break;
  };
  self->ck = ns;
  self->pnr = nr;;
}

void Automobile__accident_reset(Automobile__accident_mem* self) {
  self->ck = Automobile_controller__St_5_Desactive;
  self->pnr = false;
}

void Automobile__accident_step(int detectionAccident,
                               Automobile__accident_out* _out,
                               Automobile__accident_mem* self) {
  
  int v;
  int r_St_5_Active;
  Automobile_controller__st_5 s_St_5_Active;
  int r_St_5_Desactive;
  Automobile_controller__st_5 s_St_5_Desactive;
  int nr_St_5_Active;
  Automobile_controller__st_5 ns_St_5_Active;
  int emissionAppelUrgence_St_5_Active;
  int airbag_St_5_Active;
  int nr_St_5_Desactive;
  Automobile_controller__st_5 ns_St_5_Desactive;
  int emissionAppelUrgence_St_5_Desactive;
  int airbag_St_5_Desactive;
  Automobile_controller__st_5 ck_6;
  Automobile_controller__st_5 s;
  Automobile_controller__st_5 ns;
  int r;
  int nr;
  switch (self->ck) {
    case Automobile_controller__St_5_Active:
      v = !(detectionAccident);
      if (v) {
        s_St_5_Active = Automobile_controller__St_5_Active;
        r_St_5_Active = true;
      } else {
        s_St_5_Active = Automobile_controller__St_5_Active;
        r_St_5_Active = self->pnr;
      };
      s = s_St_5_Active;
      r = r_St_5_Active;
      break;
    case Automobile_controller__St_5_Desactive:
      if (detectionAccident) {
        s_St_5_Desactive = Automobile_controller__St_5_Active;
      } else {
        s_St_5_Desactive = Automobile_controller__St_5_Desactive;
      };
      s = s_St_5_Desactive;
      if (detectionAccident) {
        r_St_5_Desactive = true;
      } else {
        r_St_5_Desactive = self->pnr;
      };
      r = r_St_5_Desactive;
      break;
    default:
      break;
  };
  ck_6 = s;
  switch (ck_6) {
    case Automobile_controller__St_5_Active:
      ns_St_5_Active = Automobile_controller__St_5_Active;
      nr_St_5_Active = false;
      airbag_St_5_Active = true;
      emissionAppelUrgence_St_5_Active = true;
      ns = ns_St_5_Active;
      nr = nr_St_5_Active;
      _out->airbag = airbag_St_5_Active;
      _out->emissionAppelUrgence = emissionAppelUrgence_St_5_Active;
      break;
    case Automobile_controller__St_5_Desactive:
      ns_St_5_Desactive = Automobile_controller__St_5_Desactive;
      ns = ns_St_5_Desactive;
      nr_St_5_Desactive = false;
      nr = nr_St_5_Desactive;
      airbag_St_5_Desactive = false;
      _out->airbag = airbag_St_5_Desactive;
      emissionAppelUrgence_St_5_Desactive = false;
      _out->emissionAppelUrgence = emissionAppelUrgence_St_5_Desactive;
      break;
    default:
      break;
  };
  self->ck = ns;
  self->pnr = nr;;
}

void Automobile__avertissement_reset(Automobile__avertissement_mem* self) {
  self->ck = Automobile_controller__St_6_Idle;
  self->pnr = false;
}

void Automobile__avertissement_step(int detectionDepassementLigne,
                                    int detectionVolantLibre,
                                    int detectionDefaillanceTechnique,
                                    int detectionVehiculeAngleMort,
                                    Automobile__avertissement_out* _out,
                                    Automobile__avertissement_mem* self) {
  
  int v_173;
  int v_172;
  int v_171;
  int v_170;
  int v_169;
  int v_168;
  int v;
  int v_176;
  int v_175;
  int v_174;
  int r_St_6_Detection;
  Automobile_controller__st_6 s_St_6_Detection;
  int r_St_6_Idle;
  Automobile_controller__st_6 s_St_6_Idle;
  int nr_St_6_Detection;
  Automobile_controller__st_6 ns_St_6_Detection;
  int dangerAngleMort_St_6_Detection;
  int defaillanceTechnique_St_6_Detection;
  int volantLibre_St_6_Detection;
  int depassementLigne_St_6_Detection;
  int nr_St_6_Idle;
  Automobile_controller__st_6 ns_St_6_Idle;
  int dangerAngleMort_St_6_Idle;
  int defaillanceTechnique_St_6_Idle;
  int volantLibre_St_6_Idle;
  int depassementLigne_St_6_Idle;
  Automobile_controller__st_6 ck_7;
  Automobile_controller__st_6 s;
  Automobile_controller__st_6 ns;
  int r;
  int nr;
  switch (self->ck) {
    case Automobile_controller__St_6_Detection:
      v = !(detectionDepassementLigne);
      v_168 = !(detectionVolantLibre);
      v_169 = (v&&v_168);
      v_170 = !(detectionDefaillanceTechnique);
      v_171 = (v_169&&v_170);
      v_172 = !(detectionVehiculeAngleMort);
      v_173 = (v_171&&v_172);
      if (v_173) {
        s_St_6_Detection = Automobile_controller__St_6_Idle;
        r_St_6_Detection = true;
      } else {
        s_St_6_Detection = Automobile_controller__St_6_Detection;
        r_St_6_Detection = self->pnr;
      };
      s = s_St_6_Detection;
      r = r_St_6_Detection;
      break;
    case Automobile_controller__St_6_Idle:
      v_174 = (detectionDepassementLigne||detectionVolantLibre);
      v_175 = (v_174||detectionDefaillanceTechnique);
      v_176 = (v_175||detectionVehiculeAngleMort);
      if (v_176) {
        s_St_6_Idle = Automobile_controller__St_6_Detection;
      } else {
        s_St_6_Idle = Automobile_controller__St_6_Idle;
      };
      s = s_St_6_Idle;
      if (v_176) {
        r_St_6_Idle = true;
      } else {
        r_St_6_Idle = self->pnr;
      };
      r = r_St_6_Idle;
      break;
    default:
      break;
  };
  ck_7 = s;
  switch (ck_7) {
    case Automobile_controller__St_6_Detection:
      ns_St_6_Detection = Automobile_controller__St_6_Detection;
      nr_St_6_Detection = false;
      depassementLigne_St_6_Detection = detectionDepassementLigne;
      volantLibre_St_6_Detection = detectionVolantLibre;
      defaillanceTechnique_St_6_Detection = detectionDefaillanceTechnique;
      dangerAngleMort_St_6_Detection = detectionVehiculeAngleMort;
      ns = ns_St_6_Detection;
      nr = nr_St_6_Detection;
      _out->depassementLigne = depassementLigne_St_6_Detection;
      _out->volantLibre = volantLibre_St_6_Detection;
      _out->defaillanceTechnique = defaillanceTechnique_St_6_Detection;
      _out->dangerAngleMort = dangerAngleMort_St_6_Detection;
      break;
    case Automobile_controller__St_6_Idle:
      ns_St_6_Idle = Automobile_controller__St_6_Idle;
      ns = ns_St_6_Idle;
      nr_St_6_Idle = false;
      nr = nr_St_6_Idle;
      depassementLigne_St_6_Idle = false;
      _out->depassementLigne = depassementLigne_St_6_Idle;
      volantLibre_St_6_Idle = false;
      _out->volantLibre = volantLibre_St_6_Idle;
      defaillanceTechnique_St_6_Idle = false;
      _out->defaillanceTechnique = defaillanceTechnique_St_6_Idle;
      dangerAngleMort_St_6_Idle = false;
      _out->dangerAngleMort = dangerAngleMort_St_6_Idle;
      break;
    default:
      break;
  };
  self->ck = ns;
  self->pnr = nr;;
}

void Automobile__securite_reset(Automobile__securite_mem* self) {
  self->ck = Automobile_controller__St_7_Acceleration;
  self->pnr = false;
}

void Automobile__securite_step(int presencePieton, int presencevehicule,
                               Automobile_controller__couleur feu,
                               Automobile__securite_out* _out,
                               Automobile__securite_mem* self) {
  
  int v_186;
  Automobile_controller__st_7 v_185;
  int v_184;
  Automobile_controller__st_7 v_183;
  int v_182;
  int v_181;
  int v_180;
  int v_179;
  int v_178;
  int v_177;
  int v;
  int v_201;
  Automobile_controller__st_7 v_200;
  int v_199;
  Automobile_controller__st_7 v_198;
  int v_197;
  int v_196;
  int v_195;
  int v_194;
  int v_193;
  int v_192;
  int v_191;
  int v_190;
  int v_189;
  int v_188;
  int v_187;
  int v_218;
  Automobile_controller__st_7 v_217;
  int v_216;
  Automobile_controller__st_7 v_215;
  int v_214;
  int v_213;
  int v_212;
  int v_211;
  int v_210;
  int v_209;
  int v_208;
  int v_207;
  int v_206;
  int v_205;
  int v_204;
  int v_203;
  int v_202;
  int v_230;
  Automobile_controller__st_7 v_229;
  int v_228;
  Automobile_controller__st_7 v_227;
  int v_226;
  int v_225;
  int v_224;
  int v_223;
  int v_222;
  int v_221;
  int v_220;
  int v_219;
  int r_St_7_Feu;
  Automobile_controller__st_7 s_St_7_Feu;
  int r_St_7_Vehicule;
  Automobile_controller__st_7 s_St_7_Vehicule;
  int r_St_7_Pieton;
  Automobile_controller__st_7 s_St_7_Pieton;
  int r_St_7_Acceleration;
  Automobile_controller__st_7 s_St_7_Acceleration;
  int nr_St_7_Feu;
  Automobile_controller__st_7 ns_St_7_Feu;
  Automobile_controller__cause causeFreinage_St_7_Feu;
  int frein_St_7_Feu;
  int nr_St_7_Vehicule;
  Automobile_controller__st_7 ns_St_7_Vehicule;
  Automobile_controller__cause causeFreinage_St_7_Vehicule;
  int frein_St_7_Vehicule;
  int nr_St_7_Pieton;
  Automobile_controller__st_7 ns_St_7_Pieton;
  Automobile_controller__cause causeFreinage_St_7_Pieton;
  int frein_St_7_Pieton;
  int nr_St_7_Acceleration;
  Automobile_controller__st_7 ns_St_7_Acceleration;
  Automobile_controller__cause causeFreinage_St_7_Acceleration;
  int frein_St_7_Acceleration;
  Automobile_controller__st_7 ck_8;
  Automobile_controller__st_7 s;
  Automobile_controller__st_7 ns;
  int r;
  int nr;
  switch (self->ck) {
    case Automobile_controller__St_7_Feu:
      v = !(presencePieton);
      v_177 = !(presencevehicule);
      v_178 = (v&&v_177);
      v_179 = (feu==Automobile_controller__Vert);
      v_180 = (v_178&&v_179);
      v_181 = !(presencePieton);
      v_182 = (v_181&&presencevehicule);
      if (v_182) {
        v_183 = Automobile_controller__St_7_Vehicule;
      } else {
        v_183 = Automobile_controller__St_7_Feu;
      };
      if (presencePieton) {
        v_185 = Automobile_controller__St_7_Pieton;
      } else {
        v_185 = v_183;
      };
      if (v_180) {
        s_St_7_Feu = Automobile_controller__St_7_Acceleration;
      } else {
        s_St_7_Feu = v_185;
      };
      if (v_182) {
        v_184 = true;
      } else {
        v_184 = self->pnr;
      };
      if (presencePieton) {
        v_186 = true;
      } else {
        v_186 = v_184;
      };
      if (v_180) {
        r_St_7_Feu = true;
      } else {
        r_St_7_Feu = v_186;
      };
      s = s_St_7_Feu;
      r = r_St_7_Feu;
      break;
    case Automobile_controller__St_7_Vehicule:
      v_187 = !(presencePieton);
      v_188 = !(presencevehicule);
      v_189 = (v_187&&v_188);
      v_190 = (feu==Automobile_controller__Vert);
      v_191 = (v_189&&v_190);
      v_192 = !(presencePieton);
      v_193 = !(presencevehicule);
      v_194 = (v_192&&v_193);
      v_195 = (feu==Automobile_controller__Vert);
      v_196 = !(v_195);
      v_197 = (v_194&&v_196);
      if (v_197) {
        v_198 = Automobile_controller__St_7_Feu;
      } else {
        v_198 = Automobile_controller__St_7_Vehicule;
      };
      if (presencePieton) {
        v_200 = Automobile_controller__St_7_Pieton;
      } else {
        v_200 = v_198;
      };
      if (v_191) {
        s_St_7_Vehicule = Automobile_controller__St_7_Acceleration;
      } else {
        s_St_7_Vehicule = v_200;
      };
      if (v_197) {
        v_199 = true;
      } else {
        v_199 = self->pnr;
      };
      if (presencePieton) {
        v_201 = true;
      } else {
        v_201 = v_199;
      };
      if (v_191) {
        r_St_7_Vehicule = true;
      } else {
        r_St_7_Vehicule = v_201;
      };
      s = s_St_7_Vehicule;
      r = r_St_7_Vehicule;
      break;
    case Automobile_controller__St_7_Pieton:
      v_202 = !(presencePieton);
      v_203 = !(presencevehicule);
      v_204 = (v_202&&v_203);
      v_205 = (feu==Automobile_controller__Vert);
      v_206 = (v_204&&v_205);
      v_207 = !(presencePieton);
      v_208 = (v_207&&presencevehicule);
      v_209 = !(presencePieton);
      v_210 = !(presencevehicule);
      v_211 = (v_209&&v_210);
      v_212 = (feu==Automobile_controller__Vert);
      v_213 = !(v_212);
      v_214 = (v_211&&v_213);
      if (v_214) {
        v_215 = Automobile_controller__St_7_Feu;
      } else {
        v_215 = Automobile_controller__St_7_Pieton;
      };
      if (v_208) {
        v_217 = Automobile_controller__St_7_Vehicule;
      } else {
        v_217 = v_215;
      };
      if (v_206) {
        s_St_7_Pieton = Automobile_controller__St_7_Acceleration;
      } else {
        s_St_7_Pieton = v_217;
      };
      if (v_214) {
        v_216 = true;
      } else {
        v_216 = self->pnr;
      };
      if (v_208) {
        v_218 = true;
      } else {
        v_218 = v_216;
      };
      if (v_206) {
        r_St_7_Pieton = true;
      } else {
        r_St_7_Pieton = v_218;
      };
      s = s_St_7_Pieton;
      r = r_St_7_Pieton;
      break;
    case Automobile_controller__St_7_Acceleration:
      v_219 = !(presencePieton);
      v_220 = (v_219&&presencevehicule);
      v_221 = !(presencePieton);
      v_222 = !(presencevehicule);
      v_223 = (v_221&&v_222);
      v_224 = (feu==Automobile_controller__Vert);
      v_225 = !(v_224);
      v_226 = (v_223&&v_225);
      if (v_226) {
        v_227 = Automobile_controller__St_7_Feu;
      } else {
        v_227 = Automobile_controller__St_7_Acceleration;
      };
      if (v_220) {
        v_229 = Automobile_controller__St_7_Vehicule;
      } else {
        v_229 = v_227;
      };
      if (presencePieton) {
        s_St_7_Acceleration = Automobile_controller__St_7_Pieton;
      } else {
        s_St_7_Acceleration = v_229;
      };
      s = s_St_7_Acceleration;
      if (v_226) {
        v_228 = true;
      } else {
        v_228 = self->pnr;
      };
      if (v_220) {
        v_230 = true;
      } else {
        v_230 = v_228;
      };
      if (presencePieton) {
        r_St_7_Acceleration = true;
      } else {
        r_St_7_Acceleration = v_230;
      };
      r = r_St_7_Acceleration;
      break;
    default:
      break;
  };
  ck_8 = s;
  switch (ck_8) {
    case Automobile_controller__St_7_Feu:
      ns_St_7_Feu = Automobile_controller__St_7_Feu;
      nr_St_7_Feu = false;
      causeFreinage_St_7_Feu = Automobile_controller__Feu;
      frein_St_7_Feu = true;
      ns = ns_St_7_Feu;
      nr = nr_St_7_Feu;
      _out->causeFreinage = causeFreinage_St_7_Feu;
      _out->frein = frein_St_7_Feu;
      break;
    case Automobile_controller__St_7_Vehicule:
      ns_St_7_Vehicule = Automobile_controller__St_7_Vehicule;
      nr_St_7_Vehicule = false;
      causeFreinage_St_7_Vehicule = Automobile_controller__Presencevehicule;
      frein_St_7_Vehicule = true;
      ns = ns_St_7_Vehicule;
      nr = nr_St_7_Vehicule;
      _out->causeFreinage = causeFreinage_St_7_Vehicule;
      _out->frein = frein_St_7_Vehicule;
      break;
    case Automobile_controller__St_7_Pieton:
      ns_St_7_Pieton = Automobile_controller__St_7_Pieton;
      nr_St_7_Pieton = false;
      causeFreinage_St_7_Pieton = Automobile_controller__PresencePieton;
      frein_St_7_Pieton = true;
      ns = ns_St_7_Pieton;
      nr = nr_St_7_Pieton;
      _out->causeFreinage = causeFreinage_St_7_Pieton;
      _out->frein = frein_St_7_Pieton;
      break;
    case Automobile_controller__St_7_Acceleration:
      ns_St_7_Acceleration = Automobile_controller__St_7_Acceleration;
      ns = ns_St_7_Acceleration;
      nr_St_7_Acceleration = false;
      nr = nr_St_7_Acceleration;
      causeFreinage_St_7_Acceleration = Automobile_controller__None;
      _out->causeFreinage = causeFreinage_St_7_Acceleration;
      frein_St_7_Acceleration = false;
      _out->frein = frein_St_7_Acceleration;
      break;
    default:
      break;
  };
  self->ck = ns;
  self->pnr = nr;;
}

void Automobile__temperature_reset(Automobile__temperature_mem* self) {
  self->ck = Automobile_controller__St_8_Active;
  self->pnr = false;
}

void Automobile__temperature_step(int deactivated, float capteur,
                                  Automobile__temperature_out* _out,
                                  Automobile__temperature_mem* self) {
  
  int v;
  int r_St_8_Desactive;
  Automobile_controller__st_8 s_St_8_Desactive;
  int r_St_8_Active;
  Automobile_controller__st_8 s_St_8_Active;
  int nr_St_8_Desactive;
  Automobile_controller__st_8 ns_St_8_Desactive;
  int etat_St_8_Desactive;
  float qt_St_8_Desactive;
  int nr_St_8_Active;
  Automobile_controller__st_8 ns_St_8_Active;
  int etat_St_8_Active;
  float qt_St_8_Active;
  Automobile_controller__st_8 ck_9;
  Automobile_controller__st_8 s;
  Automobile_controller__st_8 ns;
  int r;
  int nr;
  switch (self->ck) {
    case Automobile_controller__St_8_Desactive:
      v = !(deactivated);
      if (v) {
        s_St_8_Desactive = Automobile_controller__St_8_Active;
        r_St_8_Desactive = true;
      } else {
        s_St_8_Desactive = Automobile_controller__St_8_Desactive;
        r_St_8_Desactive = self->pnr;
      };
      s = s_St_8_Desactive;
      r = r_St_8_Desactive;
      break;
    case Automobile_controller__St_8_Active:
      if (deactivated) {
        s_St_8_Active = Automobile_controller__St_8_Desactive;
      } else {
        s_St_8_Active = Automobile_controller__St_8_Active;
      };
      s = s_St_8_Active;
      if (deactivated) {
        r_St_8_Active = true;
      } else {
        r_St_8_Active = self->pnr;
      };
      r = r_St_8_Active;
      break;
    default:
      break;
  };
  ck_9 = s;
  switch (ck_9) {
    case Automobile_controller__St_8_Desactive:
      ns_St_8_Desactive = Automobile_controller__St_8_Desactive;
      nr_St_8_Desactive = false;
      qt_St_8_Desactive = 0.000000;
      etat_St_8_Desactive = false;
      ns = ns_St_8_Desactive;
      nr = nr_St_8_Desactive;
      _out->qt = qt_St_8_Desactive;
      _out->etat = etat_St_8_Desactive;
      break;
    case Automobile_controller__St_8_Active:
      ns_St_8_Active = Automobile_controller__St_8_Active;
      ns = ns_St_8_Active;
      nr_St_8_Active = false;
      nr = nr_St_8_Active;
      qt_St_8_Active = (19.000000-capteur);
      _out->qt = qt_St_8_Active;
      etat_St_8_Active = true;
      _out->etat = etat_St_8_Active;
      break;
    default:
      break;
  };
  self->ck = ns;
  self->pnr = nr;;
}

void Automobile__controleurPhares_reset(Automobile__controleurPhares_mem* self) {
  self->ck = Automobile_controller__St_9_Idle;
  self->pnr = false;
}

void Automobile__controleurPhares_step(int tdn, int tin, int cpn,
                                       Automobile__controleurPhares_out* _out,
                                       Automobile__controleurPhares_mem* self) {
  
  int v_231;
  Automobile_controller__st_9 v;
  int v_233;
  Automobile_controller__st_9 v_232;
  int r_St_9_Phares;
  Automobile_controller__st_9 s_St_9_Phares;
  int r_St_9_Codes;
  Automobile_controller__st_9 s_St_9_Codes;
  int r_St_9_Veilleuses;
  Automobile_controller__st_9 s_St_9_Veilleuses;
  int r_St_9_Idle;
  Automobile_controller__st_9 s_St_9_Idle;
  int nr_St_9_Phares;
  Automobile_controller__st_9 ns_St_9_Phares;
  Automobile_controller__etatPhares etat_St_9_Phares;
  int veilleuses_St_9_Phares;
  int phares_St_9_Phares;
  int codes_St_9_Phares;
  int nr_St_9_Codes;
  Automobile_controller__st_9 ns_St_9_Codes;
  Automobile_controller__etatPhares etat_St_9_Codes;
  int veilleuses_St_9_Codes;
  int phares_St_9_Codes;
  int codes_St_9_Codes;
  int nr_St_9_Veilleuses;
  Automobile_controller__st_9 ns_St_9_Veilleuses;
  Automobile_controller__etatPhares etat_St_9_Veilleuses;
  int veilleuses_St_9_Veilleuses;
  int phares_St_9_Veilleuses;
  int codes_St_9_Veilleuses;
  int nr_St_9_Idle;
  Automobile_controller__st_9 ns_St_9_Idle;
  Automobile_controller__etatPhares etat_St_9_Idle;
  int veilleuses_St_9_Idle;
  int phares_St_9_Idle;
  int codes_St_9_Idle;
  Automobile_controller__st_9 ck_10;
  Automobile_controller__st_9 s;
  Automobile_controller__st_9 ns;
  int r;
  int nr;
  switch (self->ck) {
    case Automobile_controller__St_9_Phares:
      if (cpn) {
        s_St_9_Phares = Automobile_controller__St_9_Codes;
        r_St_9_Phares = true;
      } else {
        s_St_9_Phares = Automobile_controller__St_9_Phares;
        r_St_9_Phares = self->pnr;
      };
      s = s_St_9_Phares;
      r = r_St_9_Phares;
      break;
    case Automobile_controller__St_9_Codes:
      if (cpn) {
        v = Automobile_controller__St_9_Phares;
      } else {
        v = Automobile_controller__St_9_Codes;
      };
      if (tin) {
        s_St_9_Codes = Automobile_controller__St_9_Veilleuses;
      } else {
        s_St_9_Codes = v;
      };
      if (cpn) {
        v_231 = true;
      } else {
        v_231 = self->pnr;
      };
      if (tin) {
        r_St_9_Codes = true;
      } else {
        r_St_9_Codes = v_231;
      };
      s = s_St_9_Codes;
      r = r_St_9_Codes;
      break;
    case Automobile_controller__St_9_Veilleuses:
      if (tdn) {
        v_232 = Automobile_controller__St_9_Codes;
      } else {
        v_232 = Automobile_controller__St_9_Veilleuses;
      };
      if (tin) {
        s_St_9_Veilleuses = Automobile_controller__St_9_Idle;
      } else {
        s_St_9_Veilleuses = v_232;
      };
      if (tdn) {
        v_233 = true;
      } else {
        v_233 = self->pnr;
      };
      if (tin) {
        r_St_9_Veilleuses = true;
      } else {
        r_St_9_Veilleuses = v_233;
      };
      s = s_St_9_Veilleuses;
      r = r_St_9_Veilleuses;
      break;
    case Automobile_controller__St_9_Idle:
      if (tdn) {
        s_St_9_Idle = Automobile_controller__St_9_Veilleuses;
      } else {
        s_St_9_Idle = Automobile_controller__St_9_Idle;
      };
      s = s_St_9_Idle;
      if (tdn) {
        r_St_9_Idle = true;
      } else {
        r_St_9_Idle = self->pnr;
      };
      r = r_St_9_Idle;
      break;
    default:
      break;
  };
  ck_10 = s;
  switch (ck_10) {
    case Automobile_controller__St_9_Phares:
      ns_St_9_Phares = Automobile_controller__St_9_Phares;
      nr_St_9_Phares = false;
      codes_St_9_Phares = false;
      phares_St_9_Phares = true;
      veilleuses_St_9_Phares = false;
      etat_St_9_Phares = Automobile_controller__Phares;
      ns = ns_St_9_Phares;
      nr = nr_St_9_Phares;
      _out->codes = codes_St_9_Phares;
      _out->phares = phares_St_9_Phares;
      _out->veilleuses = veilleuses_St_9_Phares;
      _out->etat = etat_St_9_Phares;
      break;
    case Automobile_controller__St_9_Codes:
      ns_St_9_Codes = Automobile_controller__St_9_Codes;
      nr_St_9_Codes = false;
      codes_St_9_Codes = true;
      phares_St_9_Codes = false;
      veilleuses_St_9_Codes = false;
      etat_St_9_Codes = Automobile_controller__Codes;
      ns = ns_St_9_Codes;
      nr = nr_St_9_Codes;
      _out->codes = codes_St_9_Codes;
      _out->phares = phares_St_9_Codes;
      _out->veilleuses = veilleuses_St_9_Codes;
      _out->etat = etat_St_9_Codes;
      break;
    case Automobile_controller__St_9_Veilleuses:
      ns_St_9_Veilleuses = Automobile_controller__St_9_Veilleuses;
      nr_St_9_Veilleuses = false;
      codes_St_9_Veilleuses = false;
      phares_St_9_Veilleuses = false;
      veilleuses_St_9_Veilleuses = true;
      etat_St_9_Veilleuses = Automobile_controller__Veilleuses;
      ns = ns_St_9_Veilleuses;
      nr = nr_St_9_Veilleuses;
      _out->codes = codes_St_9_Veilleuses;
      _out->phares = phares_St_9_Veilleuses;
      _out->veilleuses = veilleuses_St_9_Veilleuses;
      _out->etat = etat_St_9_Veilleuses;
      break;
    case Automobile_controller__St_9_Idle:
      ns_St_9_Idle = Automobile_controller__St_9_Idle;
      ns = ns_St_9_Idle;
      nr_St_9_Idle = false;
      nr = nr_St_9_Idle;
      codes_St_9_Idle = false;
      _out->codes = codes_St_9_Idle;
      phares_St_9_Idle = false;
      _out->phares = phares_St_9_Idle;
      veilleuses_St_9_Idle = false;
      _out->veilleuses = veilleuses_St_9_Idle;
      etat_St_9_Idle = Automobile_controller__Idle;
      _out->etat = etat_St_9_Idle;
      break;
    default:
      break;
  };
  self->ck = ns;
  self->pnr = nr;;
}

void Automobile__automobile_reset(Automobile__automobile_mem* self) {
  self->ck = Automobile_controller__St_19_Allumer;
  self->pnr_9 = false;
  self->ck_12 = Automobile_controller__St_18_Zero;
  self->pnr_8 = false;
  self->ck_14 = Automobile_controller__St_17_Move;
  self->pnr_7 = false;
  self->ck_16 = Automobile_controller__St_16_Desacitve;
  self->pnr_6 = false;
  self->ck_18 = Automobile_controller__St_15_Desactive;
  self->pnr_5 = false;
  self->ck_20 = Automobile_controller__St_14_Desactive;
  self->pnr_4 = false;
  self->ck_22 = Automobile_controller__St_13_Idle;
  self->pnr_3 = false;
  self->ck_24 = Automobile_controller__St_12_Acceleration;
  self->pnr_2 = false;
  self->ck_26 = Automobile_controller__St_11_Active;
  self->pnr_1 = false;
  self->ck_28 = Automobile_controller__St_10_Idle;
  self->pnr = false;
}

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
                                 Automobile__automobile_mem* self) {
  Automobile_controller__automobile_ctrlr0_out Automobile_controller__automobile_ctrlr0_out_st;
  
  int con;
  int cclose;
  int td;
  int ti;
  int cp;
  int frein;
  int accelerateur;
  int normal;
  int jour;
  int nuit;
  Automobile_controller__numero boiteDeVitesse;
  int ok;
  int v_245;
  int v_248;
  int v_247;
  int v_246;
  int r_9_St_19_Eteint;
  Automobile_controller__st_19 s_9_St_19_Eteint;
  int r_9_St_19_Allumer;
  Automobile_controller__st_19 s_9_St_19_Allumer;
  int nr_9_St_19_Eteint;
  Automobile_controller__st_19 ns_9_St_19_Eteint;
  int etat_St_19_Eteint;
  int nr_9_St_19_Allumer;
  Automobile_controller__st_19 ns_9_St_19_Allumer;
  int etat_St_19_Allumer;
  Automobile_controller__st_19 ck_11;
  int v_264;
  Automobile_controller__st_18 v_263;
  int v_262;
  Automobile_controller__st_18 v_261;
  int v_260;
  Automobile_controller__st_18 v_259;
  int v_258;
  Automobile_controller__st_18 v_257;
  int v_256;
  Automobile_controller__st_18 v_255;
  int v_254;
  int v_253;
  int v_252;
  int v_251;
  int v_250;
  int v_249;
  int v_280;
  Automobile_controller__st_18 v_279;
  int v_278;
  Automobile_controller__st_18 v_277;
  int v_276;
  Automobile_controller__st_18 v_275;
  int v_274;
  Automobile_controller__st_18 v_273;
  int v_272;
  Automobile_controller__st_18 v_271;
  int v_270;
  int v_269;
  int v_268;
  int v_267;
  int v_266;
  int v_265;
  int v_296;
  Automobile_controller__st_18 v_295;
  int v_294;
  Automobile_controller__st_18 v_293;
  int v_292;
  Automobile_controller__st_18 v_291;
  int v_290;
  Automobile_controller__st_18 v_289;
  int v_288;
  Automobile_controller__st_18 v_287;
  int v_286;
  int v_285;
  int v_284;
  int v_283;
  int v_282;
  int v_281;
  int v_312;
  Automobile_controller__st_18 v_311;
  int v_310;
  Automobile_controller__st_18 v_309;
  int v_308;
  Automobile_controller__st_18 v_307;
  int v_306;
  Automobile_controller__st_18 v_305;
  int v_304;
  Automobile_controller__st_18 v_303;
  int v_302;
  int v_301;
  int v_300;
  int v_299;
  int v_298;
  int v_297;
  int v_328;
  Automobile_controller__st_18 v_327;
  int v_326;
  Automobile_controller__st_18 v_325;
  int v_324;
  Automobile_controller__st_18 v_323;
  int v_322;
  Automobile_controller__st_18 v_321;
  int v_320;
  Automobile_controller__st_18 v_319;
  int v_318;
  int v_317;
  int v_316;
  int v_315;
  int v_314;
  int v_313;
  int v_344;
  Automobile_controller__st_18 v_343;
  int v_342;
  Automobile_controller__st_18 v_341;
  int v_340;
  Automobile_controller__st_18 v_339;
  int v_338;
  Automobile_controller__st_18 v_337;
  int v_336;
  Automobile_controller__st_18 v_335;
  int v_334;
  int v_333;
  int v_332;
  int v_331;
  int v_330;
  int v_329;
  int v_360;
  Automobile_controller__st_18 v_359;
  int v_358;
  Automobile_controller__st_18 v_357;
  int v_356;
  Automobile_controller__st_18 v_355;
  int v_354;
  Automobile_controller__st_18 v_353;
  int v_352;
  Automobile_controller__st_18 v_351;
  int v_350;
  int v_349;
  int v_348;
  int v_347;
  int v_346;
  int v_345;
  int r_8_St_18_Arriere;
  Automobile_controller__st_18 s_8_St_18_Arriere;
  int r_8_St_18_Cinquieme;
  Automobile_controller__st_18 s_8_St_18_Cinquieme;
  int r_8_St_18_Quatrieme;
  Automobile_controller__st_18 s_8_St_18_Quatrieme;
  int r_8_St_18_Troisieme;
  Automobile_controller__st_18 s_8_St_18_Troisieme;
  int r_8_St_18_Deuxieme;
  Automobile_controller__st_18 s_8_St_18_Deuxieme;
  int r_8_St_18_Premier;
  Automobile_controller__st_18 s_8_St_18_Premier;
  int r_8_St_18_Zero;
  Automobile_controller__st_18 s_8_St_18_Zero;
  int nr_8_St_18_Arriere;
  Automobile_controller__st_18 ns_8_St_18_Arriere;
  Automobile_controller__numero num_St_18_Arriere;
  int nr_8_St_18_Cinquieme;
  Automobile_controller__st_18 ns_8_St_18_Cinquieme;
  Automobile_controller__numero num_St_18_Cinquieme;
  int nr_8_St_18_Quatrieme;
  Automobile_controller__st_18 ns_8_St_18_Quatrieme;
  Automobile_controller__numero num_St_18_Quatrieme;
  int nr_8_St_18_Troisieme;
  Automobile_controller__st_18 ns_8_St_18_Troisieme;
  Automobile_controller__numero num_St_18_Troisieme;
  int nr_8_St_18_Deuxieme;
  Automobile_controller__st_18 ns_8_St_18_Deuxieme;
  Automobile_controller__numero num_St_18_Deuxieme;
  int nr_8_St_18_Premier;
  Automobile_controller__st_18 ns_8_St_18_Premier;
  Automobile_controller__numero num_St_18_Premier;
  int nr_8_St_18_Zero;
  Automobile_controller__st_18 ns_8_St_18_Zero;
  Automobile_controller__numero num_St_18_Zero;
  Automobile_controller__st_18 ck_13;
  int r_7_St_17_Stop;
  Automobile_controller__st_17 s_7_St_17_Stop;
  int r_7_St_17_Move;
  Automobile_controller__st_17 s_7_St_17_Move;
  int nr_7_St_17_Stop;
  Automobile_controller__st_17 ns_7_St_17_Stop;
  int avance_1_St_17_Stop;
  int nr_7_St_17_Move;
  Automobile_controller__st_17 ns_7_St_17_Move;
  int avance_1_St_17_Move;
  Automobile_controller__st_17 ck_15;
  int v_369;
  Automobile_controller__st_16 v_368;
  int v_367;
  Automobile_controller__st_16 v_366;
  int v_365;
  int v_364;
  int v_363;
  int v_362;
  int v_361;
  int v_378;
  Automobile_controller__st_16 v_377;
  int v_376;
  Automobile_controller__st_16 v_375;
  int v_374;
  int v_373;
  int v_372;
  int v_371;
  int v_370;
  int v_387;
  Automobile_controller__st_16 v_386;
  int v_385;
  Automobile_controller__st_16 v_384;
  int v_383;
  int v_382;
  int v_381;
  int v_380;
  int v_379;
  int v_391;
  Automobile_controller__st_16 v_390;
  int v_389;
  Automobile_controller__st_16 v_388;
  int r_6_St_16_PositionNuit;
  Automobile_controller__st_16 s_6_St_16_PositionNuit;
  int r_6_St_16_PositionJour;
  Automobile_controller__st_16 s_6_St_16_PositionJour;
  int r_6_St_16_PositionNormale;
  Automobile_controller__st_16 s_6_St_16_PositionNormale;
  int r_6_St_16_Desacitve;
  Automobile_controller__st_16 s_6_St_16_Desacitve;
  int nr_6_St_16_PositionNuit;
  Automobile_controller__st_16 ns_6_St_16_PositionNuit;
  Automobile_controller__retro sortie_St_16_PositionNuit;
  int gerer_St_16_PositionNuit;
  int nr_6_St_16_PositionJour;
  Automobile_controller__st_16 ns_6_St_16_PositionJour;
  Automobile_controller__retro sortie_St_16_PositionJour;
  int gerer_St_16_PositionJour;
  int nr_6_St_16_PositionNormale;
  Automobile_controller__st_16 ns_6_St_16_PositionNormale;
  Automobile_controller__retro sortie_St_16_PositionNormale;
  int gerer_St_16_PositionNormale;
  int nr_6_St_16_Desacitve;
  Automobile_controller__st_16 ns_6_St_16_Desacitve;
  Automobile_controller__retro sortie_St_16_Desacitve;
  int gerer_St_16_Desacitve;
  Automobile_controller__st_16 ck_17;
  int v_399;
  Automobile_controller__st_15 v_398;
  int v_397;
  Automobile_controller__st_15 v_396;
  int v_395;
  int v_394;
  int v_393;
  int v_392;
  int v_407;
  Automobile_controller__st_15 v_406;
  int v_405;
  Automobile_controller__st_15 v_404;
  int v_403;
  int v_402;
  int v_401;
  int v_400;
  int v_415;
  Automobile_controller__st_15 v_414;
  int v_413;
  Automobile_controller__st_15 v_412;
  int v_411;
  int v_410;
  int v_409;
  int v_408;
  int r_5_St_15_BalayageContiu;
  Automobile_controller__st_15 s_5_St_15_BalayageContiu;
  int r_5_St_15_BalayageIntermittent;
  Automobile_controller__st_15 s_5_St_15_BalayageIntermittent;
  int r_5_St_15_BalayageUnique;
  Automobile_controller__st_15 s_5_St_15_BalayageUnique;
  int r_5_St_15_Desactive;
  Automobile_controller__st_15 s_5_St_15_Desactive;
  int nr_5_St_15_BalayageContiu;
  Automobile_controller__st_15 ns_5_St_15_BalayageContiu;
  Automobile_controller__typeBalayage etat_1_St_15_BalayageContiu;
  int nr_5_St_15_BalayageIntermittent;
  Automobile_controller__st_15 ns_5_St_15_BalayageIntermittent;
  Automobile_controller__typeBalayage etat_1_St_15_BalayageIntermittent;
  int nr_5_St_15_BalayageUnique;
  Automobile_controller__st_15 ns_5_St_15_BalayageUnique;
  Automobile_controller__typeBalayage etat_1_St_15_BalayageUnique;
  int nr_5_St_15_Desactive;
  Automobile_controller__st_15 ns_5_St_15_Desactive;
  Automobile_controller__typeBalayage etat_1_St_15_Desactive;
  Automobile_controller__st_15 ck_19;
  int v_416;
  int r_4_St_14_Active;
  Automobile_controller__st_14 s_4_St_14_Active;
  int r_4_St_14_Desactive;
  Automobile_controller__st_14 s_4_St_14_Desactive;
  int nr_4_St_14_Active;
  Automobile_controller__st_14 ns_4_St_14_Active;
  int emissionAppelUrgence_St_14_Active;
  int airbag_St_14_Active;
  int nr_4_St_14_Desactive;
  Automobile_controller__st_14 ns_4_St_14_Desactive;
  int emissionAppelUrgence_St_14_Desactive;
  int airbag_St_14_Desactive;
  Automobile_controller__st_14 ck_21;
  int v_423;
  int v_422;
  int v_421;
  int v_420;
  int v_419;
  int v_418;
  int v_417;
  int v_426;
  int v_425;
  int v_424;
  int r_3_St_13_Detection;
  Automobile_controller__st_13 s_3_St_13_Detection;
  int r_3_St_13_Idle;
  Automobile_controller__st_13 s_3_St_13_Idle;
  int nr_3_St_13_Detection;
  Automobile_controller__st_13 ns_3_St_13_Detection;
  int dangerAngleMort_St_13_Detection;
  int defaillanceTechnique_1_St_13_Detection;
  int volantLibre_1_St_13_Detection;
  int depassementLigne_St_13_Detection;
  int nr_3_St_13_Idle;
  Automobile_controller__st_13 ns_3_St_13_Idle;
  int dangerAngleMort_St_13_Idle;
  int defaillanceTechnique_1_St_13_Idle;
  int volantLibre_1_St_13_Idle;
  int depassementLigne_St_13_Idle;
  Automobile_controller__st_13 ck_23;
  int v_437;
  Automobile_controller__st_12 v_436;
  int v_435;
  Automobile_controller__st_12 v_434;
  int v_433;
  int v_432;
  int v_431;
  int v_430;
  int v_429;
  int v_428;
  int v_427;
  int v_452;
  Automobile_controller__st_12 v_451;
  int v_450;
  Automobile_controller__st_12 v_449;
  int v_448;
  int v_447;
  int v_446;
  int v_445;
  int v_444;
  int v_443;
  int v_442;
  int v_441;
  int v_440;
  int v_439;
  int v_438;
  int v_469;
  Automobile_controller__st_12 v_468;
  int v_467;
  Automobile_controller__st_12 v_466;
  int v_465;
  int v_464;
  int v_463;
  int v_462;
  int v_461;
  int v_460;
  int v_459;
  int v_458;
  int v_457;
  int v_456;
  int v_455;
  int v_454;
  int v_453;
  int v_481;
  Automobile_controller__st_12 v_480;
  int v_479;
  Automobile_controller__st_12 v_478;
  int v_477;
  int v_476;
  int v_475;
  int v_474;
  int v_473;
  int v_472;
  int v_471;
  int v_470;
  int r_2_St_12_Feu;
  Automobile_controller__st_12 s_2_St_12_Feu;
  int r_2_St_12_Vehicule;
  Automobile_controller__st_12 s_2_St_12_Vehicule;
  int r_2_St_12_Pieton;
  Automobile_controller__st_12 s_2_St_12_Pieton;
  int r_2_St_12_Acceleration;
  Automobile_controller__st_12 s_2_St_12_Acceleration;
  int nr_2_St_12_Feu;
  Automobile_controller__st_12 ns_2_St_12_Feu;
  Automobile_controller__cause causeFreinage_1_St_12_Feu;
  int frein_2_St_12_Feu;
  int nr_2_St_12_Vehicule;
  Automobile_controller__st_12 ns_2_St_12_Vehicule;
  Automobile_controller__cause causeFreinage_1_St_12_Vehicule;
  int frein_2_St_12_Vehicule;
  int nr_2_St_12_Pieton;
  Automobile_controller__st_12 ns_2_St_12_Pieton;
  Automobile_controller__cause causeFreinage_1_St_12_Pieton;
  int frein_2_St_12_Pieton;
  int nr_2_St_12_Acceleration;
  Automobile_controller__st_12 ns_2_St_12_Acceleration;
  Automobile_controller__cause causeFreinage_1_St_12_Acceleration;
  int frein_2_St_12_Acceleration;
  Automobile_controller__st_12 ck_25;
  int v_482;
  int r_1_St_11_Desactive;
  Automobile_controller__st_11 s_1_St_11_Desactive;
  int r_1_St_11_Active;
  Automobile_controller__st_11 s_1_St_11_Active;
  int nr_1_St_11_Desactive;
  Automobile_controller__st_11 ns_1_St_11_Desactive;
  int etat_2_St_11_Desactive;
  float qt_St_11_Desactive;
  int nr_1_St_11_Active;
  Automobile_controller__st_11 ns_1_St_11_Active;
  int etat_2_St_11_Active;
  float qt_St_11_Active;
  Automobile_controller__st_11 ck_27;
  int v_484;
  Automobile_controller__st_10 v_483;
  int v_486;
  Automobile_controller__st_10 v_485;
  int r_St_10_Phares;
  Automobile_controller__st_10 s_St_10_Phares;
  int r_St_10_Codes;
  Automobile_controller__st_10 s_St_10_Codes;
  int r_St_10_Veilleuses;
  Automobile_controller__st_10 s_St_10_Veilleuses;
  int r_St_10_Idle;
  Automobile_controller__st_10 s_St_10_Idle;
  int nr_St_10_Phares;
  Automobile_controller__st_10 ns_St_10_Phares;
  Automobile_controller__etatPhares etat_3_St_10_Phares;
  int veilleuses_St_10_Phares;
  int phares_1_St_10_Phares;
  int codes_St_10_Phares;
  int nr_St_10_Codes;
  Automobile_controller__st_10 ns_St_10_Codes;
  Automobile_controller__etatPhares etat_3_St_10_Codes;
  int veilleuses_St_10_Codes;
  int phares_1_St_10_Codes;
  int codes_St_10_Codes;
  int nr_St_10_Veilleuses;
  Automobile_controller__st_10 ns_St_10_Veilleuses;
  Automobile_controller__etatPhares etat_3_St_10_Veilleuses;
  int veilleuses_St_10_Veilleuses;
  int phares_1_St_10_Veilleuses;
  int codes_St_10_Veilleuses;
  int nr_St_10_Idle;
  Automobile_controller__st_10 ns_St_10_Idle;
  Automobile_controller__etatPhares etat_3_St_10_Idle;
  int veilleuses_St_10_Idle;
  int phares_1_St_10_Idle;
  int codes_St_10_Idle;
  Automobile_controller__st_10 ck_29;
  int v_244;
  int v_243;
  int v_242;
  int v_241;
  int v_240;
  int v_239;
  int v_238;
  int v_237;
  int v_236;
  int v_235;
  int v_234;
  int v;
  Automobile_controller__st_19 s_9;
  Automobile_controller__st_19 ns_9;
  int r_9;
  int nr_9;
  Automobile_controller__st_18 s_8;
  Automobile_controller__st_18 ns_8;
  int r_8;
  int nr_8;
  Automobile_controller__st_17 s_7;
  Automobile_controller__st_17 ns_7;
  int r_7;
  int nr_7;
  Automobile_controller__st_16 s_6;
  Automobile_controller__st_16 ns_6;
  int r_6;
  int nr_6;
  Automobile_controller__st_15 s_5;
  Automobile_controller__st_15 ns_5;
  int r_5;
  int nr_5;
  Automobile_controller__st_14 s_4;
  Automobile_controller__st_14 ns_4;
  int r_4;
  int nr_4;
  Automobile_controller__st_13 s_3;
  Automobile_controller__st_13 ns_3;
  int r_3;
  int nr_3;
  Automobile_controller__st_12 s_2;
  Automobile_controller__st_12 ns_2;
  int r_2;
  int nr_2;
  Automobile_controller__st_11 s_1;
  Automobile_controller__st_11 ns_1;
  int r_1;
  int nr_1;
  Automobile_controller__st_10 s;
  Automobile_controller__st_10 ns;
  int r;
  int nr;
  int tdn;
  int tin;
  int cpn;
  int codes;
  int phares_1;
  int veilleuses;
  Automobile_controller__etatPhares etat_3;
  int deactivated;
  float capteur;
  float qt;
  int etat_2;
  int presencePieton;
  int presencevehicule;
  Automobile_controller__couleur feu;
  int frein_2;
  Automobile_controller__cause causeFreinage_1;
  int detectionDepassementLigne;
  int detectionVolantLibre_1;
  int detectionDefaillanceTechnique_1;
  int detectionVehiculeAngleMort;
  int depassementLigne;
  int volantLibre_1;
  int defaillanceTechnique_1;
  int dangerAngleMort;
  int detectionAccident_1;
  int airbag;
  int emissionAppelUrgence;
  int con_1;
  int cclose_1;
  Automobile_controller__lum densite;
  Automobile_controller__typeBalayage etat_1;
  int normal_1;
  int jour_1;
  int nuit_1;
  int gerer;
  Automobile_controller__retro sortie;
  int frein_1;
  int accelerateur_1;
  int avance_1;
  Automobile_controller__numero boiteDeVitesse_1;
  Automobile_controller__numero num;
  int commande;
  int cle;
  int etat;
  int lmoteur;
  int lretroviseur;
  int lavance;
  int lairbag;
  int lemissionAppelUrgence;
  int lLigne;
  int lvolantLibre;
  int ldefaillanceTechnique;
  int langleMort;
  int lfrein;
  int letatRegulateurTemperature;
  int lcodes;
  int lphares;
  int lveilleuses;
  int prop1;
  int prop2;
  int prop3;
  int prop4;
  int prop5;
  int prop6;
  int prop7;
  int prop8;
  int prop9;
  int prop10;
  int prop11;
  Automobile_controller__typeBalayage lessuieGlace;
  Automobile_controller__numero lnumero;
  float lqt;
  Automobile_controller__cause lcause;
  Automobile_controller__etatPhares lstate;
  Automobile_controller__retro lsortie;
  prop11 = true;
  cle = cleVoiture;
  commande = commandeVoiture;
  densite = densitePluie;
  detectionAccident_1 = detectionAccident;
  detectionVehiculeAngleMort = detectionAngleMort;
  detectionDefaillanceTechnique_1 = detectionDefaillanceTechnique;
  detectionVolantLibre_1 = detectionVolantLibre;
  detectionDepassementLigne = detectionLigne;
  feu = capteurDectecteurFeu;
  presencevehicule = detectionPresencevehicule;
  presencePieton = detectionPresencePieton;
  capteur = capteurTemperature;
  deactivated = desactiveRegulateurTemperature;
  switch (self->ck) {
    case Automobile_controller__St_19_Eteint:
      v_245 = (commande||cle);
      if (v_245) {
        s_9_St_19_Eteint = Automobile_controller__St_19_Allumer;
        r_9_St_19_Eteint = true;
      } else {
        s_9_St_19_Eteint = Automobile_controller__St_19_Eteint;
        r_9_St_19_Eteint = self->pnr_9;
      };
      s_9 = s_9_St_19_Eteint;
      r_9 = r_9_St_19_Eteint;
      break;
    case Automobile_controller__St_19_Allumer:
      v_246 = !(commande);
      v_247 = !(cle);
      v_248 = (v_246&&v_247);
      if (v_248) {
        s_9_St_19_Allumer = Automobile_controller__St_19_Eteint;
      } else {
        s_9_St_19_Allumer = Automobile_controller__St_19_Allumer;
      };
      s_9 = s_9_St_19_Allumer;
      if (v_248) {
        r_9_St_19_Allumer = true;
      } else {
        r_9_St_19_Allumer = self->pnr_9;
      };
      r_9 = r_9_St_19_Allumer;
      break;
    default:
      break;
  };
  ck_11 = s_9;
  switch (ck_11) {
    case Automobile_controller__St_19_Eteint:
      ns_9_St_19_Eteint = Automobile_controller__St_19_Eteint;
      nr_9_St_19_Eteint = false;
      etat_St_19_Eteint = false;
      ns_9 = ns_9_St_19_Eteint;
      nr_9 = nr_9_St_19_Eteint;
      etat = etat_St_19_Eteint;
      break;
    case Automobile_controller__St_19_Allumer:
      ns_9_St_19_Allumer = Automobile_controller__St_19_Allumer;
      ns_9 = ns_9_St_19_Allumer;
      nr_9_St_19_Allumer = false;
      nr_9 = nr_9_St_19_Allumer;
      etat_St_19_Allumer = true;
      etat = etat_St_19_Allumer;
      break;
    default:
      break;
  };
  lmoteur = etat;
  _out->moteur = lmoteur;
  switch (self->ck_18) {
    case Automobile_controller__St_15_BalayageContiu:
      v_392 = (densite==Automobile_controller__Low);
      v_394 = (densite==Automobile_controller__Normal);
      break;
    case Automobile_controller__St_15_BalayageIntermittent:
      v_400 = (densite==Automobile_controller__High);
      v_402 = (densite==Automobile_controller__Low);
      break;
    case Automobile_controller__St_15_BalayageUnique:
      v_408 = (densite==Automobile_controller__High);
      v_410 = (densite==Automobile_controller__Normal);
      break;
    default:
      break;
  };
  switch (self->ck_20) {
    case Automobile_controller__St_14_Active:
      v_416 = !(detectionAccident_1);
      if (v_416) {
        s_4_St_14_Active = Automobile_controller__St_14_Active;
        r_4_St_14_Active = true;
      } else {
        s_4_St_14_Active = Automobile_controller__St_14_Active;
        r_4_St_14_Active = self->pnr_4;
      };
      s_4 = s_4_St_14_Active;
      r_4 = r_4_St_14_Active;
      break;
    case Automobile_controller__St_14_Desactive:
      if (detectionAccident_1) {
        s_4_St_14_Desactive = Automobile_controller__St_14_Active;
      } else {
        s_4_St_14_Desactive = Automobile_controller__St_14_Desactive;
      };
      s_4 = s_4_St_14_Desactive;
      if (detectionAccident_1) {
        r_4_St_14_Desactive = true;
      } else {
        r_4_St_14_Desactive = self->pnr_4;
      };
      r_4 = r_4_St_14_Desactive;
      break;
    default:
      break;
  };
  ck_21 = s_4;
  switch (ck_21) {
    case Automobile_controller__St_14_Active:
      ns_4_St_14_Active = Automobile_controller__St_14_Active;
      nr_4_St_14_Active = false;
      airbag_St_14_Active = true;
      emissionAppelUrgence_St_14_Active = true;
      ns_4 = ns_4_St_14_Active;
      nr_4 = nr_4_St_14_Active;
      airbag = airbag_St_14_Active;
      emissionAppelUrgence = emissionAppelUrgence_St_14_Active;
      break;
    case Automobile_controller__St_14_Desactive:
      ns_4_St_14_Desactive = Automobile_controller__St_14_Desactive;
      ns_4 = ns_4_St_14_Desactive;
      nr_4_St_14_Desactive = false;
      nr_4 = nr_4_St_14_Desactive;
      airbag_St_14_Desactive = false;
      airbag = airbag_St_14_Desactive;
      emissionAppelUrgence_St_14_Desactive = false;
      emissionAppelUrgence = emissionAppelUrgence_St_14_Desactive;
      break;
    default:
      break;
  };
  lairbag = airbag;
  lemissionAppelUrgence = emissionAppelUrgence;
  _out->accident = (lairbag||lemissionAppelUrgence);
  switch (self->ck_22) {
    case Automobile_controller__St_13_Detection:
      v_417 = !(detectionDepassementLigne);
      v_418 = !(detectionVolantLibre_1);
      v_419 = (v_417&&v_418);
      v_420 = !(detectionDefaillanceTechnique_1);
      v_421 = (v_419&&v_420);
      v_422 = !(detectionVehiculeAngleMort);
      v_423 = (v_421&&v_422);
      if (v_423) {
        s_3_St_13_Detection = Automobile_controller__St_13_Idle;
        r_3_St_13_Detection = true;
      } else {
        s_3_St_13_Detection = Automobile_controller__St_13_Detection;
        r_3_St_13_Detection = self->pnr_3;
      };
      s_3 = s_3_St_13_Detection;
      r_3 = r_3_St_13_Detection;
      break;
    case Automobile_controller__St_13_Idle:
      v_424 = (detectionDepassementLigne||detectionVolantLibre_1);
      v_425 = (v_424||detectionDefaillanceTechnique_1);
      v_426 = (v_425||detectionVehiculeAngleMort);
      if (v_426) {
        s_3_St_13_Idle = Automobile_controller__St_13_Detection;
      } else {
        s_3_St_13_Idle = Automobile_controller__St_13_Idle;
      };
      s_3 = s_3_St_13_Idle;
      if (v_426) {
        r_3_St_13_Idle = true;
      } else {
        r_3_St_13_Idle = self->pnr_3;
      };
      r_3 = r_3_St_13_Idle;
      break;
    default:
      break;
  };
  ck_23 = s_3;
  switch (ck_23) {
    case Automobile_controller__St_13_Detection:
      ns_3_St_13_Detection = Automobile_controller__St_13_Detection;
      nr_3_St_13_Detection = false;
      depassementLigne_St_13_Detection = detectionDepassementLigne;
      volantLibre_1_St_13_Detection = detectionVolantLibre_1;
      defaillanceTechnique_1_St_13_Detection = detectionDefaillanceTechnique_1;
      dangerAngleMort_St_13_Detection = detectionVehiculeAngleMort;
      ns_3 = ns_3_St_13_Detection;
      nr_3 = nr_3_St_13_Detection;
      depassementLigne = depassementLigne_St_13_Detection;
      volantLibre_1 = volantLibre_1_St_13_Detection;
      defaillanceTechnique_1 = defaillanceTechnique_1_St_13_Detection;
      dangerAngleMort = dangerAngleMort_St_13_Detection;
      break;
    case Automobile_controller__St_13_Idle:
      ns_3_St_13_Idle = Automobile_controller__St_13_Idle;
      ns_3 = ns_3_St_13_Idle;
      nr_3_St_13_Idle = false;
      nr_3 = nr_3_St_13_Idle;
      depassementLigne_St_13_Idle = false;
      depassementLigne = depassementLigne_St_13_Idle;
      volantLibre_1_St_13_Idle = false;
      volantLibre_1 = volantLibre_1_St_13_Idle;
      defaillanceTechnique_1_St_13_Idle = false;
      defaillanceTechnique_1 = defaillanceTechnique_1_St_13_Idle;
      dangerAngleMort_St_13_Idle = false;
      dangerAngleMort = dangerAngleMort_St_13_Idle;
      break;
    default:
      break;
  };
  lLigne = depassementLigne;
  _out->ligne = lLigne;
  v_241 = !(lLigne);
  prop4 = (lmoteur||v_241);
  lvolantLibre = volantLibre_1;
  _out->volantLibre = lvolantLibre;
  v_240 = !(lvolantLibre);
  prop5 = (lmoteur||v_240);
  ldefaillanceTechnique = defaillanceTechnique_1;
  _out->defaillanceTechnique = ldefaillanceTechnique;
  v_239 = !(ldefaillanceTechnique);
  prop6 = (lmoteur||v_239);
  langleMort = dangerAngleMort;
  _out->angleMort = langleMort;
  v_238 = !(langleMort);
  prop7 = (lmoteur||v_238);
  switch (self->ck_24) {
    case Automobile_controller__St_12_Feu:
      v_427 = !(presencePieton);
      v_428 = !(presencevehicule);
      v_429 = (v_427&&v_428);
      v_430 = (feu==Automobile_controller__Vert);
      v_431 = (v_429&&v_430);
      v_432 = !(presencePieton);
      v_433 = (v_432&&presencevehicule);
      if (v_433) {
        v_434 = Automobile_controller__St_12_Vehicule;
      } else {
        v_434 = Automobile_controller__St_12_Feu;
      };
      if (presencePieton) {
        v_436 = Automobile_controller__St_12_Pieton;
      } else {
        v_436 = v_434;
      };
      if (v_431) {
        s_2_St_12_Feu = Automobile_controller__St_12_Acceleration;
      } else {
        s_2_St_12_Feu = v_436;
      };
      if (v_433) {
        v_435 = true;
      } else {
        v_435 = self->pnr_2;
      };
      if (presencePieton) {
        v_437 = true;
      } else {
        v_437 = v_435;
      };
      if (v_431) {
        r_2_St_12_Feu = true;
      } else {
        r_2_St_12_Feu = v_437;
      };
      s_2 = s_2_St_12_Feu;
      r_2 = r_2_St_12_Feu;
      break;
    case Automobile_controller__St_12_Vehicule:
      v_438 = !(presencePieton);
      v_439 = !(presencevehicule);
      v_440 = (v_438&&v_439);
      v_441 = (feu==Automobile_controller__Vert);
      v_442 = (v_440&&v_441);
      v_443 = !(presencePieton);
      v_444 = !(presencevehicule);
      v_445 = (v_443&&v_444);
      v_446 = (feu==Automobile_controller__Vert);
      v_447 = !(v_446);
      v_448 = (v_445&&v_447);
      if (v_448) {
        v_449 = Automobile_controller__St_12_Feu;
      } else {
        v_449 = Automobile_controller__St_12_Vehicule;
      };
      if (presencePieton) {
        v_451 = Automobile_controller__St_12_Pieton;
      } else {
        v_451 = v_449;
      };
      if (v_442) {
        s_2_St_12_Vehicule = Automobile_controller__St_12_Acceleration;
      } else {
        s_2_St_12_Vehicule = v_451;
      };
      if (v_448) {
        v_450 = true;
      } else {
        v_450 = self->pnr_2;
      };
      if (presencePieton) {
        v_452 = true;
      } else {
        v_452 = v_450;
      };
      if (v_442) {
        r_2_St_12_Vehicule = true;
      } else {
        r_2_St_12_Vehicule = v_452;
      };
      s_2 = s_2_St_12_Vehicule;
      r_2 = r_2_St_12_Vehicule;
      break;
    case Automobile_controller__St_12_Pieton:
      v_453 = !(presencePieton);
      v_454 = !(presencevehicule);
      v_455 = (v_453&&v_454);
      v_456 = (feu==Automobile_controller__Vert);
      v_457 = (v_455&&v_456);
      v_458 = !(presencePieton);
      v_459 = (v_458&&presencevehicule);
      v_460 = !(presencePieton);
      v_461 = !(presencevehicule);
      v_462 = (v_460&&v_461);
      v_463 = (feu==Automobile_controller__Vert);
      v_464 = !(v_463);
      v_465 = (v_462&&v_464);
      if (v_465) {
        v_466 = Automobile_controller__St_12_Feu;
      } else {
        v_466 = Automobile_controller__St_12_Pieton;
      };
      if (v_459) {
        v_468 = Automobile_controller__St_12_Vehicule;
      } else {
        v_468 = v_466;
      };
      if (v_457) {
        s_2_St_12_Pieton = Automobile_controller__St_12_Acceleration;
      } else {
        s_2_St_12_Pieton = v_468;
      };
      if (v_465) {
        v_467 = true;
      } else {
        v_467 = self->pnr_2;
      };
      if (v_459) {
        v_469 = true;
      } else {
        v_469 = v_467;
      };
      if (v_457) {
        r_2_St_12_Pieton = true;
      } else {
        r_2_St_12_Pieton = v_469;
      };
      s_2 = s_2_St_12_Pieton;
      r_2 = r_2_St_12_Pieton;
      break;
    case Automobile_controller__St_12_Acceleration:
      v_470 = !(presencePieton);
      v_471 = (v_470&&presencevehicule);
      v_472 = !(presencePieton);
      v_473 = !(presencevehicule);
      v_474 = (v_472&&v_473);
      v_475 = (feu==Automobile_controller__Vert);
      v_476 = !(v_475);
      v_477 = (v_474&&v_476);
      if (v_477) {
        v_478 = Automobile_controller__St_12_Feu;
      } else {
        v_478 = Automobile_controller__St_12_Acceleration;
      };
      if (v_471) {
        v_480 = Automobile_controller__St_12_Vehicule;
      } else {
        v_480 = v_478;
      };
      if (presencePieton) {
        s_2_St_12_Acceleration = Automobile_controller__St_12_Pieton;
      } else {
        s_2_St_12_Acceleration = v_480;
      };
      s_2 = s_2_St_12_Acceleration;
      if (v_477) {
        v_479 = true;
      } else {
        v_479 = self->pnr_2;
      };
      if (v_471) {
        v_481 = true;
      } else {
        v_481 = v_479;
      };
      if (presencePieton) {
        r_2_St_12_Acceleration = true;
      } else {
        r_2_St_12_Acceleration = v_481;
      };
      r_2 = r_2_St_12_Acceleration;
      break;
    default:
      break;
  };
  ck_25 = s_2;
  switch (ck_25) {
    case Automobile_controller__St_12_Feu:
      ns_2_St_12_Feu = Automobile_controller__St_12_Feu;
      nr_2_St_12_Feu = false;
      causeFreinage_1_St_12_Feu = Automobile_controller__Feu;
      frein_2_St_12_Feu = true;
      ns_2 = ns_2_St_12_Feu;
      nr_2 = nr_2_St_12_Feu;
      causeFreinage_1 = causeFreinage_1_St_12_Feu;
      frein_2 = frein_2_St_12_Feu;
      break;
    case Automobile_controller__St_12_Vehicule:
      ns_2_St_12_Vehicule = Automobile_controller__St_12_Vehicule;
      nr_2_St_12_Vehicule = false;
      causeFreinage_1_St_12_Vehicule = Automobile_controller__Presencevehicule;
      frein_2_St_12_Vehicule = true;
      ns_2 = ns_2_St_12_Vehicule;
      nr_2 = nr_2_St_12_Vehicule;
      causeFreinage_1 = causeFreinage_1_St_12_Vehicule;
      frein_2 = frein_2_St_12_Vehicule;
      break;
    case Automobile_controller__St_12_Pieton:
      ns_2_St_12_Pieton = Automobile_controller__St_12_Pieton;
      nr_2_St_12_Pieton = false;
      causeFreinage_1_St_12_Pieton = Automobile_controller__PresencePieton;
      frein_2_St_12_Pieton = true;
      ns_2 = ns_2_St_12_Pieton;
      nr_2 = nr_2_St_12_Pieton;
      causeFreinage_1 = causeFreinage_1_St_12_Pieton;
      frein_2 = frein_2_St_12_Pieton;
      break;
    case Automobile_controller__St_12_Acceleration:
      ns_2_St_12_Acceleration = Automobile_controller__St_12_Acceleration;
      ns_2 = ns_2_St_12_Acceleration;
      nr_2_St_12_Acceleration = false;
      nr_2 = nr_2_St_12_Acceleration;
      causeFreinage_1_St_12_Acceleration = Automobile_controller__None;
      causeFreinage_1 = causeFreinage_1_St_12_Acceleration;
      frein_2_St_12_Acceleration = false;
      frein_2 = frein_2_St_12_Acceleration;
      break;
    default:
      break;
  };
  lfrein = frein_2;
  _out->freinage = lfrein;
  lcause = causeFreinage_1;
  _out->causeFreinage = lcause;
  switch (self->ck_26) {
    case Automobile_controller__St_11_Desactive:
      v_482 = !(deactivated);
      if (v_482) {
        s_1_St_11_Desactive = Automobile_controller__St_11_Active;
        r_1_St_11_Desactive = true;
      } else {
        s_1_St_11_Desactive = Automobile_controller__St_11_Desactive;
        r_1_St_11_Desactive = self->pnr_1;
      };
      s_1 = s_1_St_11_Desactive;
      r_1 = r_1_St_11_Desactive;
      break;
    case Automobile_controller__St_11_Active:
      if (deactivated) {
        s_1_St_11_Active = Automobile_controller__St_11_Desactive;
      } else {
        s_1_St_11_Active = Automobile_controller__St_11_Active;
      };
      s_1 = s_1_St_11_Active;
      if (deactivated) {
        r_1_St_11_Active = true;
      } else {
        r_1_St_11_Active = self->pnr_1;
      };
      r_1 = r_1_St_11_Active;
      break;
    default:
      break;
  };
  ck_27 = s_1;
  switch (ck_27) {
    case Automobile_controller__St_11_Desactive:
      ns_1_St_11_Desactive = Automobile_controller__St_11_Desactive;
      nr_1_St_11_Desactive = false;
      qt_St_11_Desactive = 0.000000;
      etat_2_St_11_Desactive = false;
      ns_1 = ns_1_St_11_Desactive;
      nr_1 = nr_1_St_11_Desactive;
      qt = qt_St_11_Desactive;
      etat_2 = etat_2_St_11_Desactive;
      break;
    case Automobile_controller__St_11_Active:
      ns_1_St_11_Active = Automobile_controller__St_11_Active;
      ns_1 = ns_1_St_11_Active;
      nr_1_St_11_Active = false;
      nr_1 = nr_1_St_11_Active;
      qt_St_11_Active = (19.000000-capteur);
      qt = qt_St_11_Active;
      etat_2_St_11_Active = true;
      etat_2 = etat_2_St_11_Active;
      break;
    default:
      break;
  };
  lqt = qt;
  _out->quantiteRegule = lqt;
  letatRegulateurTemperature = etat_2;
  _out->etatRegulateurTemperature = letatRegulateurTemperature;
  Automobile_controller__automobile_ctrlr0_step(capteurDectecteurFeu,
                                                capteurPluie,
                                                capteurTemperature, self->ck,
                                                self->ck_12, self->ck_14,
                                                self->ck_16, self->ck_18,
                                                self->ck_20, self->ck_22,
                                                self->ck_24, self->ck_26,
                                                self->ck_28, cleVoiture,
                                                commandeVoiture,
                                                densitePluie,
                                                desactiveRegulateurTemperature,
                                                detectionAccident,
                                                detectionAngleMort,
                                                detectionDefaillanceTechnique,
                                                detectionLigne,
                                                detectionPresencePieton,
                                                detectionPresencevehicule,
                                                detectionVolantLibre,
                                                lumiere, ok, self->pnr,
                                                self->pnr_1, self->pnr_2,
                                                self->pnr_3, self->pnr_4,
                                                self->pnr_5, self->pnr_6,
                                                self->pnr_7, self->pnr_8,
                                                self->pnr_9,
                                                &Automobile_controller__automobile_ctrlr0_out_st);
  accelerateur = Automobile_controller__automobile_ctrlr0_out_st.accelerateur;
  boiteDeVitesse = Automobile_controller__automobile_ctrlr0_out_st.boiteDeVitesse;
  cclose = Automobile_controller__automobile_ctrlr0_out_st.cclose;
  con = Automobile_controller__automobile_ctrlr0_out_st.con;
  cp = Automobile_controller__automobile_ctrlr0_out_st.cp;
  frein = Automobile_controller__automobile_ctrlr0_out_st.frein;
  jour = Automobile_controller__automobile_ctrlr0_out_st.jour;
  normal = Automobile_controller__automobile_ctrlr0_out_st.normal;
  nuit = Automobile_controller__automobile_ctrlr0_out_st.nuit;
  td = Automobile_controller__automobile_ctrlr0_out_st.td;
  ti = Automobile_controller__automobile_ctrlr0_out_st.ti;
  boiteDeVitesse_1 = boiteDeVitesse;
  accelerateur_1 = accelerateur;
  frein_1 = frein;
  nuit_1 = nuit;
  jour_1 = jour;
  normal_1 = normal;
  cclose_1 = cclose;
  con_1 = con;
  cpn = cp;
  tin = ti;
  tdn = td;
  switch (self->ck_12) {
    case Automobile_controller__St_18_Arriere:
      v_249 = (boiteDeVitesse_1==Automobile_controller__Un);
      v_250 = (boiteDeVitesse_1==Automobile_controller__Deux);
      v_251 = (boiteDeVitesse_1==Automobile_controller__Quatre);
      v_252 = (boiteDeVitesse_1==Automobile_controller__Trois);
      v_253 = (boiteDeVitesse_1==Automobile_controller__Cinq);
      v_254 = (boiteDeVitesse_1==Automobile_controller__PointMort);
      if (v_254) {
        v_255 = Automobile_controller__St_18_Zero;
      } else {
        v_255 = Automobile_controller__St_18_Arriere;
      };
      if (v_253) {
        v_257 = Automobile_controller__St_18_Cinquieme;
      } else {
        v_257 = v_255;
      };
      if (v_252) {
        v_259 = Automobile_controller__St_18_Troisieme;
      } else {
        v_259 = v_257;
      };
      if (v_251) {
        v_261 = Automobile_controller__St_18_Troisieme;
      } else {
        v_261 = v_259;
      };
      if (v_250) {
        v_263 = Automobile_controller__St_18_Deuxieme;
      } else {
        v_263 = v_261;
      };
      if (v_249) {
        s_8_St_18_Arriere = Automobile_controller__St_18_Premier;
      } else {
        s_8_St_18_Arriere = v_263;
      };
      if (v_254) {
        v_256 = true;
      } else {
        v_256 = self->pnr_8;
      };
      if (v_253) {
        v_258 = true;
      } else {
        v_258 = v_256;
      };
      if (v_252) {
        v_260 = true;
      } else {
        v_260 = v_258;
      };
      if (v_251) {
        v_262 = true;
      } else {
        v_262 = v_260;
      };
      if (v_250) {
        v_264 = true;
      } else {
        v_264 = v_262;
      };
      if (v_249) {
        r_8_St_18_Arriere = true;
      } else {
        r_8_St_18_Arriere = v_264;
      };
      s_8 = s_8_St_18_Arriere;
      r_8 = r_8_St_18_Arriere;
      break;
    case Automobile_controller__St_18_Cinquieme:
      v_265 = (boiteDeVitesse_1==Automobile_controller__Un);
      v_266 = (boiteDeVitesse_1==Automobile_controller__Deux);
      v_267 = (boiteDeVitesse_1==Automobile_controller__Quatre);
      v_268 = (boiteDeVitesse_1==Automobile_controller__Trois);
      v_269 = (boiteDeVitesse_1==Automobile_controller__Six);
      v_270 = (boiteDeVitesse_1==Automobile_controller__PointMort);
      if (v_270) {
        v_271 = Automobile_controller__St_18_Zero;
      } else {
        v_271 = Automobile_controller__St_18_Cinquieme;
      };
      if (v_269) {
        v_273 = Automobile_controller__St_18_Arriere;
      } else {
        v_273 = v_271;
      };
      if (v_268) {
        v_275 = Automobile_controller__St_18_Troisieme;
      } else {
        v_275 = v_273;
      };
      if (v_267) {
        v_277 = Automobile_controller__St_18_Troisieme;
      } else {
        v_277 = v_275;
      };
      if (v_266) {
        v_279 = Automobile_controller__St_18_Deuxieme;
      } else {
        v_279 = v_277;
      };
      if (v_265) {
        s_8_St_18_Cinquieme = Automobile_controller__St_18_Premier;
      } else {
        s_8_St_18_Cinquieme = v_279;
      };
      if (v_270) {
        v_272 = true;
      } else {
        v_272 = self->pnr_8;
      };
      if (v_269) {
        v_274 = true;
      } else {
        v_274 = v_272;
      };
      if (v_268) {
        v_276 = true;
      } else {
        v_276 = v_274;
      };
      if (v_267) {
        v_278 = true;
      } else {
        v_278 = v_276;
      };
      if (v_266) {
        v_280 = true;
      } else {
        v_280 = v_278;
      };
      if (v_265) {
        r_8_St_18_Cinquieme = true;
      } else {
        r_8_St_18_Cinquieme = v_280;
      };
      s_8 = s_8_St_18_Cinquieme;
      r_8 = r_8_St_18_Cinquieme;
      break;
    case Automobile_controller__St_18_Quatrieme:
      v_281 = (boiteDeVitesse_1==Automobile_controller__Un);
      v_282 = (boiteDeVitesse_1==Automobile_controller__Deux);
      v_283 = (boiteDeVitesse_1==Automobile_controller__Trois);
      v_284 = (boiteDeVitesse_1==Automobile_controller__Cinq);
      v_285 = (boiteDeVitesse_1==Automobile_controller__Six);
      v_286 = (boiteDeVitesse_1==Automobile_controller__PointMort);
      if (v_286) {
        v_287 = Automobile_controller__St_18_Zero;
      } else {
        v_287 = Automobile_controller__St_18_Quatrieme;
      };
      if (v_285) {
        v_289 = Automobile_controller__St_18_Arriere;
      } else {
        v_289 = v_287;
      };
      if (v_284) {
        v_291 = Automobile_controller__St_18_Cinquieme;
      } else {
        v_291 = v_289;
      };
      if (v_283) {
        v_293 = Automobile_controller__St_18_Troisieme;
      } else {
        v_293 = v_291;
      };
      if (v_282) {
        v_295 = Automobile_controller__St_18_Deuxieme;
      } else {
        v_295 = v_293;
      };
      if (v_281) {
        s_8_St_18_Quatrieme = Automobile_controller__St_18_Premier;
      } else {
        s_8_St_18_Quatrieme = v_295;
      };
      if (v_286) {
        v_288 = true;
      } else {
        v_288 = self->pnr_8;
      };
      if (v_285) {
        v_290 = true;
      } else {
        v_290 = v_288;
      };
      if (v_284) {
        v_292 = true;
      } else {
        v_292 = v_290;
      };
      if (v_283) {
        v_294 = true;
      } else {
        v_294 = v_292;
      };
      if (v_282) {
        v_296 = true;
      } else {
        v_296 = v_294;
      };
      if (v_281) {
        r_8_St_18_Quatrieme = true;
      } else {
        r_8_St_18_Quatrieme = v_296;
      };
      s_8 = s_8_St_18_Quatrieme;
      r_8 = r_8_St_18_Quatrieme;
      break;
    case Automobile_controller__St_18_Troisieme:
      v_297 = (boiteDeVitesse_1==Automobile_controller__Un);
      v_298 = (boiteDeVitesse_1==Automobile_controller__Deux);
      v_299 = (boiteDeVitesse_1==Automobile_controller__Quatre);
      v_300 = (boiteDeVitesse_1==Automobile_controller__Cinq);
      v_301 = (boiteDeVitesse_1==Automobile_controller__Six);
      v_302 = (boiteDeVitesse_1==Automobile_controller__PointMort);
      if (v_302) {
        v_303 = Automobile_controller__St_18_Zero;
      } else {
        v_303 = Automobile_controller__St_18_Troisieme;
      };
      if (v_301) {
        v_305 = Automobile_controller__St_18_Arriere;
      } else {
        v_305 = v_303;
      };
      if (v_300) {
        v_307 = Automobile_controller__St_18_Cinquieme;
      } else {
        v_307 = v_305;
      };
      if (v_299) {
        v_309 = Automobile_controller__St_18_Quatrieme;
      } else {
        v_309 = v_307;
      };
      if (v_298) {
        v_311 = Automobile_controller__St_18_Deuxieme;
      } else {
        v_311 = v_309;
      };
      if (v_297) {
        s_8_St_18_Troisieme = Automobile_controller__St_18_Premier;
      } else {
        s_8_St_18_Troisieme = v_311;
      };
      if (v_302) {
        v_304 = true;
      } else {
        v_304 = self->pnr_8;
      };
      if (v_301) {
        v_306 = true;
      } else {
        v_306 = v_304;
      };
      if (v_300) {
        v_308 = true;
      } else {
        v_308 = v_306;
      };
      if (v_299) {
        v_310 = true;
      } else {
        v_310 = v_308;
      };
      if (v_298) {
        v_312 = true;
      } else {
        v_312 = v_310;
      };
      if (v_297) {
        r_8_St_18_Troisieme = true;
      } else {
        r_8_St_18_Troisieme = v_312;
      };
      s_8 = s_8_St_18_Troisieme;
      r_8 = r_8_St_18_Troisieme;
      break;
    case Automobile_controller__St_18_Deuxieme:
      v_313 = (boiteDeVitesse_1==Automobile_controller__Un);
      v_314 = (boiteDeVitesse_1==Automobile_controller__Trois);
      v_315 = (boiteDeVitesse_1==Automobile_controller__Quatre);
      v_316 = (boiteDeVitesse_1==Automobile_controller__Cinq);
      v_317 = (boiteDeVitesse_1==Automobile_controller__Six);
      v_318 = (boiteDeVitesse_1==Automobile_controller__PointMort);
      if (v_318) {
        v_319 = Automobile_controller__St_18_Zero;
      } else {
        v_319 = Automobile_controller__St_18_Deuxieme;
      };
      if (v_317) {
        v_321 = Automobile_controller__St_18_Arriere;
      } else {
        v_321 = v_319;
      };
      if (v_316) {
        v_323 = Automobile_controller__St_18_Cinquieme;
      } else {
        v_323 = v_321;
      };
      if (v_315) {
        v_325 = Automobile_controller__St_18_Quatrieme;
      } else {
        v_325 = v_323;
      };
      if (v_314) {
        v_327 = Automobile_controller__St_18_Troisieme;
      } else {
        v_327 = v_325;
      };
      if (v_313) {
        s_8_St_18_Deuxieme = Automobile_controller__St_18_Premier;
      } else {
        s_8_St_18_Deuxieme = v_327;
      };
      if (v_318) {
        v_320 = true;
      } else {
        v_320 = self->pnr_8;
      };
      if (v_317) {
        v_322 = true;
      } else {
        v_322 = v_320;
      };
      if (v_316) {
        v_324 = true;
      } else {
        v_324 = v_322;
      };
      if (v_315) {
        v_326 = true;
      } else {
        v_326 = v_324;
      };
      if (v_314) {
        v_328 = true;
      } else {
        v_328 = v_326;
      };
      if (v_313) {
        r_8_St_18_Deuxieme = true;
      } else {
        r_8_St_18_Deuxieme = v_328;
      };
      s_8 = s_8_St_18_Deuxieme;
      r_8 = r_8_St_18_Deuxieme;
      break;
    case Automobile_controller__St_18_Premier:
      v_329 = (boiteDeVitesse_1==Automobile_controller__Deux);
      v_330 = (boiteDeVitesse_1==Automobile_controller__Trois);
      v_331 = (boiteDeVitesse_1==Automobile_controller__Quatre);
      v_332 = (boiteDeVitesse_1==Automobile_controller__Cinq);
      v_333 = (boiteDeVitesse_1==Automobile_controller__Six);
      v_334 = (boiteDeVitesse_1==Automobile_controller__PointMort);
      if (v_334) {
        v_335 = Automobile_controller__St_18_Zero;
      } else {
        v_335 = Automobile_controller__St_18_Premier;
      };
      if (v_333) {
        v_337 = Automobile_controller__St_18_Arriere;
      } else {
        v_337 = v_335;
      };
      if (v_332) {
        v_339 = Automobile_controller__St_18_Cinquieme;
      } else {
        v_339 = v_337;
      };
      if (v_331) {
        v_341 = Automobile_controller__St_18_Quatrieme;
      } else {
        v_341 = v_339;
      };
      if (v_330) {
        v_343 = Automobile_controller__St_18_Troisieme;
      } else {
        v_343 = v_341;
      };
      if (v_329) {
        s_8_St_18_Premier = Automobile_controller__St_18_Deuxieme;
      } else {
        s_8_St_18_Premier = v_343;
      };
      if (v_334) {
        v_336 = true;
      } else {
        v_336 = self->pnr_8;
      };
      if (v_333) {
        v_338 = true;
      } else {
        v_338 = v_336;
      };
      if (v_332) {
        v_340 = true;
      } else {
        v_340 = v_338;
      };
      if (v_331) {
        v_342 = true;
      } else {
        v_342 = v_340;
      };
      if (v_330) {
        v_344 = true;
      } else {
        v_344 = v_342;
      };
      if (v_329) {
        r_8_St_18_Premier = true;
      } else {
        r_8_St_18_Premier = v_344;
      };
      s_8 = s_8_St_18_Premier;
      r_8 = r_8_St_18_Premier;
      break;
    case Automobile_controller__St_18_Zero:
      v_345 = (boiteDeVitesse_1==Automobile_controller__Deux);
      v_346 = (boiteDeVitesse_1==Automobile_controller__Trois);
      v_347 = (boiteDeVitesse_1==Automobile_controller__Quatre);
      v_348 = (boiteDeVitesse_1==Automobile_controller__Cinq);
      v_349 = (boiteDeVitesse_1==Automobile_controller__Six);
      v_350 = (boiteDeVitesse_1==Automobile_controller__Un);
      if (v_350) {
        v_351 = Automobile_controller__St_18_Premier;
      } else {
        v_351 = Automobile_controller__St_18_Zero;
      };
      if (v_349) {
        v_353 = Automobile_controller__St_18_Arriere;
      } else {
        v_353 = v_351;
      };
      if (v_348) {
        v_355 = Automobile_controller__St_18_Cinquieme;
      } else {
        v_355 = v_353;
      };
      if (v_347) {
        v_357 = Automobile_controller__St_18_Quatrieme;
      } else {
        v_357 = v_355;
      };
      if (v_346) {
        v_359 = Automobile_controller__St_18_Troisieme;
      } else {
        v_359 = v_357;
      };
      if (v_345) {
        s_8_St_18_Zero = Automobile_controller__St_18_Deuxieme;
      } else {
        s_8_St_18_Zero = v_359;
      };
      s_8 = s_8_St_18_Zero;
      if (v_350) {
        v_352 = true;
      } else {
        v_352 = self->pnr_8;
      };
      if (v_349) {
        v_354 = true;
      } else {
        v_354 = v_352;
      };
      if (v_348) {
        v_356 = true;
      } else {
        v_356 = v_354;
      };
      if (v_347) {
        v_358 = true;
      } else {
        v_358 = v_356;
      };
      if (v_346) {
        v_360 = true;
      } else {
        v_360 = v_358;
      };
      if (v_345) {
        r_8_St_18_Zero = true;
      } else {
        r_8_St_18_Zero = v_360;
      };
      r_8 = r_8_St_18_Zero;
      break;
    default:
      break;
  };
  ck_13 = s_8;
  switch (ck_13) {
    case Automobile_controller__St_18_Arriere:
      ns_8_St_18_Arriere = Automobile_controller__St_18_Arriere;
      nr_8_St_18_Arriere = false;
      num_St_18_Arriere = Automobile_controller__Six;
      ns_8 = ns_8_St_18_Arriere;
      nr_8 = nr_8_St_18_Arriere;
      num = num_St_18_Arriere;
      break;
    case Automobile_controller__St_18_Cinquieme:
      ns_8_St_18_Cinquieme = Automobile_controller__St_18_Cinquieme;
      nr_8_St_18_Cinquieme = false;
      num_St_18_Cinquieme = Automobile_controller__Cinq;
      ns_8 = ns_8_St_18_Cinquieme;
      nr_8 = nr_8_St_18_Cinquieme;
      num = num_St_18_Cinquieme;
      break;
    case Automobile_controller__St_18_Quatrieme:
      ns_8_St_18_Quatrieme = Automobile_controller__St_18_Quatrieme;
      nr_8_St_18_Quatrieme = false;
      num_St_18_Quatrieme = Automobile_controller__Quatre;
      ns_8 = ns_8_St_18_Quatrieme;
      nr_8 = nr_8_St_18_Quatrieme;
      num = num_St_18_Quatrieme;
      break;
    case Automobile_controller__St_18_Troisieme:
      ns_8_St_18_Troisieme = Automobile_controller__St_18_Troisieme;
      nr_8_St_18_Troisieme = false;
      num_St_18_Troisieme = Automobile_controller__Trois;
      ns_8 = ns_8_St_18_Troisieme;
      nr_8 = nr_8_St_18_Troisieme;
      num = num_St_18_Troisieme;
      break;
    case Automobile_controller__St_18_Deuxieme:
      ns_8_St_18_Deuxieme = Automobile_controller__St_18_Deuxieme;
      nr_8_St_18_Deuxieme = false;
      num_St_18_Deuxieme = Automobile_controller__Deux;
      ns_8 = ns_8_St_18_Deuxieme;
      nr_8 = nr_8_St_18_Deuxieme;
      num = num_St_18_Deuxieme;
      break;
    case Automobile_controller__St_18_Premier:
      ns_8_St_18_Premier = Automobile_controller__St_18_Premier;
      nr_8_St_18_Premier = false;
      num_St_18_Premier = Automobile_controller__Un;
      ns_8 = ns_8_St_18_Premier;
      nr_8 = nr_8_St_18_Premier;
      num = num_St_18_Premier;
      break;
    case Automobile_controller__St_18_Zero:
      ns_8_St_18_Zero = Automobile_controller__St_18_Zero;
      ns_8 = ns_8_St_18_Zero;
      nr_8_St_18_Zero = false;
      nr_8 = nr_8_St_18_Zero;
      num_St_18_Zero = Automobile_controller__PointMort;
      num = num_St_18_Zero;
      break;
    default:
      break;
  };
  lnumero = num;
  _out->vitesses = lnumero;
  v_244 = (lnumero==Automobile_controller__PointMort);
  prop1 = (lmoteur||v_244);
  switch (self->ck_14) {
    case Automobile_controller__St_17_Stop:
      if (accelerateur_1) {
        s_7_St_17_Stop = Automobile_controller__St_17_Move;
        r_7_St_17_Stop = true;
      } else {
        s_7_St_17_Stop = Automobile_controller__St_17_Stop;
        r_7_St_17_Stop = self->pnr_7;
      };
      s_7 = s_7_St_17_Stop;
      r_7 = r_7_St_17_Stop;
      break;
    case Automobile_controller__St_17_Move:
      if (frein_1) {
        s_7_St_17_Move = Automobile_controller__St_17_Stop;
      } else {
        s_7_St_17_Move = Automobile_controller__St_17_Move;
      };
      s_7 = s_7_St_17_Move;
      if (frein_1) {
        r_7_St_17_Move = true;
      } else {
        r_7_St_17_Move = self->pnr_7;
      };
      r_7 = r_7_St_17_Move;
      break;
    default:
      break;
  };
  ck_15 = s_7;
  switch (ck_15) {
    case Automobile_controller__St_17_Stop:
      ns_7_St_17_Stop = Automobile_controller__St_17_Stop;
      nr_7_St_17_Stop = false;
      avance_1_St_17_Stop = false;
      ns_7 = ns_7_St_17_Stop;
      nr_7 = nr_7_St_17_Stop;
      avance_1 = avance_1_St_17_Stop;
      break;
    case Automobile_controller__St_17_Move:
      ns_7_St_17_Move = Automobile_controller__St_17_Move;
      ns_7 = ns_7_St_17_Move;
      nr_7_St_17_Move = false;
      nr_7 = nr_7_St_17_Move;
      avance_1_St_17_Move = true;
      avance_1 = avance_1_St_17_Move;
      break;
    default:
      break;
  };
  lavance = avance_1;
  _out->avance = lavance;
  switch (self->ck_16) {
    case Automobile_controller__St_16_PositionNuit:
      v_361 = !(normal_1);
      v_362 = !(jour_1);
      v_363 = (v_361&&v_362);
      v_364 = !(nuit_1);
      v_365 = (v_363&&v_364);
      if (v_365) {
        v_366 = Automobile_controller__St_16_Desacitve;
      } else {
        v_366 = Automobile_controller__St_16_PositionNuit;
      };
      if (normal_1) {
        v_368 = Automobile_controller__St_16_PositionNormale;
      } else {
        v_368 = v_366;
      };
      if (jour_1) {
        s_6_St_16_PositionNuit = Automobile_controller__St_16_PositionJour;
      } else {
        s_6_St_16_PositionNuit = v_368;
      };
      if (v_365) {
        v_367 = true;
      } else {
        v_367 = self->pnr_6;
      };
      if (normal_1) {
        v_369 = true;
      } else {
        v_369 = v_367;
      };
      if (jour_1) {
        r_6_St_16_PositionNuit = true;
      } else {
        r_6_St_16_PositionNuit = v_369;
      };
      s_6 = s_6_St_16_PositionNuit;
      r_6 = r_6_St_16_PositionNuit;
      break;
    case Automobile_controller__St_16_PositionJour:
      v_370 = !(normal_1);
      v_371 = !(jour_1);
      v_372 = (v_370&&v_371);
      v_373 = !(nuit_1);
      v_374 = (v_372&&v_373);
      if (v_374) {
        v_375 = Automobile_controller__St_16_Desacitve;
      } else {
        v_375 = Automobile_controller__St_16_PositionJour;
      };
      if (nuit_1) {
        v_377 = Automobile_controller__St_16_PositionNuit;
      } else {
        v_377 = v_375;
      };
      if (normal_1) {
        s_6_St_16_PositionJour = Automobile_controller__St_16_PositionNormale;
      } else {
        s_6_St_16_PositionJour = v_377;
      };
      if (v_374) {
        v_376 = true;
      } else {
        v_376 = self->pnr_6;
      };
      if (nuit_1) {
        v_378 = true;
      } else {
        v_378 = v_376;
      };
      if (normal_1) {
        r_6_St_16_PositionJour = true;
      } else {
        r_6_St_16_PositionJour = v_378;
      };
      s_6 = s_6_St_16_PositionJour;
      r_6 = r_6_St_16_PositionJour;
      break;
    case Automobile_controller__St_16_PositionNormale:
      v_379 = !(normal_1);
      v_380 = !(jour_1);
      v_381 = (v_379&&v_380);
      v_382 = !(nuit_1);
      v_383 = (v_381&&v_382);
      if (v_383) {
        v_384 = Automobile_controller__St_16_Desacitve;
      } else {
        v_384 = Automobile_controller__St_16_PositionNormale;
      };
      if (nuit_1) {
        v_386 = Automobile_controller__St_16_PositionNuit;
      } else {
        v_386 = v_384;
      };
      if (jour_1) {
        s_6_St_16_PositionNormale = Automobile_controller__St_16_PositionJour;
      } else {
        s_6_St_16_PositionNormale = v_386;
      };
      if (v_383) {
        v_385 = true;
      } else {
        v_385 = self->pnr_6;
      };
      if (nuit_1) {
        v_387 = true;
      } else {
        v_387 = v_385;
      };
      if (jour_1) {
        r_6_St_16_PositionNormale = true;
      } else {
        r_6_St_16_PositionNormale = v_387;
      };
      s_6 = s_6_St_16_PositionNormale;
      r_6 = r_6_St_16_PositionNormale;
      break;
    case Automobile_controller__St_16_Desacitve:
      if (normal_1) {
        v_388 = Automobile_controller__St_16_PositionNormale;
      } else {
        v_388 = Automobile_controller__St_16_Desacitve;
      };
      if (nuit_1) {
        v_390 = Automobile_controller__St_16_PositionNuit;
      } else {
        v_390 = v_388;
      };
      if (jour_1) {
        s_6_St_16_Desacitve = Automobile_controller__St_16_PositionJour;
      } else {
        s_6_St_16_Desacitve = v_390;
      };
      s_6 = s_6_St_16_Desacitve;
      if (normal_1) {
        v_389 = true;
      } else {
        v_389 = self->pnr_6;
      };
      if (nuit_1) {
        v_391 = true;
      } else {
        v_391 = v_389;
      };
      if (jour_1) {
        r_6_St_16_Desacitve = true;
      } else {
        r_6_St_16_Desacitve = v_391;
      };
      r_6 = r_6_St_16_Desacitve;
      break;
    default:
      break;
  };
  ck_17 = s_6;
  switch (ck_17) {
    case Automobile_controller__St_16_PositionNuit:
      ns_6_St_16_PositionNuit = Automobile_controller__St_16_PositionNuit;
      nr_6_St_16_PositionNuit = false;
      sortie_St_16_PositionNuit = Automobile_controller__PositionNuit;
      gerer_St_16_PositionNuit = true;
      ns_6 = ns_6_St_16_PositionNuit;
      nr_6 = nr_6_St_16_PositionNuit;
      sortie = sortie_St_16_PositionNuit;
      gerer = gerer_St_16_PositionNuit;
      break;
    case Automobile_controller__St_16_PositionJour:
      ns_6_St_16_PositionJour = Automobile_controller__St_16_PositionJour;
      nr_6_St_16_PositionJour = false;
      sortie_St_16_PositionJour = Automobile_controller__PositionJour;
      gerer_St_16_PositionJour = true;
      ns_6 = ns_6_St_16_PositionJour;
      nr_6 = nr_6_St_16_PositionJour;
      sortie = sortie_St_16_PositionJour;
      gerer = gerer_St_16_PositionJour;
      break;
    case Automobile_controller__St_16_PositionNormale:
      ns_6_St_16_PositionNormale = Automobile_controller__St_16_PositionNormale;
      nr_6_St_16_PositionNormale = false;
      sortie_St_16_PositionNormale = Automobile_controller__PositionNormale;
      gerer_St_16_PositionNormale = true;
      ns_6 = ns_6_St_16_PositionNormale;
      nr_6 = nr_6_St_16_PositionNormale;
      sortie = sortie_St_16_PositionNormale;
      gerer = gerer_St_16_PositionNormale;
      break;
    case Automobile_controller__St_16_Desacitve:
      ns_6_St_16_Desacitve = Automobile_controller__St_16_Desacitve;
      ns_6 = ns_6_St_16_Desacitve;
      nr_6_St_16_Desacitve = false;
      nr_6 = nr_6_St_16_Desacitve;
      sortie_St_16_Desacitve = Automobile_controller__Desactive;
      sortie = sortie_St_16_Desacitve;
      gerer_St_16_Desacitve = false;
      gerer = gerer_St_16_Desacitve;
      break;
    default:
      break;
  };
  lretroviseur = gerer;
  _out->retroviseurActive = lretroviseur;
  v_243 = !(lretroviseur);
  prop2 = (lmoteur||v_243);
  lsortie = sortie;
  _out->retroviseurStatus = lsortie;
  switch (self->ck_18) {
    case Automobile_controller__St_15_BalayageContiu:
      v_393 = (con_1&&v_392);
      v_395 = (con_1&&v_394);
      if (v_395) {
        v_396 = Automobile_controller__St_15_BalayageIntermittent;
      } else {
        v_396 = Automobile_controller__St_15_BalayageContiu;
      };
      if (v_393) {
        v_398 = Automobile_controller__St_15_BalayageUnique;
      } else {
        v_398 = v_396;
      };
      if (cclose_1) {
        s_5_St_15_BalayageContiu = Automobile_controller__St_15_Desactive;
      } else {
        s_5_St_15_BalayageContiu = v_398;
      };
      if (v_395) {
        v_397 = true;
      } else {
        v_397 = self->pnr_5;
      };
      if (v_393) {
        v_399 = true;
      } else {
        v_399 = v_397;
      };
      if (cclose_1) {
        r_5_St_15_BalayageContiu = true;
      } else {
        r_5_St_15_BalayageContiu = v_399;
      };
      s_5 = s_5_St_15_BalayageContiu;
      r_5 = r_5_St_15_BalayageContiu;
      break;
    case Automobile_controller__St_15_BalayageIntermittent:
      v_401 = (con_1&&v_400);
      v_403 = (con_1&&v_402);
      if (v_403) {
        v_404 = Automobile_controller__St_15_BalayageUnique;
      } else {
        v_404 = Automobile_controller__St_15_BalayageIntermittent;
      };
      if (v_401) {
        v_406 = Automobile_controller__St_15_BalayageContiu;
      } else {
        v_406 = v_404;
      };
      if (cclose_1) {
        s_5_St_15_BalayageIntermittent = Automobile_controller__St_15_Desactive;
      } else {
        s_5_St_15_BalayageIntermittent = v_406;
      };
      if (v_403) {
        v_405 = true;
      } else {
        v_405 = self->pnr_5;
      };
      if (v_401) {
        v_407 = true;
      } else {
        v_407 = v_405;
      };
      if (cclose_1) {
        r_5_St_15_BalayageIntermittent = true;
      } else {
        r_5_St_15_BalayageIntermittent = v_407;
      };
      s_5 = s_5_St_15_BalayageIntermittent;
      r_5 = r_5_St_15_BalayageIntermittent;
      break;
    case Automobile_controller__St_15_BalayageUnique:
      v_409 = (con_1&&v_408);
      v_411 = (con_1&&v_410);
      if (v_411) {
        v_412 = Automobile_controller__St_15_BalayageIntermittent;
      } else {
        v_412 = Automobile_controller__St_15_BalayageUnique;
      };
      if (v_409) {
        v_414 = Automobile_controller__St_15_BalayageContiu;
      } else {
        v_414 = v_412;
      };
      if (cclose_1) {
        s_5_St_15_BalayageUnique = Automobile_controller__St_15_Desactive;
      } else {
        s_5_St_15_BalayageUnique = v_414;
      };
      if (v_411) {
        v_413 = true;
      } else {
        v_413 = self->pnr_5;
      };
      if (v_409) {
        v_415 = true;
      } else {
        v_415 = v_413;
      };
      if (cclose_1) {
        r_5_St_15_BalayageUnique = true;
      } else {
        r_5_St_15_BalayageUnique = v_415;
      };
      s_5 = s_5_St_15_BalayageUnique;
      r_5 = r_5_St_15_BalayageUnique;
      break;
    case Automobile_controller__St_15_Desactive:
      if (con_1) {
        s_5_St_15_Desactive = Automobile_controller__St_15_BalayageUnique;
      } else {
        s_5_St_15_Desactive = Automobile_controller__St_15_Desactive;
      };
      s_5 = s_5_St_15_Desactive;
      if (con_1) {
        r_5_St_15_Desactive = true;
      } else {
        r_5_St_15_Desactive = self->pnr_5;
      };
      r_5 = r_5_St_15_Desactive;
      break;
    default:
      break;
  };
  ck_19 = s_5;
  switch (ck_19) {
    case Automobile_controller__St_15_BalayageContiu:
      ns_5_St_15_BalayageContiu = Automobile_controller__St_15_BalayageContiu;
      nr_5_St_15_BalayageContiu = false;
      etat_1_St_15_BalayageContiu = Automobile_controller__Contiu;
      ns_5 = ns_5_St_15_BalayageContiu;
      nr_5 = nr_5_St_15_BalayageContiu;
      etat_1 = etat_1_St_15_BalayageContiu;
      break;
    case Automobile_controller__St_15_BalayageIntermittent:
      ns_5_St_15_BalayageIntermittent = Automobile_controller__St_15_BalayageIntermittent;
      nr_5_St_15_BalayageIntermittent = false;
      etat_1_St_15_BalayageIntermittent = Automobile_controller__Intermittent;
      ns_5 = ns_5_St_15_BalayageIntermittent;
      nr_5 = nr_5_St_15_BalayageIntermittent;
      etat_1 = etat_1_St_15_BalayageIntermittent;
      break;
    case Automobile_controller__St_15_BalayageUnique:
      ns_5_St_15_BalayageUnique = Automobile_controller__St_15_BalayageUnique;
      nr_5_St_15_BalayageUnique = false;
      etat_1_St_15_BalayageUnique = Automobile_controller__Unique;
      ns_5 = ns_5_St_15_BalayageUnique;
      nr_5 = nr_5_St_15_BalayageUnique;
      etat_1 = etat_1_St_15_BalayageUnique;
      break;
    case Automobile_controller__St_15_Desactive:
      ns_5_St_15_Desactive = Automobile_controller__St_15_Desactive;
      ns_5 = ns_5_St_15_Desactive;
      nr_5_St_15_Desactive = false;
      nr_5 = nr_5_St_15_Desactive;
      etat_1_St_15_Desactive = Automobile_controller__Deactivated;
      etat_1 = etat_1_St_15_Desactive;
      break;
    default:
      break;
  };
  lessuieGlace = etat_1;
  _out->essuieGlace = lessuieGlace;
  v_242 = (lessuieGlace==Automobile_controller__Deactivated);
  prop3 = (lmoteur||v_242);
  switch (self->ck_28) {
    case Automobile_controller__St_10_Phares:
      if (cpn) {
        s_St_10_Phares = Automobile_controller__St_10_Codes;
        r_St_10_Phares = true;
      } else {
        s_St_10_Phares = Automobile_controller__St_10_Phares;
        r_St_10_Phares = self->pnr;
      };
      s = s_St_10_Phares;
      r = r_St_10_Phares;
      break;
    case Automobile_controller__St_10_Codes:
      if (cpn) {
        v_483 = Automobile_controller__St_10_Phares;
      } else {
        v_483 = Automobile_controller__St_10_Codes;
      };
      if (tin) {
        s_St_10_Codes = Automobile_controller__St_10_Veilleuses;
      } else {
        s_St_10_Codes = v_483;
      };
      if (cpn) {
        v_484 = true;
      } else {
        v_484 = self->pnr;
      };
      if (tin) {
        r_St_10_Codes = true;
      } else {
        r_St_10_Codes = v_484;
      };
      s = s_St_10_Codes;
      r = r_St_10_Codes;
      break;
    case Automobile_controller__St_10_Veilleuses:
      if (tdn) {
        v_485 = Automobile_controller__St_10_Codes;
      } else {
        v_485 = Automobile_controller__St_10_Veilleuses;
      };
      if (tin) {
        s_St_10_Veilleuses = Automobile_controller__St_10_Idle;
      } else {
        s_St_10_Veilleuses = v_485;
      };
      if (tdn) {
        v_486 = true;
      } else {
        v_486 = self->pnr;
      };
      if (tin) {
        r_St_10_Veilleuses = true;
      } else {
        r_St_10_Veilleuses = v_486;
      };
      s = s_St_10_Veilleuses;
      r = r_St_10_Veilleuses;
      break;
    case Automobile_controller__St_10_Idle:
      if (tdn) {
        s_St_10_Idle = Automobile_controller__St_10_Veilleuses;
      } else {
        s_St_10_Idle = Automobile_controller__St_10_Idle;
      };
      s = s_St_10_Idle;
      if (tdn) {
        r_St_10_Idle = true;
      } else {
        r_St_10_Idle = self->pnr;
      };
      r = r_St_10_Idle;
      break;
    default:
      break;
  };
  ck_29 = s;
  switch (ck_29) {
    case Automobile_controller__St_10_Phares:
      ns_St_10_Phares = Automobile_controller__St_10_Phares;
      nr_St_10_Phares = false;
      codes_St_10_Phares = false;
      phares_1_St_10_Phares = true;
      veilleuses_St_10_Phares = false;
      etat_3_St_10_Phares = Automobile_controller__Phares;
      ns = ns_St_10_Phares;
      nr = nr_St_10_Phares;
      codes = codes_St_10_Phares;
      phares_1 = phares_1_St_10_Phares;
      veilleuses = veilleuses_St_10_Phares;
      etat_3 = etat_3_St_10_Phares;
      break;
    case Automobile_controller__St_10_Codes:
      ns_St_10_Codes = Automobile_controller__St_10_Codes;
      nr_St_10_Codes = false;
      codes_St_10_Codes = true;
      phares_1_St_10_Codes = false;
      veilleuses_St_10_Codes = false;
      etat_3_St_10_Codes = Automobile_controller__Codes;
      ns = ns_St_10_Codes;
      nr = nr_St_10_Codes;
      codes = codes_St_10_Codes;
      phares_1 = phares_1_St_10_Codes;
      veilleuses = veilleuses_St_10_Codes;
      etat_3 = etat_3_St_10_Codes;
      break;
    case Automobile_controller__St_10_Veilleuses:
      ns_St_10_Veilleuses = Automobile_controller__St_10_Veilleuses;
      nr_St_10_Veilleuses = false;
      codes_St_10_Veilleuses = false;
      phares_1_St_10_Veilleuses = false;
      veilleuses_St_10_Veilleuses = true;
      etat_3_St_10_Veilleuses = Automobile_controller__Veilleuses;
      ns = ns_St_10_Veilleuses;
      nr = nr_St_10_Veilleuses;
      codes = codes_St_10_Veilleuses;
      phares_1 = phares_1_St_10_Veilleuses;
      veilleuses = veilleuses_St_10_Veilleuses;
      etat_3 = etat_3_St_10_Veilleuses;
      break;
    case Automobile_controller__St_10_Idle:
      ns_St_10_Idle = Automobile_controller__St_10_Idle;
      ns = ns_St_10_Idle;
      nr_St_10_Idle = false;
      nr = nr_St_10_Idle;
      codes_St_10_Idle = false;
      codes = codes_St_10_Idle;
      phares_1_St_10_Idle = false;
      phares_1 = phares_1_St_10_Idle;
      veilleuses_St_10_Idle = false;
      veilleuses = veilleuses_St_10_Idle;
      etat_3_St_10_Idle = Automobile_controller__Idle;
      etat_3 = etat_3_St_10_Idle;
      break;
    default:
      break;
  };
  lcodes = codes;
  v_237 = !(lcodes);
  prop8 = (lmoteur||v_237);
  lphares = phares_1;
  v_236 = !(lphares);
  prop9 = (lmoteur||v_236);
  v = (prop8&&prop9);
  lveilleuses = veilleuses;
  v_235 = !(lveilleuses);
  prop10 = (lmoteur||v_235);
  v_234 = (v&&prop10);
  _out->property = (v_234&&prop11);
  lstate = etat_3;
  _out->phares = lstate;
  self->ck = ns_9;
  self->pnr_9 = nr_9;
  self->ck_12 = ns_8;
  self->pnr_8 = nr_8;
  self->ck_14 = ns_7;
  self->pnr_7 = nr_7;
  self->ck_16 = ns_6;
  self->pnr_6 = nr_6;
  self->ck_18 = ns_5;
  self->pnr_5 = nr_5;
  self->ck_20 = ns_4;
  self->pnr_4 = nr_4;
  self->ck_22 = ns_3;
  self->pnr_3 = nr_3;
  self->ck_24 = ns_2;
  self->pnr_2 = nr_2;
  self->ck_26 = ns_1;
  self->pnr_1 = nr_1;
  self->ck_28 = ns;
  self->pnr = nr;;
}

