// Definir os pinos dos LEDs
int ledPins[] = {2, 3, 4, 5};
int numPins = sizeof(ledPins) / sizeof(ledPins[0]);

// Variavel para armazenar o valor atual do contador
int contador = 0;

void setup() {
  // Configura os pinosb dos LEDs como saida
  for (int i = 0; i < numPins; i++) {
    pinMode(ledPins[i], OUTPUT);
    
  }
}


void loop () {
  // converter o valor do contador em binario e acender o led correspondente
  for(int i = 0; i < numPins; i++) {
      digitalWrite(ledPins[i], (contador >> i) & i);
  }

  // Incrementar o contador
  contador++;

  // Se o contador atingir 16, retornar a 0
  if (contador == 16) {
    contador = 0;  
    
  }

  // Aguardar um pequeno intervalo antes de incrementar novamente.
  delay(500);
}
