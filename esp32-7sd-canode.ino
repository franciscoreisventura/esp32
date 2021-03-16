int LEDs[] = {1, 3, 25, 33, 32, 22, 23}; //Used pins

//Each line in the array indicates a  number
//Since this is a common anode 7 segment display, each segment lights up when the pin reads LOW
int numbers[10][7] = {
  {0, 0, 0, 0, 0, 0, 1}, //0
  {1, 0, 0, 1, 1, 1, 1}, //1
  {0, 0, 1, 0, 0, 1, 0}, //2
  {0, 0, 0, 0, 1, 1, 0}, //3
  {1, 0, 0, 1, 1, 0, 0}, //4
  {0, 1, 0, 0, 1, 0, 0}, //5
  {0, 1, 0, 0, 0, 0, 0}, //6
  {0, 0, 0, 1, 1, 1, 1}, //7
  {0, 0, 0, 0, 0, 0, 0}, //8
  {0, 0, 0, 0, 1, 0, 0}  //9
};

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(LEDs[i], OUTPUT); //Setting the pins to OUTPUT mode, so we can write to them
  }
}

void loop() {
  //This for loop goes trough the numbers array and lights the segments corresponding to the number and waits for one second.
  for (int i = 0; i < 10; i++) { //From 0 to 9
    for (int j = 0; j < 7; j++) {
      digitalWrite(LEDs[j], numbers[i][j]); //This is where the magic happens. It writes 0 (LOW) or 1 (HIGH) on each segment.
    }
    delay(1000); //Waits for a second between digits
  }
}
