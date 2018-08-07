#include <stdio.h>

int main()
{
    char str[100];
    int x,i = 0, len = 0, a = 0;
    printf("请输入一个八进制数字：");
    scanf("%s", &str);
    len = strlen(str);
    while(str[i] != '\0'){
        //str[i] - '0'是字符的减法操作，通常用于字符数字转换为整型数字
        x = str[i] - '0';
        a = a + x * pow(8, len - 1);//pow
        i++;
        len--;
    }
    printf("转化成十进制是：%d", a);

    //可能不允许直接使用下面2句
    //scanf("%o",&a);
    //printf ("%d\n",a);
    return 0;
}
