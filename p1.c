#include<stdio.h>
 void main(){
    int n,sum_e =0;
    int sum_o = 0;
    printf("Enter number n : ");
    scanf("%d", &n);
    for(int i = 1 ; i <= n; i++){
        if(i%2 == 0){
            sum_e = sum_e + i;
        }
        else{
            sum_o = sum_e + i;

        }
    }
            printf("sum of even numbers 1 to %d is %d\n",n, sum_e);
            printf("sum of odd numbers 1 to %d is %d\n", n,sum_o);
 }