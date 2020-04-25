/*11_9.多選一-3N+1-2(10.0)*/
#include <stdio.h>
int main(){
    int n=0,i,j;
    scanf("%d %d",&i,&j);
    for(int a=j;a<=i;a++){
        j=a;
        while(j!=1){
            n=n+1;
            printf("%d ",j);
            if(j%2==0)
                j=j/2;
            else
                j=3*j+1;
        }
        printf("1\n迴圈次數%d\n",n);
    }
	return 0;
}
