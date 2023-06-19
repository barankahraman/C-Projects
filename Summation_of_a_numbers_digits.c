#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int digit_of_number=log10(n); //calculates how many digits does the number includes
    int sum_of_digits=0;
    int remainder_digit;
    for (int i=10;i<(pow(10,digit_of_number+1))+1;i=i*10){
        if (i==10){
            sum_of_digits=n%i;
        }
        else if(i<pow(10,digit_of_number+1)){
            int number_digit=n%i;
            int j=i/10;
            sum_of_digits+=number_digit/j;
        }
        else{sum_of_digits+=n/(pow(10,(digit_of_number)));}
    }
    printf("Summ of number's digits: ");
    printf("%d",sum_of_digits);
    
    return 0;

}