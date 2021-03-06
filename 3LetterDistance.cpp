/*QUESTION :
Letter Distance
Given two words, the letter distance is calculated by taking the absolute value of the difference in character codes and summing up the difference.

If one word is longer than another, add the difference in lengths towards the score.

To illustrate:

letterDistance("house", "fly") = dist("h", "f") + dist("o", "l") + dist("u", "y") + dist(house.length, fly.length)

= |104 - 102| + |111 - 108| + |117 - 121| + |5 - 3|
= 2 + 3 + 4 + 2
= 11
Examples
letterDistance("sharp", "sharq") ➞ 1

letterDistance("abcde", "Abcde") ➞ 32

letterDistance("abcde", "bcdef") ➞ 5
Notes
Always start comparing the two strings from their first letter.
Excess letters are not counted towards distance.
Capital letters are included.


ANSWER:*/
#include<iostream>
#include<string>
using namespace std;
int letterDistance(std::string str1, std::string str2) {
	int min=str1.size()<str2.size()?str1.size():str2.size();
	
	int sum=0;
	for(int i=0;i<min;i++){
		
		if(str1[i]>=str2[i]){sum+=str1[i]-str2[i];}
		else{ sum+=str2[i]-str1[i];}
	}
	if(str1.size()>=str2.size())sum+=str1.size()-str2.size();
	else sum+=str2.size()-str1.size();
	return sum;
}
int main(){
    string str1;
    string str2;
	cout<<"Enter the first word\n";
    cin>>str1;
	cout<<"Enter the second word\n";
    cin>>str2;
    cout<<letterDistance(str1,str2);
}
