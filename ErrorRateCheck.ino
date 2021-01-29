//This sketch outputs pseudo random integers.

//A variable to hold pseudo random integers.
int randomInt = 0;
int Bitnumber = 1000; // number of bit you want to test 
int errorcound = 0;
int i =0;
float errorrate = 0.0;
void setup() {

  //Initiate serial communication.
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(8,INPUT);

  
   for(i = 0; i<=Bitnumber; i++)
 {
  randomInt = random(0,2);

  //Send randomInt to the serial port for displaying on the serial monitor window.
//  Serial.print(" random = ");
//   Serial.println(randomInt);
  //Serial.println(randomInt,BIN);
  bool Dout = randomInt;
  // Serial.println(Dout);
  digitalWrite(13,Dout);
  digitalWrite(11,Dout);

   
   if(digitalRead(8)!= Dout)
    errorcound++;
   else
     errorcound = errorcound;
     
//   Serial.print(" Count number = ");
//   Serial.println(i);
//    Serial.print(" Number of error = ");
//   Serial.println(errorcound);
   

   
    delay(0.1); // depending on bite rate do you want. F = 1/T

     
 }
  
  
  
  
  
}//Close setup function

void loop() {

  digitalWrite(3,HIGH);

     errorrate = (errorcound*100.0)/i;

   Serial.print(" Bit error rate = ");
   Serial.print(errorrate);
   Serial.println(" %");
   
  //Create a random number and assign it to the randomInt variable.


}//Close loop function.
