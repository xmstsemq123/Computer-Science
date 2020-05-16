/*17_5.while與for本是一家親-X到Y之和(10.0)*/
#include <stdio.h>
int main(){
    int x,y,c=0;
    scanf("%d %d",&x,&y);
    while(x<=y){
        c=x+c;
        x=x+1;
    }
    printf("%d",c);
	return 0;
}
