/**
 * @file touch.h
 *
 */

#ifndef TOUCH_H
#define TOUCH_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#ifdef LV_CONF_INCLUDE_SIMPLE
#include "lv_drv_conf.h"
#else
#include "lv_drv_conf.h"
#endif

#if USE_TOUCH
#include <stdint.h>
#include <stdbool.h>
#include <SDL2/SDL.h>
#include "lvgl/src/hal/lv_hal_indev.h"


#ifndef MONITOR_SDL_INCLUDE_PATH
#define MONITOR_SDL_INCLUDE_PATH <SDL2/SDL.h>
#endif

#include MONITOR_SDL_INCLUDE_PATH

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Initialize the touch screen
 */
void touch_init(void);
/**
 * Get the current position and state of the mouse
 * @param data store the touch screen data here
 * @return false: because the points are not buffered, so no more data to be read
 */
void touch_read(struct _lv_indev_drv_t * indev_drv, lv_indev_data_t * data);

/**
 * It will be called from the main SDL thread
 */
void touch_handler(SDL_Event *event);

/**********************
 *      MACROS
 **********************/

#endif /* USE_TOUCH */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* TOUCH_H */
