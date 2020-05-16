/*17_4.while與for本是一家親-1到N之和(10.0)*/
#include <stdio.h>
int main(){
    int a,b=0;
    scanf("%d",&a);
    if(a>1){
        for(int i=1;i<=a;i++){
            b=b+i;
        }
    }
    printf("%d",b);
	return 0;
}
