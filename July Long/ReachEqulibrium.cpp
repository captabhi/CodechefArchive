#include<iostream>
#define m 1000000007
#define val 1000000007
using namespace std;
 
// To find GCD of a and b
int gcd(int a, int b);
 
// To compute x raised to power y under modulo m
int power(int x, unsigned int y);
 
// Function to find modular inverse of a under modulo m
// Assumption: m is prime
long long int modInverse(int a)
{
    int g = gcd(a, m);
    if (g != 1)
        cout << "Inverse doesn't exist";
    else
    {
        // If a and m are relatively prime, then modulo inverse
        // is a^(m-2) mode m
        return power(a, m-2);
    }
}
 
// To compute x^y under modulo m
int power(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    int p = power(x, y/2) % m;
    p = (p * p) % m;
 
    return (y%2 == 0)? p : (x * p) % m;
}
 
// Function to return gcd of a and b
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
 
int main()
{
	int a=11;
	cout<<modInverse(16)*a;
}
