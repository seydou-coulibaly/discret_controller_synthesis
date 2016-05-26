package Automate;


public class Updown {
    protected int x_1;
    protected boolean pnr;
    protected St ck;
    
    public Updown () {
        {
            this.x_1 = 0;
            this.pnr = false;
            this.ck = St.ST_UP;
        }
    }
    public int step () {
        int y = 0;
        boolean v = true;
        boolean v_1 = true;
        boolean nr_St_Down = true;
        St ns_St_Down = null;
        int x_St_Down = 0;
        boolean nr_St_Up = true;
        St ns_St_Up = null;
        int x_St_Up = 0;
        St ns = null;
        boolean r = true;
        boolean nr = true;
        int x = 0;
        r = this.pnr;
        switch (this.ck) {
            case ST_UP:
                x_St_Up = (this.x_1 + 1);
                x = x_St_Up;
                v_1 = (x >= 10);
                if (v_1) {
                    nr_St_Up = true;
                    ns_St_Up = St.ST_DOWN;
                } else {
                    nr_St_Up = false;
                    ns_St_Up = St.ST_UP;
                }
                ns = ns_St_Up;
                nr = nr_St_Up;
                break;
            case ST_DOWN:
                x_St_Down = (this.x_1 - 1);
                x = x_St_Down;
                v = (x <= 0);
                if (v) {
                    nr_St_Down = true;
                    ns_St_Down = St.ST_UP;
                } else {
                    nr_St_Down = false;
                    ns_St_Down = St.ST_DOWN;
                }
                ns = ns_St_Down;
                nr = nr_St_Down;
                break;
        }
        y = x;
        this.x_1 = x;
        this.pnr = nr;
        this.ck = ns;
        return y;
    }
    public void reset () {
        this.x_1 = 0;
        this.pnr = false;
        this.ck = St.ST_UP;
    }
}
