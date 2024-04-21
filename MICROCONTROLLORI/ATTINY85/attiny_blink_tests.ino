// Il TIMING del BLINK pare CORRETTO con PROCESSOR "Internal 1MHz", 
// PROGRAMMER "Arduino as ISP"; USARE Sketch -> Upload using Programmer

/*
void setup() {
  pinMode(3, OUTPUT);  // NOTA BENE pin digitale 3 è il pin fisico 2
}


void loop() {
  digitalWrite(3, HIGH);  
  delay(5000);                     
  digitalWrite(3, LOW);   
  delay(5000);                     
}
*/





void setup() {
  pinMode(0, OUTPUT);  // NOTA BENE pin digitale 0 è il pin fisico 5
}


void loop() {
  int val = analogRead(A3);
  val = map(val, 0, 1023, 0, 255);
  analogWrite(0, val);
  delay(100);                     
}






// Fonte per board manager https://raw.githubusercontent.com/damellis/attiny/ide-1.6.x-boards-manager/package_damellis_attiny_index.json
// Fonte Aliverti per primi passi e sketch https://www.youtube.com/watch?v=u5xWLRFcGss&t=368s
// Fonte Aliverti per preparare Arduino as ISP https://www.youtube.com/watch?v=fb2cH6MDG8s
// Fonte Aliverti per pin PWM e analogici https://www.youtube.com/watch?v=HjKyLFnbMjw
