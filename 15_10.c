/*15_10.做到我說停-求兩點距離(10.0)*/
#include <stdio.h>
int main(){
    int p=1,q=1;
    while(p!=0 and q!=0){
        scanf("%d %d",&p,&q);
        if(p!=0 and q!=0){
            if(q-p<0)
                printf("%d\n",-(q-p));
            else
                printf("%d\n",q-p);
        }
    }
	return 0;
}
