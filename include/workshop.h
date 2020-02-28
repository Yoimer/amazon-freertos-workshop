/**
 * @file workshop.h
 *
 * (C) 2019 - Timothee Cruse <timothee.cruse@gmail.com>
 * This code is licensed under the MIT License.
 */

#ifndef _WORKSHOP__H_
#define _WORKSHOP__H_

#include "esp_err.h"

#ifndef LAB_INIT
    #define LAB_INIT(x)
#endif

esp_err_t workshop_run(void);

#endif /* ifndef _WORKSHOP__H_ */
