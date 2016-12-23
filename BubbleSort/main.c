#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , temp , a[10], i , j;
    printf("Enter Total Number Of Element:");
    scanf("%d",&n);

    printf("Enter %d Element:",n);

    for(i=0; i<n ; i++){
        scanf("%d",&a[i]);

    }

    for(i = n-2 ;i>=0 ; i--){
        for(j=0 ; j<=i ; j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j]= a[j+1];
                a[j+1]= temp;
            }
        }
    }

    for(i=0 ; i<n; i++){
        printf("%d \n",a[i]);
    }





}
