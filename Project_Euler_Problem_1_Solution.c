//Find the sum of all the multiples of 3 or 5 below 1000

#include <stdio.h>
int main(){
    int sum_temp=0;
    for (int i=0;i<1000;i++){
        if (i%3==0 || i%5==0){
            sum_temp+=i;
        }
    }
    printf("%d",sum_temp);
    return 0;
}