/*17_1.while與for本是一家親-1到100和(10.0)*/
#include <stdio.h>
int main(){
    int a=0;
    for(int i=1;i<=100;i++){
        a=a+i;
    }
    printf("%d",a);
	return 0;
}
