#include <stdio.h>
#include "NumClass.h"

int findGcd(int a, int b){
    int gcd = 0;
    int l = 0;
    if(a<b){
        l = a;
    }
    else {
        l = b;
    }
    for(int i = 1; i < l ; i++){
        if( (a % i == 0) && (b % i == 0) ){
            gcd = i;
        }
    }
    return gcd;
}


int isPrime(int k){
    if(k==0 || k==1){
        return 0;
    }
    if(k == 2){
        return 1;
    }
    
    for(int i = 2 ; i <= k ; i++){
        if(findGcd(k,i) != 1){
            return 0;
        }
    }
    return 1;
}

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
