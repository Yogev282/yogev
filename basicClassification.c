#include <stdio.h>
#include "NumClass.h"

// returns if number is Prime
int isPrime(int k){
    if(k==0){
        return 0;
    }
    if(k == 2 || k == 1){
        return 1;
    }
    
    for(int i = 2 ; i < k ; i++){
       if(k%i == 0){
        return 0;
       }
    }
    return 1;
}

// returns the factorial of a number
int factorial(int k){
    if (k==0){
        return 1;
    }
    int sum = 1;
    for(int i = k ; i>1 ; i--){
        sum *= i;
    }
    return sum;
}

// returns if number is Strong
int isStrong(int k){
    if(k == 0){
        return 0;
    }
    int dig = 0;
    int sum = 0;
    for( int tmp = k ; tmp > 0 ; tmp /= 10 ){
        dig = tmp % 10;
        sum += factorial(dig);
    }
    return (sum == k);
}
