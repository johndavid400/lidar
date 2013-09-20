
byte incomingByte;
int motor_pin = 10;

void setup(){
  Serial.begin(115200);
  //Serial1.begin(115200);
  TCCR1B = TCCR1B & 0b11111000 | 0x01;
  pinMode(motor_pin, OUTPUT);
  analogWrite(motor_pin, 210);
}

void loop() {

  if (Serial.available() > 0) {
    incomingByte = Serial.read();    
        
    if (incomingByte==0xFA){
      Serial.println("  ");
    }

    Serial.print(incomingByte, HEX);
  }
}


