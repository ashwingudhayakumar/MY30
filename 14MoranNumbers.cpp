/*Question:




Moran Numbers
A Harshad number is a number which is divisible by the sum of its digits. For example, 132 is divisible by 6 (1+3+2).

A subset of the Harshad numbers are the Moran numbers. Moran numbers yield a prime when divided by the sum of their digits. For example, 133 divided by 7 (1+3+3) yields 19, a prime.

Create a function that takes a number and returns "M" if the number is a Moran number, "H" if it is a (non-Moran) Harshad number, or "Neither".

Examples
moran(132) ➞ "H"

moran(133) ➞ "M"

moran(134) ➞ "Neither"
Notes
N/A




Answer:

*/
#include<iostream>
#include<string>
using namespace std;
bool isHarshad(int n,int sum){
	if(n%sum==0)return true;
	else return false;
}
bool isPrime(int num){
	int count =0;
	for(int i=2;i<=num/2;i++){
		if(num%i==0)count++;
	}
	if(count >1)return false;
	else return true;
}
bool isMoran(int n,int sum){
	if(n%sum==0 && isPrime(n/sum)){return true;}
	else return false;
}
std::string moran(int n) {
	int k=n;
	int sum=0;
	while(k){
		sum+=k%10;
		k/=10;
	}
	
	if(isMoran(n,sum)){return "M";}
	else if(isHarshad(n,sum)){return "H";}
	else return "Neither";
	
}
int main(){
    int n;
    cout<<"enter num\n";
    cin>>n;
    cout<<moran(n);
}
