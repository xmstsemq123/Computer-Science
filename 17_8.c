/*17_8.while與for本是一家親-等比級數公式(10.0)*/
#include <stdio.h>
int main(){
    int f,l,r,c=0;
    scanf("%d %d %d",&f,&l,&r);
    while(f<=l){
        c=c+f;
        f=f*r;
    }
    printf("%d",c);
	return 0;
}
