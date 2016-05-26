package Automobile;


public class ControleurPhares {
    protected boolean pnr;
    protected St ck;
    
    public ControleurPhares () {
        {
            this.pnr = false;
            this.ck = St.ST_IDLE;
        }
    }
    public jeptagon.Pervasives.Tuple4 step (boolean td, boolean ti, boolean cp) 
        {
        boolean codes = true;
        boolean phares = true;
        boolean veilleuses = true;
        EtatPhares etat = null;
        boolean v_1 = true;
        St v = null;
        boolean v_3 = true;
        St v_2 = null;
        boolean r_St_Phares = true;
        St s_St_Phares = null;
        boolean r_St_Codes = true;
        St s_St_Codes = null;
        boolean r_St_Veilleuses = true;
        St s_St_Veilleuses = null;
        boolean r_St_Idle = true;
        St s_St_Idle = null;
        boolean nr_St_Phares = true;
        St ns_St_Phares = null;
        EtatPhares etat_St_Phares = null;
        boolean veilleuses_St_Phares = true;
        boolean phares_St_Phares = true;
        boolean codes_St_Phares = true;
        boolean nr_St_Codes = true;
        St ns_St_Codes = null;
        EtatPhares etat_St_Codes = null;
        boolean veilleuses_St_Codes = true;
        boolean phares_St_Codes = true;
        boolean codes_St_Codes = true;
        boolean nr_St_Veilleuses = true;
        St ns_St_Veilleuses = null;
        EtatPhares etat_St_Veilleuses = null;
        boolean veilleuses_St_Veilleuses = true;
        boolean phares_St_Veilleuses = true;
        boolean codes_St_Veilleuses = true;
        boolean nr_St_Idle = true;
        St ns_St_Idle = null;
        EtatPhares etat_St_Idle = null;
        boolean veilleuses_St_Idle = true;
        boolean phares_St_Idle = true;
        boolean codes_St_Idle = true;
        St ck_1 = null;
        St s = null;
        St ns = null;
        boolean r = true;
        boolean nr = true;
        switch (this.ck) {
            case ST_IDLE:
                if (td) {
                    r_St_Idle = true;
                    s_St_Idle = St.ST_VEILLEUSES;
                } else {
                    r_St_Idle = this.pnr;
                    s_St_Idle = St.ST_IDLE;
                }
                s = s_St_Idle;
                r = r_St_Idle;
                break;
            case ST_VEILLEUSES:
                if (td) {
                    v_3 = true;
                } else {
                    v_3 = this.pnr;
                }
                if (ti) {
                    r_St_Veilleuses = true;
                } else {
                    r_St_Veilleuses = v_3;
                }
                if (td) {
                    v_2 = St.ST_CODES;
                } else {
                    v_2 = St.ST_VEILLEUSES;
                }
                if (ti) {
                    s_St_Veilleuses = St.ST_IDLE;
                } else {
                    s_St_Veilleuses = v_2;
                }
                s = s_St_Veilleuses;
                r = r_St_Veilleuses;
                break;
            case ST_CODES:
                if (cp) {
                    v_1 = true;
                } else {
                    v_1 = this.pnr;
                }
                if (ti) {
                    r_St_Codes = true;
                } else {
                    r_St_Codes = v_1;
                }
                if (cp) {
                    v = St.ST_PHARES;
                } else {
                    v = St.ST_CODES;
                }
                if (ti) {
                    s_St_Codes = St.ST_VEILLEUSES;
                } else {
                    s_St_Codes = v;
                }
                s = s_St_Codes;
                r = r_St_Codes;
                break;
            case ST_PHARES:
                if (cp) {
                    r_St_Phares = true;
                    s_St_Phares = St.ST_CODES;
                } else {
                    r_St_Phares = this.pnr;
                    s_St_Phares = St.ST_PHARES;
                }
                s = s_St_Phares;
                r = r_St_Phares;
                break;
        }
        ck_1 = s;
        switch (ck_1) {
            case ST_IDLE:
                etat_St_Idle = EtatPhares.IDLE;
                veilleuses_St_Idle = false;
                phares_St_Idle = false;
                codes_St_Idle = false;
                nr_St_Idle = false;
                ns_St_Idle = St.ST_IDLE;
                codes = codes_St_Idle;
                phares = phares_St_Idle;
                veilleuses = veilleuses_St_Idle;
                etat = etat_St_Idle;
                ns = ns_St_Idle;
                nr = nr_St_Idle;
                break;
            case ST_VEILLEUSES:
                etat_St_Veilleuses = EtatPhares.VEILLEUSES;
                veilleuses_St_Veilleuses = true;
                phares_St_Veilleuses = false;
                codes_St_Veilleuses = false;
                nr_St_Veilleuses = false;
                ns_St_Veilleuses = St.ST_VEILLEUSES;
                codes = codes_St_Veilleuses;
                phares = phares_St_Veilleuses;
                veilleuses = veilleuses_St_Veilleuses;
                etat = etat_St_Veilleuses;
                ns = ns_St_Veilleuses;
                nr = nr_St_Veilleuses;
                break;
            case ST_CODES:
                etat_St_Codes = EtatPhares.CODES;
                veilleuses_St_Codes = false;
                phares_St_Codes = false;
                codes_St_Codes = true;
                nr_St_Codes = false;
                ns_St_Codes = St.ST_CODES;
                codes = codes_St_Codes;
                phares = phares_St_Codes;
                veilleuses = veilleuses_St_Codes;
                etat = etat_St_Codes;
                ns = ns_St_Codes;
                nr = nr_St_Codes;
                break;
            case ST_PHARES:
                etat_St_Phares = EtatPhares.PHARES;
                veilleuses_St_Phares = false;
                phares_St_Phares = true;
                codes_St_Phares = false;
                nr_St_Phares = false;
                ns_St_Phares = St.ST_PHARES;
                codes = codes_St_Phares;
                phares = phares_St_Phares;
                veilleuses = veilleuses_St_Phares;
                etat = etat_St_Phares;
                ns = ns_St_Phares;
                nr = nr_St_Phares;
                break;
        }
        this.pnr = nr;
        this.ck = ns;
        return new jeptagon.Pervasives.Tuple4(codes, phares, veilleuses, etat);
    }
    public void reset () {
        this.pnr = false;
        this.ck = St.ST_IDLE;
    }
}
