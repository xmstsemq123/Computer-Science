/*16_3.if是while的好幫手-是3不是5的倍數(10.0)*/
#include <stdio.h>
int main(){
    int n,a=1;
    scanf("%d",&n);
    while(a<=n){
        if(a%3==0){
            if(a%5!=0)
                printf("%d\n",a);
        }
        a=a+1;
    }
	return 0;
}
