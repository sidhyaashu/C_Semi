
// prime or not
#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;  // Numbers less than or equal to 1 are not prime
    if (num <= 3) return true;   // 2 and 3 are prime numbers

    // Check from 2 to sqrt(num)
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;  // If num is divisible by any number, it is not prime
        }
    }
    return true;  // If no divisors are found, num is prime
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
