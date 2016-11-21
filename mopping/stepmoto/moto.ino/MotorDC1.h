#ifndef MOTORDC_h
#define MOTORDC_h

#include "Arduino.h"       // for delayMicroseconds, digitalPinToBitMask, etc

class MotorDC
{
public:
	MotorDC(uint8_t pwmPin, uint8_t dirPin);
  //MotorDC1(uint8_t pwmPin1, uint8_t dirPin1);
	void setSpeed(long speed);

private:
	uint8_t _pwmPin;
	uint8_t _dirPin;
  //uint8_t _pwmPin1;
  //uint8_t _dirPin1;
};

MotorDC::MotorDC(uint8_t pwmPin, uint8_t dirPin)
{
	_pwmPin = pwmPin;
	_dirPin = dirPin;

	pinMode(_pwmPin, OUTPUT);
	pinMode(_dirPin, OUTPUT);
}
void MotorDC::setSpeed(long speed)
{
	if (speed > 255)
		speed = 255;
	else if (speed < -255)
		speed = -255;

	if (speed == 0)
	{
		digitalWrite(_dirPin, 0);
		analogWrite(_pwmPin, 0);
	}
	else if (speed > 0)
	{
		digitalWrite(_dirPin, 0);
		analogWrite(_pwmPin, speed);
	}
	else if (speed < 0)
	{
		digitalWrite(_dirPin, 1);
		uint8_t value = 255 + speed;
		Serial.println(value);
		analogWrite(_pwmPin, value);
	}
}
class MotorDC1
{
public:
  MotorDC1(uint8_t pwmPin, uint8_t dirPin);
  //MotorDC1(uint8_t pwmPin1, uint8_t dirPin1);
  void setSpeed(long speed);

private:
  uint8_t _pwmPin;
  uint8_t _dirPin;
  //uint8_t _pwmPin1;
  //uint8_t _dirPin1;
};

MotorDC1::MotorDC1(uint8_t pwmPin, uint8_t dirPin)
{
  _pwmPin = pwmPin;
  _dirPin = dirPin;

  pinMode(_pwmPin, OUTPUT);
  pinMode(_dirPin, OUTPUT);
}

void MotorDC1::setSpeed(long speed)
{
  if (speed > 255)
    speed = 255;
  else if (speed < -255)
    speed = -255;

  if (speed == 0)
  {
    digitalWrite(_dirPin, 0);
    analogWrite(_pwmPin, 0);
  }
  else if (speed > 0)
  {
    digitalWrite(_dirPin, 0);
    analogWrite(_pwmPin, speed);
  }
  else if (speed < 0)
  {
    digitalWrite(_dirPin, 1);
    uint8_t value = 255 + speed;
    Serial.println(value);
    analogWrite(_pwmPin, value);
  }
}
#endif
