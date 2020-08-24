#include <stdio.h>
#include <string.h>

//memset 设置指定的字节数为知道的值
void test_memset()
{
    char str[20] = "hello,world";
    printf("%s %zu\n", str, sizeof(str)); //sizeof 返回的是str数组的大小
    memset(str, 'a', 5);                  //将前5个字节的位置设置为a
    printf("%s\n", str);                  //aaaaa,world
}

//memcopy 拷贝n个字节到指定地址
void test_memcopy()
{
    char str[20] = "hello,world";
    printf("%s\n", str);

    char new_str[20];
    memcpy(new_str, str, 5); //从str地址开始，copy 5字节数据到new_str地址之后
    new_str[5] = '\0';       //结束符
    printf("%s\n", new_str);
}

// //memcopy
// 用法：比较buf1和buf2前count个字节AIIC码值得大小；
// 输出为不等于0
// 如果buf1=buf2,输出为零；
void test_memcmp()
{
    int a;
    char *buf1 = "abc";
    char *buf2 = "abc";
    a = memcmp(buf1, buf2, 3); //前3个字节相等
    printf("a的值为：%d\n", a);
}

//从 s2复制n字节到 s1
void test_memmove()
{
    const char s1[] = "hello,world";
    const char s2[] = "world,hello";
    printf("s1:%s  s2:%s\n",s1,s2);
    memmove(s1, s2, 5); //从s2地址开始，copy 5字节数据到 s1地址之后
    printf("s1:%s  s2:%s\n", s1, s2); //s1=world,world
}


//其他函数
void test(){
    char s1[] = "hello";
    char s2[] = "hello,world";
    strcpy(s1,s2);//将s2复制给s1
    printf("s1:%s s2:%s\n",s1,s2);  //hello,world  world
    char s3[]="hello,";
    char s4[]="world";
    strcat(s3,s4);
    printf("s3:%s  s4:%s\n",s3,s4); //hello,world  world
    printf("%d\n",strlen(s3)); //11
    printf("%p\n",strchr(s3,'w')); //返回w第一次出现的地址 不存在则NULL
    printf("%p\n",strstr(s3,"world"));// 返回hello 的地址

    char s5[]="hello";
    char s6[]="hello";
    printf("%d\n",strcmp(s5,s6)); //相等返回0  s1<s2 则返回小于 0   s1>s2 则返回大于 0
}


int main(int argc, char const *argv[])
{
    test_memset();
    test_memcopy();
    test_memcmp();
    test_memmove();
    test();
    return 0;
}
