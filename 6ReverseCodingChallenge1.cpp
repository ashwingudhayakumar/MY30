/*QUESTION:


Reverse Coding Challenge #1
This is a reverse coding challenge. Normally you're given explicit directions with how to create a function. Here, you must generate your own function to satisfy the relationship between the inputs and outputs.

Your task is to create a function that, when fed the inputs below, produce the sample outputs shown.

Examples
"A4B5C2" ➞ "AAAABBBBBCC"

"C2F1E5" ➞ "CCFEEEEE"

"T4S2V2" ➞ "TTTTSSVV"

"A1B2C3D4" ➞ "ABBCCCDDDD"
Notes
If you get stuck, check the Comments for help.




ANSWER:

*/

#include<iostream>
#include<string>
using namespace std;
std::string mysteryFunc(std::string s) {
	std::string str="";
	for(int i=0;i<s.size();i++){
		if(s[i]>='1'&&s[i]<='9'){
			int n=s[i]-'0';
			while(n){
				str+=s[i-1];
				n--;
			}
		}
	}
	return str;
}
int main(){
    string s;
	cout<<"Enter the string\n";
    cin>>s;
    s=mysteryFunc(s);
    cout<<s;
}
