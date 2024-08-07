void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  delay(1000);//1000 miliseconds = 1 sec

  Serial.println("delay ussing miliseconds");

  delayMicroseconds(500); // 1000 microseconds = 1 milisecond
  Serial.println("delay using microseconds");


}s
