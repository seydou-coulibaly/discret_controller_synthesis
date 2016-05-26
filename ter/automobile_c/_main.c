/* --- Generated the 26/5/2016 at 18:11 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -hepts -s automobile -target c -target ctrln automobile.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

Automobile__automobile_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int cleVoiture;
  int commandeVoiture;
  int capteurPluie;
  int detectionAccident;
  int detectionLigne;
  int detectionVolantLibre;
  int detectionDefaillanceTechnique;
  int detectionAngleMort;
  int detectionPresencePieton;
  int detectionPresencevehicule;
  int desactiveRegulateurTemperature;
  Automobile_controller__lum lumiere;
  Automobile_controller__lum densitePluie;
  float capteurTemperature;
  Automobile_controller__couleur capteurDectecteurFeu;
  Automobile__automobile_out _res;
  char buf[20];
  char buf_1[20];
  char buf_2[20];
  char buf_14[20];
  char buf_15[20];
  char buf_17[20];
  char buf_18[20];
  char buf_19[20];
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Automobile__automobile_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    if ((scanf("%d", &cleVoiture)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &commandeVoiture)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &capteurPluie)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &detectionAccident)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &detectionLigne)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &detectionVolantLibre)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &detectionDefaillanceTechnique)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &detectionAngleMort)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &detectionPresencePieton)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &detectionPresencevehicule)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &desactiveRegulateurTemperature)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%s", buf)==EOF)) {
      return 0;
    };;
    lumiere = Automobile_controller__lum_of_string(buf);
    
    if ((scanf("%s", buf_1)==EOF)) {
      return 0;
    };;
    densitePluie = Automobile_controller__lum_of_string(buf_1);
    
    if ((scanf("%f", &capteurTemperature)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%s", buf_2)==EOF)) {
      return 0;
    };;
    capteurDectecteurFeu = Automobile_controller__couleur_of_string(buf_2);
    Automobile__automobile_step(cleVoiture, commandeVoiture, capteurPluie,
                                detectionAccident, detectionLigne,
                                detectionVolantLibre,
                                detectionDefaillanceTechnique,
                                detectionAngleMort, detectionPresencePieton,
                                detectionPresencevehicule,
                                desactiveRegulateurTemperature, lumiere,
                                densitePluie, capteurTemperature,
                                capteurDectecteurFeu, &_res, &mem);
    printf("%d\n", _res.moteur);
    printf("%d\n", _res.avance);
    printf("%d\n", _res.retroviseurActive);
    printf("%d\n", _res.etatRegulateurTemperature);
    printf("%d\n", _res.accident);
    printf("%d\n", _res.ligne);
    printf("%d\n", _res.volantLibre);
    printf("%d\n", _res.defaillanceTechnique);
    printf("%d\n", _res.angleMort);
    printf("%d\n", _res.freinage);
    printf("%d\n", _res.property);
    printf("%s\n",
           string_of_Automobile_controller__cause(_res.causeFreinage, buf_14));
    printf("%s\n",
           string_of_Automobile_controller__numero(_res.vitesses, buf_15));
    printf("%f\n", _res.quantiteRegule);
    printf("%s\n",
           string_of_Automobile_controller__etatPhares(_res.phares, buf_17));
    printf("%s\n",
           string_of_Automobile_controller__retro(_res.retroviseurStatus,
                                                  buf_18));
    printf("%s\n",
           string_of_Automobile_controller__typeBalayage(_res.essuieGlace,
                                                         buf_19));
    fflush(stdout);
  };
  return 0;
}

