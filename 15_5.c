/*15_5.做到我說停-班級均分-完成(10.0)*/
#include <stdio.h>
int main(){
    float a,b=0;
    int n=0;
    while(a!=-1){
        scanf("%f",&a);
        if(a!=-1){
            b=b+a;
            n=n+1;
        }
    }
    printf("%.6f",b/n);
	return 0;
}
