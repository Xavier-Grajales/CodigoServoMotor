#include <Servo.h>//header/cabecera y archivo Servo.ccp

Servo miServo; //definimos al objeto
int pinServo=4;

void setup()
{
 Serial.begin(9600);
 miServo.attach(pinServo);//Le decimos en que pin va conectado
}

void loop()
{
 miServo.write(0);//grado en el que se posiciona el servo
 delay(2000);

 miServo.write(90);//grado en el que se posiciona el servo
 delay(2000);
 
 //miServo.write(45);
 //delay(2000);
  
 //miServo.write(180);
 //delay(2000);
  
}
//linea enviado desde VS code
//Linea de Vs code
//Cambio vs code
//Este cambio prueba el funcionamiento de vs codenjakla

