#define R 7
#define G 6
#define B 8

void setup() {
  // put your setup code here, to run once:
    pinMode(R, OUTPUT);
    pinMode(G, OUTPUT);
    pinMode(B, OUTPUT);

    digitalWrite(R, LOW);
    analogWrite(G, 1000);
    digitalWrite(B, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:

//        digitalWrite(R, LOW);
//        digitalWrite(G, HIGH);
//        digitalWrite(B, HIGH);
//        delay(2000);
//        digitalWrite(R, HIGH);
//        digitalWrite(G, LOW);
//        digitalWrite(B, HIGH);
//        delay(2000);
//        digitalWrite(R, HIGH);
//        digitalWrite(G, HIGH);
//        digitalWrite(B, LOW);
//        delay(2000);
//        digitalWrite(R, HIGH);
//        digitalWrite(G, HIGH);
//        digitalWrite(B, HIGH);
}
