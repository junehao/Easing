/*
  Easing.h - Library for ease-in and ease-out smooth control.
  Created by June-Hao Hou, May 18, 2016.
  Inspired from http://gizma.com/easing/ and
  https://gist.github.com/gre/1650294
*/

#ifndef Easing_h
#define Easing_h

#include "Arduino.h"

class Easing
{
  public:
    Easing();
    //float linear(float t); //not necessary
    float easeInQuad(float t);
    float easeOutQuad(float t);
    float easeInOutQuad(float t);
    float easeInCubic(float t);
    float easeOutCubic(float t);
    float easeInOutCubic(float t);
    float easeInQuart(float t);
    float easeOutQuart(float t);
    float easeInOutQuart(float t);
    float easeInQuint(float t);
    float easeOutQuint(float t);
    float easeInOutQuint(float t);
    float easeInTrig(float t);
    float easeOutTrig(float t);
    float easeInOutTrig(float t);
};

#endif
