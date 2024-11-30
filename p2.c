#include <stdio.h>
int printfib(int n);
int main(){
    printf("fib of given  number  is %d",printfib(100));
    return 0;
}
int printfib(int n){
    if(n==0){
        return 0;
    }if(n==1){
        return 1;
    }
    int fibNm1 = printfib(n-1);
    int fibNm2= printfib(n-2);
    int fibN = fibNm1 + fibNm2;
    return fibN; 
}
