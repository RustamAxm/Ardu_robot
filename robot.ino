// импортировали библиотеки
#include <Arduino.h>
#include <Streaming.h>
#include <Vector.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F, 16, 2);
int A[7] = {0, 0, 0, 0, 0, 0, 0};

const int ELEMENT_COUNT_MAX = 10;
typedef Vector<char> Elements;
char storage_array[ELEMENT_COUNT_MAX];
Elements vector(storage_array);

void setup() {
  // put your setup code here, to run once:
  lcd.begin();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.cursor();
  lcd.print("go!");
  Serial.begin(9600);
  while (!Serial)
  {
  // wait for serial port to connect.
  }
  for (int i=14; i <=17; i++) pinMode(i, INPUT_PULLUP);
  for (int i=7; i <=8; i++) pinMode(i, INPUT_PULLUP);
  for (int i=2; i <=6; i++) pinMode(i, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=14; i <=17; i++) A[i-14] = digitalRead(i);
  A[4] = digitalRead(7);
  A[5] = digitalRead(8);
  if (A[0] == 0)
  {vector.push_back('w');
  }else if(A[1] == 0)
  {vector.push_back('a');
  }else if(A[2] == 0)
  {vector.push_back('s');
  }else if(A[3] == 0)
  {vector.push_back('d');
  }else if(A[4] == 0)
  {vector.pop_back();
  }else if(A[5] == 0)
  { Run(vector);
  }
  Serial << vector << " " <<  vector.size() <<endl;
  lcd.clear();
  for (int i=0; i< vector.size(); i++)
  {
    lcd.print(vector[i]);
    }
  delay(200);
  
}
