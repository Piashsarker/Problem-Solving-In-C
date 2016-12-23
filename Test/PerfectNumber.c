
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1 ,n , sum=0 ;
    printf("Enter A Number");
    scanf("%d",&n);
    while(i<n){
        if(n%i==0){
            sum += i;
        }
        i++;
    }
    if(sum==n){
        printf("%d is a Perfect number",n);
    }
}
