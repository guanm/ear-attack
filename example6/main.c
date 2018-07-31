#include <stdio.h>

int main()
{
    int len = 0;
    char str[100];
    printf("请输入字符串：");
    gets(str);
    //scanf("%s", &str);  scanf()函数不能输入空格
    len = fun(str);
    //len = strlen(str);
    printf("字符串的长度是：%d", len);
    return 0;
}

//这个方法判断不了空格，方法2可以
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

//方法2
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

//判断空格
//for (i=0; ch[i]!='\0'; i++) {
//    if (ch[i]==' ') {
//        amount++;
//    }
//}

