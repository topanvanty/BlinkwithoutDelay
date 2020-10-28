
 int Lred =  21;
 int Lyellow =  22;            
 int Lgreen =  23;     
          
long start = 0;  
      
long interval = 30000;    

int red = HIGH;            
int yellow = HIGH;             
int green = HIGH; 
         
void setup() {
pinMode(Lred, OUTPUT);  
pinMode(Lyellow, OUTPUT);      
pinMode(Lgreen, OUTPUT);      
}

void loop()
{
  unsigned long times = millis();
  unsigned long passTime = times - start;
      if(passTime > interval) {
        start = times;   
        }
      if (passTime < 10000){
        red = HIGH;             
        yellow = HIGH;            
        green = LOW;   
        }
      if (passTime > 10000 && passTime < 15000 ){
        red = HIGH;             
        yellow = LOW;            
       green = HIGH ;   
        }
      if (passTime > 15000  ){
        red = LOW;             
        yellow = HIGH;            
        green = HIGH ;   
        }
        digitalWrite(Lred,red);
        digitalWrite(Lyellow,yellow);
        digitalWrite(Lgreen,green);

}
