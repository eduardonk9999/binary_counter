// Definir os pinos dos LEDs
int ledPins[] = {2, 3, 4, 5};
int numPins = sizeof(ledPins) / sizeof(ledPins[0]);

// Variavel para armazenar o valor atual do contador
int contador = 0;

void setup() {
  // Configura os pinosdos LEDs como saida
  for (int i = 0; i < numPins; i++) {
    pinMode(ledPins[i], OUTPUT)
    
  }
}
