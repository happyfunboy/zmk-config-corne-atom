#include <zephyr/kernel.h>
#include <zmk/display.h>
#include <lvgl.h>

LV_IMG_DECLARE(gengar_img);

int zmk_display_status_screen_init(lv_obj_t *parent) {
    // Create a blank screen container
    lv_obj_t *screen = lv_obj_create(parent);
    lv_obj_clear_flag(screen, LV_OBJ_FLAG_SCROLLABLE);

    // Create the image and center it (fits 128x32 nicely)
    lv_obj_t *img = lv_img_create(screen);
    lv_img_set_src(img, &gengar_img);
    lv_obj_center(img);

    return 0;
}
