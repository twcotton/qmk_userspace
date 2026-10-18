#pragma once

#ifdef DYNAMIC_KEYMAP_LAYER_COUNT
#    undef DYNAMIC_KEYMAP_LAYER_COUNT
#endif
#define DYNAMIC_KEYMAP_LAYER_COUNT 8

// Allow advanced per-key RGB matrix indicators in user space
#if defined(RGB_MATRIX_ENABLE)
#    define RGB_MATRIX_KEYREACTIVE_ENABLED
#    define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_TYPING_HEATMAP
#endif


