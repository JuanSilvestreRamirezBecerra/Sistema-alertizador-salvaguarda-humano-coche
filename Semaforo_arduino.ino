#define led_verdeP 6
#define led_rojoP 5

#define led_verdeV 4
#define led_naranjaV 3
#define led_rojoV 2

#define boton 13

# define reloj 0

int tiempoEspera =0;

void setup() {
  pinMode(led_verdeV,OUTPUT);
  pinMode(led_naranjaV,OUTPUT);
  pinMode(led_rojoV,OUTPUT);
  pinMode(led_verdeP,OUTPUT);
  pinMode(led_rojoP,OUTPUT);
  pinMode(boton,INPUT);
  Serial.begin(9600);//Solo si monitoreo descomentar la velocidad
}

void inicio(){
  digitalWrite(led_verdeV,HIGH);
  digitalWrite(led_naranjaV,LOW);
  digitalWrite(led_rojoV,LOW);

  digitalWrite(led_verdeP,LOW);
  digitalWrite(led_rojoP,HIGH);
  
}
void parpadeo(int led){
 for(int i=0;i<5;i++){
  digitalWrite(led,LOW);
  delay(500);
  digitalWrite(led,HIGH);
  delay(500);
  }
}
void loop() {
    tiempoEspera= analogRead(reloj);
    tiempoEspera=map(tiempoEspera, 0,1023,10,60)*100;
    Serial.println(tiempoEspera);

    inicio();
    
    if(digitalRead(boton)==LOW){

    }else if(digitalRead(boton)==HIGH){
    delay(tiempoEspera);
    parpadeo(led_verdeV);
  
    digitalWrite(led_verdeV,LOW);
    digitalWrite(led_naranjaV,HIGH);
    delay(4000);
  
    digitalWrite(led_naranjaV,LOW);
    digitalWrite(led_rojoV,HIGH);

    digitalWrite(led_verdeP,HIGH);
    digitalWrite(led_rojoP,LOW);
    delay(tiempoEspera*2);

    parpadeo(led_verdeP);

    digitalWrite(led_verdeP,LOW);
    }

}
