package Automobile;


public class Temperature {
    protected boolean pnr;
    protected St_9 ck;
    
    public Temperature () {
        {
            this.pnr = false;
            this.ck = St_9.ST_9_ACTIVE;
        }
    }
    public jeptagon.Pervasives.Tuple2 step (boolean deactivated, float capteur) 
        {
        float qt = 0.f;
        boolean etat = true;
        boolean v = true;
        boolean r_St_9_Desactive = true;
        St_9 s_St_9_Desactive = null;
        boolean r_St_9_Active = true;
        St_9 s_St_9_Active = null;
        boolean nr_St_9_Desactive = true;
        St_9 ns_St_9_Desactive = null;
        boolean etat_St_9_Desactive = true;
        float qt_St_9_Desactive = 0.f;
        boolean nr_St_9_Active = true;
        St_9 ns_St_9_Active = null;
        boolean etat_St_9_Active = true;
        float qt_St_9_Active = 0.f;
        St_9 ck_10 = null;
        St_9 s = null;
        St_9 ns = null;
        boolean r = true;
        boolean nr = true;
        switch (this.ck) {
            case ST_9_ACTIVE:
                if (deactivated) {
                    r_St_9_Active = true;
                    s_St_9_Active = St_9.ST_9_DESACTIVE;
                } else {
                    r_St_9_Active = this.pnr;
                    s_St_9_Active = St_9.ST_9_ACTIVE;
                }
                s = s_St_9_Active;
                r = r_St_9_Active;
                break;
            case ST_9_DESACTIVE:
                v = !deactivated;
                if (v) {
                    r_St_9_Desactive = true;
                    s_St_9_Desactive = St_9.ST_9_ACTIVE;
                } else {
                    r_St_9_Desactive = this.pnr;
                    s_St_9_Desactive = St_9.ST_9_DESACTIVE;
                }
                s = s_St_9_Desactive;
                r = r_St_9_Desactive;
                break;
        }
        ck_10 = s;
        switch (ck_10) {
            case ST_9_ACTIVE:
                etat_St_9_Active = true;
                qt_St_9_Active = (capteur - 19.f);
                nr_St_9_Active = false;
                ns_St_9_Active = St_9.ST_9_ACTIVE;
                qt = qt_St_9_Active;
                etat = etat_St_9_Active;
                ns = ns_St_9_Active;
                nr = nr_St_9_Active;
                break;
            case ST_9_DESACTIVE:
                etat_St_9_Desactive = false;
                qt_St_9_Desactive = 0.f;
                nr_St_9_Desactive = false;
                ns_St_9_Desactive = St_9.ST_9_DESACTIVE;
                qt = qt_St_9_Desactive;
                etat = etat_St_9_Desactive;
                ns = ns_St_9_Desactive;
                nr = nr_St_9_Desactive;
                break;
        }
        this.pnr = nr;
        this.ck = ns;
        return new jeptagon.Pervasives.Tuple2(qt, etat);
    }
    public void reset () {
        this.pnr = false;
        this.ck = St_9.ST_9_ACTIVE;
    }
}
