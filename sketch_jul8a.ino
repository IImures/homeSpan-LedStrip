#include "HomeSpan.h"
#include "LED.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  homeSpan.setPairingCode("11112222");
  homeSpan.begin(Category::Lighting, "My Led");

  new SpanAccessory();
    new Service::AccessoryInformation();
      new Characteristic::Identify();
      new LED(14);

}

void loop() {
  // put your main code here, to run repeatedly:
  homeSpan.poll();
}
