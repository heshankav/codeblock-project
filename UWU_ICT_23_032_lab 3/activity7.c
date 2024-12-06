#include<stdio.h>
int main(){
int speed,fine=0;

printf("Enter the speed of the vehicle (kmph): ");
scanf("%d", &speed);

if(speed>=81&&speed<=90){
        fine=500;
}else if(speed>=91&&speed<=100){
         fine=750;
}else if(speed>=100){
         fine=1000;
}if(fine>0){
printf("The fine for speeding at %d kmph is: %d rupees\n", speed, fine);
}else {
printf("No fine.Speed is within the limit.");
}
return 0;
}\
