// C++ code
//
int B = 0;

int i = 0;

void setup()
{
  pinMode(9, OUTPUT);
}

void loop()
{
  for (B = 1; B <= 255; B += 1) {
    analogWrite(9, B);
    delay(30); // Wait for 30 millisecond(s)
  }
  for (B = 255; B >= 0; B -= 1) {
    analogWrite(9, B);
    delay(30); // Wait for 30 millisecond(s)
  }
}