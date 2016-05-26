package Automobile;


public class Securite {
    protected boolean pnr;
    protected St_8 ck;
    
    public Securite () {
        {
            this.pnr = false;
            this.ck = St_8.ST_8_ACCELERATION;
        }
    }
    public jeptagon.Pervasives.Tuple2 step (boolean presencePieton, boolean presencevehicule, Couleur feu) 
        {
        boolean frein = true;
        Cause causeFreinage = null;
        boolean v_180 = true;
        St_8 v_179 = null;
        boolean v_178 = true;
        St_8 v_177 = null;
        boolean v_176 = true;
        boolean v_175 = true;
        boolean v_174 = true;
        boolean v_173 = true;
        boolean v_172 = true;
        boolean v_171 = true;
        boolean v = true;
        boolean v_195 = true;
        St_8 v_194 = null;
        boolean v_193 = true;
        St_8 v_192 = null;
        boolean v_191 = true;
        boolean v_190 = true;
        boolean v_189 = true;
        boolean v_188 = true;
        boolean v_187 = true;
        boolean v_186 = true;
        boolean v_185 = true;
        boolean v_184 = true;
        boolean v_183 = true;
        boolean v_182 = true;
        boolean v_181 = true;
        boolean v_212 = true;
        St_8 v_211 = null;
        boolean v_210 = true;
        St_8 v_209 = null;
        boolean v_208 = true;
        boolean v_207 = true;
        boolean v_206 = true;
        boolean v_205 = true;
        boolean v_204 = true;
        boolean v_203 = true;
        boolean v_202 = true;
        boolean v_201 = true;
        boolean v_200 = true;
        boolean v_199 = true;
        boolean v_198 = true;
        boolean v_197 = true;
        boolean v_196 = true;
        boolean v_224 = true;
        St_8 v_223 = null;
        boolean v_222 = true;
        St_8 v_221 = null;
        boolean v_220 = true;
        boolean v_219 = true;
        boolean v_218 = true;
        boolean v_217 = true;
        boolean v_216 = true;
        boolean v_215 = true;
        boolean v_214 = true;
        boolean v_213 = true;
        boolean r_St_8_Feu = true;
        St_8 s_St_8_Feu = null;
        boolean r_St_8_Vehicule = true;
        St_8 s_St_8_Vehicule = null;
        boolean r_St_8_Pieton = true;
        St_8 s_St_8_Pieton = null;
        boolean r_St_8_Acceleration = true;
        St_8 s_St_8_Acceleration = null;
        boolean nr_St_8_Feu = true;
        St_8 ns_St_8_Feu = null;
        Cause causeFreinage_St_8_Feu = null;
        boolean frein_St_8_Feu = true;
        boolean nr_St_8_Vehicule = true;
        St_8 ns_St_8_Vehicule = null;
        Cause causeFreinage_St_8_Vehicule = null;
        boolean frein_St_8_Vehicule = true;
        boolean nr_St_8_Pieton = true;
        St_8 ns_St_8_Pieton = null;
        Cause causeFreinage_St_8_Pieton = null;
        boolean frein_St_8_Pieton = true;
        boolean nr_St_8_Acceleration = true;
        St_8 ns_St_8_Acceleration = null;
        Cause causeFreinage_St_8_Acceleration = null;
        boolean frein_St_8_Acceleration = true;
        St_8 ck_9 = null;
        St_8 s = null;
        St_8 ns = null;
        boolean r = true;
        boolean nr = true;
        switch (this.ck) {
            case ST_8_ACCELERATION:
                v_218 = (feu == Couleur.VERT);
                v_219 = !v_218;
                v_216 = !presencevehicule;
                v_215 = !presencePieton;
                v_217 = (v_215 && v_216);
                v_220 = (v_217 && v_219);
                if (v_220) {
                    v_222 = true;
                    v_221 = St_8.ST_8_FEU;
                } else {
                    v_222 = this.pnr;
                    v_221 = St_8.ST_8_ACCELERATION;
                }
                v_213 = !presencePieton;
                v_214 = (v_213 && presencevehicule);
                if (v_214) {
                    v_224 = true;
                } else {
                    v_224 = v_222;
                }
                if (presencePieton) {
                    r_St_8_Acceleration = true;
                } else {
                    r_St_8_Acceleration = v_224;
                }
                if (v_214) {
                    v_223 = St_8.ST_8_VEHICULE;
                } else {
                    v_223 = v_221;
                }
                if (presencePieton) {
                    s_St_8_Acceleration = St_8.ST_8_PIETON;
                } else {
                    s_St_8_Acceleration = v_223;
                }
                s = s_St_8_Acceleration;
                r = r_St_8_Acceleration;
                break;
            case ST_8_PIETON:
                v_206 = (feu == Couleur.VERT);
                v_207 = !v_206;
                v_204 = !presencevehicule;
                v_203 = !presencePieton;
                v_205 = (v_203 && v_204);
                v_208 = (v_205 && v_207);
                if (v_208) {
                    v_210 = true;
                    v_209 = St_8.ST_8_FEU;
                } else {
                    v_210 = this.pnr;
                    v_209 = St_8.ST_8_PIETON;
                }
                v_201 = !presencePieton;
                v_202 = (v_201 && presencevehicule);
                if (v_202) {
                    v_212 = true;
                    v_211 = St_8.ST_8_VEHICULE;
                } else {
                    v_212 = v_210;
                    v_211 = v_209;
                }
                v_199 = (feu == Couleur.VERT);
                v_197 = !presencevehicule;
                v_196 = !presencePieton;
                v_198 = (v_196 && v_197);
                v_200 = (v_198 && v_199);
                if (v_200) {
                    r_St_8_Pieton = true;
                    s_St_8_Pieton = St_8.ST_8_ACCELERATION;
                } else {
                    r_St_8_Pieton = v_212;
                    s_St_8_Pieton = v_211;
                }
                s = s_St_8_Pieton;
                r = r_St_8_Pieton;
                break;
            case ST_8_VEHICULE:
                v_189 = (feu == Couleur.VERT);
                v_190 = !v_189;
                v_187 = !presencevehicule;
                v_186 = !presencePieton;
                v_188 = (v_186 && v_187);
                v_191 = (v_188 && v_190);
                if (v_191) {
                    v_193 = true;
                } else {
                    v_193 = this.pnr;
                }
                if (presencePieton) {
                    v_195 = true;
                } else {
                    v_195 = v_193;
                }
                if (v_191) {
                    v_192 = St_8.ST_8_FEU;
                } else {
                    v_192 = St_8.ST_8_VEHICULE;
                }
                if (presencePieton) {
                    v_194 = St_8.ST_8_PIETON;
                } else {
                    v_194 = v_192;
                }
                v_184 = (feu == Couleur.VERT);
                v_182 = !presencevehicule;
                v_181 = !presencePieton;
                v_183 = (v_181 && v_182);
                v_185 = (v_183 && v_184);
                if (v_185) {
                    r_St_8_Vehicule = true;
                    s_St_8_Vehicule = St_8.ST_8_ACCELERATION;
                } else {
                    r_St_8_Vehicule = v_195;
                    s_St_8_Vehicule = v_194;
                }
                s = s_St_8_Vehicule;
                r = r_St_8_Vehicule;
                break;
            case ST_8_FEU:
                v_175 = !presencePieton;
                v_176 = (v_175 && presencevehicule);
                if (v_176) {
                    v_178 = true;
                } else {
                    v_178 = this.pnr;
                }
                if (presencePieton) {
                    v_180 = true;
                } else {
                    v_180 = v_178;
                }
                if (v_176) {
                    v_177 = St_8.ST_8_VEHICULE;
                } else {
                    v_177 = St_8.ST_8_FEU;
                }
                if (presencePieton) {
                    v_179 = St_8.ST_8_PIETON;
                } else {
                    v_179 = v_177;
                }
                v_173 = (feu == Couleur.VERT);
                v_171 = !presencevehicule;
                v = !presencePieton;
                v_172 = (v && v_171);
                v_174 = (v_172 && v_173);
                if (v_174) {
                    r_St_8_Feu = true;
                    s_St_8_Feu = St_8.ST_8_ACCELERATION;
                } else {
                    r_St_8_Feu = v_180;
                    s_St_8_Feu = v_179;
                }
                s = s_St_8_Feu;
                r = r_St_8_Feu;
                break;
        }
        ck_9 = s;
        switch (ck_9) {
            case ST_8_ACCELERATION:
                frein_St_8_Acceleration = false;
                causeFreinage_St_8_Acceleration = Cause.NONE;
                nr_St_8_Acceleration = false;
                ns_St_8_Acceleration = St_8.ST_8_ACCELERATION;
                frein = frein_St_8_Acceleration;
                causeFreinage = causeFreinage_St_8_Acceleration;
                ns = ns_St_8_Acceleration;
                nr = nr_St_8_Acceleration;
                break;
            case ST_8_PIETON:
                frein_St_8_Pieton = true;
                causeFreinage_St_8_Pieton = Cause.PRESENCEPIETON;
                nr_St_8_Pieton = false;
                ns_St_8_Pieton = St_8.ST_8_PIETON;
                frein = frein_St_8_Pieton;
                causeFreinage = causeFreinage_St_8_Pieton;
                ns = ns_St_8_Pieton;
                nr = nr_St_8_Pieton;
                break;
            case ST_8_VEHICULE:
                frein_St_8_Vehicule = true;
                causeFreinage_St_8_Vehicule = Cause.PRESENCEVEHICULE;
                nr_St_8_Vehicule = false;
                ns_St_8_Vehicule = St_8.ST_8_VEHICULE;
                frein = frein_St_8_Vehicule;
                causeFreinage = causeFreinage_St_8_Vehicule;
                ns = ns_St_8_Vehicule;
                nr = nr_St_8_Vehicule;
                break;
            case ST_8_FEU:
                frein_St_8_Feu = true;
                causeFreinage_St_8_Feu = Cause.FEU;
                nr_St_8_Feu = false;
                ns_St_8_Feu = St_8.ST_8_FEU;
                frein = frein_St_8_Feu;
                causeFreinage = causeFreinage_St_8_Feu;
                ns = ns_St_8_Feu;
                nr = nr_St_8_Feu;
                break;
        }
        this.pnr = nr;
        this.ck = ns;
        return new jeptagon.Pervasives.Tuple2(frein, causeFreinage);
    }
    public void reset () {
        this.pnr = false;
        this.ck = St_8.ST_8_ACCELERATION;
    }
}
