#include <stdio.h>
#include <stdlib.h>

int main(){
float a,b,c;
char opt;
printf("a.-suma\nb.-resta\nc.-multiplicacion\nd.-divicion\n");
printf("introdusca una operacion\n");
opt=getchar();
printf("\ningrse el primer operando:");
scanf("%f",&a);
printf("\ningrese el segundo operando:");
scanf("%f",&b);
switch(opt){
case 'A':
case 'a':
    c=a+b;
    break;
case 'B':
case 'b':
    c=a-b;
    break;
case 'C':
case 'c':
    c=a*b;
    break;
case 'D':
case 'd':
    while (b==0){
        printf("\nERROR, b debe ser distinto de cero\n");
        printf("introduce el segundo operando\n");
        scanf("%f",&b);
    }
 c=a/b;
 default:;
    printf("LISTO\n");
    opt=='R';
    }
    if(opt!='R'){
        printf("el resultado es:%.2f",c);
    }
}

