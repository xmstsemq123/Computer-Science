/*16_8.if是while的好幫手-公倍數(10.0)*/
#include <stdio.h>
int main(){
    int a,b,c,i=1;
    scanf("%d %d %d",&a,&b,&c);
    while(a*i<1000){
        if((a*i)%b==0 and (a*i)%c==0)
            printf("%d ",a*i);
        i=i+1;
    }
	return 0;
}
