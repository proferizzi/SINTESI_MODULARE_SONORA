// Il TIMING del BLINK pare CORRETTO con PROCESSOR "Internal 1MHz", 
// PROGRAMMER "Arduino as ISP"; USARE Sketch -> Upload using Programmer


void setup() {
  pinMode(3, OUTPUT);  // NOTA BENE pin digitale 3 è il pin fisico 2
}


void loop() {
  digitalWrite(3, HIGH);  
  delay(5000);                     
  digitalWrite(3, LOW);   
  delay(5000);                     
}

// Fonte per board manager https://raw.githubusercontent.com/damellis/attiny/ide-1.6.x-boards-manager/package_damellis_attiny_index.json
// Fonte Aliverti https://www.youtube.com/watch?v=u5xWLRFcGss&t=368s
