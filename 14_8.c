/*14_8.我說幾遍就幾遍-輸入整數(10.0)*/
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        scanf("%d",&b);
        printf("%d\n",b);
    }
	return 0;
}
