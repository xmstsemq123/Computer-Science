/*17_10.while與for本是一家親-2的次方數(10.0)*/
#include <stdio.h>
int main(){
    int n,i=2;
    scanf("%d",&n);
    while(true){
        i=i*2;
        if(i>=n)
            break;
    }
    printf("%d",i);
	return 0;
}
