#include<ESP8266WiFi.h>
void setup(){ 
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);
  Serial.print("Scanning for networks...");
}
void loop() {
int n=WiFi.scanNetworks();
if (n>0) {
  for (int i=0; i<n; i++) {
Serial.print(i+1);
Serial.print(".");
Serial.print("SSID:");
Serial.print(WiFi.SSID(i));
Serial.print(", BSSID:"); 
Serial.print(WiFi.BSSIDstr(i));
Serial.print(", RSSI:");
Serial.print(WiFi.RSSI(i));
Serial.println("dbm");
}
}
else{
  Serial.print("No networks Found.");
}
Serial.print("\n");
delay(5000);
}


  
 