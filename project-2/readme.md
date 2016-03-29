## Project 2 - Internet Controlled LED

In this project, we'll define a Particle function which can be triggered from the internet (using an HTTP request, or IFTTT).

#### Requirements

This project will make use of an open source library called Neopixel. To see how to import the library into your project, check out [this instructional gif](http://i.imgur.com/m61RMej.gif). This will make the library available to the project, and automatically add a necessary line to the top of your project code for using the library.

#### Key Concepts/Components

- **#define:** Lets you define a pre-compilation variable. Great for configuration variables which you know will not change through the life of the program. *Note: don't need a semi-colon after `#define` lines like you do for everything else.*

- **String lightMode; :** This initializes a String variable with the name `lightMode`. Since this is initially defined outside of any function, it is available to use within all functions.
*Note: if you initialize a variable in the `setup` function, you do not have access to it in the `loop` function.*

- **Particle.function("name", function) :** Lets you define a function that can be triggered from the internet. You pass in a `"name"` (used to trigger the function from the web) and a `function` (defines what function is called when this is triggered).

- **led.begin() :** This is a required line of code to initialize the controlling of the LED. Without this, the pinMode will not get set on the LED pin, and it just won't work.

- **led.setPixelColor(pixel, r, g, b) :** Function provided by the Neopixel library. Lets us set the R, G, and B value on a specific pixel. After you set the pixel color, you must call `.show()` to effect the change.

- **void showTheRainbow() :** This is an example of a function which can be called from within other functions (like in the `loop()` function). Organizing code into well named functions is helpful for organizing and understanding what the code does.

- **for(int i = 0; i < 255; i += 10) {...} :** Standard for loop. Defines a variable `i` which starts at 0, runs the code inside the `{}` brackets, then increases `i` by 10 and runs the code again until it is greater than 255.

#### Component Layout

![fritzing-diagram](https://s3.amazonaws.com/vigesharing-is-vigecaring/jsinichko/1329rrwmi.jpg)
