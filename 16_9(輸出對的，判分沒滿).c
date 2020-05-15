/*16_9.if是while的好幫手-更多的三角形(10.0)*/
#include <stdio.h>
int main(){
    int a=1,b=1,c=1;
    while(a!=0 and b!=0 and c!=0){
        scanf("%d %d %d",&a,&b,&c);
        if(a+b>c and b+c>a and a+c>b)
            printf("%d %d %d可以構成三角形\n",a,b,c);
        else if(!(a+b>c and b+c>a and a+c>b)and a!=0 and b!=0 and c!=0)
            printf("%d %d %d不可以構成三角形\n",a,b,c);
    }
	return 0;
}
