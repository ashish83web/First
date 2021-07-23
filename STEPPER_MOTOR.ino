void setup() {
  for(int i=0;i<4;i++){
    pinMode(i+2,1);
  }
 
}

void loop() {
  for(int i=0;i<4;i++){
    for (int j=0; j<4; j++){
    if(i==j){
      digitalWrite(j+2,1);
      }else{
        digitalWrite(j+2,0);
      }
  }delay(500);
}
  

}
