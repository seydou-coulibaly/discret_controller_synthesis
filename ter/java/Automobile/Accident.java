package Automobile;


public class Accident {
    protected boolean pnr;
    protected St_6 ck;
    
    public Accident () {
        {
            this.pnr = false;
            this.ck = St_6.ST_6_DESACTIVE;
        }
    }
    public jeptagon.Pervasives.Tuple2 step (boolean detectionAccident) 
        {
        boolean airbag = true;
        boolean emissionAppelUrgence = true;
        boolean v = true;
        boolean r_St_6_Active = true;
        St_6 s_St_6_Active = null;
        boolean r_St_6_Desactive = true;
        St_6 s_St_6_Desactive = null;
        boolean nr_St_6_Active = true;
        St_6 ns_St_6_Active = null;
        boolean emissionAppelUrgence_St_6_Active = true;
        boolean airbag_St_6_Active = true;
        boolean nr_St_6_Desactive = true;
        St_6 ns_St_6_Desactive = null;
        boolean emissionAppelUrgence_St_6_Desactive = true;
        boolean airbag_St_6_Desactive = true;
        St_6 ck_7 = null;
        St_6 s = null;
        St_6 ns = null;
        boolean r = true;
        boolean nr = true;
        switch (this.ck) {
            case ST_6_DESACTIVE:
                if (detectionAccident) {
                    r_St_6_Desactive = true;
                    s_St_6_Desactive = St_6.ST_6_ACTIVE;
                } else {
                    r_St_6_Desactive = this.pnr;
                    s_St_6_Desactive = St_6.ST_6_DESACTIVE;
                }
                s = s_St_6_Desactive;
                r = r_St_6_Desactive;
                break;
            case ST_6_ACTIVE:
                v = !detectionAccident;
                if (v) {
                    r_St_6_Active = true;
                    s_St_6_Active = St_6.ST_6_ACTIVE;
                } else {
                    r_St_6_Active = this.pnr;
                    s_St_6_Active = St_6.ST_6_ACTIVE;
                }
                s = s_St_6_Active;
                r = r_St_6_Active;
                break;
        }
        ck_7 = s;
        switch (ck_7) {
            case ST_6_DESACTIVE:
                emissionAppelUrgence_St_6_Desactive = false;
                airbag_St_6_Desactive = false;
                nr_St_6_Desactive = false;
                ns_St_6_Desactive = St_6.ST_6_DESACTIVE;
                airbag = airbag_St_6_Desactive;
                emissionAppelUrgence = emissionAppelUrgence_St_6_Desactive;
                ns = ns_St_6_Desactive;
                nr = nr_St_6_Desactive;
                break;
            case ST_6_ACTIVE:
                emissionAppelUrgence_St_6_Active = true;
                airbag_St_6_Active = true;
                nr_St_6_Active = false;
                ns_St_6_Active = St_6.ST_6_ACTIVE;
                airbag = airbag_St_6_Active;
                emissionAppelUrgence = emissionAppelUrgence_St_6_Active;
                ns = ns_St_6_Active;
                nr = nr_St_6_Active;
                break;
        }
        this.pnr = nr;
        this.ck = ns;
        return new jeptagon.Pervasives.Tuple2(airbag, emissionAppelUrgence);
    }
    public void reset () {
        this.pnr = false;
        this.ck = St_6.ST_6_DESACTIVE;
    }
}
