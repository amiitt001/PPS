#include<stdio.h>
void main(){
    int n,i;
    n = 0;
    int isprime = 1;
    printf("Enter number n : ");
    scanf("%d", &n);
    for(int i =2; i<=n/2; i++){
        if(n%i == 0){
            isprime=0;
            break;
        }
    }
    if(isprime){
        printf("number is prime");
    }else{
        printf("number is not prime");
        }
}