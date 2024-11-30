#include<stdio.h>
#include<math.h>

int power(int e, int x){
    int result=1;
    for (int i = 0; i < x; i++)
    {
        result*=e;
    }
    return result;
}

void main(){
    int num,count,i=0;
    num = 153;
    int numD=num;
    int numOriginal=num;
    while(num){
        i++;
        num = num/10;
        count =i;
    }
    printf("%d\n", count);
    int sum=0;
    while(numD)
    {
        int rem=numD%10;
        float tmp=pow(rem,count);
        printf("---- %f\n",tmp);
        sum+=tmp;
        numD/=10;
    }
    if(sum==numOriginal){
        printf("%d is Armstrong", numOriginal);
    }else{
        printf("sum is %d", sum);
    }
    
}