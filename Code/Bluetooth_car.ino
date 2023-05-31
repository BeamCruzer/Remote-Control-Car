#define frontRight1 2
#define frontRight2 3
#define frontLeft1 4
#define frontLeft2 5
#define backRight1 6
#define backRight2 7
#define backLeft1 8
#define backLeft2 9
char val;                //to store incoming data

void setup()
{
  Serial.begin(9600);
  pinMode(frontRight1, OUTPUT);
  pinMode(frontRight2, OUTPUT);
  pinMode(frontLeft1, OUTPUT);
  pinMode(frontLeft2, OUTPUT);
  pinMode(backRight1, OUTPUT);
  pinMode(backRight2, OUTPUT);
  pinMode(backLeft1, OUTPUT);
  pinMode(backLeft2, OUTPUT);

  digitalWrite(frontRight1, LOW);     digitalWrite(frontRight2, LOW);     //Stop position during boot
  digitalWrite(frontLeft1, LOW);      digitalWrite(frontLeft2, LOW);
  digitalWrite(backRight1, LOW);      digitalWrite(backRight2, LOW); 
  digitalWrite(backLeft1, LOW);       digitalWrite(backLeft2, LOW);
}

void loop()
{
  if (Serial.available())
  val = Serial.read();
  Serial.println(val);

  switch(val)
  {
    case 'F':       //Forward
    digitalWrite(frontRight1, HIGH);    digitalWrite(frontRight2, LOW); 
    digitalWrite(frontLeft1, LOW);      digitalWrite(frontLeft2, HIGH);
    digitalWrite(backRight1, HIGH);     digitalWrite(backRight2, LOW); 
    digitalWrite(backLeft1, LOW);       digitalWrite(backLeft2, HIGH);
    break;
    
    case 'B':       //Backward
    digitalWrite(frontRight1, LOW);     digitalWrite(frontRight2, HIGH); 
    digitalWrite(frontLeft1, HIGH);     digitalWrite(frontLeft2, LOW);
    digitalWrite(backRight1, LOW);      digitalWrite(backRight2, HIGH); 
    digitalWrite(backLeft1, HIGH);      digitalWrite(backLeft2, LOW);
    break;
    
    case 'R':       //Right
    digitalWrite(frontRight1, LOW);     digitalWrite(frontRight2, HIGH); 
    digitalWrite(frontLeft1, LOW);      digitalWrite(frontLeft2, HIGH);
    digitalWrite(backRight1, LOW);      digitalWrite(backRight2, HIGH); 
    digitalWrite(backLeft1, LOW);       digitalWrite(backLeft2, HIGH);
    break;
    
    case 'L':       //Left
    digitalWrite(frontRight1, HIGH);    digitalWrite(frontRight2, LOW); 
    digitalWrite(frontLeft1, HIGH);     digitalWrite(frontLeft2, LOW);
    digitalWrite(backRight1, HIGH);     digitalWrite(backRight2, LOW); 
    digitalWrite(backLeft1, HIGH);      digitalWrite(backLeft2, LOW);
    break;
    
    case 'G':       //Forward Left
    digitalWrite(frontRight1, HIGH);    digitalWrite(frontRight2, LOW); 
    digitalWrite(frontLeft1, LOW);      digitalWrite(frontLeft2, LOW);
    digitalWrite(backRight1, HIGH);     digitalWrite(backRight2, LOW); 
    digitalWrite(backLeft1, LOW);       digitalWrite(backLeft2, LOW);
    break;
    
    case 'I':       //Forward Right
    digitalWrite(frontRight1, LOW);     digitalWrite(frontRight2, LOW); 
    digitalWrite(frontLeft1, LOW);      digitalWrite(frontLeft2, HIGH);
    digitalWrite(backRight1, LOW);      digitalWrite(backRight2, LOW); 
    digitalWrite(backLeft1, LOW);       digitalWrite(backLeft2, HIGH);
    break;
    
    case 'H':       //Backward Left
    digitalWrite(frontRight1, LOW);     digitalWrite(frontRight2, HIGH); 
    digitalWrite(frontLeft1, LOW);      digitalWrite(frontLeft2, LOW);
    digitalWrite(backRight1, LOW);      digitalWrite(backRight2, HIGH); 
    digitalWrite(backLeft1, LOW);       digitalWrite(backLeft2, LOW);
    break;
    
    case 'J':       //Backward Right
    digitalWrite(frontRight1, LOW);     digitalWrite(frontRight2, LOW); 
    digitalWrite(frontLeft1, HIGH);     digitalWrite(frontLeft2, LOW);
    digitalWrite(backRight1, LOW);      digitalWrite(backRight2, LOW); 
    digitalWrite(backLeft1, HIGH);      digitalWrite(backLeft2, LOW);
    break;
    
    case 'S':       //Stop
    digitalWrite(frontRight1, LOW);     digitalWrite(frontRight2, LOW); 
    digitalWrite(frontLeft1, LOW);      digitalWrite(frontLeft2, LOW);
    digitalWrite(backRight1, LOW);      digitalWrite(backRight2, LOW); 
    digitalWrite(backLeft1, LOW);       digitalWrite(backLeft2, LOW);
    break;

    case 'D':       //Disconnection
    digitalWrite(frontRight1, LOW);     digitalWrite(frontRight2, LOW); 
    digitalWrite(frontLeft1, LOW);      digitalWrite(frontLeft2, LOW);
    digitalWrite(backRight1, LOW);      digitalWrite(backRight2, LOW); 
    digitalWrite(backLeft1, LOW);       digitalWrite(backLeft2, LOW);
    break;
    
    default: break;
  }
}
