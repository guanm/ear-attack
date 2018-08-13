#include <stdio.h>

void fun(int n, int str[50], int *odd, int *even)
{
    *odd = *even = 0;//初始值
    for(int j=0;j<n;j++){
        if(j % 2 == 0){
            *odd += str[j];
        }else{
            *even += str[j];
        }
    }
}

int main()
{
    int n;
    int str[50];
    int odd, even;
    printf("请输入数据个数：");
    scanf("%d", &n);
    printf("请输入一组数据：");
    for(int i=0;i<n;i++){
        scanf("%d", &str[i]);
    }
    fun(n, str, &odd, &even);//&
    printf("奇数和是：%d，偶数和是：%d", odd, even);
    return 0;
}
