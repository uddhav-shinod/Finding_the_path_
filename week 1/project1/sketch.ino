 int red = 3;
 int but = A0;
 int sensorValue=0;
 int a=0;
 int b=0;
 int c=0;
 int temp=0;
 boolean bn=false;
void setup() {
  Serial.begin(9600);
  pinMode(red,OUTPUT); 
   // Initialize serial communication at 9600 bits per second
}

void loop() 

{
  sensorValue = analogRead(but); // Read the input on analog pin 0
  Serial.println(sensorValue);         // Print the value to the Serial Monitor
   temp+=1;
   if(bn==false)
   {
   if (b<500&&a>500&&c>500)
      {
    digitalWrite(red,HIGH);
    bn=true;
      }
   }
   else{
     if (b<500&&a>500&&c>500)
      {
    digitalWrite(red,LOW);
    bn=false;
      }
   }
  
  
  if (temp%3==1)
  {
    a=sensorValue;
  }
  if (temp%3==2)
  {
    b=sensorValue;
  }
  if (temp%3==0)
  {
    c=sensorValue;
  }
  delay(100);                   // Wait 100 milliseconds for stability
 }
 
