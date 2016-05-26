package Automobile;


public class Moteur {
    protected boolean pnr;
    protected St_1 ck;
    
    public Moteur () {
        {
            this.pnr = false;
            this.ck = St_1.ST_1_ALLUMER;
        }
    }
    public boolean step (boolean commande, boolean cle) {
        boolean etat = true;
        boolean v = true;
        boolean v_6 = true;
        boolean v_5 = true;
        boolean v_4 = true;
        boolean r_St_1_Eteint = true;
        St_1 s_St_1_Eteint = null;
        boolean r_St_1_Allumer = true;
        St_1 s_St_1_Allumer = null;
        boolean nr_St_1_Eteint = true;
        St_1 ns_St_1_Eteint = null;
        boolean etat_St_1_Eteint = true;
        boolean nr_St_1_Allumer = true;
        St_1 ns_St_1_Allumer = null;
        boolean etat_St_1_Allumer = true;
        St_1 ck_2 = null;
        St_1 s = null;
        St_1 ns = null;
        boolean r = true;
        boolean nr = true;
        switch (this.ck) {
            case ST_1_ALLUMER:
                v_5 = !cle;
                v_4 = !commande;
                v_6 = (v_4 && v_5);
                if (v_6) {
                    r_St_1_Allumer = true;
                    s_St_1_Allumer = St_1.ST_1_ETEINT;
                } else {
                    r_St_1_Allumer = this.pnr;
                    s_St_1_Allumer = St_1.ST_1_ALLUMER;
                }
                s = s_St_1_Allumer;
                r = r_St_1_Allumer;
                break;
            case ST_1_ETEINT:
                v = (commande && cle);
                if (v) {
                    r_St_1_Eteint = true;
                    s_St_1_Eteint = St_1.ST_1_ALLUMER;
                } else {
                    r_St_1_Eteint = this.pnr;
                    s_St_1_Eteint = St_1.ST_1_ETEINT;
                }
                s = s_St_1_Eteint;
                r = r_St_1_Eteint;
                break;
        }
        ck_2 = s;
        switch (ck_2) {
            case ST_1_ALLUMER:
                etat_St_1_Allumer = true;
                nr_St_1_Allumer = false;
                ns_St_1_Allumer = St_1.ST_1_ALLUMER;
                etat = etat_St_1_Allumer;
                ns = ns_St_1_Allumer;
                nr = nr_St_1_Allumer;
                break;
            case ST_1_ETEINT:
                etat_St_1_Eteint = false;
                nr_St_1_Eteint = false;
                ns_St_1_Eteint = St_1.ST_1_ETEINT;
                etat = etat_St_1_Eteint;
                ns = ns_St_1_Eteint;
                nr = nr_St_1_Eteint;
                break;
        }
        this.pnr = nr;
        this.ck = ns;
        return etat;
    }
    public void reset () {
        this.pnr = false;
        this.ck = St_1.ST_1_ALLUMER;
    }
}
