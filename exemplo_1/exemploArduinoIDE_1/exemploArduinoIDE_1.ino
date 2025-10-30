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
}

void loop() {
  // Alterna entre armado/desarmado 
  if (digitalRead(BOTAO)== LOW){
    delay(200); // evita múltiplas leituras do mesmo clique
    armado = !armado; // inverte o estado
    while(digitalRead(BOTAO)== LOW); // espera soltar o botão
  }

  // Leitura dos sensores
  int estado1 = digitalRead(SENSOR1);
  int estado2 = digitalRead(SENSOR2);
  int estado3 = digitalRead(SENSOR3);
  int estado4 = digitalRead(SENSOR4);
  
  if(armado){
    // Se qualquer sensor estiver ABERTO (LOW)
    if(estado1 == LOW || estado2 == LOW || estado3 == LOW || estado4 == LOW){
      digitalWrite(LED_VERMELHO, HIGH);
      digitalWrite(LED_VERDE, LOW);
      digitalWrite(BUZZER, HIGH);
    }else{
     digitalWrite(LED_VERMELHO, LOW);
     digitalWrite(LED_VERDE, HIGH);
     digitalWrite(BUZZER, LOW);
    }
}
// Sistema DESARMADO
else{
  digitalWrite(LED_VERMELHO, LOW);
  digitalWrite(LED_VERDE, HIGH);
  digitalWrite(BUZZER, LOW);
}

delay(100); // pequena pausa pra estabilidade
}