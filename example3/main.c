#include <stdio.h>

int main()
{
    int a[10];
    int max,min,j,k;
    printf("请输入十个数：");
    for(int i=0;i<10;i++){
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[9];
    for(int i=0;i<10;i++){
        if(a[i] > max){
            max = a[i];
            j = i;
        }
        if(a[i] < min){
            min = a[i];
            k = i;
        }
    }
    printf("max=%d\n", j);
    printf("min=%d\n", k);
    a[j] = a[0];
    a[0] = max;
    a[k] = a[9];
    a[9] = min;

    printf("结果是：");
    for(int i=0;i<10;i++){
        printf("%d ", a[i]);
    }
    return 0;
}
