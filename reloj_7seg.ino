int h1=0; 
int h2=0; 
int m1=0; 
int m2=0; 
int s1=0; 
int s2=0; 
int flag=0;

unsigned long t1=0; 
unsigned long t2=0;  



int botton1=16;
int botton2=14;
int botton3=18;                                     
int bottonA,bottonB,bottonC;                                          
int i=2;     
int a=0;
int b=0;
int estado=0;                                   
int salida=0;
int estadoanterior=0;


int y =0;


void setup() {
 for(int i=2;i<13;i++)
 pinMode(i,OUTPUT);

pinMode(13,OUTPUT);
  
 
  

}

void loop() {


estado=digitalRead(botton1);
if((estado == HIGH) && (estadoanterior == LOW))
{
salida=1-salida;
delay(20);
}
estadoanterior=estado;

if(salida == 1)
{
   
  setu();
  digitalWrite(LED_BUILTIN,HIGH);
}
else
{
 digitalWrite(LED_BUILTIN,LOW); 
}  


segundo();
minutos();
horas();
tiempo();
pantalla();
 
}
  
