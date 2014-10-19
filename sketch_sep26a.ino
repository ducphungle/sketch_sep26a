
// name DUC

// gives the component the name
int button1 = 2;
int button2 = 3;
int myPin[] = {13,12,11,10,9,8};
int timer = 500;
int PRESSED;

void setup() 
{
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  for (int i=0;i<6;i++) { // making all the declaration at once
     pinMode (myPin[i], OUTPUT);
   }
 }

void buttonChecking() { // creating a function to reuse the code below without rewriting it (increase and decrease delay time for led by pressing button)
   PRESSED=digitalRead(button1);
      if(PRESSED==HIGH) {   // press button 1
         if(timer - 50 > 0) { // the time always higher than 0 
            timer = timer - 50; }
          }
      PRESSED=digitalRead(button2); 
      if(PRESSED==HIGH) { // press button 2
        timer = timer + 50; } // slow down the delay time by 50 millis sec
}
void loop() {
  for (int i=0;i<6;i++) 
  {
      digitalWrite(myPin[i], HIGH);
      if(i-1>0) { 
        digitalWrite(myPin[i-1], HIGH); } // keep the previous led on
      buttonChecking() ;
      delay(timer);
      digitalWrite(myPin[i-1], LOW); 
  }
    for (int i=5;i>=0;i--)  {
      digitalWrite(myPin[i], HIGH);
    if(i+1<6) {
      digitalWrite(myPin[i+1], HIGH); } // keep the previous led on
    buttonChecking() ;
      delay(timer);
      digitalWrite(myPin[i+1], LOW);
  }  
}
  


