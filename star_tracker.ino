#include <Servo.h>

Servo servoX;
Servo servoY;

// Pines de los LDR
const int LDR_ARR = A0;
const int LDR_ABA = A1;
const int LDR_IZQ = A2;
const int LDR_DER = A3;

// Posición inicial de los servos
int posX = 90;
int posY = 90;

void setup() {
  Serial.begin(9600);
  servoX.attach(9);   // Servo horizontal
  servoY.attach(10);  // Servo vertical

  servoX.write(posX);
  servoY.write(posY);

  Serial.println("Rastreador de estrellas simulado iniciado");
}

void loop() {
  // Leer los valores de los sensores LDR
  int arriba = analogRead(LDR_ARR);
  int abajo  = analogRead(LDR_ABA);
  int izquierda = analogRead(LDR_IZQ);
  int derecha   = analogRead(LDR_DER);

  // Mostrar los valores por monitor serial
  Serial.print("ARR: "); Serial.print(arriba);
  Serial.print(" ABA: "); Serial.print(abajo);
  Serial.print(" IZQ: "); Serial.print(izquierda);
  Serial.print(" DER: "); Serial.println(derecha);

  // Calcular promedios de los ejes
  int vertical = arriba - abajo;
  int horizontal = izquierda - derecha;

  // Sensibilidad (ajústala según qué tan rápido quieres que se muevan)
  float K = 0.02;

  // Si hay una diferencia considerable, mover el servo
  if (abs(horizontal) > 30) {
    posX = posX + (int)(-horizontal * K);
    posX = constrain(posX, 0, 180);
    servoX.write(posX);
  }

  if (abs(vertical) > 30) {
    posY = posY + (int)(-vertical * K);
    posY = constrain(posY, 0, 180);
    servoY.write(posY);
  }

  delay(150);
}