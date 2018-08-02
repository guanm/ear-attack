#include <stdio.h>

float myFunc(n){//float易忘记
    float sum = 0.0;
    if(n == 0){
        sum = 0.0;
    }else if(n % 2 == 0){
        int i = 2;
        while(i <= n){
            sum += 1.0 / i;//1.0易忘记
            i = i + 2;
        }
    }else{
        int i = 1;
        while(i <= n){
            sum += 1.0 / i;
            i = i + 2;
            //i+=2;
        }
    }
    return sum;
}

int main()
{
    int n;
    float sum;
    printf("请输入一个整数n：\n");
    scanf("%d", &n);//scanf易忘记
    sum = myFunc(n);
    printf("求和结果是：%f", sum);//f易忘记
    return 0;
}


