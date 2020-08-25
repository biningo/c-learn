//
// Created by pb on 2020/8/25.
//


/*
*Author:icepan
*Date: 2020/8/25-下午9:19 
*Description:
*/
#include <stdio.h>
#include <string.h>
//常用宏
void test_common(){
    printf("File :%s\n", __FILE__ );
    printf("Date :%s\n", __DATE__ );
    printf("Time :%s\n", __TIME__ );
}


#define SQUARE(x) (x)*(x) //每个x必须加括号不然可能出现错误 比如 x=4+1  x*x=4+1*1+4
#define MAX(x,y) ((x)>(y)?(x):(y))
#define USERNAME(name) #name //将传入的变为string
#define USER(name) (user_##name) //字符串拼接
int main(){
    test_common();
    printf("%d^2:%d\n",4+1,SQUARE(4+1));
    printf("max:%d\n",MAX(1,2));
    printf("username:%s\n",USERNAME(jack));

    //
    char USER(name)[100];
    strcpy(USER(name),"jack");
    printf("%s",user_name);

}