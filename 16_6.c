/*16_6.if是while的好幫手-因數(10.0)*/
#include <stdio.h>
int main(){
    int n,a=1;
    scanf("%d",&n);
    while(a<=n){
        if(n%a==0)
            printf("%d ",a);
        a=a+1;
    }
	return 0;
}
