void setup() {
  
  pinMode(5, OUTPUT);
  pinMode(9, INPUT);
  
}

void loop() {
  
  int butonDurum = digitalRead(9);
  if(butonDurum){
    digitalWrite(5, LOW);
  }
  else{
    digitalWrite(5, HIGH);
  }
  
}
