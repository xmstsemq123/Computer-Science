/*17_9.while與for本是一家親-遞減值(10.0)*/
#include <stdio.h>
int main(){
    int r;
    scanf("%d",&r);
    for(int i=100;i>=1;i=i-r){
        printf("%d ",i);
    }
	return 0;
}
