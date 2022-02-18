#include<stdio.h>

#define MaxSize 100
typedef struct{
    int data[MaxSize];
    int length;
}SqList;

//声明函数
void InitSqList(SqList &L);

void InitSqList(SqList &L){
    for (int i = 0; i < L.length; i++)
    {
        /* code */
        L.data[i] = 0;
    }
    L.length = 0;
    printf("初始化成功\n");
};

int main()
{
    SqList S;
    InitSqList(S);

    printf("hello world!\n");
    return 0;
}