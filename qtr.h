#ifndef _QTR_H
#define _QTR_H

#include <arduino.h>
#include "bluetooth.h"

// Portas sensor QTR
#define QTR_LEFT A2
#define QTR_RIGHT A0

void readFloor(void);

void readFloor(void) {
  // Função para leitura do chão
  clearSerial();
  bluetoothSerial.print("QTR_LEFT: ");
  bluetoothSerial.print(analogRead(QTR_LEFT));
  bluetoothSerial.print("; ");
  bluetoothSerial.print("QTR_RIGHT: ");
 bluetoothSerial.print(QTR_RIGHT));
  bluetoothSerial.print("; ");
}

#endif