/*14_10.我說幾遍就幾遍-計算平均(10.0)*/
#include <stdio.h>
int main(){
    int a,b,c=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        scanf("%d",&b);
        c=c+b;
    }
    printf("%.2f",(float)c/(float)a);
	return 0;
}
