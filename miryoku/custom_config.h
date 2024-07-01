#define MIRYOKU_NAV_VI
#define MIRYOKU_CLIPBOARD_MAC

// switched layer order
#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp G,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp D,             &kp H,             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp K,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_NUM, TAB),  U_LT(U_FUN, RET),  U_LT(U_SYM, BSPC), U_LT(U_MOUSE, DEL),U_NP,              U_NP

// +789
// -456*
// =123/
//
// RET BSPC 0
#define MIRYOKU_LAYER_NUM \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp EQUAL,         &kp N7,            &kp N8,            &kp N9,            U_NA,              \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp PLUS,          &kp N4,            &kp N5,            &kp N6,            &kp STAR,          \
U_NA,              &kp RALT,          &u_to_U_NAV,       &u_to_U_NUM,       U_NA,              &kp MINUS,         &kp N1,            &kp N2,            &kp N3,            &kp SLASH,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp N0,            U_NP,              U_NP

//   {}# &<> '
// !*()+ |:^$;
// \@[]` ~%,./
//   _-=
#define MIRYOKU_LAYER_SYM \
U_NA,              U_NA,              &kp LBRC,          &kp RBRC,          &kp HASH,          &kp AMPS,          &kp LT,            &kp GT,            U_NA,              &kp SQT            \
&kp EXCL,          &kp STAR,          &kp LPAR,          &kp RPAR,          &kp PLUS,          &kp PIPE,          &kp COLON,         &kp CARET,         &kp DLLR,          &kp SEMI,          \
&kp BSLH,          &kp AT,            &kp LBKT,          &kp RBKT,          &kp GRAVE,         &kp TILDE,         &kp PRCNT,         &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp UNDER,         &kp MINUS,         &kp EQUAL,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP
