//Hola Mundo en Arduino con switch

bool isPressed = true;

void setup() {
  //Iniciar el puerto serial
  Serial.begin(9600);

  pinMode(2, INPUT);
}

void loop() {
 int buttonState = digitalRead(2);
 if(buttonState ==1){
  Serial.println(buttonState);
  delay(100);
 }
  

}
