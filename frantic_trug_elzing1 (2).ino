// C++ code
//
void setup()
{
  //semafaro 1
  pinMode(0, OUTPUT); //red
  pinMode(1, OUTPUT); //yellow
  pinMode(2, OUTPUT); //grenn
  
  //semafaro 2
  pinMode(8, OUTPUT);//red
  pinMode(7, OUTPUT);//yellow
  pinMode(6, OUTPUT);//green
  
  //semafaro 3
  pinMode(11, OUTPUT);//red
  pinMode(10, OUTPUT);//yellow
  pinMode(9, OUTPUT);//green
  
  //semafaro 4
  pinMode(5, OUTPUT);//red
  pinMode(4, OUTPUT);//yellow
  pinMode(3, OUTPUT);//green
  
  //barulho
  pinMode(13,OUTPUT);
}

void loop()
{
  tone(13, 260); // 260 é a frequencia em Hz: Dó
  delay(500);
  noTone(13); //para de barulho
  
  digitalWrite(11, HIGH);
  digitalWrite(5, HIGH);//ver
  
  digitalWrite(2, LOW);
  digitalWrite(8, LOW);
  delay(3000);   //vermelho  3 e 1
  
  digitalWrite(0, HIGH);
  digitalWrite(6, HIGH);//verd
  delay(2000);
  
  digitalWrite(0, LOW);
   digitalWrite(6, LOW);//verd
  delay(1000);
  
  digitalWrite(1, HIGH);
  digitalWrite(7, HIGH);  //am
  delay(4000);
  
  digitalWrite(7, LOW);
   digitalWrite(1, LOW); //am
  delay(1000);
  
  tone(13, 260); // 260 é a frequencia em Hz: Dó
  delay(500);
  noTone(13);
  
  digitalWrite(2, HIGH);
  digitalWrite(8, HIGH);
  delay(3000);   //vermelho  3 e 1
  
  digitalWrite(11, LOW);
  digitalWrite(5, LOW); // vermelho apaga
  delay(2000); 
  
  digitalWrite(9, HIGH);
  digitalWrite(3, HIGH);
  delay(4000);
  
  digitalWrite(9, LOW);
  digitalWrite(3, LOW);
  delay(1000);
  
   digitalWrite(10, HIGH);
  digitalWrite(4, HIGH);
  delay(4000);
  
  digitalWrite(10, LOW);
  digitalWrite(4, LOW);
  delay(1000);

}
