#include "styles.h"
#include "images.h"
#include "fonts.h"

void apply_style_style_indicators(lv_obj_t *obj) {
    lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(obj, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
};

