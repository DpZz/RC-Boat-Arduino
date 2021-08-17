char t;
 
void setup() {
pinMode(5,OUTPUT);   //left motors forward
pinMode(4,OUTPUT);   //left motors reverse
pinMode(3,OUTPUT);   //right motors forward
pinMode(2,OUTPUT);   //right motors reverse
Serial.begin(9600);
 
}
 
void loop() {
if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}
 
if(t == 'F'){            //move forward(all motors rotate in forward direction)
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
  
}
 
else if(t == 'B'){//move reverse (all motors rotate in reverse direction)
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(2,HIGH);
}
 
else if(t == 'G'){      //FWD L
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
}
 
else if(t == 'H'){      //BWD L
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,HIGH);
}

else if(t == 'L'){     //Spot left
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
}

 
else if(t == 'I'){     // FWDR
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);  
}


else if(t == 'J'){     //BWD R
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);  
}

else if(t == 'R'){     //Spot Right
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,HIGH);
}


else if(t == 'S'){      //STOP (all motors stop)
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
}
}
