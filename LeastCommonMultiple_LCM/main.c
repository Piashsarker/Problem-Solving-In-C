#include <stdio.h>
int lcm(int , int);
int main(){
    int a , b , l ;
    printf("Enter Two Integer: ");
    scanf("%d %d",&a,&b);

    if(a>b){
        l= lcm(a,b);
    }
    else{
        l= lcm(b,a);
    }
    printf("The LCM is : %d",l);

}
int lcm(int a , int b){
    int temp = a ;

    while(1){

        if(temp%b==0 && temp%a==0){
            break ;
        }
        temp++;
    }
 return temp ;

}
