int instruccion;
int RX;
int led=13;

void setup() {
Serial.begin(9600);
pinMode(led,OUTPUT);
}

void loop() {
if (Serial.available())
  {
  RX=Serial.read();
  if (RX==48)
    {
    instruccion=0;
    }
  if (RX==49)
    {
    instruccion=1;
    }
  if (RX==50)
    {
    instruccion=2;
    }
  }
  
if (instruccion==0)
  {
  inst_0();
  }
  
if (instruccion==1)
  {
  inst_1();
  }
  
if (instruccion==2)
  {
  inst_2();
  }  
  
}

void inst_1(){
  digitalWrite(led,HIGH);
}

void inst_0(){
  digitalWrite(led,LOW);
}

void inst_2(){
  digitalWrite(led,HIGH);
  delay(300);
  digitalWrite(led,LOW);
  delay(300);
}
