/*14_6.我說幾遍就幾遍-1到N的和(10.0)*/
#include <stdio.h>
int main(){
    int a,n=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        n=n+i;
        printf("%d\n",n);
    }
	return 0;
}
