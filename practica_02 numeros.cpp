#include <stdio.h>
#include <stdlib.h>

int main(){
float a,b,c;
int opt;
printf("1.-suma\n2.-resta\n3.-multiplicacion\n4.-divicion\n");
scanf("%d",&opt);
printf("\ningrse el primer operando:");
scanf("%f",&a);
printf("\ningrese el sefundo operando:");
scanf("%f",&b);
switch (opt){
case 1:
    c=a+b;
    break;
case 2:
    c=a-b;
    break;
case 3:
    c=a*b;
    break;
case 4:
    while (b==0){
        printf("\nERROR, b debe ser distinto de cero\n");
        printf("introduce el segundo operando\n");
        scanf("%f",&b);
    }
 c=a/b;
 default:;
}
printf("el resultado es:%.2f",c);
}

