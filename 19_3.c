/*19_3.玩玩迴圈-1-彈珠分裝(10.0)*/
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    while(a>0){
        if(a%8==0)
            printf("%d可分裝完畢\n",a);
        else
            printf("%d不可分裝完畢\n",a);
        scanf("%d",&a);
    }
	return 0;
}
