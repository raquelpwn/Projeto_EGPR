int SENSOR1=2; // Porta 1
int SENSOR2=3; // Janela 1
int SENSOR3=4; // Porta 2
int SENSOR4=5; // Janela 2
int BUZZER=8;
int BOTAO=7;
int LED_VERMELHO=9; // Armado (armado e sensor aberto)
int LED_VERDE=10;   // Tudo ok

bool armado = false;

void setup() {
  pinMode(SENSOR1, INPUT_PULLUP);
  pinMode(SENSOR2, INPUT_PULLUP);
  pinMode(SENSOR3, INPUT_PULLUP);
  pinMode(SENSOR4, INPUT_PULLUP);
  pinMode(BUZZER, OUTPUT);
  pinMode(BOTAO, INPUT_PULLUP);
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);

  // iniciar com tudo desligado
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_VERMELHO, LOW);
  digitalWrite(BUZZER, LOW);
}

void loop() {
  // Alterna entre armado/desarmado 
  if (digitalRead(BOTAO)== LOW){
    delay(200); // evita múltiplas leituras do mesmo clique
    armado = !armado; // inverte o estado
    while(digitalRead(BOTAO)== LOW); // espera soltar o botão
  }

 if(!armado){
  digitalWrite(LED_VERDE, LOW); 
  digitalWrite(LED_VERMELHO, LOW);
  digitalWrite(BUZZER, LOW);
  return; // sai do loop e espera armar novamente
 }
   
  // Leitura dos sensores
  int estado1 = digitalRead(SENSOR1);
  int estado2 = digitalRead(SENSOR2);
  int estado3 = digitalRead(SENSOR3);
  int estado4 = digitalRead(SENSOR4);
  
  // Aqui: disparamos quando SENSOR == HIGH (ou seja, aberto)]
  if(armado && (estado1 == HIGH || estado2 == HIGH || estado3 == HIGH || estado4 == HIGH)){
    digitalWrite(LED_VERDE, LOW); // apaga o verde
    digitalWrite(LED_VERMELHO, HIGH); // acende vermelho
    digitalWrite(BUZZER, HIGH);
  }else{ // todos os sensores fechados
    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(LED_VERDE, HIGH); // acende
    digitalWrite(BUZZER, LOW); // desliga
  }

  delay(100); // pausa pequena
} 
 