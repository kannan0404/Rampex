#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num&1){
        printf("The number is odd.\n");
    }
    else{
        printf("The numnber is even.\n");
    }
return 0;
}