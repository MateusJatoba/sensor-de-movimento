
const int sensorPorta = D5;

int sensorValue = 0;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);
  // Defina o pino do sensor como entrada
  pinMode(sensorPorta, INPUT);



}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = digitalRead(sensorPorta);

  if (sensorValue == 0) {  // detectanto 28 cm de altura e 4 cm de largura 
  Serial.println("Objeto detectado");
  }

  else{
    Serial.println("Nenhum objeto detectado");
  }

  // Exiba o valor lido no monitor serial
 // Serial.println(sensorValue);

  // Aguarde um pouco antes de repetir a leitura
  delay(1000);

}
