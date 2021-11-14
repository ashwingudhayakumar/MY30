/*
Question:



Programming Polyglot
Create a function that takes a number that represents a person's programming language score, and returns an alphabetised array of programming languages they are proficient in. Arbitrarily assigned points for each language are listed below:

Language	Points
C#	        1
C++	        2
Java	        4
JavaScript	8
PHP	        16
Python	        32
Ruby	        64
Swift	        128
Examples
getLanguages(25) ➞ ["C#", "JavaScript", "PHP"]

getLanguages(100) ➞ ["Java", "Python", "Ruby"]

getLanguages(53) ➞ ["C#", "Java", "PHP", "Python"]
Notes
Easier using bitwise operations.



Answer:



*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
std::vector<std::string> getLanguages(int num) {
	std::vector<std::string>result;
	int A[8]={1,2,4,8,16,32,64,128};
	std::string str[8]={"C#","C++","Java","JavaScript","PHP","Python","Ruby","Swift"};
	while(num){
		for(int i=7;i>=0;i--){
		if(num>=A[i]){
			result.push_back(str[i]);
			num%=A[i];
			break;
		}
		}
	}
	std::reverse(result.begin(),result.end());
	return result;
	
}
int main(){
    int n;
	cout<<"Enter the number\n";
    cin>>n;
     std::vector<std::string> result= getLanguages(n);
     for(string x:result){cout<<x<<" ";}

}
