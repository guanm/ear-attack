#include <stdio.h>

void fun(int n, int str[50], int *odd, int *even)
{
    *odd = *even = 0;//��ʼֵ
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
    printf("���������ݸ�����");
    scanf("%d", &n);
    printf("������һ�����ݣ�");
    for(int i=0;i<n;i++){
        scanf("%d", &str[i]);
    }
    fun(n, str, &odd, &even);//&
    printf("�������ǣ�%d��ż�����ǣ�%d", odd, even);
    return 0;
}
