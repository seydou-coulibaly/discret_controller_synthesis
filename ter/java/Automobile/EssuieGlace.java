package Automobile;


public class EssuieGlace {
    protected boolean pnr;
    protected St_5 ck;
    
    public EssuieGlace () {
        {
            this.pnr = false;
            this.ck = St_5.ST_5_DESACTIVE;
        }
    }
    public boolean step (boolean moteur, boolean capteurPluie, Lum densite) 
        {
        boolean etat = true;
        boolean v_134 = true;
        St_5 v_133 = null;
        boolean v_132 = true;
        St_5 v_131 = null;
        boolean v_130 = true;
        boolean v_129 = true;
        boolean v_128 = true;
        boolean v_127 = true;
        boolean v_126 = true;
        boolean v_125 = true;
        boolean v_124 = true;
        boolean v_123 = true;
        boolean v = true;
        boolean v_147 = true;
        St_5 v_146 = null;
        boolean v_145 = true;
        St_5 v_144 = null;
        boolean v_143 = true;
        boolean v_142 = true;
        boolean v_141 = true;
        boolean v_140 = true;
        boolean v_139 = true;
        boolean v_138 = true;
        boolean v_137 = true;
        boolean v_136 = true;
        boolean v_135 = true;
        boolean v_160 = true;
        St_5 v_159 = null;
        boolean v_158 = true;
        St_5 v_157 = null;
        boolean v_156 = true;
        boolean v_155 = true;
        boolean v_154 = true;
        boolean v_153 = true;
        boolean v_152 = true;
        boolean v_151 = true;
        boolean v_150 = true;
        boolean v_149 = true;
        boolean v_148 = true;
        boolean v_161 = true;
        boolean r_St_5_BalayageContiu = true;
        St_5 s_St_5_BalayageContiu = null;
        boolean r_St_5_BalayageIntermittent = true;
        St_5 s_St_5_BalayageIntermittent = null;
        boolean r_St_5_BalayageUnique = true;
        St_5 s_St_5_BalayageUnique = null;
        boolean r_St_5_Desactive = true;
        St_5 s_St_5_Desactive = null;
        boolean nr_St_5_BalayageContiu = true;
        St_5 ns_St_5_BalayageContiu = null;
        boolean etat_St_5_BalayageContiu = true;
        boolean nr_St_5_BalayageIntermittent = true;
        St_5 ns_St_5_BalayageIntermittent = null;
        boolean etat_St_5_BalayageIntermittent = true;
        boolean nr_St_5_BalayageUnique = true;
        St_5 ns_St_5_BalayageUnique = null;
        boolean etat_St_5_BalayageUnique = true;
        boolean nr_St_5_Desactive = true;
        St_5 ns_St_5_Desactive = null;
        boolean etat_St_5_Desactive = true;
        St_5 ck_6 = null;
        St_5 s = null;
        St_5 ns = null;
        boolean r = true;
        boolean nr = true;
        switch (this.ck) {
            case ST_5_DESACTIVE:
                v_161 = (moteur && capteurPluie);
                if (v_161) {
                    r_St_5_Desactive = true;
                    s_St_5_Desactive = St_5.ST_5_BALAYAGEUNIQUE;
                } else {
                    r_St_5_Desactive = this.pnr;
                    s_St_5_Desactive = St_5.ST_5_DESACTIVE;
                }
                s = s_St_5_Desactive;
                r = r_St_5_Desactive;
                break;
            case ST_5_BALAYAGEUNIQUE:
                v_155 = (densite == Lum.NORMAL);
                v_154 = (moteur && capteurPluie);
                v_156 = (v_154 && v_155);
                if (v_156) {
                    v_158 = true;
                    v_157 = St_5.ST_5_BALAYAGEINTERMITTENT;
                } else {
                    v_158 = this.pnr;
                    v_157 = St_5.ST_5_BALAYAGEUNIQUE;
                }
                v_152 = (densite == Lum.HIGH);
                v_151 = (moteur && capteurPluie);
                v_153 = (v_151 && v_152);
                if (v_153) {
                    v_160 = true;
                    v_159 = St_5.ST_5_BALAYAGECONTIU;
                } else {
                    v_160 = v_158;
                    v_159 = v_157;
                }
                v_149 = !moteur;
                v_148 = !capteurPluie;
                v_150 = (v_148 || v_149);
                if (v_150) {
                    r_St_5_BalayageUnique = true;
                    s_St_5_BalayageUnique = St_5.ST_5_DESACTIVE;
                } else {
                    r_St_5_BalayageUnique = v_160;
                    s_St_5_BalayageUnique = v_159;
                }
                s = s_St_5_BalayageUnique;
                r = r_St_5_BalayageUnique;
                break;
            case ST_5_BALAYAGEINTERMITTENT:
                v_142 = (densite == Lum.LOW);
                v_141 = (moteur && capteurPluie);
                v_143 = (v_141 && v_142);
                if (v_143) {
                    v_145 = true;
                    v_144 = St_5.ST_5_BALAYAGEUNIQUE;
                } else {
                    v_145 = this.pnr;
                    v_144 = St_5.ST_5_BALAYAGEINTERMITTENT;
                }
                v_139 = (densite == Lum.HIGH);
                v_138 = (moteur && capteurPluie);
                v_140 = (v_138 && v_139);
                if (v_140) {
                    v_147 = true;
                    v_146 = St_5.ST_5_BALAYAGECONTIU;
                } else {
                    v_147 = v_145;
                    v_146 = v_144;
                }
                v_136 = !moteur;
                v_135 = !capteurPluie;
                v_137 = (v_135 || v_136);
                if (v_137) {
                    r_St_5_BalayageIntermittent = true;
                    s_St_5_BalayageIntermittent = St_5.ST_5_DESACTIVE;
                } else {
                    r_St_5_BalayageIntermittent = v_147;
                    s_St_5_BalayageIntermittent = v_146;
                }
                s = s_St_5_BalayageIntermittent;
                r = r_St_5_BalayageIntermittent;
                break;
            case ST_5_BALAYAGECONTIU:
                v_129 = (densite == Lum.NORMAL);
                v_128 = (moteur && capteurPluie);
                v_130 = (v_128 && v_129);
                if (v_130) {
                    v_132 = true;
                    v_131 = St_5.ST_5_BALAYAGEINTERMITTENT;
                } else {
                    v_132 = this.pnr;
                    v_131 = St_5.ST_5_BALAYAGECONTIU;
                }
                v_126 = (densite == Lum.LOW);
                v_125 = (moteur && capteurPluie);
                v_127 = (v_125 && v_126);
                if (v_127) {
                    v_134 = true;
                    v_133 = St_5.ST_5_BALAYAGEUNIQUE;
                } else {
                    v_134 = v_132;
                    v_133 = v_131;
                }
                v_123 = !moteur;
                v = !capteurPluie;
                v_124 = (v || v_123);
                if (v_124) {
                    r_St_5_BalayageContiu = true;
                    s_St_5_BalayageContiu = St_5.ST_5_DESACTIVE;
                } else {
                    r_St_5_BalayageContiu = v_134;
                    s_St_5_BalayageContiu = v_133;
                }
                s = s_St_5_BalayageContiu;
                r = r_St_5_BalayageContiu;
                break;
        }
        ck_6 = s;
        switch (ck_6) {
            case ST_5_DESACTIVE:
                etat_St_5_Desactive = false;
                nr_St_5_Desactive = false;
                ns_St_5_Desactive = St_5.ST_5_DESACTIVE;
                etat = etat_St_5_Desactive;
                ns = ns_St_5_Desactive;
                nr = nr_St_5_Desactive;
                break;
            case ST_5_BALAYAGEUNIQUE:
                etat_St_5_BalayageUnique = true;
                nr_St_5_BalayageUnique = false;
                ns_St_5_BalayageUnique = St_5.ST_5_BALAYAGEUNIQUE;
                etat = etat_St_5_BalayageUnique;
                ns = ns_St_5_BalayageUnique;
                nr = nr_St_5_BalayageUnique;
                break;
            case ST_5_BALAYAGEINTERMITTENT:
                etat_St_5_BalayageIntermittent = true;
                nr_St_5_BalayageIntermittent = false;
                ns_St_5_BalayageIntermittent = St_5.ST_5_BALAYAGEINTERMITTENT;
                etat = etat_St_5_BalayageIntermittent;
                ns = ns_St_5_BalayageIntermittent;
                nr = nr_St_5_BalayageIntermittent;
                break;
            case ST_5_BALAYAGECONTIU:
                etat_St_5_BalayageContiu = true;
                nr_St_5_BalayageContiu = false;
                ns_St_5_BalayageContiu = St_5.ST_5_BALAYAGECONTIU;
                etat = etat_St_5_BalayageContiu;
                ns = ns_St_5_BalayageContiu;
                nr = nr_St_5_BalayageContiu;
                break;
        }
        this.pnr = nr;
        this.ck = ns;
        return etat;
    }
    public void reset () {
        this.pnr = false;
        this.ck = St_5.ST_5_DESACTIVE;
    }
}
