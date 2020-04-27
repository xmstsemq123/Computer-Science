/*16_5.if是while的好幫手-與7相關(10.0)*/
#include <stdio.h>
int main(){
    int n,a=1;
    scanf("%d",&n);
    while(a<=n){
        if(a%7==0 or a%10==7)
            printf("%d\n",a);
        a=a+1;
    }
	return 0;
}
