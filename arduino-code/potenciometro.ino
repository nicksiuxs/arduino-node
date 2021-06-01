//Hola Mundo en Arduino con potenciometro

int percent = 0;
int prevPercent = 0;

void setup() {
  //Iniciar el puerto serial
  Serial.begin(9600);
}

void loop() {
  percent = round(analogRead(2)/1024.00*100);
  if(percent != prevPercent){
    Serial.println(percent);
    prevPercent = percent;
  }
}
