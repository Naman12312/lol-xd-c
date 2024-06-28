#include <stdio.h>
#include <math.h>
	
int isPrime(int x){
    if(x < 2){ 
        return 0;  // Numbers less than 2 are not prime
    }
    if(x == 2){ 
        return 1;  // 2 is the only even prime number
    }
    if(x % 2 == 0){
        return 0;  // Exclude even numbers greater than 2
    }
    for (int i = 3; i <= (int)sqrt(x); i += 2) {
        if(x % i == 0){
            return 0;  // The number is not prime
        }
    }
    return 1;  // The number is prime
}


#include <stdio.h>

// Assuming isPrime function is defined elsewhere correctly.

int SPF(int x) {
    // In case, the number is even, return 2 immediately cuz SPF of any even number is 2.
    while (x % 2 == 0) {
        return 2;
    }

    // Check for odd numbers starting from 3
    for (int i = 3; i <= x; i += 2) {
        if (x % i == 0) {
 if (isPrime(i)) {
                return i;
            }
        }
    }

    // If the number is prime and greater than 2
    if (isPrime(x)) {
        return x;
    }

    return 0;  // Should not reach here for valid input
}




int main(){
	int spfOf10 = SPF(437);
	printf("%d", spfOf10);

	return 0;
}
