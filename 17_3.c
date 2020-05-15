/*17_3.while與for本是一家親-偶數和(10.0)*/
#include <stdio.h>
int main(){
    int a=0;
    for(int i=2;i<=100;i=i+2){
        a=a+i;
    }
    printf("%d",a);
	return 0;
}
