#include <stdio.h>

int main()
{
    int a,b;
    printf("����������ʵ�����ݣ�\n");
    scanf("%d%d", &a, &b);
    if(a > b){
        printf("��һ������%d > %d", a, b);
    }else if(a < b){
        printf("�ڶ�������%d < %d", a, b);
    }else{
        printf("������һ����%d = %d", a, b);
    }
    //c=a>b?b:a;
    //ֱ�����ֵ
    return 0;
}
