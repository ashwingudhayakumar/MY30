/*
Question:
Construct and Deconstruct
Given a string, create a function which outputs an array, building and deconstructing the string letter by letter. See the examples below for some helpful guidance.

Examples
constructDeconstruct("Hello") ➞ [
  "H",
  "He",
  "Hel",
  "Hell",
  "Hello",
  "Hell",
  "Hel",
  "He",
  "H"
]

constructDeconstruct("edabit") ➞ [
  "e",
  "ed",
  "eda",
  "edab",
  "edabi",
  "edabit",
  "edabi",
  "edab",
  "eda",
  "ed",
  "e"
]

constructDeconstruct("the sun") ➞ [
  "t",
  "th",
  "the",
  "the ",
  "the s",
  "the su",
  "the sun",
  "the su",
  "the s",
  "the ",
  "the",
  "th",
  "t"
]
Notes
Include spaces (see example #3).

Answer:
*/
#include<iostream>
#include<vector>
using namespace std;
std::vector<std::string> constructDeconstruct(std::string str) {
	std::vector<std::string> result;
	for(int i=0;i<str.size();i++){
		std::string temp="";
		for(int j=0;j<=i;j++){
		temp+=str[j];
		
	}
		result.push_back(temp);	
	}
	
	for(int i=str.size()-2;i>=0;i--){
		std::string temp="";
		for(int j=0;j<=i;j++){
		temp+=str[j];
		
	}
		result.push_back(temp);	
	}
	return result;
	
}
int main(){
    string s;
    getline(cin,s);
   std::vector<std::string> result=constructDeconstruct(s);
   for(auto &x:result){
       cout<<x<<"\n";
   } 
}
