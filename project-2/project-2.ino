String lightMode;

void setup() {
  RGB.control(true);
  RGB.color(0, 0, 0);

  Particle.function("setLight", setLight);
}

int setLight(String command) {
  lightMode = command;
  return 1;
}

void loop() {
  if (lightMode == "red") {
    RGB.color(255, 0, 0);
  } else if (lightMode == "green") {
    RGB.color(0, 255, 0);
  } else if (lightMode == "blue") {
    RGB.color(0, 0, 255);
  } else if (lightMode == "rainbow") {
    showTheRainbow();
  } else {
    RGB.color(0, 175, 255); // white
  }
}

void showTheRainbow() {
  // number of milliseconds to delay between pixel change
  // lower this number to speed up the rainbow
  int rainbowDelay = 10;

  // start with Red on, and make Green grow brighter
  for (int i = 0; i < 255; i += 10) {
    RGB.color(255, i, 0);
    delay(rainbowDelay);
  }
  // Green is now on, make Red shrink
  for (int i = 0; i < 255; i += 10) {
    RGB.color(255 - i, 255, 0);
    delay(rainbowDelay);
  }
  // Green is now on, make Blue grow
  for (int i = 0; i < 255; i += 10) {
    RGB.color(0, 255, i);
    delay(rainbowDelay);
  }
  // Blue is now on, make Green shrink
  for (int i = 0; i < 255; i += 10) {
    RGB.color(0, 255 - i, 255);
    delay(rainbowDelay);
  }
  // Blue is now on, make Red grow
  for (int i = 0; i < 255; i += 10) {
    RGB.color(i, 0, 255);
    delay(rainbowDelay);
  }
  // Red is now on, make Blue shrink
  for (int i = 0; i < 255; i += 10) {
    RGB.color(255, 0, 255 - i);
    delay(rainbowDelay);
  }
}
