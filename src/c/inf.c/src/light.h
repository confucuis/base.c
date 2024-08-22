#ifndef __LIGHT_H
#define __LIGHT_H

typedef int (*LightOnFun)(void *self);
typedef int (*LightOffFun)(void *self);
typedef int (*LightStateFun)(void *self);

struct LightInterface {
    LightOnFun on;
    LightOffFun off;
    LightStateFun state;
};

static inline int LightOn(void *self)
{
    return (*(struct LightInterface **)self)->on(self);
}

static inline int LightOff(void *self)
{
    return (*(struct LightInterface **)self)->off(self);
}

static inline int LightState(void *self)
{
    return (*(struct LightInterface **)self)->state(self);
}

#endif // __LIGHT_H
