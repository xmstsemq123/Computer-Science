/*16_10.if是while的好幫手-互質(10.0)*/
#include <stdio.h>
int main(){
    int a,b,c=1,d;
    scanf("%d %d",&a,&b);
    while(c!=a and c!=b){
        if(a%c==0 and b%c==0)
            d=c;
        c=c+1;
    }
    if(d==1)
        printf("%d與%d兩數互質",a,b);
    else
        printf("%d與%d兩數不互質",a,b);
	return 0;
}
