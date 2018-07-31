int led = 13;
int time_length = 500;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
p();
i();
g();
}

void dot (){
  digitalWrite(led, HIGH);
  delay(time_length);
  digitalWrite(led, LOW);
  delay(time_length);   
}

void dash (){
  digitalWrite(led, HIGH);
  delay(time_length*2);
  digitalWrite(led, LOW);
  delay(time_length*3);
}

void p (){
  dot ();
  dash();
  dash();
  dot ();
}

void i (){
  dot();
  dot();
}

void g () {
  dash();
  dash();
  dot();
}


