/*15_3.做到我說停-到底迴圈幾次(10.0)*/
#include <stdio.h>
int main(){
    int a,n=0;
    while(a!=-1){
        scanf("%d",&a);
        if(a!=-1)
            n=n+1;
    }
    printf("%d",n);
	return 0;
}
