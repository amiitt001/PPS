#include <stdio.h>
int printfib(int n);
int main(){
    int upto=10;
    for (int i = 0; i < upto; i++)
    {
        printf("%d\t", printfib(i));
    }
    
    return 0;
}
int printfib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibNm1 = printfib(n-1);
    int fibNm2= printfib(n-2);
    int fibN = fibNm1 + fibNm2;
    return fibN; 
}
