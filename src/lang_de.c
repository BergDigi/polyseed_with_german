#include "lang.h"

/* Based on BIP-39 (unchanged) */

POLYSEED_PRIVATE const polyseed_lang polyseed_lang_de = {
    .name = "Deutsch",
    .name_en = "German",
    .separator = " ",
    .is_sorted = true,
    .has_prefix = true,
    .has_accents = false,
    .compose = false,
    .words = {
