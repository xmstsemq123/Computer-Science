/*14_4.我說幾遍就幾遍-1到100的偶數(10.0)*/
#include <stdio.h>
int main(){
    int i=1;
    while(i<=30){
        if(i%2==0)
            printf("%d\n",i);
        i=i+1;
    }
	return 0;
}
