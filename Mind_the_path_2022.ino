
#define trig1 12
#define echo1 13

#define trig2 8
#define echo2 7

#define m1 4  
#define m2 5  
#define m3 2  
#define m4 3 
#define e1 10  
#define e2 11 

unsigned int dur1 = 0;
unsigned int dis1 = 0;

unsigned int dur2 = 0;
unsigned int dis2 = 0;

#define ir1 A0
#define ir2 A1
#define ir3 A2
#define ir4 A3
#define ir5 A4

void setup() {
  pinMode(trig1 , OUTPUT);
  pinMode(echo1 , INPUT);

  pinMode(trig2 , OUTPUT);
  pinMode(echo2 , INPUT);
  
  pinMode(m1 , OUTPUT);
  pinMode(m2 , OUTPUT);
  pinMode(m3 , OUTPUT);
  pinMode(m4 , OUTPUT);
  pinMode(e1, OUTPUT);
  pinMode(e2, OUTPUT);

  Serial.begin(9600);

  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  pinMode(ir3, INPUT);
  pinMode(ir4, INPUT);
  pinMode(ir5, INPUT);
}

void loop() {

  int s1 = digitalRead(ir1);
  int s2 = digitalRead(ir2);  
  int s3 = digitalRead(ir3);  
  int s4 = digitalRead(ir4);  
  int s5 = digitalRead(ir5);

  digitalWrite(trig1 , HIGH);
  delayMicroseconds(2);
  digitalWrite(trig1 , LOW);
  delayMicroseconds(10);

  dur1 = pulseIn(echo1 , HIGH);
  dis1 = (dur1/2) / 29.1;
  Serial.println("dis1: ");Serial.println(dis1);
  delay(10);
    

  digitalWrite(trig2 , HIGH);
  delayMicroseconds(2);
  digitalWrite(trig2 , LOW);
  delayMicroseconds(10);

  dur2 = pulseIn(echo2 , HIGH);
  dis2 = (dur2/2) / 29.1; 
  Serial.println("dis2: ");Serial.println(dis2);
  delay(10);





  if((s1==0) && (s2==0) && (s3==0) && (s4==0) && (s5==0) && dis2<19 )
  {

  if(dis1>18&&dis2>18)
  {
    analogWrite(e1, 150); 
    analogWrite(e2, 150);
    digitalWrite(m1, LOW);
    digitalWrite(m2, HIGH);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
  }

  else if(dis1>7 && dis2==7)
  {
    analogWrite(e1, 150); 
    analogWrite(e2, 150);
    digitalWrite(m1 ,HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
   
  }
  else if( dis1>7 && dis2<7)
  {
    analogWrite(e1,150); 
    analogWrite(e2,150);
    digitalWrite(m1,HIGH);
    digitalWrite(m2,LOW);
    digitalWrite(m3,LOW);
    digitalWrite(m4,LOW);
  }
  
   else if( dis1==dis2)
  {
    analogWrite(e1, 150); 
    analogWrite(e2, 150);
    digitalWrite(m1,HIGH);
    digitalWrite(m2,LOW);
    digitalWrite(m3,LOW);
    digitalWrite(m4,HIGH);
  }

  else if( dis1>7&& dis1<15 && dis2>7 && dis2<18)
  {
    analogWrite(e1, 150); 
    analogWrite(e2, 150);
    digitalWrite(m1,HIGH);
    digitalWrite(m2,LOW);
    digitalWrite(m3,LOW);
    digitalWrite(m4,HIGH);
  }

  
   else if( dis1>7 && dis2>7 )
  {
    analogWrite(e1, 150); 
    analogWrite(e2, 150);
    digitalWrite(m1,LOW);
    digitalWrite(m2,LOW);
    digitalWrite(m3,HIGH);
    digitalWrite(m4,LOW);
  }

  else if( dis1==7)
  {
    analogWrite(e1, 150); 
    analogWrite(e2, 150);
    digitalWrite(m1,HIGH);
    digitalWrite(m2,LOW);
    digitalWrite(m3,LOW);
    digitalWrite(m4,HIGH);
  }
 
  }
 

  
  else if((s1 == 0) && (s2 == 0) && (s3 == 1) && (s4 == 0) && (s5 == 0))
  {
    analogWrite(e1, 150); 
    analogWrite(e2, 150); 
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
    
  }
  
  
 else if((s1 == 0) && (s2 == 1) && (s3 == 0) && (s4 == 0) && (s5 == 0))
  {
    analogWrite(e1, 150); 
    analogWrite(e2, 150); 
    digitalWrite(m1, LOW);
    digitalWrite(m2, LOW);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
  }
  
  else if((s1 == 1) && (s2 == 0) && (s3 == 0) && (s4 == 0) && (s5 == 0))
  {
    analogWrite(e1, 150);
    analogWrite(e2, 150);
    digitalWrite(m1, LOW);
    digitalWrite(m2,HIGH);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
  }

  else if((s1 == 0) && (s2 == 0) && (s3 == 0) && (s4 == 1) && (s5 == 0))
  {
   
    analogWrite(e1, 150);
    analogWrite(e2, 150); 
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m4, LOW);
  }

  else if((s1 == 0) && (s2 == 0) && (s3 == 0) && (s4 == 0) && (s5 == 1))
  {
     
    analogWrite(e1, 150); 
    analogWrite(e2, 150); 
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m4, HIGH);
  }


  else if((s1 == 0) && (s2 == 0) && (s3 == 1) && (s4 == 1) && (s5 == 0))
  {
     
    analogWrite(e1, 150); 
    analogWrite(e2, 150); 
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m4, LOW);
  }

 
  else if((s1 == 0) && (s2 == 1) && (s3 == 1) && (s4 == 0) && (s5 == 0))
  {
    
    analogWrite(e1, 150); 
    analogWrite(e2, 150); 
    digitalWrite(m1, LOW);
    digitalWrite(m2, LOW);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
  }

 
 else if((s1 == 1) && (s2 == 1) && (s3 == 1) && (s4 == 0) && (s5 == 0))
  {
   
    analogWrite(e1, 150); 
    analogWrite(e2, 150); 
    digitalWrite(m1,HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
  }

  
  else if((s1 == 0) && (s2 == 0) && (s3 == 1) && (s4 == 1) && (s5 == 1))
  {
    
    analogWrite(e1, 150); 
    analogWrite(e2, 150);
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m4, HIGH);
  }

   else if((s1 == 1) && (s2 == 1) && (s3 == 1) && (s4 == 1) && (s5 == 1))
  {
  
    analogWrite(e1, 150); 
    analogWrite(e2, 150); 
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m4, HIGH);
   
  }
  else if((s1==0) && (s2==0) && (s3==0) && (s4==0) && (s5==0))
  {
  analogWrite(e1,150);
  analogWrite(e2,150);
  digitalWrite(m1,LOW);
  digitalWrite(m2,HIGH);
  digitalWrite(m3,HIGH);
  digitalWrite(m4,LOW);
  }
  
}
