#include <stdio.h>
#include "NumClass.h"
#include <math.h>


int isArm(int k , int sum , int counter , int times){ // digit ^ number of digits
    if(times == 0){
        return sum;
    }

    sum = sum + pow(k%10 , counter);
    return isArm(k/10 , sum , counter , times-1);
}


//returns if number is Armstrong
int isArmstrong(int k){
    if(k==0){
        return 0;
    }
    int sum = 0;
    int tmp = k;
    int counter = 0;

    while(tmp > 0){ // number of digits
        counter++;
        tmp /= 10;
    }

    return (isArm(k , sum , counter , counter) == k) ? 1 : 0;
}

// writes the number reversed
int reversed(int k, int sum){
    if(k == 0){
        return sum;
    }
    sum = (sum*10) + (k%10);
    return reversed(k/10 , sum);
}
//returns if number is Palindrome
int isPalindrome(int k){
    if(k < 0){
        k *= (-1);
    }
    int tmp = k;
    int rev = reversed(tmp , 0);
    return (rev == k) ? 1 : 0;
}
