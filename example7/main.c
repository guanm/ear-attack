#include <stdio.h>

float myFunc(n){//float������
    float sum = 0.0;
    if(n == 0){
        sum = 0.0;
    }else if(n % 2 == 0){
        int i = 2;
        while(i <= n){
            sum += 1.0 / i;//1.0������
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
    printf("������һ������n��\n");
    scanf("%d", &n);//scanf������
    sum = myFunc(n);
    printf("��ͽ���ǣ�%f", sum);//f������
    return 0;
}


