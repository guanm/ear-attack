#include <stdio.h>

int main()
{
    //ȡ�����ķ�����֮ǰû�뵽��������Ϊÿ��3����һ�¼���
    int n,a[100],j=1,k=0;
    printf("����������n��");
    scanf("%d", &n);
    while(1){
        for(int i=0;i<n;i++){
            if(a[i] != -1){
                if(j%3 == 0){
                    a[i] = -1;
                    k++;
                    if(k == n){
                        printf("������µ���ԭ���ڣ�%d��", i+1);
                        break;
                    }
                }
                j++;
            }
        }
    }
    return 0;
}
