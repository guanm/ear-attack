#include <stdio.h>

int main()
{
    int a[10];
    int m,temp;
    printf("������10��������\n");
    for(int i=0;i<10;i++){
        scanf("%d", &a[i]);
    }
    printf("����������ƶ���λ\n");
    scanf("%d", &m);
    printf("����ǣ�\n");
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
    printf("������%d�����֣�",N);
    for(i=0;i<N;i++) scanf("%d",&a[i]);
    printf("������Ҫǰ�Ƶ����ֵĸ�����");
    scanf("%d",&m);
    for(i=N-m,k=0;i<N;i++,k++)      //�˴�iΪҪ�ƶ������ݵ��±ֻ꣬Ҫ��N-m��N-1�ͺ�
    {
        temp=a[i];
        for(j=i-1;j>=k;j--)         //�����m--ɾ�ˣ�������j=i-1���棬���಻�䣬����ʵ����ĿҪ��
        {
            a[j+1]=a[j];
        }
        a[k]=temp;
    }
    for(i=0;i<N;i++) printf("%d ",a[i]);
}*/
