#include<stdio.h>
int main(){

int num1,num2;
printf("Enter Number1 :",num1);
scanf("%d",&num1);
printf("Enter Number2 :",num2);
scanf("%d",&num2);
if (num2==0){
    printf ("enter valide divisible number\n");
}
else if(num1%num2==0){
        printf("%d is divisible by %d.\n",num1,num2);
}
else{
printf("%d is not divisible by %d.\n",num1,num2);
}





return 0;
}
