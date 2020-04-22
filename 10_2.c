/*10_2.比較中有比較-正三角形嗎?(30.0)*/
#include <stdio.h>
int main(){
    int a,b,c,d,e,f,g,h,i;
    scanf("%d%d%d",&a,&b,&c);
    scanf("%d%d%d",&d,&e,&f);
    scanf("%d%d%d",&g,&h,&i);
    if(a+b>c && b+c>a && a+c>b)
        if(a==b && b==c && a==c)
            printf("%d %d %d正三角形\n",a,b,c);
        else
            printf("%d %d %d非正三角形\n",a,b,c);
    else
        printf("%d %d %d無法構成三角形",a,b,c);
        
    if(d+e>f && e+f>d && d+f>e)
        if(d==e && e==f && d==f)
            printf("%d %d %d正三角形\n",d,e,f);
        else
            printf("%d %d %d非正三角形\n",d,e,f);
    else
        printf("%d %d %d無法構成三角形",d,e,f);
        
    if(g+h>i && g+i>h && h+i>g)
        if(g==h && g==i & h==i)
            printf("%d %d %d正三角形\n",g,h,i);
        else
            printf("%d %d %d非正三角形\n",g,h,i);
    else
        printf("%d %d %d無法構成三角形",g,h,i);
    
	return 0;
}
