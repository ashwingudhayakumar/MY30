/*
Question:



Split the String into N Cases of Equal Length
Create a function that accepts str and cases as parameters where the string is split into N distinct cases of equal length as shown:

Examples
splitNCases("Strengthened", 6) ➞ ["St", "re", "ng", "th", "en", "ed"]

splitNCases("Unscrupulous", 2) ➞ ["Unscru", "pulous" ]

splitNCases("Flavorless", 1) ➞ ["Flavorless" ]
Notes
If it's not possible to split the string as described, return ["Error"].


Answer:

*/


#include<iostream>
#include<vector>
#include<string>
using namespace std;
std::vector<std::string> splitNCases(std::string str, int cases) {
	std::vector<std::string> result;
	if(str.size()%cases!=0){
		result.push_back("Error");
		return result;
	}
	else{
		int length=str.size()/cases;
		int j=0;
		int k=0;
		while(k!=str.size()){
			int i=length;
			std::string s="";
			while(i){
				s=s+str[j++];
				i--;
				k++;
			}
			result.push_back(s);
		}
	}
	return result;
	
}
int main(){
    string s;
	cout<<"Enter the string\n";
    cin>>s;
	cout<<"Enter the number for equal spacing\n";
    int n;
    cin>>n;
    std::vector<std::string> result=splitNCases(s,n);
    for(string x:result){
        cout<<x<<" ";
    }
}
