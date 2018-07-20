#include <stdio.h>

int main()
{
    int a,b;
    printf("请输入两个实型数据：\n");
    scanf("%d%d", &a, &b);
    if(a > b){
        printf("第一个数大，%d > %d\n", a, b);
    }else if(a < b){
        printf("第二个数大，%d < %d\n", a, b);
    }else{
        printf("两个数一样大，%d = %d\n", a, b);
    }
    //c=a>b?b:a;
    //直接输出值
    //system("pause");
    return 0;
}
