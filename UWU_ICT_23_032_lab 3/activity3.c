#include<stdio.h>
int main(){
int num1,num2,num3;

printf("Enter Number1 :");
scanf("%d",&num1);
printf("Enter Number2 :");
scanf("%d",&num2);
printf("Enter Number3 :");
scanf("%d",&num3);

if (num1>num2&&num1>num3){
    printf("The greatest number is: %d\n", num1);
}else if (num2>num1&&num2>num3){
    printf("The greatest number is: %d\n", num2);
}else if (num3>num1&&num3>num2){
    printf("The greatest number is: %d\n", num3);
}else{
    printf("There is a tie among the number.\n");
}







return 0;
}
