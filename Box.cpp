#include "Box.h"

// Implement setters and getters
void Box::setLength(int l){
  length = l;
}

void Box::setWidth(int w){
  width = w;
}

void Box::setHeigth(int h){
  heigth = h;
}

int Box::getLength(){
  return length;
}

int Box::getWidth(){
  return width;
}

int Box::getHeigth(){
  return heigth;
}
// Implemenet the calcVolume() unction
int Box::calcVolume() {
  int volume = length * width * heigth;
  return volume;
}
