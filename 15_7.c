/*15_7.做到我說停-圓(10.0)*/
#include <stdio.h>
int main(){
    float p=1,pi=3.14;
    while(p>0){
        scanf("%f",&p);
        float r=p/(2*pi);
        if(p>0)
            printf("半徑%.2f\n面積%.2f\n",r,r*r*pi);
    }
	return 0;
}
