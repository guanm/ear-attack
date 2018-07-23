#include <stdio.h>

int main()
{
    int a[10];
    int m,temp;
    printf("请输入10个整数：\n");
    for(int i=0;i<10;i++){
        scanf("%d", &a[i]);
    }
    printf("请输入向后移动几位\n");
    scanf("%d", &m);
    printf("结果是：\n");
    for(int i=10-m;i<10;i++){
        printf("%d ", a[i]);
    }
    for(int i=0;i<10-m;i++){
        printf("%d ", a[i]);
    }
    return 0;
}

/*
#include<stdio.h>
#define N 10
int main()
{
    int a[N],i,j,k,m,temp;
    printf("请输入%d个数字：",N);
    for(i=0;i<N;i++) scanf("%d",&a[i]);
    printf("输入需要前移的数字的个数：");
    scanf("%d",&m);
    for(i=N-m,k=0;i<N;i++,k++)      //此处i为要移动的数据的下标，只要从N-m到N-1就好
    {
        temp=a[i];
        for(j=i-1;j>=k;j--)         //上面把m--删了，这里用j=i-1代替，其余不变，可以实现题目要求
        {
            a[j+1]=a[j];
        }
        a[k]=temp;
    }
    for(i=0;i<N;i++) printf("%d ",a[i]);
}*/
