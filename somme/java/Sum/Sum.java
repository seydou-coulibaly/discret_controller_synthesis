package Sum;


public class Sum {
    protected int mem_o;
    
    public Sum () {
        {
            this.mem_o = 0;
        }
    }
    public int step (int i) {
        int o = 0;
        int v = 0;
        o = this.mem_o;
        v = (o + i);
        this.mem_o = v;
        return o;
    }
    public void reset () {
        this.mem_o = 0;
    }
}
