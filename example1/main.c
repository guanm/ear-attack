#include <stdio.h>

int main()
{
    int a,b;
    printf("����������ʵ�����ݣ�\n");
    scanf("%d%d", &a, &b);
    if(a > b){
        printf("��һ������%d > %d\n", a, b);
    }else if(a < b){
        printf("�ڶ�������%d < %d\n", a, b);
    }else{
        printf("������һ����%d = %d\n", a, b);
    }
    //c=a>b?b:a;
    //ֱ�����ֵ
    //system("pause");
    return 0;
}
