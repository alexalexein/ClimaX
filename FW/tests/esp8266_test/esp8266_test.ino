
// Variables for String coming from Serial terminal
String inputString = "";
bool stringComplete = false;

// Variables for String coming from ESP8266
String inputString1 = "";
bool stringComplete1 = false;

void setup() {
  // put your setup code here, to run once:
  inputString.reserve(1000);
  inputString1.reserve(1000);
  Serial.begin(9600);
  Serial1.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (stringComplete){
    Serial.print(inputString);
    Serial1.print(inputString);
    inputString = "";
    stringComplete = false;
  }
  if(stringComplete1){
    Serial.print(inputString1);
    inputString1 = "";
    stringComplete1 = false;
  }
}

void serialEvent(){
  while (Serial.available()){
    char inChar = (char) Serial.read();
    inputString += inChar;
    if (inChar == '\n'){
      stringComplete = true;
    }
  }
}

void serialEvent1(){
  Serial.println("hola");
  while (Serial1.available()){
    char inChar1 = (char) Serial1.read();
    inputString1 += inChar1;
    if (inChar1 == '\n'){
      stringComplete1 = true;
    }
  }
}

