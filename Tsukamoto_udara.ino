//MQ2
#include <Arduino.h>
#include "mq2.h"
mq2 sensor(39);

//MQ7
#include "MQ7.h"
MQ7 mq7(36, 3.3);


//DEBU
#include "GP2Y1010AU0F.h"
int pinDebu = 34;
int ledPin = 25;
GP2Y1010AU0F dustSensor(ledPin, pinDebu);

float asap = 0.00F, karbon, debu, hasil;
float  rasap, sasap, tasap, rkarbon, skarbon, tkarbon, rdebu, sdebu, tdebu;
float R1, R2, R3, R4, R5, R6, R7, R8, R9, R10, R11, R12, R13, R14, R15, R16, R17, R18, R19, R20, R21, R22, R23, R24, R25, R26, R27;
float Z1, Z2, Z3, Z4, Z5, Z6, Z7, Z8, Z9, Z10, Z11, Z12, Z13, Z14, Z15, Z16, Z17, Z18, Z19, Z20, Z21, Z22, Z23, Z24, Z25, Z26, Z27;

void setup() {
   Serial.begin(9600);

   sensor.begin();
   dustSensor.begin();
   delay(3000);
}

void loop() {
  //asap
  asap = sensor.get(GAS_SMOKE) * 100.00F;
  //sensor karbon
  karbon = mq7.getPPM();
  //sensor debu
  debu = dustSensor.read();

  //fuzzy tsukamoto
  Rasap();
  Sasap();
  Tasap();
  Rkarbon();
  Skarbon();
  Tkarbon();
  Rdebu();
  Sdebu();
  Tdebu();

  R1= min (rasap,min(rkarbon, rdebu));
  R2= min (rasap,min(rkarbon, sdebu));
  R3= min (rasap,min(rkarbon, tdebu));
  R4= min (rasap,min(skarbon, rdebu));
  R5= min (rasap,min(skarbon, sdebu));
  R6= min (rasap,min(skarbon, tdebu));
  R7= min (rasap,min(tkarbon, rdebu));
  R8= min (rasap,min(tkarbon, sdebu));
  R9= min (rasap,min(tkarbon, tdebu));
  R10= min (sasap,min(rkarbon, rdebu));
  R11= min (sasap,min(rkarbon, sdebu));
  R12= min (sasap,min(rkarbon, tdebu));
  R13= min (sasap,min(skarbon, rdebu));
  R14= min (sasap,min(skarbon, sdebu));
  R15= min (sasap,min(skarbon, tdebu));
  R16= min (sasap,min(tkarbon, rdebu));
  R17= min (sasap,min(tkarbon, sdebu));
  R18= min (sasap,min(tkarbon, tdebu));
  R19= min (tasap,min(rkarbon, rdebu));
  R20= min (tasap,min(rkarbon, sdebu));
  R21= min (tasap,min(rkarbon, tdebu));
  R22= min (tasap,min(skarbon, rdebu));
  R23= min (tasap,min(skarbon, sdebu));
  R24= min (tasap,min(skarbon, tdebu));
  R25= min (tasap,min(tkarbon, rdebu));
  R26= min (tasap,min(tkarbon, sdebu));
  R27= min (tasap,min(tkarbon, tdebu));

  Baik();
  Sedang();
  Tidak_sehat();
  Sangat_tidak_sehat();
  Berbahaya();
  
  hasil=((R1*Z1)+(R2*Z2)+(R3*Z3)+(R4*Z4)+(R5*Z5)+(R6*Z6)+(R7*Z7)+(R8*Z8)+(R9*Z9)+(R10*Z10)+(R11*Z11)+(R12*Z12)+(R13*Z13)+(R14*Z14)
  +(R15*Z15)+(R16*Z16)+(R17*Z17)+(R18*Z18)+(R19*Z19)+(R20*Z20)+(R21*Z21)+(R22*Z22)+(R23*Z23)+(R24*Z24)+(R25*Z25)+(R26*Z26)+(R27*Z27))/
  (R1+R2+R3+R4+R5+R6+R7+R8+R9+R10+R11+R12+R13+R14+R15+R16+R17+R18+R19+R20+R21+R22+R23+R24+R25+R26+R27);
  
  
  Serial.print("Asap = ");
  Serial.print(asap);
  Serial.println(" PPM");
  Serial.print("Karbon = ");
  Serial.print(karbon);
  Serial.println(" PPM");
  Serial.print("Debu = ");
  Serial.print(debu);
  Serial.println(" ug/m3");
  Serial.print("Hasil = ");
  Serial.print(hasil);
  Serial.println(" PPM");
  

delay(5000);
}
