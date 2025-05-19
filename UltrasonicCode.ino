int trig = 2;
int echo = 3;

int zaman;
int mesafe;
void setup()
{
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  
}

void loop()
{
 	int MS = Mesafe(trig, echo);
  	Serial.println(MS);
    delay(500); 

}

int Mesafe(int trigPin, int echoPin){
 digitalWrite(trigPin, LOW); 
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);  
  zaman = pulseIn(echoPin, HIGH);
  mesafe= (zaman /29.1)/2;    
  
  return mesafe;
}
