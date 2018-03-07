#include <IRremote.h>
#include <Servo.h>

int RECV_PIN = 8; // IR Dioda na pinu 8
IRrecv irrecv(RECV_PIN);
decode_results results;
String Vstup;

Servo myservo;//Vytvoření objektu pro řízení krokového motoru
int poloha=90;

const int motorIn1 = 10;  //Piny pro DC motor na 10 a 11
const int motorIn2 = 11;  
int rychlost = 255;   //Rychlost DC motoru

void setup() {
   Serial.begin(9600);
   irrecv.enableIRIn(); 
   pinMode(motorIn1,OUTPUT);     //Inicializace DC motoru
   pinMode(motorIn2,OUTPUT);     
   myservo.attach(3); //Servo motor je na pinu 3
   myservo.write(poloha); //Výchozí poloha
}

void loop() {
  if (irrecv.decode(&results)) {
    Vstup =  String(results.value, HEX); 
    Serial.println(Vstup);
    if (Vstup=="ff18e7") {
      Serial.println("VPRED");
      
      motor(rychlost,0); 
      delay(500);
    }
    else if (Vstup=="ff4ab5") {
      Serial.println("VZAD");
      motor(0,rychlost);
      delay(500);
    }
    else if (Vstup=="ff10ef") {
      Serial.println("VLEVO");
      if (poloha>10){
          poloha=poloha-10;
          myservo.write(poloha);
        }
      delay(500);
    }
    else if (Vstup=="ff5aa5") {
      Serial.println("VPRAVO");
      if (poloha<170){
          poloha=poloha+10;
          myservo.write(poloha);
        }
      delay(500);
    }
    else{
      Serial.println("STOP");
      motor(0,0);
      delay(500);
    }
    irrecv.resume(); //Načti další hodnotu
  }
}

void motor(int A, int B)
{
  Serial.println(A);
  Serial.println(B);  
  analogWrite(motorIn1,A); 
  analogWrite(motorIn2,B); 
}
