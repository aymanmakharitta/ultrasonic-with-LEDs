// C++ code
//
int a=2;
int b=3;
int c=4;
int e=5;
int trig=11;
int echo=10;
int t=0;
int d=0;
void setup()
{
pinMode(a,OUTPUT);pinMode(b,OUTPUT);
pinMode(c,OUTPUT);pinMode(e,OUTPUT);
pinMode(trig,OUTPUT);pinMode(echo,INPUT);Serial.begin(9600);
}
void loop()
{
   digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
   digitalWrite(trig,LOW);
  t=pulseIn(echo,HIGH);
  d=0.0343*t/2;
  Serial.println(d);
  
  if (d<50){digitalWrite(a,HIGH);digitalWrite(b,LOW);
           digitalWrite(c,LOW);digitalWrite(e,LOW);}
  else if (d<100&&d>50){digitalWrite(a,HIGH);digitalWrite(b,HIGH);
             digitalWrite(c,LOW);digitalWrite(e,LOW); }
  else if (d<150&&d>100){digitalWrite(a,HIGH);digitalWrite(b,HIGH);
                      digitalWrite(c,HIGH);digitalWrite(e,LOW);}
  else if (d>150){digitalWrite(a,HIGH);digitalWrite(b,HIGH);
       digitalWrite(c,HIGH);digitalWrite(e,HIGH);}
  
}