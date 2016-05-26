package Automobile;


public class Avertissement {
    protected boolean pnr;
    protected St_7 ck;
    
    public Avertissement () {
        {
            this.pnr = false;
            this.ck = St_7.ST_7_IDLE;
        }
    }
    public jeptagon.Pervasives.Tuple4 step (boolean detectionDepassementLigne, boolean detectionVolantLibre,
                                               boolean detectionDefaillanceTechnique,
                                               boolean detectionVehiculeAngleMort) 
        {
        boolean depassementLigne = true;
        boolean volantLibre = true;
        boolean defaillanceTechnique = true;
        boolean dangerAngleMort = true;
        boolean v_167 = true;
        boolean v_166 = true;
        boolean v_165 = true;
        boolean v_164 = true;
        boolean v_163 = true;
        boolean v_162 = true;
        boolean v = true;
        boolean v_170 = true;
        boolean v_169 = true;
        boolean v_168 = true;
        boolean r_St_7_Detection = true;
        St_7 s_St_7_Detection = null;
        boolean r_St_7_Idle = true;
        St_7 s_St_7_Idle = null;
        boolean nr_St_7_Detection = true;
        St_7 ns_St_7_Detection = null;
        boolean dangerAngleMort_St_7_Detection = true;
        boolean defaillanceTechnique_St_7_Detection = true;
        boolean volantLibre_St_7_Detection = true;
        boolean depassementLigne_St_7_Detection = true;
        boolean nr_St_7_Idle = true;
        St_7 ns_St_7_Idle = null;
        boolean dangerAngleMort_St_7_Idle = true;
        boolean defaillanceTechnique_St_7_Idle = true;
        boolean volantLibre_St_7_Idle = true;
        boolean depassementLigne_St_7_Idle = true;
        St_7 ck_8 = null;
        St_7 s = null;
        St_7 ns = null;
        boolean r = true;
        boolean nr = true;
        switch (this.ck) {
            case ST_7_IDLE:
                v_168 = (detectionDepassementLigne || detectionVolantLibre);
                v_169 = (v_168 || detectionDefaillanceTechnique);
                v_170 = (v_169 || detectionVehiculeAngleMort);
                if (v_170) {
                    r_St_7_Idle = true;
                    s_St_7_Idle = St_7.ST_7_DETECTION;
                } else {
                    r_St_7_Idle = this.pnr;
                    s_St_7_Idle = St_7.ST_7_IDLE;
                }
                s = s_St_7_Idle;
                r = r_St_7_Idle;
                break;
            case ST_7_DETECTION:
                v_166 = !detectionVehiculeAngleMort;
                v_164 = !detectionDefaillanceTechnique;
                v_162 = !detectionVolantLibre;
                v = !detectionDepassementLigne;
                v_163 = (v && v_162);
                v_165 = (v_163 && v_164);
                v_167 = (v_165 && v_166);
                if (v_167) {
                    r_St_7_Detection = true;
                    s_St_7_Detection = St_7.ST_7_IDLE;
                } else {
                    r_St_7_Detection = this.pnr;
                    s_St_7_Detection = St_7.ST_7_DETECTION;
                }
                s = s_St_7_Detection;
                r = r_St_7_Detection;
                break;
        }
        ck_8 = s;
        switch (ck_8) {
            case ST_7_IDLE:
                dangerAngleMort_St_7_Idle = false;
                defaillanceTechnique_St_7_Idle = false;
                volantLibre_St_7_Idle = false;
                depassementLigne_St_7_Idle = false;
                nr_St_7_Idle = false;
                ns_St_7_Idle = St_7.ST_7_IDLE;
                depassementLigne = depassementLigne_St_7_Idle;
                volantLibre = volantLibre_St_7_Idle;
                defaillanceTechnique = defaillanceTechnique_St_7_Idle;
                dangerAngleMort = dangerAngleMort_St_7_Idle;
                ns = ns_St_7_Idle;
                nr = nr_St_7_Idle;
                break;
            case ST_7_DETECTION:
                dangerAngleMort_St_7_Detection = detectionVehiculeAngleMort;
                defaillanceTechnique_St_7_Detection = detectionDefaillanceTechnique;
                volantLibre_St_7_Detection = detectionVolantLibre;
                depassementLigne_St_7_Detection = detectionDepassementLigne;
                nr_St_7_Detection = false;
                ns_St_7_Detection = St_7.ST_7_DETECTION;
                depassementLigne = depassementLigne_St_7_Detection;
                volantLibre = volantLibre_St_7_Detection;
                defaillanceTechnique = defaillanceTechnique_St_7_Detection;
                dangerAngleMort = dangerAngleMort_St_7_Detection;
                ns = ns_St_7_Detection;
                nr = nr_St_7_Detection;
                break;
        }
        this.pnr = nr;
        this.ck = ns;
        return new jeptagon.Pervasives.Tuple4(depassementLigne, volantLibre, defaillanceTechnique, dangerAngleMort);
    }
    public void reset () {
        this.pnr = false;
        this.ck = St_7.ST_7_IDLE;
    }
}
