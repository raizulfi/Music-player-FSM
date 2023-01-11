#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void state(int s0, int s1, int b, int* S0, int* S1,int* o0){
    *S0 = (!s0) & b ;
    *S1 = s0 & (!s1) & b;
    *o0 = s0 & (!s1) & b;
}