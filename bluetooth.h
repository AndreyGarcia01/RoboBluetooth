#ifndef _BLUETOOTH_H
#define _BLUETOOTH_H


#include <SoftwareSerial.h>

// Defina os pinos RX e TX para o módulo Bluetooth
#define BLUETOOTH_RX_PIN 4
#define BLUETOOTH_TX_PIN 6

SoftwareSerial bluetoothSerial(BLUETOOTH_RX_PIN, BLUETOOTH_TX_PIN);

void setupBluetooth() {
  // Inicialize a comunicação serial para o módulo Bluetooth
  bluetoothSerial.begin(9600);
}
// Função para interpretar os comandos recebidos via Bluetooth
void processBluetoothCommand(char command) {
  switch (command) {
    case 'F':
      // Comando para mover para frente
      motorControl(speedLeft, speedRight);
      break;
    case 'B':
      // Comando para mover para trás
      motorControl(-speedLeft, -speedRight);
      break;
    case 'R':
      // Comando para mover para a esquerda
      motorControl(-speedLeft, speedRight);
      break;
    case 'L':
      // Comando para mover para a direita
      motorControl(speedLeft, -speedRight);
      break;
    case '0':
      // Comando para parar
      motorControl(0, 0);
      break;
    default:
      // Comando inválido
      break;
  }
}

void clearSerial() {
  
  while (bluetoothSerial.available()) {
    bluetoothSerial.read();
  }
}

#endif
