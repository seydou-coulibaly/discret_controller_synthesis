package Automobile;


public class Vitesse {
    protected boolean pnr;
    protected St_2 ck;
    
    public Vitesse () {
        {
            this.pnr = false;
            this.ck = St_2.ST_2_PREMIER;
        }
    }
    public Numero step (Numero boiteDeVitesse) {
        Numero num = null;
        boolean v_18 = true;
        St_2 v_17 = null;
        boolean v_16 = true;
        St_2 v_15 = null;
        boolean v_14 = true;
        St_2 v_13 = null;
        boolean v_12 = true;
        St_2 v_11 = null;
        boolean v_10 = true;
        boolean v_9 = true;
        boolean v_8 = true;
        boolean v_7 = true;
        boolean v = true;
        boolean v_31 = true;
        St_2 v_30 = null;
        boolean v_29 = true;
        St_2 v_28 = null;
        boolean v_27 = true;
        St_2 v_26 = null;
        boolean v_25 = true;
        St_2 v_24 = null;
        boolean v_23 = true;
        boolean v_22 = true;
        boolean v_21 = true;
        boolean v_20 = true;
        boolean v_19 = true;
        boolean v_44 = true;
        St_2 v_43 = null;
        boolean v_42 = true;
        St_2 v_41 = null;
        boolean v_40 = true;
        St_2 v_39 = null;
        boolean v_38 = true;
        St_2 v_37 = null;
        boolean v_36 = true;
        boolean v_35 = true;
        boolean v_34 = true;
        boolean v_33 = true;
        boolean v_32 = true;
        boolean v_57 = true;
        St_2 v_56 = null;
        boolean v_55 = true;
        St_2 v_54 = null;
        boolean v_53 = true;
        St_2 v_52 = null;
        boolean v_51 = true;
        St_2 v_50 = null;
        boolean v_49 = true;
        boolean v_48 = true;
        boolean v_47 = true;
        boolean v_46 = true;
        boolean v_45 = true;
        boolean v_70 = true;
        St_2 v_69 = null;
        boolean v_68 = true;
        St_2 v_67 = null;
        boolean v_66 = true;
        St_2 v_65 = null;
        boolean v_64 = true;
        St_2 v_63 = null;
        boolean v_62 = true;
        boolean v_61 = true;
        boolean v_60 = true;
        boolean v_59 = true;
        boolean v_58 = true;
        boolean v_83 = true;
        St_2 v_82 = null;
        boolean v_81 = true;
        St_2 v_80 = null;
        boolean v_79 = true;
        St_2 v_78 = null;
        boolean v_77 = true;
        St_2 v_76 = null;
        boolean v_75 = true;
        boolean v_74 = true;
        boolean v_73 = true;
        boolean v_72 = true;
        boolean v_71 = true;
        boolean r_St_2_Arriere = true;
        St_2 s_St_2_Arriere = null;
        boolean r_St_2_Cinquieme = true;
        St_2 s_St_2_Cinquieme = null;
        boolean r_St_2_Quatrieme = true;
        St_2 s_St_2_Quatrieme = null;
        boolean r_St_2_Troisieme = true;
        St_2 s_St_2_Troisieme = null;
        boolean r_St_2_Deuxieme = true;
        St_2 s_St_2_Deuxieme = null;
        boolean r_St_2_Premier = true;
        St_2 s_St_2_Premier = null;
        boolean nr_St_2_Arriere = true;
        St_2 ns_St_2_Arriere = null;
        Numero num_St_2_Arriere = null;
        boolean nr_St_2_Cinquieme = true;
        St_2 ns_St_2_Cinquieme = null;
        Numero num_St_2_Cinquieme = null;
        boolean nr_St_2_Quatrieme = true;
        St_2 ns_St_2_Quatrieme = null;
        Numero num_St_2_Quatrieme = null;
        boolean nr_St_2_Troisieme = true;
        St_2 ns_St_2_Troisieme = null;
        Numero num_St_2_Troisieme = null;
        boolean nr_St_2_Deuxieme = true;
        St_2 ns_St_2_Deuxieme = null;
        Numero num_St_2_Deuxieme = null;
        boolean nr_St_2_Premier = true;
        St_2 ns_St_2_Premier = null;
        Numero num_St_2_Premier = null;
        St_2 ck_3 = null;
        St_2 s = null;
        St_2 ns = null;
        boolean r = true;
        boolean nr = true;
        switch (this.ck) {
            case ST_2_PREMIER:
                v_75 = (boiteDeVitesse == Numero.SIX);
                if (v_75) {
                    v_77 = true;
                    v_76 = St_2.ST_2_ARRIERE;
                } else {
                    v_77 = this.pnr;
                    v_76 = St_2.ST_2_PREMIER;
                }
                v_74 = (boiteDeVitesse == Numero.CINQ);
                if (v_74) {
                    v_79 = true;
                    v_78 = St_2.ST_2_CINQUIEME;
                } else {
                    v_79 = v_77;
                    v_78 = v_76;
                }
                v_73 = (boiteDeVitesse == Numero.QUATRE);
                if (v_73) {
                    v_81 = true;
                    v_80 = St_2.ST_2_QUATRIEME;
                } else {
                    v_81 = v_79;
                    v_80 = v_78;
                }
                v_72 = (boiteDeVitesse == Numero.TROIS);
                if (v_72) {
                    v_83 = true;
                    v_82 = St_2.ST_2_TROISIEME;
                } else {
                    v_83 = v_81;
                    v_82 = v_80;
                }
                v_71 = (boiteDeVitesse == Numero.DEUX);
                if (v_71) {
                    r_St_2_Premier = true;
                    s_St_2_Premier = St_2.ST_2_DEUXIEME;
                } else {
                    r_St_2_Premier = v_83;
                    s_St_2_Premier = v_82;
                }
                s = s_St_2_Premier;
                r = r_St_2_Premier;
                break;
            case ST_2_DEUXIEME:
                v_62 = (boiteDeVitesse == Numero.SIX);
                if (v_62) {
                    v_64 = true;
                    v_63 = St_2.ST_2_ARRIERE;
                } else {
                    v_64 = this.pnr;
                    v_63 = St_2.ST_2_DEUXIEME;
                }
                v_61 = (boiteDeVitesse == Numero.CINQ);
                if (v_61) {
                    v_66 = true;
                    v_65 = St_2.ST_2_CINQUIEME;
                } else {
                    v_66 = v_64;
                    v_65 = v_63;
                }
                v_60 = (boiteDeVitesse == Numero.QUATRE);
                if (v_60) {
                    v_68 = true;
                    v_67 = St_2.ST_2_QUATRIEME;
                } else {
                    v_68 = v_66;
                    v_67 = v_65;
                }
                v_59 = (boiteDeVitesse == Numero.TROIS);
                if (v_59) {
                    v_70 = true;
                    v_69 = St_2.ST_2_TROISIEME;
                } else {
                    v_70 = v_68;
                    v_69 = v_67;
                }
                v_58 = (boiteDeVitesse == Numero.UN);
                if (v_58) {
                    r_St_2_Deuxieme = true;
                    s_St_2_Deuxieme = St_2.ST_2_PREMIER;
                } else {
                    r_St_2_Deuxieme = v_70;
                    s_St_2_Deuxieme = v_69;
                }
                s = s_St_2_Deuxieme;
                r = r_St_2_Deuxieme;
                break;
            case ST_2_TROISIEME:
                v_49 = (boiteDeVitesse == Numero.SIX);
                if (v_49) {
                    v_51 = true;
                    v_50 = St_2.ST_2_ARRIERE;
                } else {
                    v_51 = this.pnr;
                    v_50 = St_2.ST_2_TROISIEME;
                }
                v_48 = (boiteDeVitesse == Numero.CINQ);
                if (v_48) {
                    v_53 = true;
                    v_52 = St_2.ST_2_CINQUIEME;
                } else {
                    v_53 = v_51;
                    v_52 = v_50;
                }
                v_47 = (boiteDeVitesse == Numero.QUATRE);
                if (v_47) {
                    v_55 = true;
                    v_54 = St_2.ST_2_QUATRIEME;
                } else {
                    v_55 = v_53;
                    v_54 = v_52;
                }
                v_46 = (boiteDeVitesse == Numero.DEUX);
                if (v_46) {
                    v_57 = true;
                    v_56 = St_2.ST_2_DEUXIEME;
                } else {
                    v_57 = v_55;
                    v_56 = v_54;
                }
                v_45 = (boiteDeVitesse == Numero.UN);
                if (v_45) {
                    r_St_2_Troisieme = true;
                    s_St_2_Troisieme = St_2.ST_2_PREMIER;
                } else {
                    r_St_2_Troisieme = v_57;
                    s_St_2_Troisieme = v_56;
                }
                s = s_St_2_Troisieme;
                r = r_St_2_Troisieme;
                break;
            case ST_2_QUATRIEME:
                v_36 = (boiteDeVitesse == Numero.SIX);
                if (v_36) {
                    v_38 = true;
                    v_37 = St_2.ST_2_ARRIERE;
                } else {
                    v_38 = this.pnr;
                    v_37 = St_2.ST_2_QUATRIEME;
                }
                v_35 = (boiteDeVitesse == Numero.CINQ);
                if (v_35) {
                    v_40 = true;
                    v_39 = St_2.ST_2_CINQUIEME;
                } else {
                    v_40 = v_38;
                    v_39 = v_37;
                }
                v_34 = (boiteDeVitesse == Numero.TROIS);
                if (v_34) {
                    v_42 = true;
                    v_41 = St_2.ST_2_TROISIEME;
                } else {
                    v_42 = v_40;
                    v_41 = v_39;
                }
                v_33 = (boiteDeVitesse == Numero.DEUX);
                if (v_33) {
                    v_44 = true;
                    v_43 = St_2.ST_2_DEUXIEME;
                } else {
                    v_44 = v_42;
                    v_43 = v_41;
                }
                v_32 = (boiteDeVitesse == Numero.UN);
                if (v_32) {
                    r_St_2_Quatrieme = true;
                    s_St_2_Quatrieme = St_2.ST_2_PREMIER;
                } else {
                    r_St_2_Quatrieme = v_44;
                    s_St_2_Quatrieme = v_43;
                }
                s = s_St_2_Quatrieme;
                r = r_St_2_Quatrieme;
                break;
            case ST_2_CINQUIEME:
                v_23 = (boiteDeVitesse == Numero.SIX);
                if (v_23) {
                    v_25 = true;
                    v_24 = St_2.ST_2_ARRIERE;
                } else {
                    v_25 = this.pnr;
                    v_24 = St_2.ST_2_CINQUIEME;
                }
                v_22 = (boiteDeVitesse == Numero.TROIS);
                if (v_22) {
                    v_27 = true;
                    v_26 = St_2.ST_2_TROISIEME;
                } else {
                    v_27 = v_25;
                    v_26 = v_24;
                }
                v_21 = (boiteDeVitesse == Numero.QUATRE);
                if (v_21) {
                    v_29 = true;
                    v_28 = St_2.ST_2_TROISIEME;
                } else {
                    v_29 = v_27;
                    v_28 = v_26;
                }
                v_20 = (boiteDeVitesse == Numero.DEUX);
                if (v_20) {
                    v_31 = true;
                    v_30 = St_2.ST_2_DEUXIEME;
                } else {
                    v_31 = v_29;
                    v_30 = v_28;
                }
                v_19 = (boiteDeVitesse == Numero.UN);
                if (v_19) {
                    r_St_2_Cinquieme = true;
                    s_St_2_Cinquieme = St_2.ST_2_PREMIER;
                } else {
                    r_St_2_Cinquieme = v_31;
                    s_St_2_Cinquieme = v_30;
                }
                s = s_St_2_Cinquieme;
                r = r_St_2_Cinquieme;
                break;
            case ST_2_ARRIERE:
                v_10 = (boiteDeVitesse == Numero.CINQ);
                if (v_10) {
                    v_12 = true;
                    v_11 = St_2.ST_2_CINQUIEME;
                } else {
                    v_12 = this.pnr;
                    v_11 = St_2.ST_2_ARRIERE;
                }
                v_9 = (boiteDeVitesse == Numero.TROIS);
                if (v_9) {
                    v_14 = true;
                    v_13 = St_2.ST_2_TROISIEME;
                } else {
                    v_14 = v_12;
                    v_13 = v_11;
                }
                v_8 = (boiteDeVitesse == Numero.QUATRE);
                if (v_8) {
                    v_16 = true;
                    v_15 = St_2.ST_2_TROISIEME;
                } else {
                    v_16 = v_14;
                    v_15 = v_13;
                }
                v_7 = (boiteDeVitesse == Numero.DEUX);
                if (v_7) {
                    v_18 = true;
                    v_17 = St_2.ST_2_DEUXIEME;
                } else {
                    v_18 = v_16;
                    v_17 = v_15;
                }
                v = (boiteDeVitesse == Numero.UN);
                if (v) {
                    r_St_2_Arriere = true;
                    s_St_2_Arriere = St_2.ST_2_PREMIER;
                } else {
                    r_St_2_Arriere = v_18;
                    s_St_2_Arriere = v_17;
                }
                s = s_St_2_Arriere;
                r = r_St_2_Arriere;
                break;
        }
        ck_3 = s;
        switch (ck_3) {
            case ST_2_PREMIER:
                num_St_2_Premier = Numero.UN;
                nr_St_2_Premier = false;
                ns_St_2_Premier = St_2.ST_2_PREMIER;
                num = num_St_2_Premier;
                ns = ns_St_2_Premier;
                nr = nr_St_2_Premier;
                break;
            case ST_2_DEUXIEME:
                num_St_2_Deuxieme = Numero.DEUX;
                nr_St_2_Deuxieme = false;
                ns_St_2_Deuxieme = St_2.ST_2_DEUXIEME;
                num = num_St_2_Deuxieme;
                ns = ns_St_2_Deuxieme;
                nr = nr_St_2_Deuxieme;
                break;
            case ST_2_TROISIEME:
                num_St_2_Troisieme = Numero.TROIS;
                nr_St_2_Troisieme = false;
                ns_St_2_Troisieme = St_2.ST_2_TROISIEME;
                num = num_St_2_Troisieme;
                ns = ns_St_2_Troisieme;
                nr = nr_St_2_Troisieme;
                break;
            case ST_2_QUATRIEME:
                num_St_2_Quatrieme = Numero.QUATRE;
                nr_St_2_Quatrieme = false;
                ns_St_2_Quatrieme = St_2.ST_2_QUATRIEME;
                num = num_St_2_Quatrieme;
                ns = ns_St_2_Quatrieme;
                nr = nr_St_2_Quatrieme;
                break;
            case ST_2_CINQUIEME:
                num_St_2_Cinquieme = Numero.CINQ;
                nr_St_2_Cinquieme = false;
                ns_St_2_Cinquieme = St_2.ST_2_CINQUIEME;
                num = num_St_2_Cinquieme;
                ns = ns_St_2_Cinquieme;
                nr = nr_St_2_Cinquieme;
                break;
            case ST_2_ARRIERE:
                num_St_2_Arriere = Numero.SIX;
                nr_St_2_Arriere = false;
                ns_St_2_Arriere = St_2.ST_2_ARRIERE;
                num = num_St_2_Arriere;
                ns = ns_St_2_Arriere;
                nr = nr_St_2_Arriere;
                break;
        }
        this.pnr = nr;
        this.ck = ns;
        return num;
    }
    public void reset () {
        this.pnr = false;
        this.ck = St_2.ST_2_PREMIER;
    }
}
