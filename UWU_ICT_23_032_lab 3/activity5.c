#include<stdio.h>
int main(){
int marks;
char grade;
printf("Enter Mark(0-100) :");
scanf("%d",&marks);

if(marks>=90&&marks<=100){
    grade ='A';
}else if(marks>=80&&marks<=89){
    grade='B';
}else if(marks>=70&&marks<=79){
    grade='C';
}else if(marks<70){
     grade='D';
}else{
     printf("Invalide marks.");
}
printf("The Gread %d marks is:%c\n",marks,grade);
return 0;
}
