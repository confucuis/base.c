#ifndef __LED_H
#define __LED_H

#include "light.h"

struct Led {
    struct LightInterface *inf;
    int state;
};

int NewLed(struct Led *self);

#endif // __LED_H
