/ {
    behaviors {
        hml: home_row_mod_left {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <2>;
            flavor = "balanced";
            require-prior-idle-ms = <100>;
            tapping-term-ms = <200>;
            quick-tap-ms = <150>;
            bindings = <&kp>, <&kp>;
            hold-trigger-on-release;
            hold-trigger-key-positions = <
              _UR1 _UR2 _UR3 _UR4 _UR5
              _MR1 _MR2 _MR3 _MR4 _MR5
                   _LR2 _LR3 _LR4
            >;
        };
        hmr: home_row_mod_right {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <2>;
            flavor = "balanced";
            require-prior-idle-ms = <100>;
            tapping-term-ms = <200>;
            quick-tap-ms = <150>;
            bindings = <&kp>, <&kp>;
            hold-trigger-on-release;
            hold-trigger-key-positions = <
              _UL1 _UL2 _UL3 _UL4 _UL5
              _ML1 _ML2 _ML3 _ML4 _ML5
                   _LL2 _LL3 _LL4
            >;
        };
    };
};

