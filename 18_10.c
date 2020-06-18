/*18_10.迴圈中有迴圈-印圖形2(10.0)*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>=1 and n<=9){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                printf("%d",j);
            }
            printf("\n");
        }
    }
	return 0;
}
