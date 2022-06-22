int pot1=0;
char Tx[40];
String Cadena;
void setup() {
Serial.begin(9600);
}

void loop() {
  pot1=analogRead(A0);
  sprintf(Tx,"%04i/",pot1);
  Cadena=String(Tx);
  Cadena="$"+Cadena;
  Serial.print(Cadena);
  delay(50);
}
