int retardo=5;          // Tiempo de retardo en milisegundos (Velocidad del Motor)
int dato_rx;            // valor recibido en grados
int numero_pasos = 0;   // Valor en grados donde se encuentra el motor
int leeCadena;       // Almacena la cadena de datos recibida

void setup() {                
Serial.begin(9600);     // inicializamos el puerto serie a 9600 baudios
pinMode(11, OUTPUT);    // Pin 11 conectar a IN4
pinMode(10, OUTPUT);    // Pin 10 conectar a IN3
pinMode(9, OUTPUT);     // Pin 9 conectar a IN2
pinMode(8, OUTPUT);     // Pin 8 conectar a IN1
}

void loop() {
  if (Serial.available()) {    // Leer el valor enviado por el Puerto serial
    
    int opcion  = Serial.read();     // Lee los caracteres
    if (opcion == '1'){ 
    
        leeCadena = '360';              // Convierte Caracteres a cadena de caracteres
        dato_rx = leeCadena;   // Convierte Cadena de caracteres a Enteros
        numero_pasos='360';
        dato_rx = (dato_rx * 1.4222222222); // Ajuste de 512 vueltas a los 360 grados
    
   while (dato_rx==numero_pasos){   // Girohacia la izquierda en grados
       paso_izq();
       numero_pasos = numero_pasos + 1;   
   }
   
    }else if(opcion == '0'){
      
        leeCadena = '0';              // Convierte Caracteres a cadena de caracteres
        dato_rx = leeCadena;
        
        while (dato_rx==numero_pasos){   // Giro hacia la derecha en grados
        paso_der();
        numero_pasos = numero_pasos -1;
     }
   }//fin de else if
  leeCadena = 0;   // Inicializamos la cadena de caracteres recibidos 
  apagado();         // Apagado del Motor para que no se caliente
}  ///////////////////// Fin del Loop ///////////////////////////

 }//fin del if inicial
 
void paso_der(){         // Pasos a la derecha
 digitalWrite(11, LOW); 
 digitalWrite(10, LOW);  
 digitalWrite(9, HIGH);  
 digitalWrite(8, HIGH);  
   delay(retardo); 
 digitalWrite(11, LOW); 
 digitalWrite(10, HIGH);  
 digitalWrite(9, HIGH);  
 digitalWrite(8, LOW);  
   delay(retardo); 
 digitalWrite(11, HIGH); 
 digitalWrite(10, HIGH);  
 digitalWrite(9, LOW);  
 digitalWrite(8, LOW);  
  delay(retardo); 
 digitalWrite(11, HIGH); 
 digitalWrite(10, LOW);  
 digitalWrite(9, LOW);  
 digitalWrite(8, HIGH);  
  delay(retardo);  
}

void paso_izq() {        // Pasos a la izquierda
 digitalWrite(11, HIGH); 
 digitalWrite(10, HIGH);  
 digitalWrite(9, LOW);  
 digitalWrite(8, LOW);  
  delay(retardo); 
 digitalWrite(11, LOW); 
 digitalWrite(10, HIGH);  
 digitalWrite(9, HIGH);  
 digitalWrite(8, LOW);  
  delay(retardo); 
 digitalWrite(11, LOW); 
 digitalWrite(10, LOW);  
 digitalWrite(9, HIGH);  
 digitalWrite(8, HIGH);  
  delay(retardo); 
 digitalWrite(11, HIGH); 
 digitalWrite(10, LOW);  
 digitalWrite(9, LOW);  
 digitalWrite(8, HIGH);  
  delay(retardo); 
}
        
void apagado() {         // Apagado del Motor
 digitalWrite(11, LOW); 
 digitalWrite(10, LOW);  
 digitalWrite(9, LOW);  
 digitalWrite(8, LOW);  
 }
