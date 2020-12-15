#include <stdio.h>

int main(){

    int num,sum=1,i;

    printf("Enter a number:\n");
    scanf("%d",&num);

    for(i=2;i<=num/2;i++){

        if(num % i==0){

        sum=sum+i;
        }    
    }
    if(num==sum){
        printf("%d is a perfect number!",num);
    }
    else{
        printf("%d is not a perfect number!",num);
    }
    return 0;
}