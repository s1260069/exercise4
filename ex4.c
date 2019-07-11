#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int i,total=0;
    srand(time(NULL));
    printf("Rolling the Dice...\n");
    for(i=0;i<2;i++){
        printf("Dice %d: ",i+1);
        int a= rand() % 6 + 1;
        total+=a;
        printf("%d\n",a);
    }
    printf("Total value : %d\n",total);
    if(total>7)printf("You won!!\n");
    else printf("You lost\n");
    return 0;
}
