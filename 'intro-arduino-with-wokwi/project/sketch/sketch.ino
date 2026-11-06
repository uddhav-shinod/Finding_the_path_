 int red = 3;
 int but = A0;
 int sensorValue=0;
void setup() {
  Serial.begin(9600);
  pinMode(red,OUTPUT); 
  pinMode(but, INPUT_PULLUP); // Initialize serial communication at 9600 bits per second
}

void loop() 

{
  sensorValue = analogRead(but); // Read the input on analog pin 0
  Serial.println(sensorValue);         // Print the value to the Serial Monitor
  if (sensorValue>500)
  {
    digitalWrite(red,LOW);
  }
  else{
    digitalWrite(red, HIGH);
  } 
   delay(100);                   // Wait 100 milliseconds for stability
 }
 
