#include <stdio.h>

int main()
{
    //取余数的方法，之前没想到啊，我以为每隔3重置一下计数
    int n,a[100],j=1,k=0;
    printf("请输入整数n：");
    scanf("%d", &n);
    while(1){
        for(int i=0;i<n;i++){
            if(a[i] != -1){
                if(j%3 == 0){
                    a[i] = -1;
                    k++;
                    if(k == n){
                        printf("最后留下的是原来第：%d号", i+1);
                        break;
                    }
                }
                j++;
            }
        }
    }
    return 0;
}
