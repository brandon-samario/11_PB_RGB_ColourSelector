/*
  PB RGB Colour selector
  When pushbutton is pressed changes colour mode (off, white, red, blue green, yellow, cyan, and magenta)
  RGB LED value ranges between 0-255 using an analog output, value of pin or colour determines the display of RGB LED 
  Use pinMode to set pins as outputs, and use analog write to set value of outputs of the RGB LED
  Use serial begin to start serial monitoring, and use serial.print or serial.println to print value
  Use pinmode, set pin 2 as input pullup (pushbutton). It reads a digital input on pin 2 and prints the results to the Serial Monitor
  Use mode to set each function
*/

//set pin numbers
const int BLUE = 3;
const int GREEN = 5;
const int RED = 6;
const int BUTTON = 2;

//colour mode
int mode = 0;

//change in variable
int buttonState = 0; //variable for reading pushbutton status

// the setup function runs once when you press reset or power the board
void setup() {

//led lights (RGB)
Serial.begin(9600); // start serial connection
pinMode(RED, OUTPUT); // setting red (pin 6) as output (RGB LED
pinMode(GREEN, OUTPUT); // setting green (pin 5) as output (RGB LED)
pinMode(BLUE, OUTPUT); // setting blue (pin 3) as output (RGB LED)

//setup buttons
pinMode(BUTTON, INPUT_PULLUP);
}

// the loop routine runs over and over again forever
void loop() {

buttonState = digitalRead(BUTTON); // read the input pin

if (digitalRead(BUTTON) == LOW) {
mode = mode + 1; // setting mode for each function
delay(500); // delay between each read
}

//off
if (mode == 0) {
analogWrite(BLUE, 0); // Turns off the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 0 lowest value
analogWrite(GREEN, 0); // Turns off the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 0 lowest value
analogWrite(RED, 0); // Turns off the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 0 lowest value
Serial.print("Colour Mode = "); // print out the state of the button
Serial.println("OFF"); // pushbutton print value
}

//white
if (mode == 1) {
analogWrite(BLUE, 255); //Turns on the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 255 highest value
analogWrite(GREEN, 255); //Turns on the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 255 highest value
analogWrite(RED, 255); //Turns on the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 255 highest value
Serial.print("Colour Mode = "); // print out the state of the button
Serial.println("WHITE"); // pushbutton print value
}

//red
if (mode == 2) {
analogWrite(BLUE, 0); // Turns off the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 0 lowest value
analogWrite(GREEN, 0); // Turns off the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 0 lowest value
analogWrite(RED, 255); //Turns on the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 255 highest value
Serial.print("Colour Mode =  "); // print out the state of the button
Serial.println("RED"); // pushbutton print value
}

//blue
if (mode == 3) {
analogWrite(BLUE, 255); //Turns on the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 255 highest value
analogWrite(GREEN, 0); // Turns off the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 0 lowest value
analogWrite(RED, 0); // Turns off the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 0 lowest value
Serial.print("Colour Mode =  "); // print out the state of the button
Serial.println("BLUE"); // pushbutton print value
}

//green
if (mode == 4) {
analogWrite(BLUE, 0); // Turns off the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 0 lowest value
analogWrite(GREEN, 255); //Turns on the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 255 highest value
analogWrite(RED, 0); // Turns off the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 0 lowest value
Serial.print("Colour Mode =  "); // print out the state of the button
Serial.println("GREEN"); // pushbutton print value
}

//yellow
if (mode == 5) {
analogWrite(BLUE, 0); // Turns off the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 0 lowest value
analogWrite(GREEN, 255); //Turns on the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 255 highest value
analogWrite(RED, 255); //Turns on the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 255 highest value
Serial.print("Colour Mode =  "); // print out the state of the button
Serial.println("YELLOW"); // pushbutton print value
}

//cyan
if (mode == 6) {
analogWrite(BLUE, 255); //Turns on the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 255 highest value
analogWrite(GREEN, 255); //Turns on the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 255 highest value
analogWrite(RED, 0); // Turns off the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 0 lowest value
Serial.print("Colour Mode =  "); // print out the state of the button
Serial.println("CYAN"); // pushbutton print value
}

//magenta
if (mode == 7) {
analogWrite(BLUE, 255); //Turns on the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 255 highest value
analogWrite(GREEN, 0); // Turns off the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 0 lowest value
analogWrite(RED, 255); //Turns on the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 255 highest value
Serial.print("Colour Mode =  "); // print out the state of the button
Serial.println("MAGENTA"); // pushbutton print value
}

//switch off
if (mode == 8) {
mode = 0; // mode off, switches off
}

}