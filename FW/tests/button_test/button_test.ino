const int BUTTON = 8;
bool last_state = false;
bool curr_state = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(500);
  Serial.println("Serial initialized.");
  pinMode(BUTTON, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(100);
  curr_state = !digitalRead(BUTTON);
  if(curr_state != last_state){
    if(curr_state){
      Serial.println("Pressed.");
    }
    else{
      Serial.println("Released");
    }
    last_state = curr_state;
  }
}
