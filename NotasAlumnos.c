#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main() {

int Nota, REP=0, PFinal, Promedio=0;

printf("A continuación deberá ingresar 4 notas para poder calcular su promedio\n");

do{
    printf("Ingrese la nota:\t\n");
    scanf("%d",&Nota);
    
    if(Nota>0 && Nota<=10)
      {
          Promedio =  Promedio+Nota;
          REP++;
      }
    Else
      {
          System("CLS");
          printf("Nota NO válida, vuelva a ingresar la nota");
      }
   }
while( REP>=0 && REP<4);

PFinal = Promedio/4;
System("CLS");
printf("El promedio final del alumno es:\t%d", PFinal);

if( PFinal>=6 )
  {
      printf("El alumno está APROBADO");
  }
  else
  {
      printf("El alumno está REPROBADO");
  }
  
getche();
return 0;

}
