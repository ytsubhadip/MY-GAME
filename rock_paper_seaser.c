#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int NumberGenerate(int n){
    srand(time(NULL));
    int num = (rand() % n) + 1; // Adding 1 to shift range from 0-(n-1) to 1-n
    return num;
}
int main()
{
    int user ;
    printf("\nEnter (1. Rock 2.Paper 3.Seassor): ");
    scanf("%d",&user);
    int computer = NumberGenerate(3);
    printf("\ncomputer : %d",computer);
    if(user == 1 && computer == 2){
        printf("\ncompuetr win");
    }
    else if(user == 2 && computer == 1){
        printf("\nyou win");
    }
    else if(user == 3 && computer == 1){
        printf("\ncomputer win");
    }
    else if(user == 1 && computer ==3){
        printf("\nuser win");
    }
    else if(user == 2 && computer == 3 ){
        printf("\ncomputer win");
    }
    else if(user == 3 && computer == 2){
        printf("\nuser win");
    }
    else{
        printf("\ndraw");
    }

    
 
   

    
    return 0;
}