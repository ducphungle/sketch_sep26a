int button1 = 2;
int button2 = 3;
int myPin[] = {13,12,11,10,9,8};
int timer = 500;
int PRESSED;

void setup() {
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  for (int i=0;i<6;i++) {
     pinMode (myPin[i], OUTPUT);
   }
 }

void loop() {
  for (int i=0;i<6;i++) 
  {
     if(button1, PRESSED) {
       delay(timer = timer - 100); }
     if(button2, PRESSED) {
       delay(timer = timer + 100); }
   digitalWrite(myPin[i], HIGH);
   if(i-1>0) {
      digitalWrite(myPin[i-1], HIGH);
   } // keep the previous led on
      delay(timer);
      digitalWrite(myPin[i-1], LOW); 
  }
    if(button1, PRESSED) {
      delay(timer = timer - 100); }
    if(button2, PRESSED) {
      delay(timer = timer + 100); }
  for (int i=5;i>=0;i--)  {
      digitalWrite(myPin[i], HIGH);
   if(i+1<6) {
      digitalWrite(myPin[i+1], HIGH);
    } // keep the previous led on
      delay(timer);
      digitalWrite(myPin[i+1], LOW);
  }  
}

  
  

 


  


