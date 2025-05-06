#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int NumberGenerate(int n){
    srand(time(NULL));
    int num = (rand() % n) + 1; // Adding 1 to shift range from 0-(n-1) to 1-n
    return num;
}

int game(int computer){
    
    int user ;
    printf("\nEnter (1. Rock 2.Paper 3.Seassor): ");
    scanf("%d",&user);
    printf("computer : %d",computer);
    if(user == 1 && computer == 2){
        printf("\nResult: compuetr win\n");
    }
    else if(user == 2 && computer == 1){
        printf("\nResult: you win\n");
    }
    else if(user == 3 && computer == 1){
        printf("\nResult: computer win\n");
    }
    else if(user == 1 && computer ==3){
        printf("\nResult: user win\n");
    }
    else if(user == 2 && computer == 3 ){
        printf("\nResult: computer win\n");
    }
    else if(user == 3 && computer == 2){
        printf("\nResult: You win\n");
    }
    else{
        printf("\nResult: draw\n");
    }
    return 1;
}
int main()
{

    int i=1;
    while(i<=3){
         int num = NumberGenerate(3);
        game(num);
        i++;
    }
    
    return 0;
}