int but1 = 2;
int but2 = 3;
int but3 = 4;
int but4 = 5;
int but5 = 6;
int but6 = 7;
int but7 = 8;
int but8 = 9;
int but9 = 10;

int buzzer = 13;


void setup()
{
  pinMode(but1, INPUT);
  pinMode(but2, INPUT);
  pinMode(but3, INPUT);
  pinMode(but4, INPUT);
  pinMode(but5, INPUT);
  pinMode(but6, INPUT);
  pinMode(but7, INPUT);
  pinMode(but8, INPUT);
  pinMode(but9, INPUT);

  pinMode(buzzer, OUTPUT);
}

void loop()
{
  int b1 = digitalRead(but1);
  int b2 = digitalRead(but2);
  int b3 = digitalRead(but3);
  int b4 = digitalRead(but4);
  int b5 = digitalRead(but5);
  int b6 = digitalRead(but6);
  int b7 = digitalRead(but7);
  int b8 = digitalRead(but8);
  int b9 = digitalRead(but9);
  
  
      if ( b1 == 1 )
    {
    tone(buzzer,293,100);
    }
      if ( b2 == 1 )
    {
      tone(buzzer,311,100);
    }
      if( b3 == 1 )
    {
      tone(buzzer,349,100); 
    }
      if ( b4 == 1 ) 
    {
      tone(buzzer,392,100);
    }
      if  ( b5 == 1 )
    {
      tone(buzzer,440,100);
    }
      if  ( b6 == 1 )
    {
      tone(buzzer,466,100); 
    }
      if  ( b7 == 1 )
    {
      tone(buzzer,523,100); 
    }
      if  ( b8 == 1 )
    {
      tone(buzzer,587,100); 
    }
      if ( b9 == 1 )
    {
      tone(buzzer,622,100);
    }
   
  delay(10);
  
}
