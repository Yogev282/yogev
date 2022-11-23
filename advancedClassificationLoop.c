#include <stdio.h>
#include "NumClass.h"
#include <math.h>

int isPalindrome(int k){

    if(k < 0){ // negative number
        k *= (-1) ;
    }

    int rev = 0;
    int tmp = k;

    for( tmp ; tmp > 0 ; tmp /= 10){
        rev = (rev * 10) + ( tmp % 10 );
    }
    return (rev ==k);
}


int isArmstrong(int k){
    
    int tmp = k;
    int counter = 0;
    int sum = 0;
   

    while(tmp > 0){ // number of digits
        counter++;
        tmp /= 10;
    }

    tmp = k;
    
    while(tmp > 0){
        sum += pow(tmp % 10  , counter);
        tmp /= 10;
    }
    
    return ( sum == k );
}