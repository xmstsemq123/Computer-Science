/*10_3.比較中有比較-玩玩二分法(30.0)*/
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=0){
        printf("%d是正數\n",a);
        if(a<=10000)
            printf("A");
        else
            printf("B");
    }
    else{
        printf("%d是負數\n",a);
        if(a<-10000)
            printf("C");
        else
            printf("D");
    }
	return 0;
}
