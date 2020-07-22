/* Atividade Robô seguidor de Linha - ETG */

#define sensor1 7
#define sensor2 8

#define input1_motor1 9
#define input2_motor1 6
#define input3_motor2 5
#define input4_motor2 3
#define switch_pin 13

#define DELAY_PADRAO 50

void setup(){
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(input1_motor1, OUTPUT);
  pinMode(input2_motor1, OUTPUT);
  pinMode(input3_motor2, OUTPUT);
  pinMode(input4_motor2, OUTPUT);
  pinMode(switch_pin, OUTPUT);
  Serial.begin(9600);

  parar();
}

void loop()
{
  int inputfrom1 = digitalRead(sensor1);
  int inputfrom2 = digitalRead(sensor2);
  int valor_switch = digitalRead(switch_pin);
  
  Serial.print("Valor switch: ");
  Serial.println(valor_switch);
  
  if(valor_switch == HIGH) {
    Serial.print("inputfrom1: ");
    Serial.print(inputfrom1);
    Serial.print(" | inputfrom2: ");
    Serial.println(inputfrom2);

    if((inputfrom1==LOW && inputfrom2==LOW) || (inputfrom1==HIGH && inputfrom2==HIGH)){
      irParaFrente(DELAY_PADRAO);
    } else if(inputfrom1 == HIGH){
     irParaADireita(DELAY_PADRAO);
    } else if(inputfrom2 == HIGH){
  		irParaAEsquerda(DELAY_PADRAO);
  	} 
  } else {
  	parar(); 
  }
}

void parar()
{
  Serial.println("Parando");
  
  digitalWrite(input1_motor1, LOW);
  digitalWrite(input2_motor1, LOW);
    
  digitalWrite(input3_motor2, LOW);
  digitalWrite(input4_motor2, LOW);
}

void irParaFrente(int duracao)
{
  Serial.println("Movendo para frente");
  
  digitalWrite(input1_motor1, LOW);
  digitalWrite(input2_motor1, HIGH);
    
  digitalWrite(input3_motor2, HIGH);
  digitalWrite(input4_motor2, LOW);
  
  delay(duracao);
}

void irParaAEsquerda(int duracao)
{
  Serial.println("Movendo para a esquerda");
  
  digitalWrite(input1_motor1, LOW);
  digitalWrite(input2_motor1, HIGH);
    
  digitalWrite(input3_motor2, LOW);
  digitalWrite(input4_motor2, LOW);
  
  delay(duracao);
}

void irParaADireita(int duracao)
{
  Serial.println("Movendo para a direita");
  
  digitalWrite(input1_motor1, LOW);
  digitalWrite(input2_motor1, LOW);
    
  digitalWrite(input3_motor2, HIGH);
  digitalWrite(input4_motor2, LOW);
  
  delay(duracao);
}