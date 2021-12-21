void Stop()
{
  //Serial << "Stop" << endl;
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
}

void forward()
{
 // Serial << "forward" << endl;
  lcd.clear();
  lcd.print("forward" );
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  delay(1000);
  Stop();
}

void backward()
{
 // Serial << "backward" << endl;
  lcd.clear();
  lcd.print("backward");
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(1000);
  Stop();
}

void left()
{
  //Serial << "left" << endl;
  lcd.clear();
  lcd.print("left");
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(1000);
  Stop();
}

void right()
{
 // Serial << "right" << endl;
  lcd.clear();
  lcd.print("right");
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  delay(1000);
  Stop();
}
