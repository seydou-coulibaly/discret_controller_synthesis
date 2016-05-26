/* --- Generated the 26/5/2016 at 13:5 --- */
/* --- heptagon compiler, version 1.03.00 (compiled tue. may. 24 19:48:24 CET 2016) --- */
/* --- Command line: /home/seydou/.opam/4.02.3/bin/heptc -hepts -s smartHome -target c -target ctrln smartHome.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

SmartHome__smartHome_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int presenceMaison;
  int presenceAscenseur;
  int presenceGarage;
  int presenceDevantPoubelle;
  int vent;
  int luminosite;
  int codeAlarme;
  int codePorte;
  int codeBarriere;
  int presenceEntreePorte;
  int presenceSortiePorte;
  int presenceEntreeBarriere;
  int presenceSortieBarriere;
  int dReprise;
  int dVigilence;
  int dAlarme;
  SmartHome__smartHome_out _res;
  char buf_6[20];
  char buf_7[20];
  char buf_8[20];
  char buf_9[20];
  char buf_10[20];
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  SmartHome__smartHome_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    if ((scanf("%d", &presenceMaison)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &presenceAscenseur)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &presenceGarage)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &presenceDevantPoubelle)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &vent)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &luminosite)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &codeAlarme)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &codePorte)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &codeBarriere)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &presenceEntreePorte)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &presenceSortiePorte)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &presenceEntreeBarriere)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &presenceSortieBarriere)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &dReprise)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &dVigilence)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &dAlarme)==EOF)) {
      return 0;
    };;
    SmartHome__smartHome_step(presenceMaison, presenceAscenseur,
                              presenceGarage, presenceDevantPoubelle, vent,
                              luminosite, codeAlarme, codePorte,
                              codeBarriere, presenceEntreePorte,
                              presenceSortiePorte, presenceEntreeBarriere,
                              presenceSortieBarriere, dReprise, dVigilence,
                              dAlarme, &_res, &mem);
    printf("%d\n", _res.etatMaison);
    printf("%d\n", _res.lumiere);
    printf("%d\n", _res.poubelleOuvert);
    printf("%d\n", _res.ouvertureStore);
    printf("%d\n", _res.alarmeSonne);
    printf("%d\n", _res.property);
    printf("%s\n",
           string_of_SmartHome_controller__porte(_res.porteStatus, buf_6));
    printf("%s\n",
           string_of_SmartHome_controller__porte(_res.barriere, buf_7));
    printf("%s\n",
           string_of_SmartHome_controller__lum(_res.etatAlarme, buf_8));
    printf("%s\n",
           string_of_SmartHome_controller__position(_res.capteurPositionPorte,
                                                    buf_9));
    printf("%s\n",
           string_of_SmartHome_controller__position(_res.capteurPositionBarriere,
                                                    buf_10));
    printf("%d\n", _res.ascenseur);
    fflush(stdout);
  };
  return 0;
}

