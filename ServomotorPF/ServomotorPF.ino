#include <LiquidCrystal.h>

//VARIALBES INICIALES
int retardo=5;          // Tiempo de retardo en milisegundos (Velocidad del Motor)
int dato_rx;            // valor recibido en grados
int numero_pasos = 0;   // Valor en grados donde se encuentra el motor
int leeCadena;       // Almacena la cadena de datos recibida

// generamos una instancia de la lcd indicando los pines que manejara
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {                
          Serial.begin(9600);     // inicializamos el puerto serie a 9600 baudios
          pinMode(11, OUTPUT);    // Pin 11 conectar a IN4
          pinMode(10, OUTPUT);    // Pin 10 conectar a IN3
          pinMode(9, OUTPUT);     // Pin 9 conectar a IN2
          pinMode(8, OUTPUT);     // Pin 8 conectar a IN1
//DEFINIMOS LAS COLUMNAS Y FILAS DE LA LCD
          lcd.begin(16, 2);
}

void loop() {
  
          EncenderServo();
          
}  ////////// Fin del Loop //////////


//FUNCION QUE ENCENDERA NUESTRO SERVOMOTOR 
void EncenderServo(){
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
 
  }//fin del if inicial 
}//fin encenderservo 

//FUNCION QUE ENCENDERA NUESTRA PANTALLA LCD
void EncenderLCD(){
      
              lcd.print("abriendo puerta");
              lcd.print("Cerrando puerta");
}

//FUNCION QUE ACTIVARA NUETRO MOTOR HACIA LA DERECHA
void paso_der(){       
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

//FUNCION QUE ACTIVARA NUETRO MOTOR HACIA LA IZQUIERDA
void paso_izq() {       
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

//FUNCION QUE APAGARA NUETRO MOTOR         
void apagado() {         
             digitalWrite(11, LOW); 
             digitalWrite(10, LOW);  
             digitalWrite(9, LOW);  
             digitalWrite(8, LOW);  
 }
