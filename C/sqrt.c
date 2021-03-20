/*
Author:        jorgealejandro@superdell-popos
Compiler:      gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
For compile:   gcc sqrt.c  -o  sqrt
Date:          Fri 19 Mar 2021 06:20:52 PM CST
Libraries:     stdio
Abstract:     
Inputs:       
Outputs:      
*/            


///////////////////////////////////////////////////////////////////////
////////////////////////////// Libraries //////////////////////////////

#include <stdio.h>


///////////////////////////////////////////////////////////////////////
/////////////////////////// Declarations   //////////////////////////

int n;
int r = 1;

///////////////////////////////////////////////////////////////////////
///////////////////////////      Main        //////////////////////////

void main(){
    printf("Enter a number: ");
    scanf("%d", &n);
    while (r*r <= n)
    {
        r = r+1;
    }
    r = r-1;
    printf("The aprox sqrt integer is: %d \n",r);
}