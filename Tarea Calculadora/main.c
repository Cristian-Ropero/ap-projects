
#include <stdio.h>

int main()
{
 int firsNumber; 
int  secondNumber;

printf("ingrese dos numeros enteros \n");

printf("primer n�mero:   ");
scanf("%d", & firsNumber);
printf("segundo n�mero:   ");
scanf("%d", & secondNumber);

printf("A continuaci�n vera la suma, resta, multiplicacion y division \n entre los dos numeros que ingreso \n \n");
int resultSum = firsNumber + secondNumber;
   printf("Resultado de la suma: %d \n ", resultSum);
int resultSub = firsNumber - secondNumber;
   printf("Resultado de la resta: %d \n ", resultSub);
int resultMult = firsNumber * secondNumber;
   printf("Resultado de la multiplicacion: %d \n ", resultMult);
int resultDiv = firsNumber / secondNumber;
   printf("Resultado de la division: %d \n ", resultDiv);
   
    return 0;
}
