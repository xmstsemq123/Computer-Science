/*15_9.做到我說停-象限(10.0)*/
#include <stdio.h>
int main(){
    float x,y;
    scanf("%f %f",&x,&y);
    while(x!=0 or y!=0){
        if(x!=0 and y!=0){
            if(x>0 and y>0)
                printf("第一象限\n");
            else if(x<0 and y>0)
                printf("第二象限\n");
            else if(x<0 and y<0)
                printf("第三象限\n");
            else if(x>0 and y<0)
                printf("第三象限\n");
        }
        if(x==0 and y!=0)
            printf("y軸\n");
        else if(x!=0 and y==0)
            printf("x軸\n");
        scanf("%f %f",&x,&y);
    }
	return 0;
}
