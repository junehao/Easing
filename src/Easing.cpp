/*
  Easing.cpp - Library for ease-in and ease-out smooth control.
  Created by June-Hao Hou, May 18, 2016.
  Inspired from http://gizma.com/easing/ and
  https://gist.github.com/gre/1650294
*/

#include "Arduino.h"
#include "Easing.h"

Easing::Easing() {
}

float Easing::easeInQuad(float t) {
  return t * t;
}

float Easing::easeOutQuad(float t) {
  return t * (2 - t);
}

float Easing::easeInOutQuad(float t) {
  return (t < 0.5)? 2 * t * t : -1 + (4 - 2 * t) * t;
}

float Easing::easeInCubic(float t) {
  return t * t * t;
}

float Easing::easeOutCubic(float t) {
  return (--t) * t * t + 1;
}

float Easing::easeInOutCubic(float t) {
  return (t < 0.5)? 4*t*t*t : (t-1)*(2*t-2)*(2*t-2)+1;
}

float Easing::easeInQuart(float t) {
  return t*t*t*t;
}

float Easing::easeOutQuart(float t) {
  return 1-(--t)*t*t*t;
}

float Easing::easeInOutQuart(float t) {
  return (t < 0.5)? 8*t*t*t*t : 1-8*(--t)*t*t*t;
}

float Easing::easeInQuint(float t) {
  return t*t*t*t*t;
}

float Easing::easeOutQuint(float t) {
  return 1+(--t)*t*t*t*t;
}

float Easing::easeInOutQuint(float t) {
  return (t < 0.5)? 16*t*t*t*t*t : 1+16*(--t)*t*t*t*t;
}

float Easing::easeInTrig(float t) {
  return sin(t * PI / 2);
}

float Easing::easeOutTrig(float t) {
  return sin((x - 1) * PI / 2) + 1;
}

float Easing::easeInOutTrig(float t) {
  return sin((x - 0.5) * PI) / 2 + 0.5;
}
