package Automobile;


public class Automobile {
    protected Temperature temperature;
    protected Securite securite;
    protected Avertissement avertissement;
    protected Accident accident_1;
    protected EssuieGlace essuieGlace_1;
    protected Retroviseurs retroviseurs;
    protected Vitesse vitesse;
    protected ControleurPhares controleurPhares;
    protected Moteur moteur_3;
    
    public Automobile () {
        this.temperature = new Temperature();
        this.securite = new Securite();
        this.avertissement = new Avertissement();
        this.accident_1 = new Accident();
        this.essuieGlace_1 = new EssuieGlace();
        this.retroviseurs = new Retroviseurs();
        this.vitesse = new Vitesse();
        this.controleurPhares = new ControleurPhares();
        this.moteur_3 = new Moteur();
        
    }
    public jeptagon.Pervasives.Tuple14 step (Lum lumiere, Lum densitePluie, boolean cle, boolean capteurPluie,
                                                boolean commande, boolean detectionAccident, boolean detectionLigne,
                                                boolean detectionVolantLibre, boolean detectionDefaillanceTechnique,
                                                boolean detectionAngleMort, boolean presencePieton,
                                                boolean presencevehicule, boolean regulateurTemperature,
                                                float capteurTemperature, Couleur feu) 
        {
        boolean moteur = true;
        boolean etatRetroviseur = true;
        boolean etatRegulateurTemperature = true;
        boolean essuieGlace = true;
        boolean accident = true;
        boolean ligne = true;
        boolean volantLibre = true;
        boolean defaillanceTechnique = true;
        boolean angleMort = true;
        boolean stop = true;
        Cause causeFreinage = null;
        EtatPhares phares = null;
        Numero vitesses = null;
        float quantiteRegule = 0.f;
        boolean lmoteur = true;
        boolean lcodes = true;
        boolean lphares = true;
        boolean lveilleuses = true;
        boolean lretroviseur = true;
        boolean lessuieGlace = true;
        boolean lairbag = true;
        boolean lemissionAppelUrgence = true;
        boolean lLigne = true;
        boolean lvolantLibre = true;
        boolean ldefaillanceTechnique = true;
        boolean langleMort = true;
        boolean lfrein = true;
        boolean letatRegulateurTemperature = true;
        Numero lnumero = null;
        EtatPhares lstate = null;
        float lqt = 0.f;
        Cause lcause = null;
        lmoteur = moteur_3.step(commande, cle);
        jeptagon.Pervasives.Tuple4 out_4 = controleurPhares.step(td, ti, cp);
        lcodes = (boolean)((Boolean)(out_4.c0));
        lphares = (boolean)((Boolean)(out_4.c1));
        lveilleuses = (boolean)((Boolean)(out_4.c2));
        lstate = (EtatPhares)(out_4.c3);
        lnumero = vitesse.step(boiteDeVitesse);
        lretroviseur = retroviseurs.step(lmoteur, lumiere);
        lessuieGlace = essuieGlace_1.step(lmoteur, capteurPluie, densitePluie);
        jeptagon.Pervasives.Tuple2 out_3 = accident_1.step(detectionAccident);
        lairbag = (boolean)((Boolean)(out_3.c0));
        lemissionAppelUrgence = (boolean)((Boolean)(out_3.c1));
        jeptagon.Pervasives.Tuple4 out_2 =
            avertissement.step(detectionLigne, detectionVolantLibre, detectionDefaillanceTechnique, detectionAngleMort);
        lLigne = (boolean)((Boolean)(out_2.c0));
        lvolantLibre = (boolean)((Boolean)(out_2.c1));
        ldefaillanceTechnique = (boolean)((Boolean)(out_2.c2));
        langleMort = (boolean)((Boolean)(out_2.c3));
        jeptagon.Pervasives.Tuple2 out_1 = securite.step(presencePieton, presencevehicule, feu);
        lfrein = (boolean)((Boolean)(out_1.c0));
        lcause = (Cause)(out_1.c1);
        jeptagon.Pervasives.Tuple2 out = temperature.step(regulateurTemperature, capteurTemperature);
        lqt = (float)((Float)(out.c0));
        letatRegulateurTemperature = (boolean)((Boolean)(out.c1));
        moteur = lmoteur;
        etatRetroviseur = lretroviseur;
        etatRegulateurTemperature = letatRegulateurTemperature;
        essuieGlace = lessuieGlace;
        accident = (lairbag || lemissionAppelUrgence);
        ligne = lLigne;
        volantLibre = lvolantLibre;
        defaillanceTechnique = ldefaillanceTechnique;
        angleMort = langleMort;
        stop = lfrein;
        causeFreinage = lcause;
        phares = lstate;
        vitesses = lnumero;
        quantiteRegule = lqt;
        return new jeptagon.Pervasives.Tuple14(moteur, etatRetroviseur, etatRegulateurTemperature, essuieGlace,
                                              accident, ligne, volantLibre, defaillanceTechnique, angleMort, stop,
                                              causeFreinage, phares, vitesses, quantiteRegule);
    }
    public void reset () {
        moteur_3.reset();
        controleurPhares.reset();
        vitesse.reset();
        retroviseurs.reset();
        essuieGlace_1.reset();
        accident_1.reset();
        avertissement.reset();
        securite.reset();
        temperature.reset();
    }
}
