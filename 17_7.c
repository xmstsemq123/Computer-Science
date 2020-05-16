/*17_7.while與for本是一家親-細菌分裂(10.0)*/
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=b;i=i*a){
        printf("%d ",i);
    }
	return 0;
}
