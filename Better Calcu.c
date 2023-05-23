#include <stdio.h>
#include <stdlib.h>

double calcu(double number1,double number2, char opera){
    double result;
   switch(opera){
    case '+':
        result = number1 + number2;
        break;
    case '-':
        result = number1 - number2;
        break;
    case '*':
        result = number1 * number2;
        break;
    case '/':
        result = number1 / number2;
        break;
    case '^':
        result = pow(number1, number2);
        break;
    default:
        printf("Es ist ein fehler aufgetreten");
        break;

   }
    return result;
}

int bettercalculator(){
    double numb1;
    double numb2;
    char op;
    printf("Zahl 1 \n");
    scanf("%lf",&numb1);
    system("cls");
    printf("operator \n");
    scanf(" %c",&op);
    system("cls");
    printf("Zahl 2 \n");
    scanf("%lf", &numb2);
    system("cls");
    printf("%f",calcu(numb1, numb2 ,op));
    return 0;
}

