package Automobile;


public class Acceleration {
    protected boolean pnr;
    protected St_3 ck;
    
    public Acceleration () {
        {
            this.pnr = false;
            this.ck = St_3.ST_3_MOVE;
        }
    }
    public boolean step (boolean moteur, boolean frein, boolean accelerateur) 
        {
        boolean avance = true;
        boolean v = true;
        boolean v_85 = true;
        boolean v_84 = true;
        boolean r_St_3_Stop = true;
        St_3 s_St_3_Stop = null;
        boolean r_St_3_Move = true;
        St_3 s_St_3_Move = null;
        boolean nr_St_3_Stop = true;
        St_3 ns_St_3_Stop = null;
        boolean avance_St_3_Stop = true;
        boolean nr_St_3_Move = true;
        St_3 ns_St_3_Move = null;
        boolean avance_St_3_Move = true;
        St_3 ck_4 = null;
        St_3 s = null;
        St_3 ns = null;
        boolean r = true;
        boolean nr = true;
        switch (this.ck) {
            case ST_3_MOVE:
                v_84 = !moteur;
                v_85 = (frein || v_84);
                if (v_85) {
                    r_St_3_Move = true;
                    s_St_3_Move = St_3.ST_3_STOP;
                } else {
                    r_St_3_Move = this.pnr;
                    s_St_3_Move = St_3.ST_3_MOVE;
                }
                s = s_St_3_Move;
                r = r_St_3_Move;
                break;
            case ST_3_STOP:
                v = (moteur && accelerateur);
                if (v) {
                    r_St_3_Stop = true;
                    s_St_3_Stop = St_3.ST_3_MOVE;
                } else {
                    r_St_3_Stop = this.pnr;
                    s_St_3_Stop = St_3.ST_3_STOP;
                }
                s = s_St_3_Stop;
                r = r_St_3_Stop;
                break;
        }
        ck_4 = s;
        switch (ck_4) {
            case ST_3_MOVE:
                avance_St_3_Move = true;
                nr_St_3_Move = false;
                ns_St_3_Move = St_3.ST_3_MOVE;
                avance = avance_St_3_Move;
                ns = ns_St_3_Move;
                nr = nr_St_3_Move;
                break;
            case ST_3_STOP:
                avance_St_3_Stop = false;
                nr_St_3_Stop = false;
                ns_St_3_Stop = St_3.ST_3_STOP;
                avance = avance_St_3_Stop;
                ns = ns_St_3_Stop;
                nr = nr_St_3_Stop;
                break;
        }
        this.pnr = nr;
        this.ck = ns;
        return avance;
    }
    public void reset () {
        this.pnr = false;
        this.ck = St_3.ST_3_MOVE;
    }
}
