#include "mylib.h"
#include <math.h>

int reverseDigits(int n) {
    int r = 0;
    while (n) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r;
}

int isArmstrong(int num) {
    int temp = num, sum = 0, digits = 0;
    while (temp) {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp) {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }
    return sum == num;
}

int isAdams(int num) {
    int sq = num * num;
    int rev = reverseDigits(num);
    int sq_rev = rev * rev;
    return reverseDigits(sq_rev) == sq;
}

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i <= num / 2; i++)
        if (num % i == 0)
            return 0;
    return 1;
}

int isPrimePalindrome(int num) {
    return isPrime(num) && num == reverseDigits(num);
}   