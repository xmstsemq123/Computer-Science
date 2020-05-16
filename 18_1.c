/*18_1.迴圈中有迴圈-九九乘法(10.0)*/
#include <stdio.h>
int main(){
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            printf("%d*%d=%d\n",i,j,i*j);
        }
    }
	return 0;
}
