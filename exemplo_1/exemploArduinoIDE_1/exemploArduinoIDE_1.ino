int SENSOR1=2;
int SENSOR2=3;
int BUZZER=8;
int BOTAO=7;
int LED_VERMELHO=9; // Armado
int LED_VERDE=10;   // Desarmado

bool armado = false;

void setup() {
  pinMode(SENSOR1, INPUT_PULLUP);
  pinMode(SENSOR2, INPUT_PULLUP);
  pinMode(BUZZER, OUTPUT);
  pinMode(BOTAO, INPUT_PULLUP);
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
}

void loop() {
  // Alterna entre armado/desarmado quando o botão é pressionado
  if (digitalRead(BOTAO)== LOW){
    delay(200); // evita múltiplas leituras do mesmo clique
    armado = !armado; // inverte o estado
    while(digitalRead(BOTAO)== LOW); // espera soltar o botão
  }

  // Leitura dos sensores
  int estado1 = digitalRead(SENSOR1);
  int estado2 = digitalRead(SENSOR2);

  // Sistema armado
  if(armado){
    if(estado1 == LOW || estado2 == LOW){
      digitalWrite(LED_VERMELHO, HIGH); // alerta
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
  digitalWrite(LED_VERDE, HIGH); // sistema desligado
  digitalWrite(BUZZER, LOW);
}

delay(100); // pequena pausa pra estabilidade
}