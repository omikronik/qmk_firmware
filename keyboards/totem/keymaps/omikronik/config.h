#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

#define MASTER_LEFT
// #define MASTER_RIGHT

// time required to activate hold
#define TAPPING_TERM 200
// if tap key again in the term specified, treat it as a hold, good for accidents
#define QUICK_TAP_TERM 120

// OSM configs, timeout for OSM
#define ONESHOT_TIMEOUT 900

// behaviour for mod tap, more ZMK like
#define HOLD_ON_OTHER_KEY_PRESS
