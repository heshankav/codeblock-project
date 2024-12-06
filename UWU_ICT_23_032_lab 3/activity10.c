#include<stdio.h>
int main(){
float num1, num2, result;
char operator;

printf("Enter Number1 :");
scanf("%f",&num1);
printf("Enter Number1 :");
scanf("%f",&num2);
printf("Enter an operator (+, -, *, /): ");
scanf(" %c", &operator);

switch(operator){
case '+':
    result=num1+num2;
    printf("Result: %.2f\n", result);
    break;
case '-':
    result=num1-num2;
    printf("Result: %.2f\n", result);
    break;
case '*':
    result=num1*num2;
    printf("Result: %.2f\n", result);
    break;
case '/':
    result=num1/num2;
    printf("Result: %.2f\n", result);
    break;
}
return 0;
}









