#include<stdio.h>
//函数指针
int max(int one,int second){
    return one>second?one:second;
}
int main()
{
    int (*maxP)(int one,int second);
    maxP = max;
    printf("%d\n",maxP(1,2));  
    return 0;
}
