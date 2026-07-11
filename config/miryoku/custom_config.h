// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku


// #define MIRYOKU_ALPHAS_QWERTY
// #define MIRYOKU_TAP_QWERTY

// Sturdy base layer with home row mods
#define MIRYOKU_LAYER_BASE \
&kp V,              &kp M,              &kp L,              &kp C,              &kp P,              &kp Q,              &kp F,              &kp O,              &kp U,              &kp J,                \
U_MT(LGUI, S),      U_MT(LALT, T),      U_MT(LCTRL, R),     U_MT(LSHFT, D),     &kp Y,              &kp DOT,            U_MT(LSHFT, N),     U_MT(LCTRL, A),     U_MT(LALT, E),      U_MT(LGUI, I),        \
U_LT(U_BUTTON, Z),  U_MT(RALT, K),      &kp X,              &kp G,              &kp W,              &kp B,              &kp H,              &kp SQT,            U_MT(RALT, SEMI),  U_LT(U_BUTTON, COMMA), \
U_NP,               U_NP,               U_LT(U_MEDIA, ESC), U_LT(U_NAV, SPACE), U_LT(U_MOUSE, TAB), U_LT(U_SYM, RET),   U_LT(U_NUM, BSPC),  U_LT(U_FUN, DEL),   U_NP,               U_NP


// Sturdy tap layer (no mods)
#define MIRYOKU_LAYER_TAP \
&kp V,              &kp M,              &kp L,              &kp C,              &kp P,              &kp Q,              &kp F,              &kp O,              &kp U,              &kp J,              \
&kp S,              &kp T,              &kp R,              &kp D,              &kp Y,              &kp DOT,            &kp N,              &kp A,              &kp E,              &kp I,              \
&kp Z,              &kp K,              &kp X,              &kp G,              &kp W,              &kp B,              &kp H,              &kp SQT,            &kp SEMI,          &kp COMMA,           \
U_NP,               U_NP,               &kp ESC,            &kp SPACE,          &kp TAB,            &kp RET,            &kp BSPC,           &kp DEL,            U_NP,               U_NP

// Extra layer stays as QWERTY
#define MIRYOKU_EXTRA_QWERTY

#define MIRYOKU_NAV_INVERTEDT

