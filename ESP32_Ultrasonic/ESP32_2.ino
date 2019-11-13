#define trigPin 19
#define echoPin 18
#define ledPin 5

float duration, distance;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  // Define the output and input object(devices)
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration = pulseIn(echoPin,HIGH);
  distance = (duration/2) / 29.1;
//  Serial.println(distance);
  if(distance >= 0 && distance <=10){
    digitalWrite(ledPin,HIGH);
    Serial.println("Jarak terlalu dekat");
  }
  else {
    digitalWrite(ledPin, LOW);
  }
}
