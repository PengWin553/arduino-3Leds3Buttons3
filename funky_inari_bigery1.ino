int btn1 = 8;
int btn2 = 9;
int btn3 = 10;

int btn1State;
int btn2State;
int btn3State;

int crct1State;
int crct2State;
int crct3State;

int led1 = 2;
int led2 = 3;
int led3 = 4;

void setup(){
 pinMode(btn1,INPUT);
 pinMode(btn2,INPUT);
 pinMode(btn3,INPUT);
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(led3,OUTPUT);
 
}

void loop(){
  btn1State = digitalRead(btn1);
  btn2State = digitalRead(btn2);
  btn3State = digitalRead(btn3);
  
  //TURNS ALL THE LEDS ON AND OFF AT THE SAME TIME
  if(btn1State == LOW){
    if(crct1State == LOW){
      crct1State = HIGH;
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
    }else{
      crct1State = LOW;
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      
    }
  }
  
  if(btn2State == LOW){
    if(crct2State == LOW){
      crct2State == HIGH;
      digitalWrite(led1,HIGH);
      delay(1000);
      digitalWrite(led2,HIGH);
      delay(1000);
      digitalWrite(led3,HIGH);
     
    }else{
      crct2State == LOW;
    }
  }
  
  if(btn3State == LOW){
    if(crct3State == LOW){
      crct3State == HIGH;
      digitalWrite(led1,LOW);
      delay(1000);
      digitalWrite(led2,LOW);
      delay(1000);
      digitalWrite(led3,LOW);
        
    }else{
      crct3State == LOW;
    }
  }
    
    
  
}