#include <stdio.h>

int main()
{
    char a;
    while(1){
        a = getchar();//����ѭ��������
        if(a >= 'A' && a <= 'Z'){
            putchar(a+32);
            //putchar(a+'a'-'A');
        }else{
            break;
        }
    }

    return 0;
}
