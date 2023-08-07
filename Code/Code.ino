//Prateek
//https://justdoelectronics.com
//https://www.youtube.com/@JustDoElectronics/videos

char input[12];
int count = 0;

int G1 = 12;
int Y1 = 11;
int R1 = 10;
int G2 = 9;
int Y2 = 8;
int R2 = 7;
int G3 = 6;
int Y3 = 4;
int R3 = 5;
int G4 = 3;
int Y4 = 2;
int R4 = 13;

void setup() {
  Serial.begin(9600);
  pinMode(G1, OUTPUT);
  pinMode(Y1, OUTPUT);
  pinMode(R1, OUTPUT);
  pinMode(G2, OUTPUT);
  pinMode(Y2, OUTPUT);
  pinMode(R2, OUTPUT);
  pinMode(G3, OUTPUT);
  pinMode(Y3, OUTPUT);
  pinMode(R3, OUTPUT);
  pinMode(G4, OUTPUT);
  pinMode(Y4, OUTPUT);
  pinMode(R4, OUTPUT);
  digitalWrite(R1, 1);
  digitalWrite(R2, 1);
  digitalWrite(R3, 1);
  digitalWrite(R4, 1);
  delay(4000);
  digitalWrite(Y1, 1);
  delay(2000);
}

void loop() {

  if (Serial.available()) {
    count = 0;
    while (Serial.available() && count < 12) {
      input[count] = Serial.read();
      count++;
      delay(5);
    }
    if (count == 12) {
      if ((strncmp(input, "4000355181A5", 12) == 0)) {
        digitalWrite(R1, LOW);
        digitalWrite(R2, LOW);
        digitalWrite(R3, LOW);
        digitalWrite(R4, LOW);
        digitalWrite(Y1, LOW);
        digitalWrite(Y2, LOW);
        digitalWrite(Y3, LOW);
        digitalWrite(Y4, LOW);
        digitalWrite(G1, HIGH);
        digitalWrite(G2, LOW);
        digitalWrite(G3, LOW);
        digitalWrite(G4, LOW);
      }

    } else if ((strncmp(input, "4000355181A5", 12) == 0)) {
      digitalWrite(R1, LOW);
      digitalWrite(R2, LOW);
      digitalWrite(R3, LOW);
      digitalWrite(R4, LOW);
      digitalWrite(Y1, LOW);
      digitalWrite(Y2, LOW);
      digitalWrite(Y3, LOW);
      digitalWrite(Y4, LOW);
      digitalWrite(G1, HIGH);
      digitalWrite(G2, LOW);
      digitalWrite(G3, LOW);
      digitalWrite(G4, LOW);
    }
    delay(5000);
  }

  digitalWrite(Y4, 0);
  digitalWrite(R4, 1);
  digitalWrite(R1, 0);
  digitalWrite(G1, 1);
  digitalWrite(Y1, 0);
  delay(5000);
  digitalWrite(G1, 0);
  delay(500);
  digitalWrite(G1, 1);
  delay(500);
  digitalWrite(G1, 0);
  delay(500);
  digitalWrite(G1, 1);
  delay(500);
  digitalWrite(G1, 0);
  delay(500);
  digitalWrite(G1, 1);
  delay(500);




  digitalWrite(G1, 0);
  delay(2000);
  digitalWrite(R1, 1);
  digitalWrite(Y1, 0);
  delay(2000);
  digitalWrite(Y2, 1);
  delay(2000);
  digitalWrite(R2, 0);
  digitalWrite(G2, 1);
  digitalWrite(Y2, 0);
  delay(5000);
  digitalWrite(G2, 0);
  delay(500);
  digitalWrite(G2, 1);
  delay(500);
  digitalWrite(G2, 0);
  delay(500);
  digitalWrite(G2, 1);
  delay(500);
  digitalWrite(G2, 0);
  delay(500);
  digitalWrite(G2, 1);
  delay(500);


  digitalWrite(G2, 0);
  delay(2000);
  digitalWrite(R2, 1);
  digitalWrite(Y2, 0);
  delay(2000);
  digitalWrite(Y3, 1);
  delay(2000);
  digitalWrite(R3, 0);
  digitalWrite(G3, 1);
  digitalWrite(Y3, 0);
  delay(5000);
  digitalWrite(G3, 0);
  delay(500);
  digitalWrite(G3, 1);
  delay(500);
  digitalWrite(G3, 0);
  delay(500);
  digitalWrite(G3, 1);
  delay(500);
  digitalWrite(G3, 0);
  delay(500);
  digitalWrite(G3, 1);
  delay(500);


  digitalWrite(G3, 0);
  delay(2000);
  digitalWrite(R3, 1);
  digitalWrite(Y3, 0);
  delay(2000);
  digitalWrite(Y4, 1);
  delay(2000);
  digitalWrite(R4, 0);
  digitalWrite(G4, 1);
  digitalWrite(Y4, 0);
  delay(5000);
  digitalWrite(G4, 0);
  delay(500);
  digitalWrite(G4, 1);
  delay(500);
  digitalWrite(G4, 0);
  delay(500);
  digitalWrite(G4, 1);
  delay(500);
  digitalWrite(G4, 0);
  delay(500);
  digitalWrite(G4, 1);
  delay(500);

  digitalWrite(G4, 0);
  delay(2000);
  digitalWrite(R4, 1);
  digitalWrite(Y4, 0);
  delay(2000);
  digitalWrite(Y1, 1);
  delay(2000);
  digitalWrite(R1, 0);
  digitalWrite(G1, 1);
  digitalWrite(Y1, 0);
  delay(2000);
}
