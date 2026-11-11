#ifndef ThinGyanMoe_h
#define ThinGyanMoe_h
#include"Arduino.h"
#include"pitches.h"
class ThinGyanMoe{
public:
ThinGyanMoe(int Buzzpin);
void playThinGyanMoe();

private:
int _buzzpin;
};
#endif