/*
 Defining the pin numbers of buttons
*/
int button1 = 2;
int button2 = 3;
int button3 = 4;
int button4 = 5;
int button5 = 6;
int button6 = 7;
int button7 = 8;
int button8 = 9;
int button9 = 10;

int speaker = 13; //speaking pin

void setup()
{
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);
  pinMode(button5, INPUT);
  pinMode(button6, INPUT);
  pinMode(button7, INPUT);
  pinMode(button8, INPUT);
  pinMode(button9, INPUT);
  
  pinMode(speaker, OUTPUT);
}

void loop()
{
  int b1 = digitalRead(button1);
  int b2 = digitalRead(button2);
  int b3 = digitalRead(button3);
  int b4 = digitalRead(button4);
  int b5 = digitalRead(button5);
  int b6 = digitalRead(button6);
  int b7 = digitalRead(button7);
  int b8 = digitalRead(button8);
  int b9 = digitalRead(button9);
  
  
      if ( b1 == 1 )
    {
    tone(speaker,293,100);     //D4 Note
    }
      if ( b2 == 1 )
    {
      tone(speaker,311,100);   //D#4 Note
    }
      if( b3 == 1 )
    {
      tone(speaker,349,100);   //F4 Note
    }
      if ( b4 == 1 ) 
    {
      tone(speaker,392,100);   //G4 note
    }
      if  ( b5 == 1 )
    {
      tone(speaker,440,100);   //A4 Note
    }
      if  ( b6 == 1 )
    {
      tone(speaker,466,100);   //A#4 Note
    }
      if  ( b7 == 1 )
    {
      tone(speaker,523,100);   //C5 Note
    }
      if  ( b8 == 1 )
    {
      tone(speaker,587,100);   //D5 Note
    }
      if ( b9 == 1 )
    {
      tone(speaker,622,100);   //D#5 Note
    }
   
  delay(10);
  
}
