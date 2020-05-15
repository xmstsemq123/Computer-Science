/*17_2.while與for本是一家親-奇數和(10.0)*/
#include <stdio.h>
int main(){
    int a=0;
    for(int i=1;i<=99;i=i+2){
        a=a+i;
    }
    printf("%d",a);
	return 0;
}
