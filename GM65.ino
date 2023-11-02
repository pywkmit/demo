#include <SoftwareSerial.h>
 
SoftwareSerial GM65 (10, 11); // RX, TX
 
void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  GM65.begin(9600);
  // set the data rate for the SoftwareSerial port
  
  Serial.println("GM65 initialized");  
}


void loop() { // run over and over
  if(GM65.available()){
    String barcode = GM65.readStringUntil('\n');
    Serial.println(barcode);
    delay(10);

    Serial.println("");
  }
}
