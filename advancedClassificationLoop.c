#include <stdio.h>
#include "NumClass.h"
#include <math.h>

//returns if number is Palindrome
int isPalindrome(int k){
    if(k==0){
        return 1;
    }

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

// returns if number is Armstrong
int isArmstrong(int k){
    if(k==0){
        return 0;
    }
    
    int tmp = k;
    int counter = 0;
    int sum = 0;
   

    while(tmp > 0){ // number of digits
        counter++;
        tmp /= 10;
    }

    tmp = k;
    
    while(tmp > 0){ // digit ^ number of digits
        sum += pow(tmp % 10  , counter);
        tmp /= 10;
    }
    
    return ( sum == k );
}