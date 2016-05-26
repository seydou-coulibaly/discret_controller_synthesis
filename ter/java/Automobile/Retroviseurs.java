package Automobile;


public class Retroviseurs {
    protected boolean pnr;
    protected St_4 ck;
    
    public Retroviseurs () {
        {
            this.pnr = false;
            this.ck = St_4.ST_4_DESACITVE;
        }
    }
    public boolean step (boolean moteur, Lum lumiere) {
        boolean gerer = true;
        boolean v_93 = true;
        St_4 v_92 = null;
        boolean v_91 = true;
        St_4 v_90 = null;
        boolean v_89 = true;
        boolean v_88 = true;
        boolean v_87 = true;
        boolean v_86 = true;
        boolean v = true;
        boolean v_102 = true;
        St_4 v_101 = null;
        boolean v_100 = true;
        St_4 v_99 = null;
        boolean v_98 = true;
        boolean v_97 = true;
        boolean v_96 = true;
        boolean v_95 = true;
        boolean v_94 = true;
        boolean v_111 = true;
        St_4 v_110 = null;
        boolean v_109 = true;
        St_4 v_108 = null;
        boolean v_107 = true;
        boolean v_106 = true;
        boolean v_105 = true;
        boolean v_104 = true;
        boolean v_103 = true;
        boolean v_122 = true;
        St_4 v_121 = null;
        boolean v_120 = true;
        St_4 v_119 = null;
        boolean v_118 = true;
        boolean v_117 = true;
        boolean v_116 = true;
        boolean v_115 = true;
        boolean v_114 = true;
        boolean v_113 = true;
        boolean v_112 = true;
        boolean r_St_4_PositionNuit = true;
        St_4 s_St_4_PositionNuit = null;
        boolean r_St_4_PositionJour = true;
        St_4 s_St_4_PositionJour = null;
        boolean r_St_4_PositionNormale = true;
        St_4 s_St_4_PositionNormale = null;
        boolean r_St_4_Desacitve = true;
        St_4 s_St_4_Desacitve = null;
        boolean nr_St_4_PositionNuit = true;
        St_4 ns_St_4_PositionNuit = null;
        boolean gerer_St_4_PositionNuit = true;
        boolean nr_St_4_PositionJour = true;
        St_4 ns_St_4_PositionJour = null;
        boolean gerer_St_4_PositionJour = true;
        boolean nr_St_4_PositionNormale = true;
        St_4 ns_St_4_PositionNormale = null;
        boolean gerer_St_4_PositionNormale = true;
        boolean nr_St_4_Desacitve = true;
        St_4 ns_St_4_Desacitve = null;
        boolean gerer_St_4_Desacitve = true;
        St_4 ck_5 = null;
        St_4 s = null;
        St_4 ns = null;
        boolean r = true;
        boolean nr = true;
        switch (this.ck) {
            case ST_4_DESACITVE:
                v_117 = (lumiere == Lum.NORMAL);
                v_116 = !moteur;
                v_118 = (v_116 && v_117);
                if (v_118) {
                    v_120 = true;
                    v_119 = St_4.ST_4_POSITIONNORMALE;
                } else {
                    v_120 = this.pnr;
                    v_119 = St_4.ST_4_DESACITVE;
                }
                v_114 = (lumiere == Lum.LOW);
                v_115 = (moteur && v_114);
                if (v_115) {
                    v_122 = true;
                    v_121 = St_4.ST_4_POSITIONNUIT;
                } else {
                    v_122 = v_120;
                    v_121 = v_119;
                }
                v_112 = (lumiere == Lum.HIGH);
                v_113 = (moteur && v_112);
                if (v_113) {
                    r_St_4_Desacitve = true;
                    s_St_4_Desacitve = St_4.ST_4_POSITIONJOUR;
                } else {
                    r_St_4_Desacitve = v_122;
                    s_St_4_Desacitve = v_121;
                }
                s = s_St_4_Desacitve;
                r = r_St_4_Desacitve;
                break;
            case ST_4_POSITIONNORMALE:
                v_107 = !moteur;
                if (v_107) {
                    v_109 = true;
                    v_108 = St_4.ST_4_DESACITVE;
                } else {
                    v_109 = this.pnr;
                    v_108 = St_4.ST_4_POSITIONNORMALE;
                }
                v_105 = (lumiere == Lum.LOW);
                v_106 = (moteur && v_105);
                if (v_106) {
                    v_111 = true;
                    v_110 = St_4.ST_4_POSITIONNUIT;
                } else {
                    v_111 = v_109;
                    v_110 = v_108;
                }
                v_103 = (lumiere == Lum.HIGH);
                v_104 = (moteur && v_103);
                if (v_104) {
                    r_St_4_PositionNormale = true;
                    s_St_4_PositionNormale = St_4.ST_4_POSITIONJOUR;
                } else {
                    r_St_4_PositionNormale = v_111;
                    s_St_4_PositionNormale = v_110;
                }
                s = s_St_4_PositionNormale;
                r = r_St_4_PositionNormale;
                break;
            case ST_4_POSITIONJOUR:
                v_98 = !moteur;
                if (v_98) {
                    v_100 = true;
                    v_99 = St_4.ST_4_DESACITVE;
                } else {
                    v_100 = this.pnr;
                    v_99 = St_4.ST_4_POSITIONJOUR;
                }
                v_96 = (lumiere == Lum.LOW);
                v_97 = (moteur && v_96);
                if (v_97) {
                    v_102 = true;
                    v_101 = St_4.ST_4_POSITIONNUIT;
                } else {
                    v_102 = v_100;
                    v_101 = v_99;
                }
                v_94 = (lumiere == Lum.NORMAL);
                v_95 = (moteur && v_94);
                if (v_95) {
                    r_St_4_PositionJour = true;
                    s_St_4_PositionJour = St_4.ST_4_POSITIONNORMALE;
                } else {
                    r_St_4_PositionJour = v_102;
                    s_St_4_PositionJour = v_101;
                }
                s = s_St_4_PositionJour;
                r = r_St_4_PositionJour;
                break;
            case ST_4_POSITIONNUIT:
                v_89 = !moteur;
                if (v_89) {
                    v_91 = true;
                    v_90 = St_4.ST_4_DESACITVE;
                } else {
                    v_91 = this.pnr;
                    v_90 = St_4.ST_4_POSITIONNUIT;
                }
                v_87 = (lumiere == Lum.NORMAL);
                v_88 = (moteur && v_87);
                if (v_88) {
                    v_93 = true;
                    v_92 = St_4.ST_4_POSITIONNORMALE;
                } else {
                    v_93 = v_91;
                    v_92 = v_90;
                }
                v = (lumiere == Lum.HIGH);
                v_86 = (moteur && v);
                if (v_86) {
                    r_St_4_PositionNuit = true;
                    s_St_4_PositionNuit = St_4.ST_4_POSITIONJOUR;
                } else {
                    r_St_4_PositionNuit = v_93;
                    s_St_4_PositionNuit = v_92;
                }
                s = s_St_4_PositionNuit;
                r = r_St_4_PositionNuit;
                break;
        }
        ck_5 = s;
        switch (ck_5) {
            case ST_4_DESACITVE:
                gerer_St_4_Desacitve = false;
                nr_St_4_Desacitve = false;
                ns_St_4_Desacitve = St_4.ST_4_DESACITVE;
                gerer = gerer_St_4_Desacitve;
                ns = ns_St_4_Desacitve;
                nr = nr_St_4_Desacitve;
                break;
            case ST_4_POSITIONNORMALE:
                gerer_St_4_PositionNormale = true;
                nr_St_4_PositionNormale = false;
                ns_St_4_PositionNormale = St_4.ST_4_POSITIONNORMALE;
                gerer = gerer_St_4_PositionNormale;
                ns = ns_St_4_PositionNormale;
                nr = nr_St_4_PositionNormale;
                break;
            case ST_4_POSITIONJOUR:
                gerer_St_4_PositionJour = true;
                nr_St_4_PositionJour = false;
                ns_St_4_PositionJour = St_4.ST_4_POSITIONJOUR;
                gerer = gerer_St_4_PositionJour;
                ns = ns_St_4_PositionJour;
                nr = nr_St_4_PositionJour;
                break;
            case ST_4_POSITIONNUIT:
                gerer_St_4_PositionNuit = true;
                nr_St_4_PositionNuit = false;
                ns_St_4_PositionNuit = St_4.ST_4_POSITIONNUIT;
                gerer = gerer_St_4_PositionNuit;
                ns = ns_St_4_PositionNuit;
                nr = nr_St_4_PositionNuit;
                break;
        }
        this.pnr = nr;
        this.ck = ns;
        return gerer;
    }
    public void reset () {
        this.pnr = false;
        this.ck = St_4.ST_4_DESACITVE;
    }
}
