#include<stdio.h>
#include<math.h>

int checkArmstrong(int num){
    int count,i=0;
    int numD=num;
    int numOriginal=num;
    while(num){
        i++;
        num = num/10;
        count =i;
    }
    int sum=0;
    while(numD)
    {
        int rem=numD%10;
        float tmp=pow(rem,count);
        sum+=tmp;
        numD/=10;
    }
    if(sum==numOriginal){
        return 1;
    }else{
        return 0;
    }
}

void main(){
    for (int i = 0; i < 2000; i++)
    {
        if(checkArmstrong(i)){
            printf("%d is Armstrong\n", i);
        }
    }
    
}

