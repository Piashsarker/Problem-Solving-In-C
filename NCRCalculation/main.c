#include <stdio.h>
#include <stdlib.h>
int fact(int a);
int main()
{
    int ncr , n , r ;
   printf("Enter Two Number: ");
   scanf("%d %d",&n, &r);
   ncr = fact(n)/fact(n-r)*fact(r);

   printf("%d",ncr);

}
int fact(int a){

 int fac = 1 ,i;
 for(i=a ; i>0 ; i--){
    fac = fac*i;

 }
 return fac ;

}
