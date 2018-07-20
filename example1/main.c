#include <stdio.h>

int main()
{
    int a,b;
    printf("请输入两个实型数据：\n");
    printf("请输入第一个数：\n");
    scanf("%d", &a);
    printf("请输入第二个数：\n");
    scanf("%d", &b);
    if(a > b){
        printf("第一个数大，%d > %d", a, b);
    }else if(a < b){
        printf("第二个数大，%d < %d", a, b);
    }else{
        printf("两个数一样大，%d = %d", a, b);
    }
    //c=a>b?b:a;
    //直接输出值
    return 0;
}
