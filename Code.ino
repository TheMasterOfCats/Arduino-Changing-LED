// Written by TheMasterOfCats https://github.com/TheMasterOfCats
int liczbapina=9;
void setup() {
pinMode(liczbapina,OUTPUT);
}
void loop() {
analogWrite(liczbapina,145);
delay(1350);
analogWrite(liczbapina,0);
delay(1350);
analogWrite(liczbapina,255);
delay(1350);
analogWrite(liczbapina,75);
delay(2000);
}
