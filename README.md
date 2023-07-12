# homeSpan-LedStrip
It's a code of my own led strip, made with homeSpan and FastLED lib's. So led strip is connected to homekit via ESP32. 
But there are also some effects i've made. In order to use them i use IR controller.
If you want to try it all you need is to change amount of pixels "NUM_LED", pin which is connected to the strip "LED_PIN"
# IR controller
If you want to use IT controller, you need to change pin "RECV_PIN" to a pin where IR reciver is connected. Then in LED.h in function "void loop" you need to set HEX code that match for your controller.
Thats all.
