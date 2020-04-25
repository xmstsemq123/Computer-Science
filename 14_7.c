/*14_7.我說幾遍就幾遍-10個數平均(10.0)*/
#include <stdio.h>
int main(){
    int a=0;
    for(int i=1;i<=10;i++){
        int n;
        scanf("%d ",&n);
        a=a+n;
    }
    printf("%.2f",(float)a/10);
	return 0;
}
