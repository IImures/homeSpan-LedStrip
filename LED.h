#include <FastLED.h>

#define NUM_LEDS  24
#define LED_PIN   32

struct LED : Service::LightBulb{

  CRGB leds[NUM_LEDS];

  int ledPin;
  SpanCharacteristic *power;

  LED(int ledPin) : Service::LightBulb(){
    power = new Characteristic::On();
    this->ledPin = ledPin;
    pinMode(ledPin, OUTPUT);
      FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
    FastLED.setBrightness(50);

  }

  boolean update(){
    digitalWrite(ledPin, power->getNewVal());

    for(int i = 0; i < NUM_LEDS; i++){
      if(power->getNewVal()) leds[i] = CRGB::Green;
      else leds[i] = CRGB::Black;
    }

    return true;
  }
};