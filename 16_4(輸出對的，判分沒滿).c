/*16_4.if是while的好幫手-是3又是5的倍數(10.0)*/
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    while(a!=0 and b!=0){
        if(a>b){
            if(a%b==0)
                printf("%d是%d的倍數\n",a,b);
        }else{
            if(b%a==0)
                printf("%d是%d的倍數\n",b,a);
        }
        scanf("%d %d",&a,&b);
    }
	return 0;
}
