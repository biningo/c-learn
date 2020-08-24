#include<stdio.h>

int max(int one,int second){
    return one>second?one:second;
}
int main(int argc, char const *argv[])
{
    int (*maxP)(int one,int second);
    maxP = max;
    printf("%d\n",maxP(1,2));  
    return 0;
}
