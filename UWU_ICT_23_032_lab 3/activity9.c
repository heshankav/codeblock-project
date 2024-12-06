#include<stdio.h>
int main(){
char grade;
printf("Enter the grade :");
scanf("%c",&grade);

switch(grade){
case 'A':case'a':
    printf("Excellent\n");
    break;
case 'B':case'b':
    printf("Well Done\n");
    break;
case 'C':case'c':
    printf("Good\n");
    break;
case 'D':case'd':
    printf("You Pass\n");
    break;
case 'F':case'f':
    printf("Bettter Try Again\n");
    break;

    default:
            printf("Invalid Grade\n");



}


return 0;
}
