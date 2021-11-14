/*
22,How Many "Prime Numbers" Are There?
Create a function that finds how many prime numbers there are, up to the given integer.
Examples
primeNumbers(10) ➞ 4
// 2, 3, 5 and 7
primeNumbers(20) ➞ 8
// 2, 3, 5, 7, 11, 13, 17 and 19
primeNumbers(30) ➞ 10
// 2, 3, 5, 7, 11, 13, 17, 19, 23 and 29
Notes
N/A

*/#include<iostream>
using namespace std;
bool isPrime(int n){
	int count=0;
	for(int i=2;i<=n/2;i++){
		if(n%i==0)count++;
	}
	if(count>0)return false;
	else return true;
}
int primeNumbers(int num) {
	int count=0;
	for(int i=2;i<=num;i++){
		if(isPrime(i)){
			count++;
		}
	}
	return count;
}
int main(){
    int n;
    cout<<"Enter the number\n";
    cin>>n;
     cout<<  primeNumbers(n);
}
