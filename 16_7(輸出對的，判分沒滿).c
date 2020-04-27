/*16_7.if是while的好幫手-最大公因數(10.0)*/
#include <stdio.h>
int main(){
    int a,b,i=1,min;
    scanf("%d %d",&a,&b);
    printf("%d與%d的公因數",a,b);
    min=a;
    if(b<min)
        min=b;
    while(i<=min){
        if(a%i==b%i)
            printf("%d ",i);
        if(min==i)
            printf("\n%d與%d的最大公因數%d",a,b,min);
        i=i+1;
    }
	return 0;
}
