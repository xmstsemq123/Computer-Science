/*15_8.做到我說停-年利率(10.0)*/
#include <stdio.h>
int main(){
    float b=1,l;
    int t;
    while(b!=-1){
        scanf("%f %f %d",&b,&l,&t);
        if(b!=-1)
            printf("%.2f\n",b*l*t/365);
    }
	return 0;
}
