#include <stdio.h>

int main()
{
    char str[100];
    int x,i = 0, len = 0, a = 0;
    printf("������һ���˽������֣�");
    scanf("%s", &str);
    len = strlen(str);
    while(str[i] != '\0'){
        //str[i] - '0'���ַ��ļ���������ͨ�������ַ�����ת��Ϊ��������
        x = str[i] - '0';
        a = a + x * pow(8, len - 1);//pow
        i++;
        len--;
    }
    printf("ת����ʮ�����ǣ�%d", a);

    //���ܲ�����ֱ��ʹ������2��
    //scanf("%o",&a);
    //printf ("%d\n",a);
    return 0;
}
