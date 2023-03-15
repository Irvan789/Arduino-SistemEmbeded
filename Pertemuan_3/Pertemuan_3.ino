#include <SPI.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup()
{
  tft.init();
  tft.setRotation(1);
  tft.setTextSize(4);
  tft.println("ILI9488");
}

void loop()
{
}
