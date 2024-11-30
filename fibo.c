#include<stdio.h>
void main(){
    int num1=0;
    int num2=1;
    int upto=10;
    for (int i = 0; i < upto; i++)
    {
        int tmp=num1+num2;
        num1=num2;
        num2=tmp;
        printf("%d\t", tmp);
    }
    
}