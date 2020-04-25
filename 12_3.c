/*12_3.讓選擇更完美-點食物(20.0)*/
#include <stdio.h>
int main(){
    char set;
    scanf("%c",&set);
    switch(set){
        case 'A':
        case 'a':
            printf("牛奶\n");
            break;
        case 'B':
        case 'b':
            printf("西瓜\n");
            break;
        case 'C':
        case 'c':
            printf("檸檬水\n");
            break;
        default:
            printf("吐司\n");
    }
	return 0;
}
