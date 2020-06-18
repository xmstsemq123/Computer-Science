/*20_3.玩玩迴圈-2-數字遊戲(10.0)*/
#include <stdio.h>
int main(){
    int n,a,b;
    scanf("%d",&n);
    while(n>0){
        n=n%100;
        n=n*n;
        n=(n/100%10)*10+n/10%10;
        printf("%d\n",n);
        scanf("%d",&n);
    }
	return 0;
}
