int leftWhisker = 5;
int rightWhisker = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode (leftWhisker, INPUT);
  pinMode (rightWhisker, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int left_value = digitalRead (leftWhisker);
  int right_value = digitalRead (rightWhisker);
  
  if (right_value == 0 && left_value == 0){
    Serial.println ("both touched");
  }
  else if (left_value == 0) {
    Serial.println ("only leftWhisker touched");
  }
  else if (right_value == 0) {
    Serial.println ("only rightWhisker touched");
  }
 
  delay(500);
}
