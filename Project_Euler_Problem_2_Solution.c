#include <stdio.h>

int main(){
int temp1=1;
int temp2=2;
int temp3;
int sum_temp4=0;
while(temp2<4000000){
    if(temp2 % 2==0){
        sum_temp4+=temp2;
    }
    temp3=temp1+temp2;
    temp1=temp2;
    temp2=temp3;
}
    printf("%d",sum_temp4);
    return 0;
}