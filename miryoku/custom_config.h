#define MIRYOKU_NAV_VI
#define MIRYOKU_CLIPBOARD_MAC

// remove mouse layer
#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun")

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MEDIA  5
#define U_NUM    6
#define U_SYM    7
#define U_FUN    8

// remap mouse layer to activate full hand sym layer
#define U_MOUSE U_SYM

// SYM LAYER
//   ( ) % +   & # { } "
// _ * ! = -   | : ^ $ ;
// \ [ ] @ `   ~ / < > ?
#define MIRYOKU_LAYER_SYM \
U_NA,              &kp LPAR,          &kp RPAR,          &kp PRCNT,         &kp PLUS,          &kp AMPS,          &kp HASH,          &kp LBRC,          &kp RBRC,          &kp DQT,           \
U_MT(LGUI, UNDER), U_MT(LALT, STAR),  U_MT(LCTRL, EXCL), U_MT(LSHFT, EQUAL),&kp MINUS,         &kp PIPE,          U_MT(LSHFT, COLON),U_MT(LCTRL, CARET),U_MT(LALT, DLLR),  U_MT(LGUI, SEMI),  \
&kp BSLH,          &kp LBKT,          &kp RBKT,          &kp AT,            &kp GRAVE,         &kp TILDE,         &kp SLASH,         &kp LT,            &kp GT,            &kp QMARK,         \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP
