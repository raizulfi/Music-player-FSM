#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "mylib/mylib.h"

void stop(){
    printf(" __________________\n");
    printf("|                  |\n");
    printf("|                  |\n");
    printf("|   ┌─┐┌┬┐┌─┐┌─┐   |\n");
    printf("|   └─┐ │ │ │├─┘   |\n");
    printf("|   └─┘ ┴ └─┘┴     |\n");
    printf("|                  |\n");
    printf("|  .___________    |\n");
    printf("|     0:00 []      |\n");
    printf(" __________________\n");
}

void play(){
    printf(" __________________\n");
    printf("|                  |\n");
    printf("|                  |\n");
    printf("|   ┌─┐┬  ┌─┐┬ ┬   |\n");
    printf("|   ├─┘│  ├─┤└┬┘   |\n");
    printf("|   ┴  ┴─┘┴ ┴ ┴    |\n");
    printf("|                  |\n");
    printf("|   ___._______    |\n");
    printf("|     2:20 |>      |\n");
    printf(" __________________\n");
}

void pause(){
    printf(" __________________\n");
    printf("|                  |\n");
    printf("|                  |\n");
    printf("| ┌─┐┌─┐┬ ┬┌─┐┌─┐  |\n");
    printf("| ├─┘├─┤│ │└─┐├┤   |\n");
    printf("| ┴  ┴ ┴└─┘└─┘└─┘  |\n");
    printf("|                  |\n");
    printf("|   ___._______    |\n");
    printf("|     2:20 ||      |\n");
    printf(" __________________\n");
}

int main(void) {
    int s0=0, s1=0, S0=0, S1=0, b, o0=0;
    while (true) {
        
    system("clear");
        if (S0==0 && S1==0){
            system("clear");
            stop();
            printf("Current state: %d%d\n", S0, S1);
            printf("Output: %d\n", o0);
            printf("Input: %d\n", b);
            printf("\n");
    }
    else if (S0==0 && S1==1)
    {
        system("clear"); 
        pause();
        printf("Current state: %d%d\n", S0, S1);
        printf("Output: %d\n", o0);
        printf("Input: %d\n", b);
        printf("\n");
    }
    else if (S0==1 && S1==0)
    {
        system("clear");
        play();
        printf("Current state: %d%d\n", S0, S1);
        printf("Output: %d\n", o0);
        printf("Input: %d\n", b);
        printf("\n");
    }

    
    printf("\nEnter an input (1) to play/pause or (0) to stop: ");
        int input;
        scanf("%d", &input);
        if (input == 0){
            b = 0;
        }
        else if (input == 1){
            b = 1;

        }
        
    
    state(s0, s1, b, &S0, &S1, &o0);
    s0 = S0;
    s1 = S1;

    }
    return 0;
        
}
