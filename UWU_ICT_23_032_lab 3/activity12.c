#include<stdio.h>
int main(){
int x,y;

for(x=5;x>=1;x--){
    for(y=x;y>0;y--){
        printf("*");
    }
    printf("\n");
}

return 0;
}
