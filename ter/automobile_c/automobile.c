/* --- Generated the 30/5/2016 at 14:52 --- */
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
  int v_4;
  int v_3;
  int v_2;
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
      v_2 = !(commande);
      v_3 = !(cle);
      v_4 = (v_2&&v_3);
      if (v_4) {
        s_St_Allumer = Automobile_controller__St_Eteint;
      } else {
        s_St_Allumer = Automobile_controller__St_Allumer;
      };
      s = s_St_Allumer;
      if (v_4) {
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
  
  int v_19;
  Automobile_controller__st_1 v_18;
  int v_17;
  Automobile_controller__st_1 v_16;
  int v_15;
  Automobile_controller__st_1 v_14;
  int v_13;
  Automobile_controller__st_1 v_12;
  int v_11;
  Automobile_controller__st_1 v_10;
  int v_9;
  int v_8;
  int v_7;
  int v_6;
  int v_5;
  int v;
  int v_35;
  Automobile_controller__st_1 v_34;
  int v_33;
  Automobile_controller__st_1 v_32;
  int v_31;
  Automobile_controller__st_1 v_30;
  int v_29;
  Automobile_controller__st_1 v_28;
  int v_27;
  Automobile_controller__st_1 v_26;
  int v_25;
  int v_24;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_51;
  Automobile_controller__st_1 v_50;
  int v_49;
  Automobile_controller__st_1 v_48;
  int v_47;
  Automobile_controller__st_1 v_46;
  int v_45;
  Automobile_controller__st_1 v_44;
  int v_43;
  Automobile_controller__st_1 v_42;
  int v_41;
  int v_40;
  int v_39;
  int v_38;
  int v_37;
  int v_36;
  int v_67;
  Automobile_controller__st_1 v_66;
  int v_65;
  Automobile_controller__st_1 v_64;
  int v_63;
  Automobile_controller__st_1 v_62;
  int v_61;
  Automobile_controller__st_1 v_60;
  int v_59;
  Automobile_controller__st_1 v_58;
  int v_57;
  int v_56;
  int v_55;
  int v_54;
  int v_53;
  int v_52;
  int v_83;
  Automobile_controller__st_1 v_82;
  int v_81;
  Automobile_controller__st_1 v_80;
  int v_79;
  Automobile_controller__st_1 v_78;
  int v_77;
  Automobile_controller__st_1 v_76;
  int v_75;
  Automobile_controller__st_1 v_74;
  int v_73;
  int v_72;
  int v_71;
  int v_70;
  int v_69;
  int v_68;
  int v_99;
  Automobile_controller__st_1 v_98;
  int v_97;
  Automobile_controller__st_1 v_96;
  int v_95;
  Automobile_controller__st_1 v_94;
  int v_93;
  Automobile_controller__st_1 v_92;
  int v_91;
  Automobile_controller__st_1 v_90;
  int v_89;
  int v_88;
  int v_87;
  int v_86;
  int v_85;
  int v_84;
  int v_115;
  Automobile_controller__st_1 v_114;
  int v_113;
  Automobile_controller__st_1 v_112;
  int v_111;
  Automobile_controller__st_1 v_110;
  int v_109;
  Automobile_controller__st_1 v_108;
  int v_107;
  Automobile_controller__st_1 v_106;
  int v_105;
  int v_104;
  int v_103;
  int v_102;
  int v_101;
  int v_100;
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
      v_5 = (boiteDeVitesse==Automobile_controller__Deux);
      v_6 = (boiteDeVitesse==Automobile_controller__Quatre);
      v_7 = (boiteDeVitesse==Automobile_controller__Trois);
      v_8 = (boiteDeVitesse==Automobile_controller__Cinq);
      v_9 = (boiteDeVitesse==Automobile_controller__PointMort);
      if (v_9) {
        v_10 = Automobile_controller__St_1_Zero;
      } else {
        v_10 = Automobile_controller__St_1_Arriere;
      };
      if (v_8) {
        v_12 = Automobile_controller__St_1_Cinquieme;
      } else {
        v_12 = v_10;
      };
      if (v_7) {
        v_14 = Automobile_controller__St_1_Troisieme;
      } else {
        v_14 = v_12;
      };
      if (v_6) {
        v_16 = Automobile_controller__St_1_Troisieme;
      } else {
        v_16 = v_14;
      };
      if (v_5) {
        v_18 = Automobile_controller__St_1_Deuxieme;
      } else {
        v_18 = v_16;
      };
      if (v) {
        s_St_1_Arriere = Automobile_controller__St_1_Premier;
      } else {
        s_St_1_Arriere = v_18;
      };
      if (v_9) {
        v_11 = true;
      } else {
        v_11 = self->pnr;
      };
      if (v_8) {
        v_13 = true;
      } else {
        v_13 = v_11;
      };
      if (v_7) {
        v_15 = true;
      } else {
        v_15 = v_13;
      };
      if (v_6) {
        v_17 = true;
      } else {
        v_17 = v_15;
      };
      if (v_5) {
        v_19 = true;
      } else {
        v_19 = v_17;
      };
      if (v) {
        r_St_1_Arriere = true;
      } else {
        r_St_1_Arriere = v_19;
      };
      s = s_St_1_Arriere;
      r = r_St_1_Arriere;
      break;
    case Automobile_controller__St_1_Cinquieme:
      v_20 = (boiteDeVitesse==Automobile_controller__Un);
      v_21 = (boiteDeVitesse==Automobile_controller__Deux);
      v_22 = (boiteDeVitesse==Automobile_controller__Quatre);
      v_23 = (boiteDeVitesse==Automobile_controller__Trois);
      v_24 = (boiteDeVitesse==Automobile_controller__Six);
      v_25 = (boiteDeVitesse==Automobile_controller__PointMort);
      if (v_25) {
        v_26 = Automobile_controller__St_1_Zero;
      } else {
        v_26 = Automobile_controller__St_1_Cinquieme;
      };
      if (v_24) {
        v_28 = Automobile_controller__St_1_Arriere;
      } else {
        v_28 = v_26;
      };
      if (v_23) {
        v_30 = Automobile_controller__St_1_Troisieme;
      } else {
        v_30 = v_28;
      };
      if (v_22) {
        v_32 = Automobile_controller__St_1_Troisieme;
      } else {
        v_32 = v_30;
      };
      if (v_21) {
        v_34 = Automobile_controller__St_1_Deuxieme;
      } else {
        v_34 = v_32;
      };
      if (v_20) {
        s_St_1_Cinquieme = Automobile_controller__St_1_Premier;
      } else {
        s_St_1_Cinquieme = v_34;
      };
      if (v_25) {
        v_27 = true;
      } else {
        v_27 = self->pnr;
      };
      if (v_24) {
        v_29 = true;
      } else {
        v_29 = v_27;
      };
      if (v_23) {
        v_31 = true;
      } else {
        v_31 = v_29;
      };
      if (v_22) {
        v_33 = true;
      } else {
        v_33 = v_31;
      };
      if (v_21) {
        v_35 = true;
      } else {
        v_35 = v_33;
      };
      if (v_20) {
        r_St_1_Cinquieme = true;
      } else {
        r_St_1_Cinquieme = v_35;
      };
      s = s_St_1_Cinquieme;
      r = r_St_1_Cinquieme;
      break;
    case Automobile_controller__St_1_Quatrieme:
      v_36 = (boiteDeVitesse==Automobile_controller__Un);
      v_37 = (boiteDeVitesse==Automobile_controller__Deux);
      v_38 = (boiteDeVitesse==Automobile_controller__Trois);
      v_39 = (boiteDeVitesse==Automobile_controller__Cinq);
      v_40 = (boiteDeVitesse==Automobile_controller__Six);
      v_41 = (boiteDeVitesse==Automobile_controller__PointMort);
      if (v_41) {
        v_42 = Automobile_controller__St_1_Zero;
      } else {
        v_42 = Automobile_controller__St_1_Quatrieme;
      };
      if (v_40) {
        v_44 = Automobile_controller__St_1_Arriere;
      } else {
        v_44 = v_42;
      };
      if (v_39) {
        v_46 = Automobile_controller__St_1_Cinquieme;
      } else {
        v_46 = v_44;
      };
      if (v_38) {
        v_48 = Automobile_controller__St_1_Troisieme;
      } else {
        v_48 = v_46;
      };
      if (v_37) {
        v_50 = Automobile_controller__St_1_Deuxieme;
      } else {
        v_50 = v_48;
      };
      if (v_36) {
        s_St_1_Quatrieme = Automobile_controller__St_1_Premier;
      } else {
        s_St_1_Quatrieme = v_50;
      };
      if (v_41) {
        v_43 = true;
      } else {
        v_43 = self->pnr;
      };
      if (v_40) {
        v_45 = true;
      } else {
        v_45 = v_43;
      };
      if (v_39) {
        v_47 = true;
      } else {
        v_47 = v_45;
      };
      if (v_38) {
        v_49 = true;
      } else {
        v_49 = v_47;
      };
      if (v_37) {
        v_51 = true;
      } else {
        v_51 = v_49;
      };
      if (v_36) {
        r_St_1_Quatrieme = true;
      } else {
        r_St_1_Quatrieme = v_51;
      };
      s = s_St_1_Quatrieme;
      r = r_St_1_Quatrieme;
      break;
    case Automobile_controller__St_1_Troisieme:
      v_52 = (boiteDeVitesse==Automobile_controller__Un);
      v_53 = (boiteDeVitesse==Automobile_controller__Deux);
      v_54 = (boiteDeVitesse==Automobile_controller__Quatre);
      v_55 = (boiteDeVitesse==Automobile_controller__Cinq);
      v_56 = (boiteDeVitesse==Automobile_controller__Six);
      v_57 = (boiteDeVitesse==Automobile_controller__PointMort);
      if (v_57) {
        v_58 = Automobile_controller__St_1_Zero;
      } else {
        v_58 = Automobile_controller__St_1_Troisieme;
      };
      if (v_56) {
        v_60 = Automobile_controller__St_1_Arriere;
      } else {
        v_60 = v_58;
      };
      if (v_55) {
        v_62 = Automobile_controller__St_1_Cinquieme;
      } else {
        v_62 = v_60;
      };
      if (v_54) {
        v_64 = Automobile_controller__St_1_Quatrieme;
      } else {
        v_64 = v_62;
      };
      if (v_53) {
        v_66 = Automobile_controller__St_1_Deuxieme;
      } else {
        v_66 = v_64;
      };
      if (v_52) {
        s_St_1_Troisieme = Automobile_controller__St_1_Premier;
      } else {
        s_St_1_Troisieme = v_66;
      };
      if (v_57) {
        v_59 = true;
      } else {
        v_59 = self->pnr;
      };
      if (v_56) {
        v_61 = true;
      } else {
        v_61 = v_59;
      };
      if (v_55) {
        v_63 = true;
      } else {
        v_63 = v_61;
      };
      if (v_54) {
        v_65 = true;
      } else {
        v_65 = v_63;
      };
      if (v_53) {
        v_67 = true;
      } else {
        v_67 = v_65;
      };
      if (v_52) {
        r_St_1_Troisieme = true;
      } else {
        r_St_1_Troisieme = v_67;
      };
      s = s_St_1_Troisieme;
      r = r_St_1_Troisieme;
      break;
    case Automobile_controller__St_1_Deuxieme:
      v_68 = (boiteDeVitesse==Automobile_controller__Un);
      v_69 = (boiteDeVitesse==Automobile_controller__Trois);
      v_70 = (boiteDeVitesse==Automobile_controller__Quatre);
      v_71 = (boiteDeVitesse==Automobile_controller__Cinq);
      v_72 = (boiteDeVitesse==Automobile_controller__Six);
      v_73 = (boiteDeVitesse==Automobile_controller__PointMort);
      if (v_73) {
        v_74 = Automobile_controller__St_1_Zero;
      } else {
        v_74 = Automobile_controller__St_1_Deuxieme;
      };
      if (v_72) {
        v_76 = Automobile_controller__St_1_Arriere;
      } else {
        v_76 = v_74;
      };
      if (v_71) {
        v_78 = Automobile_controller__St_1_Cinquieme;
      } else {
        v_78 = v_76;
      };
      if (v_70) {
        v_80 = Automobile_controller__St_1_Quatrieme;
      } else {
        v_80 = v_78;
      };
      if (v_69) {
        v_82 = Automobile_controller__St_1_Troisieme;
      } else {
        v_82 = v_80;
      };
      if (v_68) {
        s_St_1_Deuxieme = Automobile_controller__St_1_Premier;
      } else {
        s_St_1_Deuxieme = v_82;
      };
      if (v_73) {
        v_75 = true;
      } else {
        v_75 = self->pnr;
      };
      if (v_72) {
        v_77 = true;
      } else {
        v_77 = v_75;
      };
      if (v_71) {
        v_79 = true;
      } else {
        v_79 = v_77;
      };
      if (v_70) {
        v_81 = true;
      } else {
        v_81 = v_79;
      };
      if (v_69) {
        v_83 = true;
      } else {
        v_83 = v_81;
      };
      if (v_68) {
        r_St_1_Deuxieme = true;
      } else {
        r_St_1_Deuxieme = v_83;
      };
      s = s_St_1_Deuxieme;
      r = r_St_1_Deuxieme;
      break;
    case Automobile_controller__St_1_Premier:
      v_84 = (boiteDeVitesse==Automobile_controller__Deux);
      v_85 = (boiteDeVitesse==Automobile_controller__Trois);
      v_86 = (boiteDeVitesse==Automobile_controller__Quatre);
      v_87 = (boiteDeVitesse==Automobile_controller__Cinq);
      v_88 = (boiteDeVitesse==Automobile_controller__Six);
      v_89 = (boiteDeVitesse==Automobile_controller__PointMort);
      if (v_89) {
        v_90 = Automobile_controller__St_1_Zero;
      } else {
        v_90 = Automobile_controller__St_1_Premier;
      };
      if (v_88) {
        v_92 = Automobile_controller__St_1_Arriere;
      } else {
        v_92 = v_90;
      };
      if (v_87) {
        v_94 = Automobile_controller__St_1_Cinquieme;
      } else {
        v_94 = v_92;
      };
      if (v_86) {
        v_96 = Automobile_controller__St_1_Quatrieme;
      } else {
        v_96 = v_94;
      };
      if (v_85) {
        v_98 = Automobile_controller__St_1_Troisieme;
      } else {
        v_98 = v_96;
      };
      if (v_84) {
        s_St_1_Premier = Automobile_controller__St_1_Deuxieme;
      } else {
        s_St_1_Premier = v_98;
      };
      if (v_89) {
        v_91 = true;
      } else {
        v_91 = self->pnr;
      };
      if (v_88) {
        v_93 = true;
      } else {
        v_93 = v_91;
      };
      if (v_87) {
        v_95 = true;
      } else {
        v_95 = v_93;
      };
      if (v_86) {
        v_97 = true;
      } else {
        v_97 = v_95;
      };
      if (v_85) {
        v_99 = true;
      } else {
        v_99 = v_97;
      };
      if (v_84) {
        r_St_1_Premier = true;
      } else {
        r_St_1_Premier = v_99;
      };
      s = s_St_1_Premier;
      r = r_St_1_Premier;
      break;
    case Automobile_controller__St_1_Zero:
      v_100 = (boiteDeVitesse==Automobile_controller__Deux);
      v_101 = (boiteDeVitesse==Automobile_controller__Trois);
      v_102 = (boiteDeVitesse==Automobile_controller__Quatre);
      v_103 = (boiteDeVitesse==Automobile_controller__Cinq);
      v_104 = (boiteDeVitesse==Automobile_controller__Six);
      v_105 = (boiteDeVitesse==Automobile_controller__Un);
      if (v_105) {
        v_106 = Automobile_controller__St_1_Premier;
      } else {
        v_106 = Automobile_controller__St_1_Zero;
      };
      if (v_104) {
        v_108 = Automobile_controller__St_1_Arriere;
      } else {
        v_108 = v_106;
      };
      if (v_103) {
        v_110 = Automobile_controller__St_1_Cinquieme;
      } else {
        v_110 = v_108;
      };
      if (v_102) {
        v_112 = Automobile_controller__St_1_Quatrieme;
      } else {
        v_112 = v_110;
      };
      if (v_101) {
        v_114 = Automobile_controller__St_1_Troisieme;
      } else {
        v_114 = v_112;
      };
      if (v_100) {
        s_St_1_Zero = Automobile_controller__St_1_Deuxieme;
      } else {
        s_St_1_Zero = v_114;
      };
      s = s_St_1_Zero;
      if (v_105) {
        v_107 = true;
      } else {
        v_107 = self->pnr;
      };
      if (v_104) {
        v_109 = true;
      } else {
        v_109 = v_107;
      };
      if (v_103) {
        v_111 = true;
      } else {
        v_111 = v_109;
      };
      if (v_102) {
        v_113 = true;
      } else {
        v_113 = v_111;
      };
      if (v_101) {
        v_115 = true;
      } else {
        v_115 = v_113;
      };
      if (v_100) {
        r_St_1_Zero = true;
      } else {
        r_St_1_Zero = v_115;
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
  
  int v_123;
  Automobile_controller__st_3 v_122;
  int v_121;
  Automobile_controller__st_3 v_120;
  int v_119;
  int v_118;
  int v_117;
  int v_116;
  int v;
  int v_132;
  Automobile_controller__st_3 v_131;
  int v_130;
  Automobile_controller__st_3 v_129;
  int v_128;
  int v_127;
  int v_126;
  int v_125;
  int v_124;
  int v_141;
  Automobile_controller__st_3 v_140;
  int v_139;
  Automobile_controller__st_3 v_138;
  int v_137;
  int v_136;
  int v_135;
  int v_134;
  int v_133;
  int v_145;
  Automobile_controller__st_3 v_144;
  int v_143;
  Automobile_controller__st_3 v_142;
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
      v_116 = !(jour);
      v_117 = (v&&v_116);
      v_118 = !(nuit);
      v_119 = (v_117&&v_118);
      if (v_119) {
        v_120 = Automobile_controller__St_3_Desacitve;
      } else {
        v_120 = Automobile_controller__St_3_PositionNuit;
      };
      if (normal) {
        v_122 = Automobile_controller__St_3_PositionNormale;
      } else {
        v_122 = v_120;
      };
      if (jour) {
        s_St_3_PositionNuit = Automobile_controller__St_3_PositionJour;
      } else {
        s_St_3_PositionNuit = v_122;
      };
      if (v_119) {
        v_121 = true;
      } else {
        v_121 = self->pnr;
      };
      if (normal) {
        v_123 = true;
      } else {
        v_123 = v_121;
      };
      if (jour) {
        r_St_3_PositionNuit = true;
      } else {
        r_St_3_PositionNuit = v_123;
      };
      s = s_St_3_PositionNuit;
      r = r_St_3_PositionNuit;
      break;
    case Automobile_controller__St_3_PositionJour:
      v_124 = !(normal);
      v_125 = !(jour);
      v_126 = (v_124&&v_125);
      v_127 = !(nuit);
      v_128 = (v_126&&v_127);
      if (v_128) {
        v_129 = Automobile_controller__St_3_Desacitve;
      } else {
        v_129 = Automobile_controller__St_3_PositionJour;
      };
      if (nuit) {
        v_131 = Automobile_controller__St_3_PositionNuit;
      } else {
        v_131 = v_129;
      };
      if (normal) {
        s_St_3_PositionJour = Automobile_controller__St_3_PositionNormale;
      } else {
        s_St_3_PositionJour = v_131;
      };
      if (v_128) {
        v_130 = true;
      } else {
        v_130 = self->pnr;
      };
      if (nuit) {
        v_132 = true;
      } else {
        v_132 = v_130;
      };
      if (normal) {
        r_St_3_PositionJour = true;
      } else {
        r_St_3_PositionJour = v_132;
      };
      s = s_St_3_PositionJour;
      r = r_St_3_PositionJour;
      break;
    case Automobile_controller__St_3_PositionNormale:
      v_133 = !(normal);
      v_134 = !(jour);
      v_135 = (v_133&&v_134);
      v_136 = !(nuit);
      v_137 = (v_135&&v_136);
      if (v_137) {
        v_138 = Automobile_controller__St_3_Desacitve;
      } else {
        v_138 = Automobile_controller__St_3_PositionNormale;
      };
      if (nuit) {
        v_140 = Automobile_controller__St_3_PositionNuit;
      } else {
        v_140 = v_138;
      };
      if (jour) {
        s_St_3_PositionNormale = Automobile_controller__St_3_PositionJour;
      } else {
        s_St_3_PositionNormale = v_140;
      };
      if (v_137) {
        v_139 = true;
      } else {
        v_139 = self->pnr;
      };
      if (nuit) {
        v_141 = true;
      } else {
        v_141 = v_139;
      };
      if (jour) {
        r_St_3_PositionNormale = true;
      } else {
        r_St_3_PositionNormale = v_141;
      };
      s = s_St_3_PositionNormale;
      r = r_St_3_PositionNormale;
      break;
    case Automobile_controller__St_3_Desacitve:
      if (normal) {
        v_142 = Automobile_controller__St_3_PositionNormale;
      } else {
        v_142 = Automobile_controller__St_3_Desacitve;
      };
      if (nuit) {
        v_144 = Automobile_controller__St_3_PositionNuit;
      } else {
        v_144 = v_142;
      };
      if (jour) {
        s_St_3_Desacitve = Automobile_controller__St_3_PositionJour;
      } else {
        s_St_3_Desacitve = v_144;
      };
      s = s_St_3_Desacitve;
      if (normal) {
        v_143 = true;
      } else {
        v_143 = self->pnr;
      };
      if (nuit) {
        v_145 = true;
      } else {
        v_145 = v_143;
      };
      if (jour) {
        r_St_3_Desacitve = true;
      } else {
        r_St_3_Desacitve = v_145;
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
  
  int v_152;
  Automobile_controller__st_4 v_151;
  int v_150;
  Automobile_controller__st_4 v_149;
  int v_148;
  int v_147;
  int v_146;
  int v;
  int v_160;
  Automobile_controller__st_4 v_159;
  int v_158;
  Automobile_controller__st_4 v_157;
  int v_156;
  int v_155;
  int v_154;
  int v_153;
  int v_168;
  Automobile_controller__st_4 v_167;
  int v_166;
  Automobile_controller__st_4 v_165;
  int v_164;
  int v_163;
  int v_162;
  int v_161;
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
      v_146 = (con&&v);
      v_147 = (densite==Automobile_controller__Normal);
      v_148 = (con&&v_147);
      if (v_148) {
        v_149 = Automobile_controller__St_4_BalayageIntermittent;
      } else {
        v_149 = Automobile_controller__St_4_BalayageContiu;
      };
      if (v_146) {
        v_151 = Automobile_controller__St_4_BalayageUnique;
      } else {
        v_151 = v_149;
      };
      if (cclose) {
        s_St_4_BalayageContiu = Automobile_controller__St_4_Desactive;
      } else {
        s_St_4_BalayageContiu = v_151;
      };
      if (v_148) {
        v_150 = true;
      } else {
        v_150 = self->pnr;
      };
      if (v_146) {
        v_152 = true;
      } else {
        v_152 = v_150;
      };
      if (cclose) {
        r_St_4_BalayageContiu = true;
      } else {
        r_St_4_BalayageContiu = v_152;
      };
      s = s_St_4_BalayageContiu;
      r = r_St_4_BalayageContiu;
      break;
    case Automobile_controller__St_4_BalayageIntermittent:
      v_153 = (densite==Automobile_controller__High);
      v_154 = (con&&v_153);
      v_155 = (densite==Automobile_controller__Low);
      v_156 = (con&&v_155);
      if (v_156) {
        v_157 = Automobile_controller__St_4_BalayageUnique;
      } else {
        v_157 = Automobile_controller__St_4_BalayageIntermittent;
      };
      if (v_154) {
        v_159 = Automobile_controller__St_4_BalayageContiu;
      } else {
        v_159 = v_157;
      };
      if (cclose) {
        s_St_4_BalayageIntermittent = Automobile_controller__St_4_Desactive;
      } else {
        s_St_4_BalayageIntermittent = v_159;
      };
      if (v_156) {
        v_158 = true;
      } else {
        v_158 = self->pnr;
      };
      if (v_154) {
        v_160 = true;
      } else {
        v_160 = v_158;
      };
      if (cclose) {
        r_St_4_BalayageIntermittent = true;
      } else {
        r_St_4_BalayageIntermittent = v_160;
      };
      s = s_St_4_BalayageIntermittent;
      r = r_St_4_BalayageIntermittent;
      break;
    case Automobile_controller__St_4_BalayageUnique:
      v_161 = (densite==Automobile_controller__High);
      v_162 = (con&&v_161);
      v_163 = (densite==Automobile_controller__Normal);
      v_164 = (con&&v_163);
      if (v_164) {
        v_165 = Automobile_controller__St_4_BalayageIntermittent;
      } else {
        v_165 = Automobile_controller__St_4_BalayageUnique;
      };
      if (v_162) {
        v_167 = Automobile_controller__St_4_BalayageContiu;
      } else {
        v_167 = v_165;
      };
      if (cclose) {
        s_St_4_BalayageUnique = Automobile_controller__St_4_Desactive;
      } else {
        s_St_4_BalayageUnique = v_167;
      };
      if (v_164) {
        v_166 = true;
      } else {
        v_166 = self->pnr;
      };
      if (v_162) {
        v_168 = true;
      } else {
        v_168 = v_166;
      };
      if (cclose) {
        r_St_4_BalayageUnique = true;
      } else {
        r_St_4_BalayageUnique = v_168;
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
  
  int v_174;
  int v_173;
  int v_172;
  int v_171;
  int v_170;
  int v_169;
  int v;
  int v_177;
  int v_176;
  int v_175;
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
      v_169 = !(detectionVolantLibre);
      v_170 = (v&&v_169);
      v_171 = !(detectionDefaillanceTechnique);
      v_172 = (v_170&&v_171);
      v_173 = !(detectionVehiculeAngleMort);
      v_174 = (v_172&&v_173);
      if (v_174) {
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
      v_175 = (detectionDepassementLigne||detectionVolantLibre);
      v_176 = (v_175||detectionDefaillanceTechnique);
      v_177 = (v_176||detectionVehiculeAngleMort);
      if (v_177) {
        s_St_6_Idle = Automobile_controller__St_6_Detection;
      } else {
        s_St_6_Idle = Automobile_controller__St_6_Idle;
      };
      s = s_St_6_Idle;
      if (v_177) {
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
  
  int v_187;
  Automobile_controller__st_7 v_186;
  int v_185;
  Automobile_controller__st_7 v_184;
  int v_183;
  int v_182;
  int v_181;
  int v_180;
  int v_179;
  int v_178;
  int v;
  int v_202;
  Automobile_controller__st_7 v_201;
  int v_200;
  Automobile_controller__st_7 v_199;
  int v_198;
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
  int v_219;
  Automobile_controller__st_7 v_218;
  int v_217;
  Automobile_controller__st_7 v_216;
  int v_215;
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
  int v_231;
  Automobile_controller__st_7 v_230;
  int v_229;
  Automobile_controller__st_7 v_228;
  int v_227;
  int v_226;
  int v_225;
  int v_224;
  int v_223;
  int v_222;
  int v_221;
  int v_220;
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
      v_178 = !(presencevehicule);
      v_179 = (v&&v_178);
      v_180 = (feu==Automobile_controller__Vert);
      v_181 = (v_179&&v_180);
      v_182 = !(presencePieton);
      v_183 = (v_182&&presencevehicule);
      if (v_183) {
        v_184 = Automobile_controller__St_7_Vehicule;
      } else {
        v_184 = Automobile_controller__St_7_Feu;
      };
      if (presencePieton) {
        v_186 = Automobile_controller__St_7_Pieton;
      } else {
        v_186 = v_184;
      };
      if (v_181) {
        s_St_7_Feu = Automobile_controller__St_7_Acceleration;
      } else {
        s_St_7_Feu = v_186;
      };
      if (v_183) {
        v_185 = true;
      } else {
        v_185 = self->pnr;
      };
      if (presencePieton) {
        v_187 = true;
      } else {
        v_187 = v_185;
      };
      if (v_181) {
        r_St_7_Feu = true;
      } else {
        r_St_7_Feu = v_187;
      };
      s = s_St_7_Feu;
      r = r_St_7_Feu;
      break;
    case Automobile_controller__St_7_Vehicule:
      v_188 = !(presencePieton);
      v_189 = !(presencevehicule);
      v_190 = (v_188&&v_189);
      v_191 = (feu==Automobile_controller__Vert);
      v_192 = (v_190&&v_191);
      v_193 = !(presencePieton);
      v_194 = !(presencevehicule);
      v_195 = (v_193&&v_194);
      v_196 = (feu==Automobile_controller__Vert);
      v_197 = !(v_196);
      v_198 = (v_195&&v_197);
      if (v_198) {
        v_199 = Automobile_controller__St_7_Feu;
      } else {
        v_199 = Automobile_controller__St_7_Vehicule;
      };
      if (presencePieton) {
        v_201 = Automobile_controller__St_7_Pieton;
      } else {
        v_201 = v_199;
      };
      if (v_192) {
        s_St_7_Vehicule = Automobile_controller__St_7_Acceleration;
      } else {
        s_St_7_Vehicule = v_201;
      };
      if (v_198) {
        v_200 = true;
      } else {
        v_200 = self->pnr;
      };
      if (presencePieton) {
        v_202 = true;
      } else {
        v_202 = v_200;
      };
      if (v_192) {
        r_St_7_Vehicule = true;
      } else {
        r_St_7_Vehicule = v_202;
      };
      s = s_St_7_Vehicule;
      r = r_St_7_Vehicule;
      break;
    case Automobile_controller__St_7_Pieton:
      v_203 = !(presencePieton);
      v_204 = !(presencevehicule);
      v_205 = (v_203&&v_204);
      v_206 = (feu==Automobile_controller__Vert);
      v_207 = (v_205&&v_206);
      v_208 = !(presencePieton);
      v_209 = (v_208&&presencevehicule);
      v_210 = !(presencePieton);
      v_211 = !(presencevehicule);
      v_212 = (v_210&&v_211);
      v_213 = (feu==Automobile_controller__Vert);
      v_214 = !(v_213);
      v_215 = (v_212&&v_214);
      if (v_215) {
        v_216 = Automobile_controller__St_7_Feu;
      } else {
        v_216 = Automobile_controller__St_7_Pieton;
      };
      if (v_209) {
        v_218 = Automobile_controller__St_7_Vehicule;
      } else {
        v_218 = v_216;
      };
      if (v_207) {
        s_St_7_Pieton = Automobile_controller__St_7_Acceleration;
      } else {
        s_St_7_Pieton = v_218;
      };
      if (v_215) {
        v_217 = true;
      } else {
        v_217 = self->pnr;
      };
      if (v_209) {
        v_219 = true;
      } else {
        v_219 = v_217;
      };
      if (v_207) {
        r_St_7_Pieton = true;
      } else {
        r_St_7_Pieton = v_219;
      };
      s = s_St_7_Pieton;
      r = r_St_7_Pieton;
      break;
    case Automobile_controller__St_7_Acceleration:
      v_220 = !(presencePieton);
      v_221 = (v_220&&presencevehicule);
      v_222 = !(presencePieton);
      v_223 = !(presencevehicule);
      v_224 = (v_222&&v_223);
      v_225 = (feu==Automobile_controller__Vert);
      v_226 = !(v_225);
      v_227 = (v_224&&v_226);
      if (v_227) {
        v_228 = Automobile_controller__St_7_Feu;
      } else {
        v_228 = Automobile_controller__St_7_Acceleration;
      };
      if (v_221) {
        v_230 = Automobile_controller__St_7_Vehicule;
      } else {
        v_230 = v_228;
      };
      if (presencePieton) {
        s_St_7_Acceleration = Automobile_controller__St_7_Pieton;
      } else {
        s_St_7_Acceleration = v_230;
      };
      s = s_St_7_Acceleration;
      if (v_227) {
        v_229 = true;
      } else {
        v_229 = self->pnr;
      };
      if (v_221) {
        v_231 = true;
      } else {
        v_231 = v_229;
      };
      if (presencePieton) {
        r_St_7_Acceleration = true;
      } else {
        r_St_7_Acceleration = v_231;
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
  self->ck = Automobile_controller__St_8_Desactive;
  self->pnr = false;
}

void Automobile__temperature_step(int activated, float capteur,
                                  Automobile__temperature_out* _out,
                                  Automobile__temperature_mem* self) {
  
  int v;
  int r_St_8_Active;
  Automobile_controller__st_8 s_St_8_Active;
  int r_St_8_Desactive;
  Automobile_controller__st_8 s_St_8_Desactive;
  int nr_St_8_Active;
  Automobile_controller__st_8 ns_St_8_Active;
  int etat_St_8_Active;
  float qt_St_8_Active;
  int nr_St_8_Desactive;
  Automobile_controller__st_8 ns_St_8_Desactive;
  int etat_St_8_Desactive;
  float qt_St_8_Desactive;
  Automobile_controller__st_8 ck_9;
  Automobile_controller__st_8 s;
  Automobile_controller__st_8 ns;
  int r;
  int nr;
  switch (self->ck) {
    case Automobile_controller__St_8_Active:
      v = !(activated);
      if (v) {
        s_St_8_Active = Automobile_controller__St_8_Desactive;
        r_St_8_Active = true;
      } else {
        s_St_8_Active = Automobile_controller__St_8_Active;
        r_St_8_Active = self->pnr;
      };
      s = s_St_8_Active;
      r = r_St_8_Active;
      break;
    case Automobile_controller__St_8_Desactive:
      if (activated) {
        s_St_8_Desactive = Automobile_controller__St_8_Active;
      } else {
        s_St_8_Desactive = Automobile_controller__St_8_Desactive;
      };
      s = s_St_8_Desactive;
      if (activated) {
        r_St_8_Desactive = true;
      } else {
        r_St_8_Desactive = self->pnr;
      };
      r = r_St_8_Desactive;
      break;
    default:
      break;
  };
  ck_9 = s;
  switch (ck_9) {
    case Automobile_controller__St_8_Active:
      ns_St_8_Active = Automobile_controller__St_8_Active;
      nr_St_8_Active = false;
      qt_St_8_Active = (19.000000-capteur);
      etat_St_8_Active = true;
      ns = ns_St_8_Active;
      nr = nr_St_8_Active;
      _out->qt = qt_St_8_Active;
      _out->etat = etat_St_8_Active;
      break;
    case Automobile_controller__St_8_Desactive:
      ns_St_8_Desactive = Automobile_controller__St_8_Desactive;
      ns = ns_St_8_Desactive;
      nr_St_8_Desactive = false;
      nr = nr_St_8_Desactive;
      qt_St_8_Desactive = 0.000000;
      _out->qt = qt_St_8_Desactive;
      etat_St_8_Desactive = false;
      _out->etat = etat_St_8_Desactive;
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

void Automobile__controleurPhares_step(int tdn, int tin, int cpn, int i,
                                       int c, int v, int p,
                                       Automobile__controleurPhares_out* _out,
                                       Automobile__controleurPhares_mem* self) {
  
  int v_235;
  Automobile_controller__st_9 v_234;
  int v_233;
  Automobile_controller__st_9 v_232;
  int v_241;
  Automobile_controller__st_9 v_240;
  int v_239;
  Automobile_controller__st_9 v_238;
  int v_237;
  Automobile_controller__st_9 v_236;
  int v_245;
  Automobile_controller__st_9 v_244;
  int v_243;
  Automobile_controller__st_9 v_242;
  int v_249;
  Automobile_controller__st_9 v_248;
  int v_247;
  Automobile_controller__st_9 v_246;
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
      if (i) {
        v_232 = Automobile_controller__St_9_Idle;
      } else {
        v_232 = Automobile_controller__St_9_Phares;
      };
      if (v) {
        v_234 = Automobile_controller__St_9_Veilleuses;
      } else {
        v_234 = v_232;
      };
      if (cpn) {
        s_St_9_Phares = Automobile_controller__St_9_Codes;
      } else {
        s_St_9_Phares = v_234;
      };
      if (i) {
        v_233 = true;
      } else {
        v_233 = self->pnr;
      };
      if (v) {
        v_235 = true;
      } else {
        v_235 = v_233;
      };
      if (cpn) {
        r_St_9_Phares = true;
      } else {
        r_St_9_Phares = v_235;
      };
      s = s_St_9_Phares;
      r = r_St_9_Phares;
      break;
    case Automobile_controller__St_9_Codes:
      if (i) {
        v_236 = Automobile_controller__St_9_Idle;
      } else {
        v_236 = Automobile_controller__St_9_Codes;
      };
      if (c) {
        v_238 = Automobile_controller__St_9_Codes;
      } else {
        v_238 = v_236;
      };
      if (cpn) {
        v_240 = Automobile_controller__St_9_Phares;
      } else {
        v_240 = v_238;
      };
      if (tin) {
        s_St_9_Codes = Automobile_controller__St_9_Veilleuses;
      } else {
        s_St_9_Codes = v_240;
      };
      if (i) {
        v_237 = true;
      } else {
        v_237 = self->pnr;
      };
      if (c) {
        v_239 = true;
      } else {
        v_239 = v_237;
      };
      if (cpn) {
        v_241 = true;
      } else {
        v_241 = v_239;
      };
      if (tin) {
        r_St_9_Codes = true;
      } else {
        r_St_9_Codes = v_241;
      };
      s = s_St_9_Codes;
      r = r_St_9_Codes;
      break;
    case Automobile_controller__St_9_Veilleuses:
      if (p) {
        v_242 = Automobile_controller__St_9_Phares;
      } else {
        v_242 = Automobile_controller__St_9_Veilleuses;
      };
      if (tdn) {
        v_244 = Automobile_controller__St_9_Codes;
      } else {
        v_244 = v_242;
      };
      if (tin) {
        s_St_9_Veilleuses = Automobile_controller__St_9_Idle;
      } else {
        s_St_9_Veilleuses = v_244;
      };
      if (p) {
        v_243 = true;
      } else {
        v_243 = self->pnr;
      };
      if (tdn) {
        v_245 = true;
      } else {
        v_245 = v_243;
      };
      if (tin) {
        r_St_9_Veilleuses = true;
      } else {
        r_St_9_Veilleuses = v_245;
      };
      s = s_St_9_Veilleuses;
      r = r_St_9_Veilleuses;
      break;
    case Automobile_controller__St_9_Idle:
      if (p) {
        v_246 = Automobile_controller__St_9_Phares;
      } else {
        v_246 = Automobile_controller__St_9_Idle;
      };
      if (c) {
        v_248 = Automobile_controller__St_9_Codes;
      } else {
        v_248 = v_246;
      };
      if (tdn) {
        s_St_9_Idle = Automobile_controller__St_9_Veilleuses;
      } else {
        s_St_9_Idle = v_248;
      };
      s = s_St_9_Idle;
      if (p) {
        v_247 = true;
      } else {
        v_247 = self->pnr;
      };
      if (c) {
        v_249 = true;
      } else {
        v_249 = v_247;
      };
      if (tdn) {
        r_St_9_Idle = true;
      } else {
        r_St_9_Idle = v_249;
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
      etat_St_9_Idle = Automobile_controller__NoLum;
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
  self->ck_26 = Automobile_controller__St_11_Desactive;
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
                                 int activeRegulateurTemperature,
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
  int i;
  int c;
  int v;
  int p;
  Automobile_controller__numero boiteDeVitesse;
  int ok;
  int v_337;
  int v_340;
  int v_339;
  int v_338;
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
  int v_356;
  Automobile_controller__st_18 v_355;
  int v_354;
  Automobile_controller__st_18 v_353;
  int v_352;
  Automobile_controller__st_18 v_351;
  int v_350;
  Automobile_controller__st_18 v_349;
  int v_348;
  Automobile_controller__st_18 v_347;
  int v_346;
  int v_345;
  int v_344;
  int v_343;
  int v_342;
  int v_341;
  int v_372;
  Automobile_controller__st_18 v_371;
  int v_370;
  Automobile_controller__st_18 v_369;
  int v_368;
  Automobile_controller__st_18 v_367;
  int v_366;
  Automobile_controller__st_18 v_365;
  int v_364;
  Automobile_controller__st_18 v_363;
  int v_362;
  int v_361;
  int v_360;
  int v_359;
  int v_358;
  int v_357;
  int v_388;
  Automobile_controller__st_18 v_387;
  int v_386;
  Automobile_controller__st_18 v_385;
  int v_384;
  Automobile_controller__st_18 v_383;
  int v_382;
  Automobile_controller__st_18 v_381;
  int v_380;
  Automobile_controller__st_18 v_379;
  int v_378;
  int v_377;
  int v_376;
  int v_375;
  int v_374;
  int v_373;
  int v_404;
  Automobile_controller__st_18 v_403;
  int v_402;
  Automobile_controller__st_18 v_401;
  int v_400;
  Automobile_controller__st_18 v_399;
  int v_398;
  Automobile_controller__st_18 v_397;
  int v_396;
  Automobile_controller__st_18 v_395;
  int v_394;
  int v_393;
  int v_392;
  int v_391;
  int v_390;
  int v_389;
  int v_420;
  Automobile_controller__st_18 v_419;
  int v_418;
  Automobile_controller__st_18 v_417;
  int v_416;
  Automobile_controller__st_18 v_415;
  int v_414;
  Automobile_controller__st_18 v_413;
  int v_412;
  Automobile_controller__st_18 v_411;
  int v_410;
  int v_409;
  int v_408;
  int v_407;
  int v_406;
  int v_405;
  int v_436;
  Automobile_controller__st_18 v_435;
  int v_434;
  Automobile_controller__st_18 v_433;
  int v_432;
  Automobile_controller__st_18 v_431;
  int v_430;
  Automobile_controller__st_18 v_429;
  int v_428;
  Automobile_controller__st_18 v_427;
  int v_426;
  int v_425;
  int v_424;
  int v_423;
  int v_422;
  int v_421;
  int v_452;
  Automobile_controller__st_18 v_451;
  int v_450;
  Automobile_controller__st_18 v_449;
  int v_448;
  Automobile_controller__st_18 v_447;
  int v_446;
  Automobile_controller__st_18 v_445;
  int v_444;
  Automobile_controller__st_18 v_443;
  int v_442;
  int v_441;
  int v_440;
  int v_439;
  int v_438;
  int v_437;
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
  int v_461;
  Automobile_controller__st_16 v_460;
  int v_459;
  Automobile_controller__st_16 v_458;
  int v_457;
  int v_456;
  int v_455;
  int v_454;
  int v_453;
  int v_470;
  Automobile_controller__st_16 v_469;
  int v_468;
  Automobile_controller__st_16 v_467;
  int v_466;
  int v_465;
  int v_464;
  int v_463;
  int v_462;
  int v_479;
  Automobile_controller__st_16 v_478;
  int v_477;
  Automobile_controller__st_16 v_476;
  int v_475;
  int v_474;
  int v_473;
  int v_472;
  int v_471;
  int v_483;
  Automobile_controller__st_16 v_482;
  int v_481;
  Automobile_controller__st_16 v_480;
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
  int v_491;
  Automobile_controller__st_15 v_490;
  int v_489;
  Automobile_controller__st_15 v_488;
  int v_487;
  int v_486;
  int v_485;
  int v_484;
  int v_499;
  Automobile_controller__st_15 v_498;
  int v_497;
  Automobile_controller__st_15 v_496;
  int v_495;
  int v_494;
  int v_493;
  int v_492;
  int v_507;
  Automobile_controller__st_15 v_506;
  int v_505;
  Automobile_controller__st_15 v_504;
  int v_503;
  int v_502;
  int v_501;
  int v_500;
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
  int v_508;
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
  int v_515;
  int v_514;
  int v_513;
  int v_512;
  int v_511;
  int v_510;
  int v_509;
  int v_518;
  int v_517;
  int v_516;
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
  int v_529;
  Automobile_controller__st_12 v_528;
  int v_527;
  Automobile_controller__st_12 v_526;
  int v_525;
  int v_524;
  int v_523;
  int v_522;
  int v_521;
  int v_520;
  int v_519;
  int v_544;
  Automobile_controller__st_12 v_543;
  int v_542;
  Automobile_controller__st_12 v_541;
  int v_540;
  int v_539;
  int v_538;
  int v_537;
  int v_536;
  int v_535;
  int v_534;
  int v_533;
  int v_532;
  int v_531;
  int v_530;
  int v_561;
  Automobile_controller__st_12 v_560;
  int v_559;
  Automobile_controller__st_12 v_558;
  int v_557;
  int v_556;
  int v_555;
  int v_554;
  int v_553;
  int v_552;
  int v_551;
  int v_550;
  int v_549;
  int v_548;
  int v_547;
  int v_546;
  int v_545;
  int v_573;
  Automobile_controller__st_12 v_572;
  int v_571;
  Automobile_controller__st_12 v_570;
  int v_569;
  int v_568;
  int v_567;
  int v_566;
  int v_565;
  int v_564;
  int v_563;
  int v_562;
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
  int v_574;
  int r_1_St_11_Active;
  Automobile_controller__st_11 s_1_St_11_Active;
  int r_1_St_11_Desactive;
  Automobile_controller__st_11 s_1_St_11_Desactive;
  int nr_1_St_11_Active;
  Automobile_controller__st_11 ns_1_St_11_Active;
  int etat_2_St_11_Active;
  float qt_St_11_Active;
  int nr_1_St_11_Desactive;
  Automobile_controller__st_11 ns_1_St_11_Desactive;
  int etat_2_St_11_Desactive;
  float qt_St_11_Desactive;
  Automobile_controller__st_11 ck_27;
  int v_578;
  Automobile_controller__st_10 v_577;
  int v_576;
  Automobile_controller__st_10 v_575;
  int v_584;
  Automobile_controller__st_10 v_583;
  int v_582;
  Automobile_controller__st_10 v_581;
  int v_580;
  Automobile_controller__st_10 v_579;
  int v_588;
  Automobile_controller__st_10 v_587;
  int v_586;
  Automobile_controller__st_10 v_585;
  int v_592;
  Automobile_controller__st_10 v_591;
  int v_590;
  Automobile_controller__st_10 v_589;
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
  int v_336;
  int v_335;
  int v_334;
  int v_333;
  int v_332;
  int v_331;
  int v_330;
  int v_329;
  int v_328;
  int v_327;
  int v_326;
  int v_325;
  int v_324;
  int v_323;
  int v_322;
  int v_321;
  int v_320;
  int v_319;
  int v_318;
  int v_317;
  int v_316;
  int v_315;
  int v_314;
  int v_313;
  int v_312;
  int v_311;
  int v_310;
  int v_309;
  int v_308;
  int v_307;
  int v_306;
  int v_305;
  int v_304;
  int v_303;
  int v_302;
  int v_301;
  int v_300;
  int v_299;
  int v_298;
  int v_297;
  int v_296;
  int v_295;
  int v_294;
  int v_293;
  int v_292;
  int v_291;
  int v_290;
  int v_289;
  int v_288;
  int v_287;
  int v_286;
  int v_285;
  int v_284;
  int v_283;
  int v_282;
  int v_281;
  int v_280;
  int v_279;
  int v_278;
  int v_277;
  int v_276;
  int v_275;
  int v_274;
  int v_273;
  int v_272;
  int v_271;
  int v_270;
  int v_269;
  int v_268;
  int v_267;
  int v_266;
  int v_265;
  int v_264;
  int v_263;
  int v_262;
  int v_261;
  int v_260;
  int v_259;
  int v_258;
  int v_257;
  int v_256;
  int v_255;
  int v_254;
  int v_253;
  int v_252;
  int v_251;
  int v_250;
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
  int i_1;
  int c_1;
  int v_1;
  int p_1;
  int codes;
  int phares_1;
  int veilleuses;
  Automobile_controller__etatPhares etat_3;
  int activated;
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
  int prop12;
  int prop13;
  int prop14;
  int prop15;
  int prop16;
  int prop17;
  int prop18;
  int prop19;
  int prop20;
  int prop21;
  int prop22;
  int prop23;
  int prop24;
  int prop25;
  int prop26;
  Automobile_controller__typeBalayage lessuieGlace;
  Automobile_controller__numero lnumero;
  float lqt;
  Automobile_controller__cause lcause;
  Automobile_controller__etatPhares lstate;
  Automobile_controller__retro lsortie;
  v_286 = (lumiere==Automobile_controller__Null);
  v_292 = (lumiere==Automobile_controller__Low);
  v_296 = (lumiere==Automobile_controller__Normal);
  v_308 = (lumiere==Automobile_controller__High);
  v_312 = (lumiere==Automobile_controller__Low);
  v_316 = (lumiere==Automobile_controller__Normal);
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
  activated = activeRegulateurTemperature;
  switch (self->ck) {
    case Automobile_controller__St_19_Eteint:
      v_337 = (commande||cle);
      if (v_337) {
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
      v_338 = !(commande);
      v_339 = !(cle);
      v_340 = (v_338&&v_339);
      if (v_340) {
        s_9_St_19_Allumer = Automobile_controller__St_19_Eteint;
      } else {
        s_9_St_19_Allumer = Automobile_controller__St_19_Allumer;
      };
      s_9 = s_9_St_19_Allumer;
      if (v_340) {
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
  v_283 = !(lmoteur);
  v_287 = (lmoteur&&v_286);
  v_288 = !(v_287);
  v_293 = (lmoteur&&v_292);
  v_294 = !(v_293);
  v_297 = (lmoteur&&v_296);
  v_298 = !(v_297);
  v_300 = !(lmoteur);
  v_303 = (lmoteur&&capteurPluie);
  v_304 = !(v_303);
  v_309 = (lmoteur&&v_308);
  v_310 = !(v_309);
  v_313 = (lmoteur&&v_312);
  v_314 = !(v_313);
  v_317 = (lmoteur&&v_316);
  v_318 = !(v_317);
  switch (self->ck_18) {
    case Automobile_controller__St_15_BalayageContiu:
      v_484 = (densite==Automobile_controller__Low);
      v_486 = (densite==Automobile_controller__Normal);
      break;
    case Automobile_controller__St_15_BalayageIntermittent:
      v_492 = (densite==Automobile_controller__High);
      v_494 = (densite==Automobile_controller__Low);
      break;
    case Automobile_controller__St_15_BalayageUnique:
      v_500 = (densite==Automobile_controller__High);
      v_502 = (densite==Automobile_controller__Normal);
      break;
    default:
      break;
  };
  switch (self->ck_20) {
    case Automobile_controller__St_14_Active:
      v_508 = !(detectionAccident_1);
      if (v_508) {
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
  v_270 = !(lairbag);
  v_271 = (lmoteur&&v_270);
  lemissionAppelUrgence = emissionAppelUrgence;
  _out->accident = (lairbag||lemissionAppelUrgence);
  v_290 = !(lemissionAppelUrgence);
  switch (self->ck_22) {
    case Automobile_controller__St_13_Detection:
      v_509 = !(detectionDepassementLigne);
      v_510 = !(detectionVolantLibre_1);
      v_511 = (v_509&&v_510);
      v_512 = !(detectionDefaillanceTechnique_1);
      v_513 = (v_511&&v_512);
      v_514 = !(detectionVehiculeAngleMort);
      v_515 = (v_513&&v_514);
      if (v_515) {
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
      v_516 = (detectionDepassementLigne||detectionVolantLibre_1);
      v_517 = (v_516||detectionDefaillanceTechnique_1);
      v_518 = (v_517||detectionVehiculeAngleMort);
      if (v_518) {
        s_3_St_13_Idle = Automobile_controller__St_13_Detection;
      } else {
        s_3_St_13_Idle = Automobile_controller__St_13_Idle;
      };
      s_3 = s_3_St_13_Idle;
      if (v_518) {
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
  v_274 = !(lLigne);
  v_333 = !(lLigne);
  prop4 = (lmoteur||v_333);
  lvolantLibre = volantLibre_1;
  _out->volantLibre = lvolantLibre;
  v_272 = !(lvolantLibre);
  v_273 = (v_271&&v_272);
  v_275 = (v_273&&v_274);
  v_332 = !(lvolantLibre);
  prop5 = (lmoteur||v_332);
  ldefaillanceTechnique = defaillanceTechnique_1;
  _out->defaillanceTechnique = ldefaillanceTechnique;
  v_276 = !(ldefaillanceTechnique);
  v_277 = (v_275&&v_276);
  v_331 = !(ldefaillanceTechnique);
  prop6 = (lmoteur||v_331);
  langleMort = dangerAngleMort;
  _out->angleMort = langleMort;
  v_278 = !(langleMort);
  v_279 = (v_277&&v_278);
  v_330 = !(langleMort);
  prop7 = (lmoteur||v_330);
  switch (self->ck_24) {
    case Automobile_controller__St_12_Feu:
      v_519 = !(presencePieton);
      v_520 = !(presencevehicule);
      v_521 = (v_519&&v_520);
      v_522 = (feu==Automobile_controller__Vert);
      v_523 = (v_521&&v_522);
      v_524 = !(presencePieton);
      v_525 = (v_524&&presencevehicule);
      if (v_525) {
        v_526 = Automobile_controller__St_12_Vehicule;
      } else {
        v_526 = Automobile_controller__St_12_Feu;
      };
      if (presencePieton) {
        v_528 = Automobile_controller__St_12_Pieton;
      } else {
        v_528 = v_526;
      };
      if (v_523) {
        s_2_St_12_Feu = Automobile_controller__St_12_Acceleration;
      } else {
        s_2_St_12_Feu = v_528;
      };
      if (v_525) {
        v_527 = true;
      } else {
        v_527 = self->pnr_2;
      };
      if (presencePieton) {
        v_529 = true;
      } else {
        v_529 = v_527;
      };
      if (v_523) {
        r_2_St_12_Feu = true;
      } else {
        r_2_St_12_Feu = v_529;
      };
      s_2 = s_2_St_12_Feu;
      r_2 = r_2_St_12_Feu;
      break;
    case Automobile_controller__St_12_Vehicule:
      v_530 = !(presencePieton);
      v_531 = !(presencevehicule);
      v_532 = (v_530&&v_531);
      v_533 = (feu==Automobile_controller__Vert);
      v_534 = (v_532&&v_533);
      v_535 = !(presencePieton);
      v_536 = !(presencevehicule);
      v_537 = (v_535&&v_536);
      v_538 = (feu==Automobile_controller__Vert);
      v_539 = !(v_538);
      v_540 = (v_537&&v_539);
      if (v_540) {
        v_541 = Automobile_controller__St_12_Feu;
      } else {
        v_541 = Automobile_controller__St_12_Vehicule;
      };
      if (presencePieton) {
        v_543 = Automobile_controller__St_12_Pieton;
      } else {
        v_543 = v_541;
      };
      if (v_534) {
        s_2_St_12_Vehicule = Automobile_controller__St_12_Acceleration;
      } else {
        s_2_St_12_Vehicule = v_543;
      };
      if (v_540) {
        v_542 = true;
      } else {
        v_542 = self->pnr_2;
      };
      if (presencePieton) {
        v_544 = true;
      } else {
        v_544 = v_542;
      };
      if (v_534) {
        r_2_St_12_Vehicule = true;
      } else {
        r_2_St_12_Vehicule = v_544;
      };
      s_2 = s_2_St_12_Vehicule;
      r_2 = r_2_St_12_Vehicule;
      break;
    case Automobile_controller__St_12_Pieton:
      v_545 = !(presencePieton);
      v_546 = !(presencevehicule);
      v_547 = (v_545&&v_546);
      v_548 = (feu==Automobile_controller__Vert);
      v_549 = (v_547&&v_548);
      v_550 = !(presencePieton);
      v_551 = (v_550&&presencevehicule);
      v_552 = !(presencePieton);
      v_553 = !(presencevehicule);
      v_554 = (v_552&&v_553);
      v_555 = (feu==Automobile_controller__Vert);
      v_556 = !(v_555);
      v_557 = (v_554&&v_556);
      if (v_557) {
        v_558 = Automobile_controller__St_12_Feu;
      } else {
        v_558 = Automobile_controller__St_12_Pieton;
      };
      if (v_551) {
        v_560 = Automobile_controller__St_12_Vehicule;
      } else {
        v_560 = v_558;
      };
      if (v_549) {
        s_2_St_12_Pieton = Automobile_controller__St_12_Acceleration;
      } else {
        s_2_St_12_Pieton = v_560;
      };
      if (v_557) {
        v_559 = true;
      } else {
        v_559 = self->pnr_2;
      };
      if (v_551) {
        v_561 = true;
      } else {
        v_561 = v_559;
      };
      if (v_549) {
        r_2_St_12_Pieton = true;
      } else {
        r_2_St_12_Pieton = v_561;
      };
      s_2 = s_2_St_12_Pieton;
      r_2 = r_2_St_12_Pieton;
      break;
    case Automobile_controller__St_12_Acceleration:
      v_562 = !(presencePieton);
      v_563 = (v_562&&presencevehicule);
      v_564 = !(presencePieton);
      v_565 = !(presencevehicule);
      v_566 = (v_564&&v_565);
      v_567 = (feu==Automobile_controller__Vert);
      v_568 = !(v_567);
      v_569 = (v_566&&v_568);
      if (v_569) {
        v_570 = Automobile_controller__St_12_Feu;
      } else {
        v_570 = Automobile_controller__St_12_Acceleration;
      };
      if (v_563) {
        v_572 = Automobile_controller__St_12_Vehicule;
      } else {
        v_572 = v_570;
      };
      if (presencePieton) {
        s_2_St_12_Acceleration = Automobile_controller__St_12_Pieton;
      } else {
        s_2_St_12_Acceleration = v_572;
      };
      s_2 = s_2_St_12_Acceleration;
      if (v_569) {
        v_571 = true;
      } else {
        v_571 = self->pnr_2;
      };
      if (v_563) {
        v_573 = true;
      } else {
        v_573 = v_571;
      };
      if (presencePieton) {
        r_2_St_12_Acceleration = true;
      } else {
        r_2_St_12_Acceleration = v_573;
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
  v_280 = !(lfrein);
  v_281 = (v_279&&v_280);
  v_282 = !(v_281);
  v_320 = !(lfrein);
  lcause = causeFreinage_1;
  _out->causeFreinage = lcause;
  switch (self->ck_26) {
    case Automobile_controller__St_11_Active:
      v_574 = !(activated);
      if (v_574) {
        s_1_St_11_Active = Automobile_controller__St_11_Desactive;
        r_1_St_11_Active = true;
      } else {
        s_1_St_11_Active = Automobile_controller__St_11_Active;
        r_1_St_11_Active = self->pnr_1;
      };
      s_1 = s_1_St_11_Active;
      r_1 = r_1_St_11_Active;
      break;
    case Automobile_controller__St_11_Desactive:
      if (activated) {
        s_1_St_11_Desactive = Automobile_controller__St_11_Active;
      } else {
        s_1_St_11_Desactive = Automobile_controller__St_11_Desactive;
      };
      s_1 = s_1_St_11_Desactive;
      if (activated) {
        r_1_St_11_Desactive = true;
      } else {
        r_1_St_11_Desactive = self->pnr_1;
      };
      r_1 = r_1_St_11_Desactive;
      break;
    default:
      break;
  };
  ck_27 = s_1;
  switch (ck_27) {
    case Automobile_controller__St_11_Active:
      ns_1_St_11_Active = Automobile_controller__St_11_Active;
      nr_1_St_11_Active = false;
      qt_St_11_Active = (19.000000-capteur);
      etat_2_St_11_Active = true;
      ns_1 = ns_1_St_11_Active;
      nr_1 = nr_1_St_11_Active;
      qt = qt_St_11_Active;
      etat_2 = etat_2_St_11_Active;
      break;
    case Automobile_controller__St_11_Desactive:
      ns_1_St_11_Desactive = Automobile_controller__St_11_Desactive;
      ns_1 = ns_1_St_11_Desactive;
      nr_1_St_11_Desactive = false;
      nr_1 = nr_1_St_11_Desactive;
      qt_St_11_Desactive = 0.000000;
      qt = qt_St_11_Desactive;
      etat_2_St_11_Desactive = false;
      etat_2 = etat_2_St_11_Desactive;
      break;
    default:
      break;
  };
  lqt = qt;
  _out->quantiteRegule = lqt;
  letatRegulateurTemperature = etat_2;
  _out->etatRegulateurTemperature = letatRegulateurTemperature;
  Automobile_controller__automobile_ctrlr0_step(activeRegulateurTemperature,
                                                capteurDectecteurFeu,
                                                capteurPluie,
                                                capteurTemperature, self->ck,
                                                self->ck_12, self->ck_14,
                                                self->ck_16, self->ck_18,
                                                self->ck_20, self->ck_22,
                                                self->ck_24, self->ck_26,
                                                self->ck_28, cleVoiture,
                                                commandeVoiture,
                                                densitePluie,
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
  c = Automobile_controller__automobile_ctrlr0_out_st.c;
  cclose = Automobile_controller__automobile_ctrlr0_out_st.cclose;
  con = Automobile_controller__automobile_ctrlr0_out_st.con;
  cp = Automobile_controller__automobile_ctrlr0_out_st.cp;
  frein = Automobile_controller__automobile_ctrlr0_out_st.frein;
  i = Automobile_controller__automobile_ctrlr0_out_st.i;
  jour = Automobile_controller__automobile_ctrlr0_out_st.jour;
  normal = Automobile_controller__automobile_ctrlr0_out_st.normal;
  nuit = Automobile_controller__automobile_ctrlr0_out_st.nuit;
  p = Automobile_controller__automobile_ctrlr0_out_st.p;
  td = Automobile_controller__automobile_ctrlr0_out_st.td;
  ti = Automobile_controller__automobile_ctrlr0_out_st.ti;
  v = Automobile_controller__automobile_ctrlr0_out_st.v;
  boiteDeVitesse_1 = boiteDeVitesse;
  accelerateur_1 = accelerateur;
  frein_1 = frein;
  nuit_1 = nuit;
  jour_1 = jour;
  normal_1 = normal;
  cclose_1 = cclose;
  con_1 = con;
  p_1 = p;
  v_1 = v;
  c_1 = c;
  i_1 = i;
  cpn = cp;
  tin = ti;
  tdn = td;
  switch (self->ck_12) {
    case Automobile_controller__St_18_Arriere:
      v_341 = (boiteDeVitesse_1==Automobile_controller__Un);
      v_342 = (boiteDeVitesse_1==Automobile_controller__Deux);
      v_343 = (boiteDeVitesse_1==Automobile_controller__Quatre);
      v_344 = (boiteDeVitesse_1==Automobile_controller__Trois);
      v_345 = (boiteDeVitesse_1==Automobile_controller__Cinq);
      v_346 = (boiteDeVitesse_1==Automobile_controller__PointMort);
      if (v_346) {
        v_347 = Automobile_controller__St_18_Zero;
      } else {
        v_347 = Automobile_controller__St_18_Arriere;
      };
      if (v_345) {
        v_349 = Automobile_controller__St_18_Cinquieme;
      } else {
        v_349 = v_347;
      };
      if (v_344) {
        v_351 = Automobile_controller__St_18_Troisieme;
      } else {
        v_351 = v_349;
      };
      if (v_343) {
        v_353 = Automobile_controller__St_18_Troisieme;
      } else {
        v_353 = v_351;
      };
      if (v_342) {
        v_355 = Automobile_controller__St_18_Deuxieme;
      } else {
        v_355 = v_353;
      };
      if (v_341) {
        s_8_St_18_Arriere = Automobile_controller__St_18_Premier;
      } else {
        s_8_St_18_Arriere = v_355;
      };
      if (v_346) {
        v_348 = true;
      } else {
        v_348 = self->pnr_8;
      };
      if (v_345) {
        v_350 = true;
      } else {
        v_350 = v_348;
      };
      if (v_344) {
        v_352 = true;
      } else {
        v_352 = v_350;
      };
      if (v_343) {
        v_354 = true;
      } else {
        v_354 = v_352;
      };
      if (v_342) {
        v_356 = true;
      } else {
        v_356 = v_354;
      };
      if (v_341) {
        r_8_St_18_Arriere = true;
      } else {
        r_8_St_18_Arriere = v_356;
      };
      s_8 = s_8_St_18_Arriere;
      r_8 = r_8_St_18_Arriere;
      break;
    case Automobile_controller__St_18_Cinquieme:
      v_357 = (boiteDeVitesse_1==Automobile_controller__Un);
      v_358 = (boiteDeVitesse_1==Automobile_controller__Deux);
      v_359 = (boiteDeVitesse_1==Automobile_controller__Quatre);
      v_360 = (boiteDeVitesse_1==Automobile_controller__Trois);
      v_361 = (boiteDeVitesse_1==Automobile_controller__Six);
      v_362 = (boiteDeVitesse_1==Automobile_controller__PointMort);
      if (v_362) {
        v_363 = Automobile_controller__St_18_Zero;
      } else {
        v_363 = Automobile_controller__St_18_Cinquieme;
      };
      if (v_361) {
        v_365 = Automobile_controller__St_18_Arriere;
      } else {
        v_365 = v_363;
      };
      if (v_360) {
        v_367 = Automobile_controller__St_18_Troisieme;
      } else {
        v_367 = v_365;
      };
      if (v_359) {
        v_369 = Automobile_controller__St_18_Troisieme;
      } else {
        v_369 = v_367;
      };
      if (v_358) {
        v_371 = Automobile_controller__St_18_Deuxieme;
      } else {
        v_371 = v_369;
      };
      if (v_357) {
        s_8_St_18_Cinquieme = Automobile_controller__St_18_Premier;
      } else {
        s_8_St_18_Cinquieme = v_371;
      };
      if (v_362) {
        v_364 = true;
      } else {
        v_364 = self->pnr_8;
      };
      if (v_361) {
        v_366 = true;
      } else {
        v_366 = v_364;
      };
      if (v_360) {
        v_368 = true;
      } else {
        v_368 = v_366;
      };
      if (v_359) {
        v_370 = true;
      } else {
        v_370 = v_368;
      };
      if (v_358) {
        v_372 = true;
      } else {
        v_372 = v_370;
      };
      if (v_357) {
        r_8_St_18_Cinquieme = true;
      } else {
        r_8_St_18_Cinquieme = v_372;
      };
      s_8 = s_8_St_18_Cinquieme;
      r_8 = r_8_St_18_Cinquieme;
      break;
    case Automobile_controller__St_18_Quatrieme:
      v_373 = (boiteDeVitesse_1==Automobile_controller__Un);
      v_374 = (boiteDeVitesse_1==Automobile_controller__Deux);
      v_375 = (boiteDeVitesse_1==Automobile_controller__Trois);
      v_376 = (boiteDeVitesse_1==Automobile_controller__Cinq);
      v_377 = (boiteDeVitesse_1==Automobile_controller__Six);
      v_378 = (boiteDeVitesse_1==Automobile_controller__PointMort);
      if (v_378) {
        v_379 = Automobile_controller__St_18_Zero;
      } else {
        v_379 = Automobile_controller__St_18_Quatrieme;
      };
      if (v_377) {
        v_381 = Automobile_controller__St_18_Arriere;
      } else {
        v_381 = v_379;
      };
      if (v_376) {
        v_383 = Automobile_controller__St_18_Cinquieme;
      } else {
        v_383 = v_381;
      };
      if (v_375) {
        v_385 = Automobile_controller__St_18_Troisieme;
      } else {
        v_385 = v_383;
      };
      if (v_374) {
        v_387 = Automobile_controller__St_18_Deuxieme;
      } else {
        v_387 = v_385;
      };
      if (v_373) {
        s_8_St_18_Quatrieme = Automobile_controller__St_18_Premier;
      } else {
        s_8_St_18_Quatrieme = v_387;
      };
      if (v_378) {
        v_380 = true;
      } else {
        v_380 = self->pnr_8;
      };
      if (v_377) {
        v_382 = true;
      } else {
        v_382 = v_380;
      };
      if (v_376) {
        v_384 = true;
      } else {
        v_384 = v_382;
      };
      if (v_375) {
        v_386 = true;
      } else {
        v_386 = v_384;
      };
      if (v_374) {
        v_388 = true;
      } else {
        v_388 = v_386;
      };
      if (v_373) {
        r_8_St_18_Quatrieme = true;
      } else {
        r_8_St_18_Quatrieme = v_388;
      };
      s_8 = s_8_St_18_Quatrieme;
      r_8 = r_8_St_18_Quatrieme;
      break;
    case Automobile_controller__St_18_Troisieme:
      v_389 = (boiteDeVitesse_1==Automobile_controller__Un);
      v_390 = (boiteDeVitesse_1==Automobile_controller__Deux);
      v_391 = (boiteDeVitesse_1==Automobile_controller__Quatre);
      v_392 = (boiteDeVitesse_1==Automobile_controller__Cinq);
      v_393 = (boiteDeVitesse_1==Automobile_controller__Six);
      v_394 = (boiteDeVitesse_1==Automobile_controller__PointMort);
      if (v_394) {
        v_395 = Automobile_controller__St_18_Zero;
      } else {
        v_395 = Automobile_controller__St_18_Troisieme;
      };
      if (v_393) {
        v_397 = Automobile_controller__St_18_Arriere;
      } else {
        v_397 = v_395;
      };
      if (v_392) {
        v_399 = Automobile_controller__St_18_Cinquieme;
      } else {
        v_399 = v_397;
      };
      if (v_391) {
        v_401 = Automobile_controller__St_18_Quatrieme;
      } else {
        v_401 = v_399;
      };
      if (v_390) {
        v_403 = Automobile_controller__St_18_Deuxieme;
      } else {
        v_403 = v_401;
      };
      if (v_389) {
        s_8_St_18_Troisieme = Automobile_controller__St_18_Premier;
      } else {
        s_8_St_18_Troisieme = v_403;
      };
      if (v_394) {
        v_396 = true;
      } else {
        v_396 = self->pnr_8;
      };
      if (v_393) {
        v_398 = true;
      } else {
        v_398 = v_396;
      };
      if (v_392) {
        v_400 = true;
      } else {
        v_400 = v_398;
      };
      if (v_391) {
        v_402 = true;
      } else {
        v_402 = v_400;
      };
      if (v_390) {
        v_404 = true;
      } else {
        v_404 = v_402;
      };
      if (v_389) {
        r_8_St_18_Troisieme = true;
      } else {
        r_8_St_18_Troisieme = v_404;
      };
      s_8 = s_8_St_18_Troisieme;
      r_8 = r_8_St_18_Troisieme;
      break;
    case Automobile_controller__St_18_Deuxieme:
      v_405 = (boiteDeVitesse_1==Automobile_controller__Un);
      v_406 = (boiteDeVitesse_1==Automobile_controller__Trois);
      v_407 = (boiteDeVitesse_1==Automobile_controller__Quatre);
      v_408 = (boiteDeVitesse_1==Automobile_controller__Cinq);
      v_409 = (boiteDeVitesse_1==Automobile_controller__Six);
      v_410 = (boiteDeVitesse_1==Automobile_controller__PointMort);
      if (v_410) {
        v_411 = Automobile_controller__St_18_Zero;
      } else {
        v_411 = Automobile_controller__St_18_Deuxieme;
      };
      if (v_409) {
        v_413 = Automobile_controller__St_18_Arriere;
      } else {
        v_413 = v_411;
      };
      if (v_408) {
        v_415 = Automobile_controller__St_18_Cinquieme;
      } else {
        v_415 = v_413;
      };
      if (v_407) {
        v_417 = Automobile_controller__St_18_Quatrieme;
      } else {
        v_417 = v_415;
      };
      if (v_406) {
        v_419 = Automobile_controller__St_18_Troisieme;
      } else {
        v_419 = v_417;
      };
      if (v_405) {
        s_8_St_18_Deuxieme = Automobile_controller__St_18_Premier;
      } else {
        s_8_St_18_Deuxieme = v_419;
      };
      if (v_410) {
        v_412 = true;
      } else {
        v_412 = self->pnr_8;
      };
      if (v_409) {
        v_414 = true;
      } else {
        v_414 = v_412;
      };
      if (v_408) {
        v_416 = true;
      } else {
        v_416 = v_414;
      };
      if (v_407) {
        v_418 = true;
      } else {
        v_418 = v_416;
      };
      if (v_406) {
        v_420 = true;
      } else {
        v_420 = v_418;
      };
      if (v_405) {
        r_8_St_18_Deuxieme = true;
      } else {
        r_8_St_18_Deuxieme = v_420;
      };
      s_8 = s_8_St_18_Deuxieme;
      r_8 = r_8_St_18_Deuxieme;
      break;
    case Automobile_controller__St_18_Premier:
      v_421 = (boiteDeVitesse_1==Automobile_controller__Deux);
      v_422 = (boiteDeVitesse_1==Automobile_controller__Trois);
      v_423 = (boiteDeVitesse_1==Automobile_controller__Quatre);
      v_424 = (boiteDeVitesse_1==Automobile_controller__Cinq);
      v_425 = (boiteDeVitesse_1==Automobile_controller__Six);
      v_426 = (boiteDeVitesse_1==Automobile_controller__PointMort);
      if (v_426) {
        v_427 = Automobile_controller__St_18_Zero;
      } else {
        v_427 = Automobile_controller__St_18_Premier;
      };
      if (v_425) {
        v_429 = Automobile_controller__St_18_Arriere;
      } else {
        v_429 = v_427;
      };
      if (v_424) {
        v_431 = Automobile_controller__St_18_Cinquieme;
      } else {
        v_431 = v_429;
      };
      if (v_423) {
        v_433 = Automobile_controller__St_18_Quatrieme;
      } else {
        v_433 = v_431;
      };
      if (v_422) {
        v_435 = Automobile_controller__St_18_Troisieme;
      } else {
        v_435 = v_433;
      };
      if (v_421) {
        s_8_St_18_Premier = Automobile_controller__St_18_Deuxieme;
      } else {
        s_8_St_18_Premier = v_435;
      };
      if (v_426) {
        v_428 = true;
      } else {
        v_428 = self->pnr_8;
      };
      if (v_425) {
        v_430 = true;
      } else {
        v_430 = v_428;
      };
      if (v_424) {
        v_432 = true;
      } else {
        v_432 = v_430;
      };
      if (v_423) {
        v_434 = true;
      } else {
        v_434 = v_432;
      };
      if (v_422) {
        v_436 = true;
      } else {
        v_436 = v_434;
      };
      if (v_421) {
        r_8_St_18_Premier = true;
      } else {
        r_8_St_18_Premier = v_436;
      };
      s_8 = s_8_St_18_Premier;
      r_8 = r_8_St_18_Premier;
      break;
    case Automobile_controller__St_18_Zero:
      v_437 = (boiteDeVitesse_1==Automobile_controller__Deux);
      v_438 = (boiteDeVitesse_1==Automobile_controller__Trois);
      v_439 = (boiteDeVitesse_1==Automobile_controller__Quatre);
      v_440 = (boiteDeVitesse_1==Automobile_controller__Cinq);
      v_441 = (boiteDeVitesse_1==Automobile_controller__Six);
      v_442 = (boiteDeVitesse_1==Automobile_controller__Un);
      if (v_442) {
        v_443 = Automobile_controller__St_18_Premier;
      } else {
        v_443 = Automobile_controller__St_18_Zero;
      };
      if (v_441) {
        v_445 = Automobile_controller__St_18_Arriere;
      } else {
        v_445 = v_443;
      };
      if (v_440) {
        v_447 = Automobile_controller__St_18_Cinquieme;
      } else {
        v_447 = v_445;
      };
      if (v_439) {
        v_449 = Automobile_controller__St_18_Quatrieme;
      } else {
        v_449 = v_447;
      };
      if (v_438) {
        v_451 = Automobile_controller__St_18_Troisieme;
      } else {
        v_451 = v_449;
      };
      if (v_437) {
        s_8_St_18_Zero = Automobile_controller__St_18_Deuxieme;
      } else {
        s_8_St_18_Zero = v_451;
      };
      s_8 = s_8_St_18_Zero;
      if (v_442) {
        v_444 = true;
      } else {
        v_444 = self->pnr_8;
      };
      if (v_441) {
        v_446 = true;
      } else {
        v_446 = v_444;
      };
      if (v_440) {
        v_448 = true;
      } else {
        v_448 = v_446;
      };
      if (v_439) {
        v_450 = true;
      } else {
        v_450 = v_448;
      };
      if (v_438) {
        v_452 = true;
      } else {
        v_452 = v_450;
      };
      if (v_437) {
        r_8_St_18_Zero = true;
      } else {
        r_8_St_18_Zero = v_452;
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
  v_323 = (lnumero==Automobile_controller__PointMort);
  v_324 = !(v_323);
  v_325 = (lnumero==Automobile_controller__PointMort);
  v_336 = (lnumero==Automobile_controller__PointMort);
  prop1 = (lmoteur||v_336);
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
  prop26 = (v_282||lavance);
  prop12 = (lavance||v_325);
  _out->avance = lavance;
  v_291 = !(lavance);
  prop23 = (v_290||v_291);
  v_321 = !(lavance);
  prop14 = (v_320||v_321);
  v_322 = !(lavance);
  prop13 = (v_322||v_324);
  v_326 = !(lavance);
  prop11 = (lmoteur||v_326);
  switch (self->ck_16) {
    case Automobile_controller__St_16_PositionNuit:
      v_453 = !(normal_1);
      v_454 = !(jour_1);
      v_455 = (v_453&&v_454);
      v_456 = !(nuit_1);
      v_457 = (v_455&&v_456);
      if (v_457) {
        v_458 = Automobile_controller__St_16_Desacitve;
      } else {
        v_458 = Automobile_controller__St_16_PositionNuit;
      };
      if (normal_1) {
        v_460 = Automobile_controller__St_16_PositionNormale;
      } else {
        v_460 = v_458;
      };
      if (jour_1) {
        s_6_St_16_PositionNuit = Automobile_controller__St_16_PositionJour;
      } else {
        s_6_St_16_PositionNuit = v_460;
      };
      if (v_457) {
        v_459 = true;
      } else {
        v_459 = self->pnr_6;
      };
      if (normal_1) {
        v_461 = true;
      } else {
        v_461 = v_459;
      };
      if (jour_1) {
        r_6_St_16_PositionNuit = true;
      } else {
        r_6_St_16_PositionNuit = v_461;
      };
      s_6 = s_6_St_16_PositionNuit;
      r_6 = r_6_St_16_PositionNuit;
      break;
    case Automobile_controller__St_16_PositionJour:
      v_462 = !(normal_1);
      v_463 = !(jour_1);
      v_464 = (v_462&&v_463);
      v_465 = !(nuit_1);
      v_466 = (v_464&&v_465);
      if (v_466) {
        v_467 = Automobile_controller__St_16_Desacitve;
      } else {
        v_467 = Automobile_controller__St_16_PositionJour;
      };
      if (nuit_1) {
        v_469 = Automobile_controller__St_16_PositionNuit;
      } else {
        v_469 = v_467;
      };
      if (normal_1) {
        s_6_St_16_PositionJour = Automobile_controller__St_16_PositionNormale;
      } else {
        s_6_St_16_PositionJour = v_469;
      };
      if (v_466) {
        v_468 = true;
      } else {
        v_468 = self->pnr_6;
      };
      if (nuit_1) {
        v_470 = true;
      } else {
        v_470 = v_468;
      };
      if (normal_1) {
        r_6_St_16_PositionJour = true;
      } else {
        r_6_St_16_PositionJour = v_470;
      };
      s_6 = s_6_St_16_PositionJour;
      r_6 = r_6_St_16_PositionJour;
      break;
    case Automobile_controller__St_16_PositionNormale:
      v_471 = !(normal_1);
      v_472 = !(jour_1);
      v_473 = (v_471&&v_472);
      v_474 = !(nuit_1);
      v_475 = (v_473&&v_474);
      if (v_475) {
        v_476 = Automobile_controller__St_16_Desacitve;
      } else {
        v_476 = Automobile_controller__St_16_PositionNormale;
      };
      if (nuit_1) {
        v_478 = Automobile_controller__St_16_PositionNuit;
      } else {
        v_478 = v_476;
      };
      if (jour_1) {
        s_6_St_16_PositionNormale = Automobile_controller__St_16_PositionJour;
      } else {
        s_6_St_16_PositionNormale = v_478;
      };
      if (v_475) {
        v_477 = true;
      } else {
        v_477 = self->pnr_6;
      };
      if (nuit_1) {
        v_479 = true;
      } else {
        v_479 = v_477;
      };
      if (jour_1) {
        r_6_St_16_PositionNormale = true;
      } else {
        r_6_St_16_PositionNormale = v_479;
      };
      s_6 = s_6_St_16_PositionNormale;
      r_6 = r_6_St_16_PositionNormale;
      break;
    case Automobile_controller__St_16_Desacitve:
      if (normal_1) {
        v_480 = Automobile_controller__St_16_PositionNormale;
      } else {
        v_480 = Automobile_controller__St_16_Desacitve;
      };
      if (nuit_1) {
        v_482 = Automobile_controller__St_16_PositionNuit;
      } else {
        v_482 = v_480;
      };
      if (jour_1) {
        s_6_St_16_Desacitve = Automobile_controller__St_16_PositionJour;
      } else {
        s_6_St_16_Desacitve = v_482;
      };
      s_6 = s_6_St_16_Desacitve;
      if (normal_1) {
        v_481 = true;
      } else {
        v_481 = self->pnr_6;
      };
      if (nuit_1) {
        v_483 = true;
      } else {
        v_483 = v_481;
      };
      if (jour_1) {
        r_6_St_16_Desacitve = true;
      } else {
        r_6_St_16_Desacitve = v_483;
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
  v_335 = !(lretroviseur);
  prop2 = (lmoteur||v_335);
  v_250 = (prop1&&prop2);
  lsortie = sortie;
  _out->retroviseurStatus = lsortie;
  v_289 = (lsortie==Automobile_controller__PositionNormale);
  prop24 = (v_288||v_289);
  v_301 = (lsortie==Automobile_controller__Desactive);
  v_302 = !(v_301);
  prop20 = (v_300||v_302);
  v_311 = (lsortie==Automobile_controller__PositionJour);
  prop17 = (v_310||v_311);
  v_315 = (lsortie==Automobile_controller__PositionNuit);
  prop16 = (v_314||v_315);
  v_319 = (lsortie==Automobile_controller__PositionNormale);
  prop15 = (v_318||v_319);
  switch (self->ck_18) {
    case Automobile_controller__St_15_BalayageContiu:
      v_485 = (con_1&&v_484);
      v_487 = (con_1&&v_486);
      if (v_487) {
        v_488 = Automobile_controller__St_15_BalayageIntermittent;
      } else {
        v_488 = Automobile_controller__St_15_BalayageContiu;
      };
      if (v_485) {
        v_490 = Automobile_controller__St_15_BalayageUnique;
      } else {
        v_490 = v_488;
      };
      if (cclose_1) {
        s_5_St_15_BalayageContiu = Automobile_controller__St_15_Desactive;
      } else {
        s_5_St_15_BalayageContiu = v_490;
      };
      if (v_487) {
        v_489 = true;
      } else {
        v_489 = self->pnr_5;
      };
      if (v_485) {
        v_491 = true;
      } else {
        v_491 = v_489;
      };
      if (cclose_1) {
        r_5_St_15_BalayageContiu = true;
      } else {
        r_5_St_15_BalayageContiu = v_491;
      };
      s_5 = s_5_St_15_BalayageContiu;
      r_5 = r_5_St_15_BalayageContiu;
      break;
    case Automobile_controller__St_15_BalayageIntermittent:
      v_493 = (con_1&&v_492);
      v_495 = (con_1&&v_494);
      if (v_495) {
        v_496 = Automobile_controller__St_15_BalayageUnique;
      } else {
        v_496 = Automobile_controller__St_15_BalayageIntermittent;
      };
      if (v_493) {
        v_498 = Automobile_controller__St_15_BalayageContiu;
      } else {
        v_498 = v_496;
      };
      if (cclose_1) {
        s_5_St_15_BalayageIntermittent = Automobile_controller__St_15_Desactive;
      } else {
        s_5_St_15_BalayageIntermittent = v_498;
      };
      if (v_495) {
        v_497 = true;
      } else {
        v_497 = self->pnr_5;
      };
      if (v_493) {
        v_499 = true;
      } else {
        v_499 = v_497;
      };
      if (cclose_1) {
        r_5_St_15_BalayageIntermittent = true;
      } else {
        r_5_St_15_BalayageIntermittent = v_499;
      };
      s_5 = s_5_St_15_BalayageIntermittent;
      r_5 = r_5_St_15_BalayageIntermittent;
      break;
    case Automobile_controller__St_15_BalayageUnique:
      v_501 = (con_1&&v_500);
      v_503 = (con_1&&v_502);
      if (v_503) {
        v_504 = Automobile_controller__St_15_BalayageIntermittent;
      } else {
        v_504 = Automobile_controller__St_15_BalayageUnique;
      };
      if (v_501) {
        v_506 = Automobile_controller__St_15_BalayageContiu;
      } else {
        v_506 = v_504;
      };
      if (cclose_1) {
        s_5_St_15_BalayageUnique = Automobile_controller__St_15_Desactive;
      } else {
        s_5_St_15_BalayageUnique = v_506;
      };
      if (v_503) {
        v_505 = true;
      } else {
        v_505 = self->pnr_5;
      };
      if (v_501) {
        v_507 = true;
      } else {
        v_507 = v_505;
      };
      if (cclose_1) {
        r_5_St_15_BalayageUnique = true;
      } else {
        r_5_St_15_BalayageUnique = v_507;
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
  v_305 = (lessuieGlace==Automobile_controller__Deactivated);
  v_306 = !(v_305);
  prop19 = (v_304||v_306);
  v_307 = (lessuieGlace==Automobile_controller__Deactivated);
  prop18 = (capteurPluie||v_307);
  v_334 = (lessuieGlace==Automobile_controller__Deactivated);
  prop3 = (lmoteur||v_334);
  v_251 = (v_250&&prop3);
  switch (self->ck_28) {
    case Automobile_controller__St_10_Phares:
      if (i_1) {
        v_575 = Automobile_controller__St_10_Idle;
      } else {
        v_575 = Automobile_controller__St_10_Phares;
      };
      if (v_1) {
        v_577 = Automobile_controller__St_10_Veilleuses;
      } else {
        v_577 = v_575;
      };
      if (cpn) {
        s_St_10_Phares = Automobile_controller__St_10_Codes;
      } else {
        s_St_10_Phares = v_577;
      };
      if (i_1) {
        v_576 = true;
      } else {
        v_576 = self->pnr;
      };
      if (v_1) {
        v_578 = true;
      } else {
        v_578 = v_576;
      };
      if (cpn) {
        r_St_10_Phares = true;
      } else {
        r_St_10_Phares = v_578;
      };
      s = s_St_10_Phares;
      r = r_St_10_Phares;
      break;
    case Automobile_controller__St_10_Codes:
      if (i_1) {
        v_579 = Automobile_controller__St_10_Idle;
      } else {
        v_579 = Automobile_controller__St_10_Codes;
      };
      if (c_1) {
        v_581 = Automobile_controller__St_10_Codes;
      } else {
        v_581 = v_579;
      };
      if (cpn) {
        v_583 = Automobile_controller__St_10_Phares;
      } else {
        v_583 = v_581;
      };
      if (tin) {
        s_St_10_Codes = Automobile_controller__St_10_Veilleuses;
      } else {
        s_St_10_Codes = v_583;
      };
      if (i_1) {
        v_580 = true;
      } else {
        v_580 = self->pnr;
      };
      if (c_1) {
        v_582 = true;
      } else {
        v_582 = v_580;
      };
      if (cpn) {
        v_584 = true;
      } else {
        v_584 = v_582;
      };
      if (tin) {
        r_St_10_Codes = true;
      } else {
        r_St_10_Codes = v_584;
      };
      s = s_St_10_Codes;
      r = r_St_10_Codes;
      break;
    case Automobile_controller__St_10_Veilleuses:
      if (p_1) {
        v_585 = Automobile_controller__St_10_Phares;
      } else {
        v_585 = Automobile_controller__St_10_Veilleuses;
      };
      if (tdn) {
        v_587 = Automobile_controller__St_10_Codes;
      } else {
        v_587 = v_585;
      };
      if (tin) {
        s_St_10_Veilleuses = Automobile_controller__St_10_Idle;
      } else {
        s_St_10_Veilleuses = v_587;
      };
      if (p_1) {
        v_586 = true;
      } else {
        v_586 = self->pnr;
      };
      if (tdn) {
        v_588 = true;
      } else {
        v_588 = v_586;
      };
      if (tin) {
        r_St_10_Veilleuses = true;
      } else {
        r_St_10_Veilleuses = v_588;
      };
      s = s_St_10_Veilleuses;
      r = r_St_10_Veilleuses;
      break;
    case Automobile_controller__St_10_Idle:
      if (p_1) {
        v_589 = Automobile_controller__St_10_Phares;
      } else {
        v_589 = Automobile_controller__St_10_Idle;
      };
      if (c_1) {
        v_591 = Automobile_controller__St_10_Codes;
      } else {
        v_591 = v_589;
      };
      if (tdn) {
        s_St_10_Idle = Automobile_controller__St_10_Veilleuses;
      } else {
        s_St_10_Idle = v_591;
      };
      s = s_St_10_Idle;
      if (p_1) {
        v_590 = true;
      } else {
        v_590 = self->pnr;
      };
      if (c_1) {
        v_592 = true;
      } else {
        v_592 = v_590;
      };
      if (tdn) {
        r_St_10_Idle = true;
      } else {
        r_St_10_Idle = v_592;
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
      etat_3_St_10_Idle = Automobile_controller__NoLum;
      etat_3 = etat_3_St_10_Idle;
      break;
    default:
      break;
  };
  lcodes = codes;
  v_329 = !(lcodes);
  prop8 = (lmoteur||v_329);
  v_252 = (v_251&&prop8);
  lphares = phares_1;
  v_328 = !(lphares);
  prop9 = (lmoteur||v_328);
  v_253 = (v_252&&prop9);
  lveilleuses = veilleuses;
  v_327 = !(lveilleuses);
  prop10 = (lmoteur||v_327);
  v_254 = (v_253&&prop10);
  v_255 = (v_254&&prop11);
  v_256 = (v_255&&prop12);
  v_257 = (v_256&&prop13);
  v_258 = (v_257&&prop14);
  v_259 = (v_258&&prop15);
  v_260 = (v_259&&prop16);
  v_261 = (v_260&&prop17);
  v_262 = (v_261&&prop18);
  v_263 = (v_262&&prop19);
  v_264 = (v_263&&prop20);
  lstate = etat_3;
  _out->phares = lstate;
  v_284 = (lstate==Automobile_controller__NoLum);
  v_285 = !(v_284);
  prop25 = (v_283||v_285);
  v_295 = (lstate==Automobile_controller__Phares);
  prop22 = (v_294||v_295);
  v_299 = (lstate==Automobile_controller__Veilleuses);
  prop21 = (v_298||v_299);
  v_265 = (v_264&&prop21);
  v_266 = (v_265&&prop22);
  v_267 = (v_266&&prop23);
  v_268 = (v_267&&prop24);
  v_269 = (v_268&&prop25);
  _out->property = (v_269&&prop26);
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

