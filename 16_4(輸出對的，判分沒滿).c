/*16_4.if是while的好幫手-是3又是5的倍數(10.0)*/
#include <stdio.h>
int main(){
    int a,b,max,min;
    scanf("%d %d",&a,&b);
    while(a!=0 and b!=0){
        if(b>a){
            max=b;
            min=a;
        }else{
            max=a;
            min=b;
        }
        if(max%min==0)
            printf("%d是%d的倍數\n",max,min);
        scanf("%d %d",&a,&b);
    }
	return 0;
}
