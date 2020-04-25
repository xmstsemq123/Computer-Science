/*15_9.做到我說停-象限(10.0)*/
#include <stdio.h>
int main(){
    float x,y;
    while(x+y){
        scanf("%f %f",&x,&y);
        if(x+y){
            if(x!=0 and y!=0){
                if(x>0 and y>0)
                    printf("第一象限\n");
                else if(x<0 and y>0)
                    printf("第二象限\n");
                else if(x<0 and y<0)
                    printf("第三象限\n");
                else if(x>0 and y<0)
                    printf("第四象限\n");
            }else{
                if(y==0)
                    printf("x軸\n");
                else
                    printf("y軸\n");
            }   
            
        }
    }
	return 0;
}
