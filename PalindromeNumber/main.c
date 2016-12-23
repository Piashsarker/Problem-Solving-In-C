#include <stdio.h>
#include <stdlib.h>

int main()
{   int number , remaining , sum=0 ;
    printf("Enter an Integer: ");
    scanf("%d",&number);

    int temp = number ;
    while(temp!=0){
        remaining = temp%10 ;
        temp= temp/10 ;
        sum = sum*10 + remaining;
    }

    if(sum==number){
        printf("%d is a Palindrome Number",number);
    }

    return 0;
}
