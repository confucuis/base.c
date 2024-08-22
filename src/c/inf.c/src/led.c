#include "led.h"
#include "light.h"

int LedOn(struct Led *self);
int LedOff(struct Led *self);
int LedState(struct Led *self);

struct LightInterface LedInf = {
        .on = (LightOnFun)LedOn,
        .off = (LightOffFun)LedOff,
        .state = (LightStateFun)LedState,
};


int LedOn(struct Led *self)
{
    self->state = 1;
    return 0;
}

int LedOff(struct Led *self)
{
    self->state = 0;
    return 0;
}

int LedState(struct Led *self)
{
    return self->state;
}

int NewLed(struct Led *self)
{
    self->inf = &LedInf;
    self->state = 0;
    return 0;
}
