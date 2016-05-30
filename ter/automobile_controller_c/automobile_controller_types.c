/* --- Generated the 30/5/2016 at 14:52 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -target c automobile_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "automobile_controller_types.h"

Automobile_controller__cause Automobile_controller__cause_of_string(char* s) {
  if ((strcmp(s, "PresencePieton")==0)) {
    return Automobile_controller__PresencePieton;
  };
  if ((strcmp(s, "Presencevehicule")==0)) {
    return Automobile_controller__Presencevehicule;
  };
  if ((strcmp(s, "Feu")==0)) {
    return Automobile_controller__Feu;
  };
  if ((strcmp(s, "None")==0)) {
    return Automobile_controller__None;
  };
}

char* string_of_Automobile_controller__cause(Automobile_controller__cause x,
                                             char* buf) {
  switch (x) {
    case Automobile_controller__PresencePieton:
      strcpy(buf, "PresencePieton");
      break;
    case Automobile_controller__Presencevehicule:
      strcpy(buf, "Presencevehicule");
      break;
    case Automobile_controller__Feu:
      strcpy(buf, "Feu");
      break;
    case Automobile_controller__None:
      strcpy(buf, "None");
      break;
    default:
      break;
  };
  return buf;
}

Automobile_controller__couleur Automobile_controller__couleur_of_string(
  char* s) {
  if ((strcmp(s, "Vert")==0)) {
    return Automobile_controller__Vert;
  };
  if ((strcmp(s, "Jaune")==0)) {
    return Automobile_controller__Jaune;
  };
  if ((strcmp(s, "Rouge")==0)) {
    return Automobile_controller__Rouge;
  };
}

char* string_of_Automobile_controller__couleur(Automobile_controller__couleur x,
                                               char* buf) {
  switch (x) {
    case Automobile_controller__Vert:
      strcpy(buf, "Vert");
      break;
    case Automobile_controller__Jaune:
      strcpy(buf, "Jaune");
      break;
    case Automobile_controller__Rouge:
      strcpy(buf, "Rouge");
      break;
    default:
      break;
  };
  return buf;
}

Automobile_controller__etatPhares Automobile_controller__etatPhares_of_string(
  char* s) {
  if ((strcmp(s, "NoLum")==0)) {
    return Automobile_controller__NoLum;
  };
  if ((strcmp(s, "Veilleuses")==0)) {
    return Automobile_controller__Veilleuses;
  };
  if ((strcmp(s, "Codes")==0)) {
    return Automobile_controller__Codes;
  };
  if ((strcmp(s, "Phares")==0)) {
    return Automobile_controller__Phares;
  };
}

char* string_of_Automobile_controller__etatPhares(Automobile_controller__etatPhares x,
                                                  char* buf) {
  switch (x) {
    case Automobile_controller__NoLum:
      strcpy(buf, "NoLum");
      break;
    case Automobile_controller__Veilleuses:
      strcpy(buf, "Veilleuses");
      break;
    case Automobile_controller__Codes:
      strcpy(buf, "Codes");
      break;
    case Automobile_controller__Phares:
      strcpy(buf, "Phares");
      break;
    default:
      break;
  };
  return buf;
}

Automobile_controller__lum Automobile_controller__lum_of_string(char* s) {
  if ((strcmp(s, "Null")==0)) {
    return Automobile_controller__Null;
  };
  if ((strcmp(s, "Low")==0)) {
    return Automobile_controller__Low;
  };
  if ((strcmp(s, "Normal")==0)) {
    return Automobile_controller__Normal;
  };
  if ((strcmp(s, "High")==0)) {
    return Automobile_controller__High;
  };
}

char* string_of_Automobile_controller__lum(Automobile_controller__lum x,
                                           char* buf) {
  switch (x) {
    case Automobile_controller__Null:
      strcpy(buf, "Null");
      break;
    case Automobile_controller__Low:
      strcpy(buf, "Low");
      break;
    case Automobile_controller__Normal:
      strcpy(buf, "Normal");
      break;
    case Automobile_controller__High:
      strcpy(buf, "High");
      break;
    default:
      break;
  };
  return buf;
}

Automobile_controller__numero Automobile_controller__numero_of_string(
  char* s) {
  if ((strcmp(s, "Un")==0)) {
    return Automobile_controller__Un;
  };
  if ((strcmp(s, "Deux")==0)) {
    return Automobile_controller__Deux;
  };
  if ((strcmp(s, "Trois")==0)) {
    return Automobile_controller__Trois;
  };
  if ((strcmp(s, "Quatre")==0)) {
    return Automobile_controller__Quatre;
  };
  if ((strcmp(s, "Cinq")==0)) {
    return Automobile_controller__Cinq;
  };
  if ((strcmp(s, "Six")==0)) {
    return Automobile_controller__Six;
  };
  if ((strcmp(s, "PointMort")==0)) {
    return Automobile_controller__PointMort;
  };
}

char* string_of_Automobile_controller__numero(Automobile_controller__numero x,
                                              char* buf) {
  switch (x) {
    case Automobile_controller__Un:
      strcpy(buf, "Un");
      break;
    case Automobile_controller__Deux:
      strcpy(buf, "Deux");
      break;
    case Automobile_controller__Trois:
      strcpy(buf, "Trois");
      break;
    case Automobile_controller__Quatre:
      strcpy(buf, "Quatre");
      break;
    case Automobile_controller__Cinq:
      strcpy(buf, "Cinq");
      break;
    case Automobile_controller__Six:
      strcpy(buf, "Six");
      break;
    case Automobile_controller__PointMort:
      strcpy(buf, "PointMort");
      break;
    default:
      break;
  };
  return buf;
}

Automobile_controller__position Automobile_controller__position_of_string(
  char* s) {
  if ((strcmp(s, "Ville")==0)) {
    return Automobile_controller__Ville;
  };
  if ((strcmp(s, "Autoroute")==0)) {
    return Automobile_controller__Autoroute;
  };
}

char* string_of_Automobile_controller__position(Automobile_controller__position x,
                                                char* buf) {
  switch (x) {
    case Automobile_controller__Ville:
      strcpy(buf, "Ville");
      break;
    case Automobile_controller__Autoroute:
      strcpy(buf, "Autoroute");
      break;
    default:
      break;
  };
  return buf;
}

Automobile_controller__retro Automobile_controller__retro_of_string(char* s) {
  if ((strcmp(s, "Desactive")==0)) {
    return Automobile_controller__Desactive;
  };
  if ((strcmp(s, "PositionJour")==0)) {
    return Automobile_controller__PositionJour;
  };
  if ((strcmp(s, "PositionNuit")==0)) {
    return Automobile_controller__PositionNuit;
  };
  if ((strcmp(s, "PositionNormale")==0)) {
    return Automobile_controller__PositionNormale;
  };
}

char* string_of_Automobile_controller__retro(Automobile_controller__retro x,
                                             char* buf) {
  switch (x) {
    case Automobile_controller__Desactive:
      strcpy(buf, "Desactive");
      break;
    case Automobile_controller__PositionJour:
      strcpy(buf, "PositionJour");
      break;
    case Automobile_controller__PositionNuit:
      strcpy(buf, "PositionNuit");
      break;
    case Automobile_controller__PositionNormale:
      strcpy(buf, "PositionNormale");
      break;
    default:
      break;
  };
  return buf;
}

Automobile_controller__st Automobile_controller__st_of_string(char* s) {
  if ((strcmp(s, "St_Eteint")==0)) {
    return Automobile_controller__St_Eteint;
  };
  if ((strcmp(s, "St_Allumer")==0)) {
    return Automobile_controller__St_Allumer;
  };
}

char* string_of_Automobile_controller__st(Automobile_controller__st x,
                                          char* buf) {
  switch (x) {
    case Automobile_controller__St_Eteint:
      strcpy(buf, "St_Eteint");
      break;
    case Automobile_controller__St_Allumer:
      strcpy(buf, "St_Allumer");
      break;
    default:
      break;
  };
  return buf;
}

Automobile_controller__st_1 Automobile_controller__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_Zero")==0)) {
    return Automobile_controller__St_1_Zero;
  };
  if ((strcmp(s, "St_1_Troisieme")==0)) {
    return Automobile_controller__St_1_Troisieme;
  };
  if ((strcmp(s, "St_1_Quatrieme")==0)) {
    return Automobile_controller__St_1_Quatrieme;
  };
  if ((strcmp(s, "St_1_Premier")==0)) {
    return Automobile_controller__St_1_Premier;
  };
  if ((strcmp(s, "St_1_Deuxieme")==0)) {
    return Automobile_controller__St_1_Deuxieme;
  };
  if ((strcmp(s, "St_1_Cinquieme")==0)) {
    return Automobile_controller__St_1_Cinquieme;
  };
  if ((strcmp(s, "St_1_Arriere")==0)) {
    return Automobile_controller__St_1_Arriere;
  };
}

char* string_of_Automobile_controller__st_1(Automobile_controller__st_1 x,
                                            char* buf) {
  switch (x) {
    case Automobile_controller__St_1_Zero:
      strcpy(buf, "St_1_Zero");
      break;
    case Automobile_controller__St_1_Troisieme:
      strcpy(buf, "St_1_Troisieme");
      break;
    case Automobile_controller__St_1_Quatrieme:
      strcpy(buf, "St_1_Quatrieme");
      break;
    case Automobile_controller__St_1_Premier:
      strcpy(buf, "St_1_Premier");
      break;
    case Automobile_controller__St_1_Deuxieme:
      strcpy(buf, "St_1_Deuxieme");
      break;
    case Automobile_controller__St_1_Cinquieme:
      strcpy(buf, "St_1_Cinquieme");
      break;
    case Automobile_controller__St_1_Arriere:
      strcpy(buf, "St_1_Arriere");
      break;
    default:
      break;
  };
  return buf;
}

Automobile_controller__st_10 Automobile_controller__st_10_of_string(char* s) {
  if ((strcmp(s, "St_10_Veilleuses")==0)) {
    return Automobile_controller__St_10_Veilleuses;
  };
  if ((strcmp(s, "St_10_Phares")==0)) {
    return Automobile_controller__St_10_Phares;
  };
  if ((strcmp(s, "St_10_Idle")==0)) {
    return Automobile_controller__St_10_Idle;
  };
  if ((strcmp(s, "St_10_Codes")==0)) {
    return Automobile_controller__St_10_Codes;
  };
}

char* string_of_Automobile_controller__st_10(Automobile_controller__st_10 x,
                                             char* buf) {
  switch (x) {
    case Automobile_controller__St_10_Veilleuses:
      strcpy(buf, "St_10_Veilleuses");
      break;
    case Automobile_controller__St_10_Phares:
      strcpy(buf, "St_10_Phares");
      break;
    case Automobile_controller__St_10_Idle:
      strcpy(buf, "St_10_Idle");
      break;
    case Automobile_controller__St_10_Codes:
      strcpy(buf, "St_10_Codes");
      break;
    default:
      break;
  };
  return buf;
}

Automobile_controller__st_11 Automobile_controller__st_11_of_string(char* s) {
  if ((strcmp(s, "St_11_Desactive")==0)) {
    return Automobile_controller__St_11_Desactive;
  };
  if ((strcmp(s, "St_11_Active")==0)) {
    return Automobile_controller__St_11_Active;
  };
}

char* string_of_Automobile_controller__st_11(Automobile_controller__st_11 x,
                                             char* buf) {
  switch (x) {
    case Automobile_controller__St_11_Desactive:
      strcpy(buf, "St_11_Desactive");
      break;
    case Automobile_controller__St_11_Active:
      strcpy(buf, "St_11_Active");
      break;
    default:
      break;
  };
  return buf;
}

Automobile_controller__st_12 Automobile_controller__st_12_of_string(char* s) {
  if ((strcmp(s, "St_12_Vehicule")==0)) {
    return Automobile_controller__St_12_Vehicule;
  };
  if ((strcmp(s, "St_12_Pieton")==0)) {
    return Automobile_controller__St_12_Pieton;
  };
  if ((strcmp(s, "St_12_Feu")==0)) {
    return Automobile_controller__St_12_Feu;
  };
  if ((strcmp(s, "St_12_Acceleration")==0)) {
    return Automobile_controller__St_12_Acceleration;
  };
}

char* string_of_Automobile_controller__st_12(Automobile_controller__st_12 x,
                                             char* buf) {
  switch (x) {
    case Automobile_controller__St_12_Vehicule:
      strcpy(buf, "St_12_Vehicule");
      break;
    case Automobile_controller__St_12_Pieton:
      strcpy(buf, "St_12_Pieton");
      break;
    case Automobile_controller__St_12_Feu:
      strcpy(buf, "St_12_Feu");
      break;
    case Automobile_controller__St_12_Acceleration:
      strcpy(buf, "St_12_Acceleration");
      break;
    default:
      break;
  };
  return buf;
}

Automobile_controller__st_13 Automobile_controller__st_13_of_string(char* s) {
  if ((strcmp(s, "St_13_Idle")==0)) {
    return Automobile_controller__St_13_Idle;
  };
  if ((strcmp(s, "St_13_Detection")==0)) {
    return Automobile_controller__St_13_Detection;
  };
}

char* string_of_Automobile_controller__st_13(Automobile_controller__st_13 x,
                                             char* buf) {
  switch (x) {
    case Automobile_controller__St_13_Idle:
      strcpy(buf, "St_13_Idle");
      break;
    case Automobile_controller__St_13_Detection:
      strcpy(buf, "St_13_Detection");
      break;
    default:
      break;
  };
  return buf;
}

Automobile_controller__st_14 Automobile_controller__st_14_of_string(char* s) {
  if ((strcmp(s, "St_14_Desactive")==0)) {
    return Automobile_controller__St_14_Desactive;
  };
  if ((strcmp(s, "St_14_Active")==0)) {
    return Automobile_controller__St_14_Active;
  };
}

char* string_of_Automobile_controller__st_14(Automobile_controller__st_14 x,
                                             char* buf) {
  switch (x) {
    case Automobile_controller__St_14_Desactive:
      strcpy(buf, "St_14_Desactive");
      break;
    case Automobile_controller__St_14_Active:
      strcpy(buf, "St_14_Active");
      break;
    default:
      break;
  };
  return buf;
}

Automobile_controller__st_15 Automobile_controller__st_15_of_string(char* s) {
  if ((strcmp(s, "St_15_Desactive")==0)) {
    return Automobile_controller__St_15_Desactive;
  };
  if ((strcmp(s, "St_15_BalayageUnique")==0)) {
    return Automobile_controller__St_15_BalayageUnique;
  };
  if ((strcmp(s, "St_15_BalayageIntermittent")==0)) {
    return Automobile_controller__St_15_BalayageIntermittent;
  };
  if ((strcmp(s, "St_15_BalayageContiu")==0)) {
    return Automobile_controller__St_15_BalayageContiu;
  };
}

char* string_of_Automobile_controller__st_15(Automobile_controller__st_15 x,
                                             char* buf) {
  switch (x) {
    case Automobile_controller__St_15_Desactive:
      strcpy(buf, "St_15_Desactive");
      break;
    case Automobile_controller__St_15_BalayageUnique:
      strcpy(buf, "St_15_BalayageUnique");
      break;
    case Automobile_controller__St_15_BalayageIntermittent:
      strcpy(buf, "St_15_BalayageIntermittent");
      break;
    case Automobile_controller__St_15_BalayageContiu:
      strcpy(buf, "St_15_BalayageContiu");
      break;
    default:
      break;
  };
  return buf;
}

Automobile_controller__st_16 Automobile_controller__st_16_of_string(char* s) {
  if ((strcmp(s, "St_16_PositionNuit")==0)) {
    return Automobile_controller__St_16_PositionNuit;
  };
  if ((strcmp(s, "St_16_PositionNormale")==0)) {
    return Automobile_controller__St_16_PositionNormale;
  };
  if ((strcmp(s, "St_16_PositionJour")==0)) {
    return Automobile_controller__St_16_PositionJour;
  };
  if ((strcmp(s, "St_16_Desacitve")==0)) {
    return Automobile_controller__St_16_Desacitve;
  };
}

char* string_of_Automobile_controller__st_16(Automobile_controller__st_16 x,
                                             char* buf) {
  switch (x) {
    case Automobile_controller__St_16_PositionNuit:
      strcpy(buf, "St_16_PositionNuit");
      break;
    case Automobile_controller__St_16_PositionNormale:
      strcpy(buf, "St_16_PositionNormale");
      break;
    case Automobile_controller__St_16_PositionJour:
      strcpy(buf, "St_16_PositionJour");
      break;
    case Automobile_controller__St_16_Desacitve:
      strcpy(buf, "St_16_Desacitve");
      break;
    default:
      break;
  };
  return buf;
}

Automobile_controller__st_17 Automobile_controller__st_17_of_string(char* s) {
  if ((strcmp(s, "St_17_Stop")==0)) {
    return Automobile_controller__St_17_Stop;
  };
  if ((strcmp(s, "St_17_Move")==0)) {
    return Automobile_controller__St_17_Move;
  };
}

char* string_of_Automobile_controller__st_17(Automobile_controller__st_17 x,
                                             char* buf) {
  switch (x) {
    case Automobile_controller__St_17_Stop:
      strcpy(buf, "St_17_Stop");
      break;
    case Automobile_controller__St_17_Move:
      strcpy(buf, "St_17_Move");
      break;
    default:
      break;
  };
  return buf;
}

Automobile_controller__st_18 Automobile_controller__st_18_of_string(char* s) {
  if ((strcmp(s, "St_18_Zero")==0)) {
    return Automobile_controller__St_18_Zero;
  };
  if ((strcmp(s, "St_18_Troisieme")==0)) {
    return Automobile_controller__St_18_Troisieme;
  };
  if ((strcmp(s, "St_18_Quatrieme")==0)) {
    return Automobile_controller__St_18_Quatrieme;
  };
  if ((strcmp(s, "St_18_Premier")==0)) {
    return Automobile_controller__St_18_Premier;
  };
  if ((strcmp(s, "St_18_Deuxieme")==0)) {
    return Automobile_controller__St_18_Deuxieme;
  };
  if ((strcmp(s, "St_18_Cinquieme")==0)) {
    return Automobile_controller__St_18_Cinquieme;
  };
  if ((strcmp(s, "St_18_Arriere")==0)) {
    return Automobile_controller__St_18_Arriere;
  };
}

char* string_of_Automobile_controller__st_18(Automobile_controller__st_18 x,
                                             char* buf) {
  switch (x) {
    case Automobile_controller__St_18_Zero:
      strcpy(buf, "St_18_Zero");
      break;
    case Automobile_controller__St_18_Troisieme:
      strcpy(buf, "St_18_Troisieme");
      break;
    case Automobile_controller__St_18_Quatrieme:
      strcpy(buf, "St_18_Quatrieme");
      break;
    case Automobile_controller__St_18_Premier:
      strcpy(buf, "St_18_Premier");
      break;
    case Automobile_controller__St_18_Deuxieme:
      strcpy(buf, "St_18_Deuxieme");
      break;
    case Automobile_controller__St_18_Cinquieme:
      strcpy(buf, "St_18_Cinquieme");
      break;
    case Automobile_controller__St_18_Arriere:
      strcpy(buf, "St_18_Arriere");
      break;
    default:
      break;
  };
  return buf;
}

Automobile_controller__st_19 Automobile_controller__st_19_of_string(char* s) {
  if ((strcmp(s, "St_19_Eteint")==0)) {
    return Automobile_controller__St_19_Eteint;
  };
  if ((strcmp(s, "St_19_Allumer")==0)) {
    return Automobile_controller__St_19_Allumer;
  };
}

char* string_of_Automobile_controller__st_19(Automobile_controller__st_19 x,
                                             char* buf) {
  switch (x) {
    case Automobile_controller__St_19_Eteint:
      strcpy(buf, "St_19_Eteint");
      break;
    case Automobile_controller__St_19_Allumer:
      strcpy(buf, "St_19_Allumer");
      break;
    default:
      break;
  };
  return buf;
}

Automobile_controller__st_2 Automobile_controller__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_Stop")==0)) {
    return Automobile_controller__St_2_Stop;
  };
  if ((strcmp(s, "St_2_Move")==0)) {
    return Automobile_controller__St_2_Move;
  };
}

char* string_of_Automobile_controller__st_2(Automobile_controller__st_2 x,
                                            char* buf) {
  switch (x) {
    case Automobile_controller__St_2_Stop:
      strcpy(buf, "St_2_Stop");
      break;
    case Automobile_controller__St_2_Move:
      strcpy(buf, "St_2_Move");
      break;
    default:
      break;
  };
  return buf;
}

Automobile_controller__st_3 Automobile_controller__st_3_of_string(char* s) {
  if ((strcmp(s, "St_3_PositionNuit")==0)) {
    return Automobile_controller__St_3_PositionNuit;
  };
  if ((strcmp(s, "St_3_PositionNormale")==0)) {
    return Automobile_controller__St_3_PositionNormale;
  };
  if ((strcmp(s, "St_3_PositionJour")==0)) {
    return Automobile_controller__St_3_PositionJour;
  };
  if ((strcmp(s, "St_3_Desacitve")==0)) {
    return Automobile_controller__St_3_Desacitve;
  };
}

char* string_of_Automobile_controller__st_3(Automobile_controller__st_3 x,
                                            char* buf) {
  switch (x) {
    case Automobile_controller__St_3_PositionNuit:
      strcpy(buf, "St_3_PositionNuit");
      break;
    case Automobile_controller__St_3_PositionNormale:
      strcpy(buf, "St_3_PositionNormale");
      break;
    case Automobile_controller__St_3_PositionJour:
      strcpy(buf, "St_3_PositionJour");
      break;
    case Automobile_controller__St_3_Desacitve:
      strcpy(buf, "St_3_Desacitve");
      break;
    default:
      break;
  };
  return buf;
}

Automobile_controller__st_4 Automobile_controller__st_4_of_string(char* s) {
  if ((strcmp(s, "St_4_Desactive")==0)) {
    return Automobile_controller__St_4_Desactive;
  };
  if ((strcmp(s, "St_4_BalayageUnique")==0)) {
    return Automobile_controller__St_4_BalayageUnique;
  };
  if ((strcmp(s, "St_4_BalayageIntermittent")==0)) {
    return Automobile_controller__St_4_BalayageIntermittent;
  };
  if ((strcmp(s, "St_4_BalayageContiu")==0)) {
    return Automobile_controller__St_4_BalayageContiu;
  };
}

char* string_of_Automobile_controller__st_4(Automobile_controller__st_4 x,
                                            char* buf) {
  switch (x) {
    case Automobile_controller__St_4_Desactive:
      strcpy(buf, "St_4_Desactive");
      break;
    case Automobile_controller__St_4_BalayageUnique:
      strcpy(buf, "St_4_BalayageUnique");
      break;
    case Automobile_controller__St_4_BalayageIntermittent:
      strcpy(buf, "St_4_BalayageIntermittent");
      break;
    case Automobile_controller__St_4_BalayageContiu:
      strcpy(buf, "St_4_BalayageContiu");
      break;
    default:
      break;
  };
  return buf;
}

Automobile_controller__st_5 Automobile_controller__st_5_of_string(char* s) {
  if ((strcmp(s, "St_5_Desactive")==0)) {
    return Automobile_controller__St_5_Desactive;
  };
  if ((strcmp(s, "St_5_Active")==0)) {
    return Automobile_controller__St_5_Active;
  };
}

char* string_of_Automobile_controller__st_5(Automobile_controller__st_5 x,
                                            char* buf) {
  switch (x) {
    case Automobile_controller__St_5_Desactive:
      strcpy(buf, "St_5_Desactive");
      break;
    case Automobile_controller__St_5_Active:
      strcpy(buf, "St_5_Active");
      break;
    default:
      break;
  };
  return buf;
}

Automobile_controller__st_6 Automobile_controller__st_6_of_string(char* s) {
  if ((strcmp(s, "St_6_Idle")==0)) {
    return Automobile_controller__St_6_Idle;
  };
  if ((strcmp(s, "St_6_Detection")==0)) {
    return Automobile_controller__St_6_Detection;
  };
}

char* string_of_Automobile_controller__st_6(Automobile_controller__st_6 x,
                                            char* buf) {
  switch (x) {
    case Automobile_controller__St_6_Idle:
      strcpy(buf, "St_6_Idle");
      break;
    case Automobile_controller__St_6_Detection:
      strcpy(buf, "St_6_Detection");
      break;
    default:
      break;
  };
  return buf;
}

Automobile_controller__st_7 Automobile_controller__st_7_of_string(char* s) {
  if ((strcmp(s, "St_7_Vehicule")==0)) {
    return Automobile_controller__St_7_Vehicule;
  };
  if ((strcmp(s, "St_7_Pieton")==0)) {
    return Automobile_controller__St_7_Pieton;
  };
  if ((strcmp(s, "St_7_Feu")==0)) {
    return Automobile_controller__St_7_Feu;
  };
  if ((strcmp(s, "St_7_Acceleration")==0)) {
    return Automobile_controller__St_7_Acceleration;
  };
}

char* string_of_Automobile_controller__st_7(Automobile_controller__st_7 x,
                                            char* buf) {
  switch (x) {
    case Automobile_controller__St_7_Vehicule:
      strcpy(buf, "St_7_Vehicule");
      break;
    case Automobile_controller__St_7_Pieton:
      strcpy(buf, "St_7_Pieton");
      break;
    case Automobile_controller__St_7_Feu:
      strcpy(buf, "St_7_Feu");
      break;
    case Automobile_controller__St_7_Acceleration:
      strcpy(buf, "St_7_Acceleration");
      break;
    default:
      break;
  };
  return buf;
}

Automobile_controller__st_8 Automobile_controller__st_8_of_string(char* s) {
  if ((strcmp(s, "St_8_Desactive")==0)) {
    return Automobile_controller__St_8_Desactive;
  };
  if ((strcmp(s, "St_8_Active")==0)) {
    return Automobile_controller__St_8_Active;
  };
}

char* string_of_Automobile_controller__st_8(Automobile_controller__st_8 x,
                                            char* buf) {
  switch (x) {
    case Automobile_controller__St_8_Desactive:
      strcpy(buf, "St_8_Desactive");
      break;
    case Automobile_controller__St_8_Active:
      strcpy(buf, "St_8_Active");
      break;
    default:
      break;
  };
  return buf;
}

Automobile_controller__st_9 Automobile_controller__st_9_of_string(char* s) {
  if ((strcmp(s, "St_9_Veilleuses")==0)) {
    return Automobile_controller__St_9_Veilleuses;
  };
  if ((strcmp(s, "St_9_Phares")==0)) {
    return Automobile_controller__St_9_Phares;
  };
  if ((strcmp(s, "St_9_Idle")==0)) {
    return Automobile_controller__St_9_Idle;
  };
  if ((strcmp(s, "St_9_Codes")==0)) {
    return Automobile_controller__St_9_Codes;
  };
}

char* string_of_Automobile_controller__st_9(Automobile_controller__st_9 x,
                                            char* buf) {
  switch (x) {
    case Automobile_controller__St_9_Veilleuses:
      strcpy(buf, "St_9_Veilleuses");
      break;
    case Automobile_controller__St_9_Phares:
      strcpy(buf, "St_9_Phares");
      break;
    case Automobile_controller__St_9_Idle:
      strcpy(buf, "St_9_Idle");
      break;
    case Automobile_controller__St_9_Codes:
      strcpy(buf, "St_9_Codes");
      break;
    default:
      break;
  };
  return buf;
}

Automobile_controller__typeBalayage Automobile_controller__typeBalayage_of_string(
  char* s) {
  if ((strcmp(s, "Deactivated")==0)) {
    return Automobile_controller__Deactivated;
  };
  if ((strcmp(s, "Intermittent")==0)) {
    return Automobile_controller__Intermittent;
  };
  if ((strcmp(s, "Contiu")==0)) {
    return Automobile_controller__Contiu;
  };
  if ((strcmp(s, "Unique")==0)) {
    return Automobile_controller__Unique;
  };
}

char* string_of_Automobile_controller__typeBalayage(Automobile_controller__typeBalayage x,
                                                    char* buf) {
  switch (x) {
    case Automobile_controller__Deactivated:
      strcpy(buf, "Deactivated");
      break;
    case Automobile_controller__Intermittent:
      strcpy(buf, "Intermittent");
      break;
    case Automobile_controller__Contiu:
      strcpy(buf, "Contiu");
      break;
    case Automobile_controller__Unique:
      strcpy(buf, "Unique");
      break;
    default:
      break;
  };
  return buf;
}

