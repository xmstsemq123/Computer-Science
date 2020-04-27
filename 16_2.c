/*16_2.if是while的好幫手-非6的倍數(10.0)*/
#include <stdio.h>
int main(){
    int n,a=1;
    scanf("%d",&n);
    while(a<=n){
        if(a%6!=0)
            printf("%d ",a);
        a=a+1;
    }
	return 0;
}
