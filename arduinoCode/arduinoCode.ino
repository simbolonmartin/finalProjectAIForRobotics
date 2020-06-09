const int In1 = 3;  ///right motor
const int In2 = 5;
const int In3 = 10; //left motor
const int In4 = 11;
const int enA = 6;
const int enB = 9;


void setup() {
  pinMode(In1, OUTPUT);
  pinMode(In2, OUTPUT);
  pinMode(In3, OUTPUT);
  pinMode(In4, OUTPUT);
}
void loop() {
  Serial.println(23);
  delay(20);
  // send data only when you receive data:
  if (Serial.available() > 0) {
    // read the incoming byte:
    char incomingValue = Serial.read();
    Serial.print(incomingValue);
    if (incomingValue == '0') {
      speedBoth(90);
    }
    else if (incomingValue == '1') {
      speedBoth(90);
    }
    else if (incomingValue == '2') {
      speedBoth(90);
    }
    else if (incomingValue == '3') {
      speedBoth(150);
    }
    else if (incomingValue == '4') {
      speedBoth(150);
    }
    else if (incomingValue == '5') {
      speedBoth(150);
    }
    else if (incomingValue == '6') {
      speedBoth(200);
    }
    else if (incomingValue == '7') {
      speedBoth(200);
    }
    else if (incomingValue == '8') {
      speedBoth(200);;
    }
    else if (incomingValue == '9') {
      speedBoth(200);
    }


  }


}
void speedBoth(int PWMvalue ) {
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  analogWrite(enA, PWMvalue);
  digitalWrite(In3, LOW);
  digitalWrite(In4, HIGH);
  analogWrite(enB, PWMvalue);
  delay(2000);
}

void mstop() {
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);
}
void mfront() {
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
}
void mback() {
  digitalWrite(In1, LOW);
  digitalWrite(In2, HIGH);
}
