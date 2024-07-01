#define MIRYOKU_NAV_VI
#define MIRYOKU_CLIPBOARD_MAC

// switched layer order
#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp G,             &kp M,             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_NUM, TAB),  U_LT(U_FUN, RET),  U_LT(U_SYM, BSPC), U_LT(U_MOUSE, DEL),U_NP,              U_NP

// + 7 8 9
// - 4 5 6 *
// = 1 2 3 /
//
// RET BSPC 0
#define MIRYOKU_LAYER_NUM \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp EQUAL,         &kp N7,            &kp N8,            &kp N9,            U_NA,              \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp PLUS,          &kp N4,            &kp N5,            &kp N6,            &kp STAR,          \
U_NA,              &kp RALT,          &u_to_U_NAV,       &u_to_U_NUM,       U_NA,              &kp MINUS,         &kp N1,            &kp N2,            &kp N3,            &kp SLASH,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp N0,            U_NP,              U_NP

//   ( )   #   &   { } "
// % * ! = +   | : ^ $ ;
// \ [ ] @ `   ~ % < > ?
//
// _ SPC -
#define MIRYOKU_LAYER_SYM \
U_NA,              &kp LPAR,          &kp RPAR,          U_NA,              &kp HASH,          &kp AMPS,          U_NA,              &kp LBRC,          &kp RBRC,          &kp DQT,           \
&kp PRCNT,         &kp STAR,          &kp EXCL,          &kp EQUAL,         &kp PLUS,          &kp PIPE,          &kp COLON,         &kp CARET,         &kp DLLR,          &kp SEMI,          \
&kp BSLH,          &kp LBKT,          &kp RBKT,          &kp AT,            &kp GRAVE,         &kp TILDE,         &kp SLASH,         &kp LT,            &kp RT,            &kp QMARK,         \
U_NP,              U_NP,              &kp UNDER,         &kp SPACE,         &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP
