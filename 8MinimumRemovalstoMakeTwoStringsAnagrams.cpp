/*QUESTION:



Minimum Removals to Make Two Strings Anagrams
Create a function that returns the smallest number of letter removals so that two strings are anagrams of each other.

Examples
minRemovals("abcde", "cab") ➞ 2
// Remove "d", "e" to make "abc" and "cab".

minRemovals("deafk", "kfeap") ➞ 2
// Remove "d" and "p" from the first and second word, respectively.

minRemovals("acb", "ghi") ➞ 6
// Remove all letters from both words to get "" and "".
Notes
An anagram is any string that can be formed by shuffling the characters of the original string. For example: baedc is an anagram of abcde.
An empty string can be considered an anagram of itself.
Characters won't be used more than once per string.



ANSWER:

*/

#include<iostream>
#include<string>
using namespace std;
int minRemovals(std::string str1, std::string str2) {
	int arr[26]={0};
	for(int i=0;i<str1.size();i++){
		arr[str1[i]-'a']++;
	}
	for(int i=0;i<str2.size();i++){
		arr[str2[i]-'a']--;
	}int count=0;
	for(int i=0;i<26;i++){
		if(arr[i]!=0)count++;
	}
	return count;
}
int main(){
    string str1;
    string str2;
	cout<<"Enter the 1st string\n";
    cin>>str1;
	cout<<"Enter the 2nd string\n";
    cin>>str2;
    cout<<minRemovals(str1,str2);
}
