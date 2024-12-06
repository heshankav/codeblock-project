#include<stdio.h>
int main(){
float cp,sp;
printf("Cost Price :");
scanf("%f",&cp);
printf("Selling Price :");
scanf("%f",&sp);

if(cp<sp){
    printf("Profit of %.2f",sp-cp);
}else if(cp>sp){
    printf("Loos of %.2f",cp-sp);
}else{
     printf("There is no profit or loss.");
     }


return 0;
}
