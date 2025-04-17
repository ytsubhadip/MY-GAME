#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    // all variables;
    char u_name[100];
    char u_selection[100];
    // srand(time(NULL));
    
    //     printf("Random number 0 to 2: %d\n",rand()%2);
    // home page
    printf("|-------------------------------------------------------------------|\n");
    printf("|                  Wllcome ROCK PAPER SCISSORS GAME                 |\n");
    printf("|===================================================================|\n");
    printf("|                  #Devloped by YT coder                            |\n");
    printf("|-------------------------------------------------------------------|\n");
    
    printf(" Enter user Name:");
    fgets(u_name, sizeof(u_name),stdin);
    printf(" #  wellcome -- %s        \n",u_name);
    int i=0;
    while(i<3){
        printf("%s: 1. rock 2. paper 3. scissor",u_name);
        scanf("%s",&u_selection);
        i++;
    
    }
    
    


    
    return 0;
}