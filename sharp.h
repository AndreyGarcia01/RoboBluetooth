#ifndef _SHARP_H
#define _SHARP_H
#include <SharpIR.h>
#define model 1080
#include <arduino.h>
#include "bluetooth.h"

// Portas dos sharps
#define SHARP_FRONT A4
SharpIR sharpFront(SHARP_FRONT, model);

void readDistance(void);

void readDistance(void) {
  // Função para leitura da distância
  clearSerial();
  bluetoothSerial.print("SHARP_FRONT: ");
  bluetoothSerial.print(sharpFront.distance());
  bluetoothSerial.print("; ");

}

#endif