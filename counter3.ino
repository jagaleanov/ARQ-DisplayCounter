int delayTime = 1500;
byte  number[10][8] =
{
  { 1, 1, 1, 1, 1, 1, 0, 0 }, // 0
  { 0, 1, 1, 0, 0, 0, 0, 0 }, // 1
  { 1, 1, 0, 1, 1, 0, 1, 0 }, // 2
  { 1, 1, 1, 1, 0, 0, 1, 0 }, // 3
  { 0, 1, 1, 0, 0, 1, 1, 0 }, // 4
  { 1, 0, 1, 1, 0, 1, 1, 0 }, // 5
  { 1, 0, 1, 1, 1, 1, 1, 0 }, // 6
  { 1, 1, 1, 0, 0, 0, 0, 0 }, // 7
  { 1, 1, 1, 1, 1, 1, 1, 0 }, // 8
  { 1, 1, 1, 0, 0, 1, 1, 0 }  // 9
};

int counter;

void setup() {
  for (int i = 2; i < 10; i++)
  {
    pinMode(i, OUTPUT);
  }
  counter = 0;
}

void loop() {
  if(counter >= 9)
  {
    counter=0;
  }
  
  for (int j = 0; j < sizeof(number[counter]); j++)
  {
    digitalWrite(j + 2, number[counter][j]);
  }
  delay(delayTime);
  counter = counter + 2;
}
