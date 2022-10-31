#include <iostream>
#include<vector>
using namespace std;

bool checkPrime(int num) {
    if(num == 0 || num == 1) {
        return false;
    }

    if (num == 2) {
        return true;
    }

    for(int i = 2; i<=(num/2); i++) {
        if(num%i == 0) {
            return false;
        }
    }
    return true;
}

int numberOfPrimes(int num) {
    vector<bool> primes(num, true);
    if(num == 1 || num == 0 || num == 2) {
        return 0;
    }

    int ans = 0;
    int n = 2;
    primes[0] = false;
    primes[1] = false;

    for(int i=2; i< num; i++) {
        if(primes[i]) {
            ans++;
            for(int j=2*i; j<num; j = j+i) {
                primes[j] = false;
            }
        }
    }
    return ans;
}

int main() {
    int n;
    cout<<"enter a number : ";
    cin >>n;

    cout<<"number of primes : "<<numberOfPrimes(n);

    return 0;
}