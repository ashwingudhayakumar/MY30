/*
Question:


Next Prime
Given an integer, create a function that returns the next prime. If the number is prime, return the number itself.

Examples
nextPrime(12) ➞ 13

nextPrime(24) ➞ 29

nextPrime(11) ➞ 11
// 11 is a prime, so we return the number itself.
Notes
Note: 1 is not a prime.



Answer:


*/

#include<iostream>
#include <math.h>
using namespace std;
bool isPrime(int n){
	int count=0;
	for(int i=2;i<=n;i++){
		if(n%i==0)count++;
	}
	if(count>1)return false;
	else return true;
}
int nextPrime(int num) {
	if(num==1)return 2;
	while(1){
		if(isPrime(num))return num;
		else num++;
	}
}
int main(){
    int n;
    cin>>n;
    cout<<nextPrime(n);
}
