package Sum;


public class Minus_sim {
    public static final int default_step_nb = 30000;
    
    
    public static void main (String[] args) {
        int step = 0;
        if ((args.length < 0)) {
            java.lang.System.out.printf("error : not enough arguments.\n");
            return ; }
        Minus main = new Minus();
        if ((args.length > 0)) {
            step = Integer.parseInt(args[0]);
        } else {
            step = default_step_nb;
        }
        long t = java.lang.System.currentTimeMillis();
        for (int i = 0; i<step; i++) {
            int ret = main.step();
            java.lang.System.out.printf("%d => %s\n", i, jeptagon.Pervasives.genToString(ret));
        }
        java.lang.System.out.printf("time : %d\n", (java.lang.System.currentTimeMillis() - t));
    }
}
