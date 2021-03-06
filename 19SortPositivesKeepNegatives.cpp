/*
Question:



Sort Positives, Keep Negatives
Write a function that sorts the positive numbers in ascending order, and keeps the negative numbers untouched.

Examples
posNegSort([6, 3, -2, 5, -8, 2, -2]) ➞ [2, 3, -2, 5, -8, 6, -2]

posNegSort([6, 5, 4, -1, 3, 2, -1, 1]) ➞ [1, 2, 3, -1, 4, 5, -1, 6]

posNegSort([-5, -5, -5, -5, 7, -5]) ➞ [-5, -5, -5, -5, 7, -5]

posNegSort([]) ➞ []
Notes
If given an empty array, you should return an empty array.
Integers will always be either positive or negative (0 isn't included in the tests).



Answer:


*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
std::vector<int> posNegSort(std::vector<int> arr) {
	std::vector<int> sorted;
	for(int i=0;i<arr.size();i++){
		if(arr[i]>0)sorted.push_back(arr[i]);
	}
	std::sort(sorted.begin(),sorted.end());
	int j=0;
	for(int i=0;i<arr.size();i++){
		if(arr[i]>0)arr[i]=sorted[j++];
	}
	return arr;
}
int main(){
    std::vector<int> arr;
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    cout<<"Enter the elements in an array\n";
    while(n!=0){
        int temp;
        cin>>temp;
        arr.push_back(temp);
        n--;
    }
    arr=posNegSort(arr);
    for(int x:arr){
        cout<<x<<" ";
    }

}
