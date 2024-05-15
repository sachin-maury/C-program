#include<stdio.h>
int main(){
    int number ;
    printf("Enter your number :\n");
    scanf("%d",& number);
    if(number%2==0){
        printf("This is even number %d\n",number);
        
    }
    else{
        printf("This is odd number %d\n",number);
    }
    return 0;
}
