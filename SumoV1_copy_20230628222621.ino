#include "control.h"
#include "bluetooth.h


void setup() {
  // put your setup code here, to run once:
  serial1.begin(9600);
  setupBluetooth();
}

void loop() {
  sumo();


  // Verifique se há comandos Bluetooth recebidos
  if (bluetoothSerial.available()) {
    char command = bluetoothSerial.read();
    processBluetoothCommand(command);
  }
}

 
}