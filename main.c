#include "NumClass.h"
#include <stdio.h>


// prints primes
void primeFinder(int start, int end){
    printf("The Prime numbers are:");
    int i = start;
    while ( i <= end){
        if(isPrime(i) == 1){
            printf(" %d" , i);
        }
        i++;
    }
    printf("\n");   
}

// prints armostrongs
void armstrongFinder(int start, int end){
    printf("The Armstrong numbers are:");
    int i = start;
    while ( i <= end){
        if(isArmstrong(i) == 1){
            printf(" %d" , i);
        }
        i++;
    }
    printf("\n");  
}

// prints strongs
void strongFinder(int start, int end){
    printf("The Strong numbers are:");
    int i = start;
    while ( i <= end){
        if(isStrong(i) == 1){
            printf(" %d" , i);
        }
        i++;
    }
}

// prints palindromes
void palindromeFinder(int start, int end){
    printf("The Palindromes are:");
    int i = start;
    while ( i <= end){
        if(isPalindrome(i) == 1){
            printf(" %d" , i);
        }
        i++;
    }
    printf("\n");
}

// prints special numbers
void Finder(int start, int end){
    armstrongFinder(start, end);
    palindromeFinder(start, end);
    primeFinder(start, end);
    strongFinder(start, end);
}


int main(){
    int start = 0;
    int end = 0;
    scanf("%d" , &start );
    scanf("%d" , &end );
    Finder(start, end);
    return 0;
}


