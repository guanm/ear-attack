#include <stdio.h>

int main()
{
    int a,b,c,*p1,*p2,*p3,*p;
    p1=&a;
    p2=&b;
    p3=&c;
    printf("������3�����֣�\n");
    scanf("%d%d%d", &a,&b,&c);
    if(*p2 > *p1){
        p=p1;
        p1=p2;
        p2=p;
    }
    if(*p3 > *p1){
        p=p1;
        p1=p3;
        p3=p;
    }
    if(*p3 > *p2){
        p=p2;
        p2=p3;
        p3=p;
    }
    printf("�Ӵ�С��˳���ǣ�%d %d %d", *p1, *p2, *p3);
    return 0;
}
