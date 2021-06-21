
int limitswitch=13;
int state= LOW;
int value;

void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  Serial.begin(9600);
  pinMode(limitswitch,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  value = digitalRead(limitswitch);
  if(value!=state)
  {
    state=value;
    Serial.print("sensor value = ");
    if (state==0)
    {
      Serial.println("target detected");
      digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
    }     
    else{
       Serial.println("no target detected");
       digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
    }
  }  
  delay(10); // wait for 10 ms
}
