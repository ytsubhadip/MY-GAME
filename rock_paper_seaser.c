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
   static int i=0;
   static int j=0;
    printf("\nEnter (1. Rock 2.Paper 3.Seassor): ");
    scanf("%d",&user);
    printf("computer : %d",computer);
    if(user == 1 && computer == 2){
        printf("\nResult: compuetr win\n");
        i++;
    }
    else if(user == 2 && computer == 1){
        printf("\nResult: you win\n");
        j++;
    }
    else if(user == 3 && computer == 1){
        printf("\nResult: computer win\n");
        i++;
    }
    else if(user == 1 && computer ==3){
        printf("\nResult: user win\n");
        j++;
    }
    else if(user == 2 && computer == 3 ){
        printf("\nResult: computer win\n");
        i++;
    }
    else if(user == 3 && computer == 2){
        printf("\nResult: You win\n");
        j++;
    }
    else{
        printf("\nResult: draw\n");
    
    }
    if(i< j){
        printf("you win..");
    }
    else{
        printf("computer win...");
    }
    
    
}
int main()
{
    char user_name[100];
    printf("Enter your name: ");
    fgets(user_name,100,stdin);
    printf("Wellcome: %s",user_name);
    int i=1;
    while(i<=3){
         int num = NumberGenerate(3);
        game(num);
        i++;
    }

    
    return 0;
}