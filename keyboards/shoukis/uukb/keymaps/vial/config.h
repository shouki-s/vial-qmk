#pragma once

#define VIAL_KEYBOARD_UID {0x13, 0x22, 0xA6, 0xF2, 0x5B, 0x8C, 0x75, 0xAE}

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT
#define NO_ACTION_TAPPING
#define LAYER_STATE_8BIT

#define USB_SUSPEND_WAKEUP_DELAY 200

#define WS2812_DI_PIN D6
#undef RGBLIGHT_EFFECT_CHRISTMAS
#undef RGBLIGHT_LED_COUNT
#define RGBLIGHT_LED_COUNT 62
#define RGB_DISABLE_TIMEOUT 900000
#define RGB_DISABLE_WHEN_USB_SUSPENDED 1
