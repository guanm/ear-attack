#include <stdio.h>

int main()
{
    int len = 0;
    char str[100];
    printf("�������ַ�����");
    gets(str);
    //scanf("%s", &str);  scanf()������������ո�
    len = fun(str);
    //len = strlen(str);
    printf("�ַ����ĳ����ǣ�%d", len);
    return 0;
}

//��������жϲ��˿ո񣬷���2����
int lenthOfStr(str){
    char *p;
    int len = 0;
    p = &str;
    while(*p != '\0'){
        len++;
        p++;
    }
    return len;
}

//����2
int fun(char *s)
{
	int i=0;
	while(*s!='\0')
	{
		i++;
		s++;
	}
	return i;
}

//�жϿո�
//for (i=0; ch[i]!='\0'; i++) {
//    if (ch[i]==' ') {
//        amount++;
//    }
//}

