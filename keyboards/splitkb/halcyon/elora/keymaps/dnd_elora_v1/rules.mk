# This adds module functionality to your keyboard (files found in users/halcyon_modules)
USER_NAME := halcyon_modules

REPEAT_KEY_ENABLE = yes
RAW_ENABLE = yes
MOUSEKEY_ENABLE = yes
TAP_DANCE_ENABLE = yes

SRC += processing.c
SRC += custom_keys.c
SRC += rawcomm.c