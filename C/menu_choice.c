#include<stdio.h>

int main(){
    int a;
    printf("enter your choice (1-3):");
    scanf("%d", &a);
    switch(a){
        case 1 :
            printf("you entered 1");
            break;
        case 2:
            printf("you entered 2");
            break;
        case 3:
            printf("you entered 3");
            break;
        default:
        printf("nothing matched");
    }
    return 0;
}
