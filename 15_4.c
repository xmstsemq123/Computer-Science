/*15_4.做到我說停-班級均分-總和(10.0)*/
#include <stdio.h>
int main(){
    int a,b=0;
    while(a!=-1){
        scanf("%d",&a);
        if(a!=-1)
            b=b+a;
    }
    printf("%d",b);
	return 0;
}
