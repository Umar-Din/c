
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*
What is a prime number?
A number which has exactly two factors 1 and number itself

example: 3:
    1*3 = 3
    3*1 = 3

Prime Factorization.
Any number can be written as the multiple of the prime numbers

example: 8:
    2   |   8
    -----------
    2   |   4
    -----------
    2   |   2
    -----------
        |   1

so prime factorization becomes
2*2*2 = 8

example: 15
    3   |   15
    -----------
    5   |   5
    -----------
        |   1
    
so prime factorization becomes
3*5 = 15
*/

typedef struct primeFactorsInfo
{
    int *fact;
    int size;
} pFactors;



int isPrime(int number){
    if(number < 2){
        return 0;
    }
    if(number == 2){
        return 1;
    }
    int nmrt = sqrt(number);
    for(int divisor=2; divisor<=nmrt; divisor++){
        if(number%divisor == 0){
            return 0;
        }
    }
    return 1;
}

pFactors primeFactors (int number){
    pFactors f;
    f.fact = malloc(number * sizeof(int));
    int index=0;
    for(int d=2; d*d<=number; d++){
        while(number%d == 0){
            f.fact[index]=d;
            number = number/d;
            index++;
        }
    }
    if(number > 1){
        f.fact[index++] = number;
    }
    f.size = index;
    return f;
}

int main(){

    int enteredNumber;

    printf(
        "Enter the number you want to check is prime\n"
    );

    scanf(
        "%d",&enteredNumber
    );

    int checkPrime = isPrime(enteredNumber);
    if(checkPrime > 0){
        printf(
            "Your entered number %d is prime number\n",
            enteredNumber
        );
    }else{
        printf(
            "Your entered number %d is not primie number\n",
            enteredNumber
        );
    }
    /*prime factors of the given number*/
    printf(
        "Prime factors of the entered number are \n"
    );
    pFactors factors = primeFactors(enteredNumber);
    for(int index=0; index<factors.size; index++){
        printf("%d ",factors.fact[index]);
    }
    return 0;
}