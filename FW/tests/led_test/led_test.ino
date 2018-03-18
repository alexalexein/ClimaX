


void setup(){
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  delay(3000);
}

void loop(){
  for(int i=0; i<4; i++){
    switch(i){
      case 0:
        digitalWrite(5, HIGH);
        break;
      case 1:
        digitalWrite(6, HIGH);
        digitalWrite(5, LOW);
        break;
      case 2:
        digitalWrite(7, HIGH);
        digitalWrite(6, LOW);
        break;
      case 3:
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        break;
    }
    delay(2000);
  }
}

