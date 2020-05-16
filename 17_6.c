/*17_6.while與for本是一家親-5的倍數不加(10.0)*/
#include <stdio.h>
int main(){
    int n,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%5!=0)
            c=c+i;
    }
    printf("%d",c);
	return 0;
}
