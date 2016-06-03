int row1 = 30;
int row2 = 31;
int row3 = 32;
int row4 = 33;
int col1 = 34;
int col2 = 35;
int col3 = 36;

char incomingByte;

void setup() {
  
  pinMode(row1,OUTPUT);
  pinMode(row2,OUTPUT);
  pinMode(row3,OUTPUT);
  pinMode(row4,OUTPUT);
  pinMode(col1,OUTPUT);
  pinMode(col2,OUTPUT);
  pinMode(col3,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  
       if (Serial.available() > 0) {
                // read the incoming byte:
                incomingByte = Serial.read();  
                Serial.println(incomingByte);
                
                
                switch(incomingByte){
                 
                   case '1':
                    
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW); 
                    digitalWrite(row4, HIGH);
                    digitalWrite(col1, LOW);
                    digitalWrite(col2, HIGH);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW);
                    digitalWrite(row4, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row4, LOW);                    
                    digitalWrite(row3, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row4, LOW);                    
                    digitalWrite(row3, LOW);                    
                    digitalWrite(row2, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row4, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW);                    
                    digitalWrite(row1, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600); 
                    digitalWrite(row4, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW);                   
                    digitalWrite(row1, HIGH);
                    digitalWrite(col1, LOW);
                    digitalWrite(col2, HIGH);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW);                    
                    digitalWrite(row4, LOW);                    
                    digitalWrite(col1, LOW);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, LOW);                    
                    delay(600);
                                        
                     
                   break;
                   
                   case '2':
                    
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW); 
                    digitalWrite(row4, HIGH);
                    digitalWrite(col1, LOW);
                    digitalWrite(col2, HIGH);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW);
                    digitalWrite(row4, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row4, LOW);                    
                    digitalWrite(row3, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row4, LOW);                    
                    digitalWrite(row3, LOW);                    
                    digitalWrite(row2, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row4, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW);                    
                    digitalWrite(row1, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600); 
                    digitalWrite(row4, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW);                   
                    digitalWrite(row1, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, HIGH);
                    digitalWrite(col3, LOW);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW);                    
                    digitalWrite(row4, LOW);                    
                    digitalWrite(col1, LOW);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, LOW);                    
                    delay(600);
                                        
                     
                   break;
                   
                   case '3':
                    
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW); 
                    digitalWrite(row4, HIGH);
                    digitalWrite(col1, LOW);
                    digitalWrite(col2, HIGH);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW);
                    digitalWrite(row4, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row4, LOW);                    
                    digitalWrite(row3, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row4, LOW);                    
                    digitalWrite(row3, LOW);                    
                    digitalWrite(row2, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row4, LOW);
                    digitalWrite(row2, HIGH);                    
                    digitalWrite(row3, LOW);                    
                    digitalWrite(row1, LOW);
                    digitalWrite(col1, LOW);
                    digitalWrite(col2, HIGH);
                    digitalWrite(col3, HIGH);                    
                    delay(600); 
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW);                    
                    digitalWrite(row4, LOW);                    
                    digitalWrite(col1, LOW);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, LOW);                    
                    delay(600);
                                        
                     
                   break;
                   
                   
                    case '4':
                    
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW); 
                    digitalWrite(row4, HIGH);
                    digitalWrite(col1, LOW);
                    digitalWrite(col2, HIGH);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW);
                    digitalWrite(row4, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row4, LOW);                    
                    digitalWrite(row3, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row4, LOW);                    
                    digitalWrite(row3, LOW);                    
                    digitalWrite(row2, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row4, LOW);
                    digitalWrite(row2, HIGH);                    
                    digitalWrite(row3, LOW);                    
                    digitalWrite(row1, LOW);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, HIGH);
                    digitalWrite(col3, LOW);                    
                    delay(600); 
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW);                    
                    digitalWrite(row4, LOW);                    
                    digitalWrite(col1, LOW);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, LOW);                    
                    delay(600);
                                        
                     
                   break;
                   
                    case '5':
                    
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW); 
                    digitalWrite(row4, HIGH);
                    digitalWrite(col1, LOW);
                    digitalWrite(col2, HIGH);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW);
                    digitalWrite(row4, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row4, LOW);                    
                    digitalWrite(row3, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row4, LOW);                    
                    digitalWrite(row3, HIGH);                    
                    digitalWrite(row2, LOW);
                    digitalWrite(col1, LOW);
                    digitalWrite(col2, HIGH);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW);                    
                    digitalWrite(row4, LOW);                    
                    digitalWrite(col1, LOW);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, LOW);                    
                    delay(600);
                                        
                     
                   break;
                   
                   
                    case '6':
                    
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW); 
                    digitalWrite(row4, HIGH);
                    digitalWrite(col1, LOW);
                    digitalWrite(col2, HIGH);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW);
                    digitalWrite(row4, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row4, LOW);                    
                    digitalWrite(row3, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row4, LOW);                    
                    digitalWrite(row3, HIGH);                    
                    digitalWrite(row2, LOW);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, HIGH);
                    digitalWrite(col3, LOW);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW);                    
                    digitalWrite(row4, LOW);                    
                    digitalWrite(col1, LOW);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, LOW);                    
                    delay(600);
                                        
                     
                   break;
                   
                   /******************************** REVERSA **************************/
                   /*******************************************************************/
                   case 'A':
                    
                    digitalWrite(row1, HIGH);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW); 
                    digitalWrite(row4, LOW);
                    digitalWrite(col1, LOW);
                    digitalWrite(col2, HIGH);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, HIGH);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW); 
                    digitalWrite(row4, LOW);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, HIGH);                    
                    digitalWrite(row3, LOW); 
                    digitalWrite(row4, LOW);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, HIGH); 
                    digitalWrite(row4, LOW);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW); 
                    digitalWrite(row4, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW); 
                    digitalWrite(row4, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, HIGH);
                    digitalWrite(col3, LOW);                    
                    delay(600);                    
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW);                    
                    digitalWrite(row4, LOW);                    
                    digitalWrite(col1, LOW);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, LOW);                    
                    delay(600);
                                        
                     
                   break;
                   
                   case 'B':
                    
                    digitalWrite(row1, HIGH);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW); 
                    digitalWrite(row4, LOW);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, HIGH);
                    digitalWrite(col3, LOW);                    
                    delay(600);
                    digitalWrite(row1, HIGH);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW); 
                    digitalWrite(row4, LOW);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, HIGH);                    
                    digitalWrite(row3, LOW); 
                    digitalWrite(row4, LOW);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, HIGH); 
                    digitalWrite(row4, LOW);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW); 
                    digitalWrite(row4, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW); 
                    digitalWrite(row4, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, HIGH);
                    digitalWrite(col3, LOW);                    
                    delay(600);                    
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW);                    
                    digitalWrite(row4, LOW);                    
                    digitalWrite(col1, LOW);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, LOW);                    
                    delay(600);
                                        
                     
                   break;
                   
                   case 'C':
                    
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, HIGH);                    
                    digitalWrite(row3, LOW); 
                    digitalWrite(row4, LOW);
                    digitalWrite(col1, LOW);
                    digitalWrite(col2, HIGH);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, HIGH);                    
                    digitalWrite(row3, LOW); 
                    digitalWrite(row4, LOW);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, HIGH); 
                    digitalWrite(row4, LOW);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW); 
                    digitalWrite(row4, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW); 
                    digitalWrite(row4, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, HIGH);
                    digitalWrite(col3, LOW);                    
                    delay(600);                    
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW);                    
                    digitalWrite(row4, LOW);                    
                    digitalWrite(col1, LOW);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, LOW);                    
                    delay(600);
                                        
                     
                   break;
                   
                   
                    case 'D':
                    
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, HIGH);                    
                    digitalWrite(row3, LOW); 
                    digitalWrite(row4, LOW);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, HIGH);
                    digitalWrite(col3, LOW);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, HIGH);                    
                    digitalWrite(row3, LOW); 
                    digitalWrite(row4, LOW);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, HIGH); 
                    digitalWrite(row4, LOW);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW); 
                    digitalWrite(row4, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW); 
                    digitalWrite(row4, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, HIGH);
                    digitalWrite(col3, LOW);                    
                    delay(600);                    
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW);                    
                    digitalWrite(row4, LOW);                    
                    digitalWrite(col1, LOW);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, LOW);                    
                    delay(600);
                                        
                     
                   break;
 
                     case 'E':
                    
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, HIGH); 
                    digitalWrite(row4, LOW);
                    digitalWrite(col1, LOW);
                    digitalWrite(col2, HIGH);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, HIGH); 
                    digitalWrite(row4, LOW);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW); 
                    digitalWrite(row4, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW); 
                    digitalWrite(row4, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, HIGH);
                    digitalWrite(col3, LOW);                    
                    delay(600);                    
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW);                    
                    digitalWrite(row4, LOW);                    
                    digitalWrite(col1, LOW);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, LOW);                    
                    delay(600);
                                        
                     
                   break;
                   
                    case 'F':
                    
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, HIGH); 
                    digitalWrite(row4, LOW);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, HIGH);
                    digitalWrite(col3, LOW);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, HIGH); 
                    digitalWrite(row4, LOW);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW); 
                    digitalWrite(row4, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, HIGH);                    
                    delay(600);
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW); 
                    digitalWrite(row4, HIGH);
                    digitalWrite(col1, HIGH);
                    digitalWrite(col2, HIGH);
                    digitalWrite(col3, LOW);                    
                    delay(600);                    
                    digitalWrite(row1, LOW);
                    digitalWrite(row2, LOW);                    
                    digitalWrite(row3, LOW);                    
                    digitalWrite(row4, LOW);                    
                    digitalWrite(col1, LOW);
                    digitalWrite(col2, LOW);
                    digitalWrite(col3, LOW);                    
                    delay(600);
                                        
                     
                   break;
 
 
 
 
                  
                }
                
        }

}
