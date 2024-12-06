#include<stdio.h>
int main(){
int hours_worked;
float wages;
const float rate = 50.0;

printf("Enter the number of hours worked in a week :");
scanf("%d",&hours_worked);

if(hours_worked <= 30){
    wages = hours_worked * rate;
}else if (hours_worked <= 55){
    wages = (30 * rate)+((hours_worked -30)*(rate * 1.5));
}else{
    wages = (30 * rate)+(25*rate*1.5)+((hours_worked -55)*(rate * 2));
}

printf("The weekly wages are: Rs. %.2f\n",wages);

return 0;
}
