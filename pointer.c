#include <stdio.h>

int main(int argc, char const *argv[])
{
    //指针大小 64 8byte 32 4byte
    void *p = NULL;
    printf("指针大小:%zu\n", sizeof(p));

    //指针运算
    int v1 = 1;
    char c1 = '1';
    int *pv = &v1;
    char *pc = &c1;
    printf("pv:%p  pc:%p\n", pv, pc);
    pv++; //移动4 Byte
    pc++; //移动 1Byte
    printf("pv:%p  pc:%p\n", pv, pc);

    void *p2 = &v1;
    printf("%d\n", *(int *)p2); //1
    p2++; //移动 1Byte
    printf("%p  %p\n", &v1, p2);

    return 0;
}
