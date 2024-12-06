#include<stdio.h>
int main(){
int x,y,z,q;
printf("Enter seconds :");
scanf("%d",&z);
x=z/3600;
printf("Hours :%d\n",x);

y=(z%3600)/60;
printf("Minutes :%d\n",y);

q=((z%3600)%60);
printf("Seconds :%d\n",q);

return 0;

}
