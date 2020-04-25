/*15_6.做到我說停-相反數絕對值(10.0)*/
#include <stdio.h>
int main(){
    int a=1,b,c;
    while(a){
        scanf("%d",&a);
        if(a>0){
            b=-a;
            c=a;
        }
        if(a<0){
            b=-a;
            c=-a;
        }
        if(a)
            printf("%d的相反數%d\n%d的絕對值%d\n",a,b,a,c);
    }
	return 0;
}
