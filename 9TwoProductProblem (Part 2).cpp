/*QUESTION:



Two Product Problem (Part 2)
Create a function that takes an array arr and a number n and returns an array of two integers whose product is that of the number n.

Examples
twoProduct([1, 2, 3, 4, 13, 5], 39) ➞ [3, 13]

twoProduct([11, 2, 7, 3, 5, 0], 55) ➞ [5, 11]

twoProduct([100, 12, 4, 1, 2], 15) ➞ [0, 0]
//Numbers not found in given array.
Notes
No duplicates.
Sort the number.
Try doing this with 0(n) time complexity.
The array can have multiple solutions, so return the first match you find.




ANSWER:
*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
std::vector<int> twoProduct(std::vector<int> arr, int n) {
	vector<int>result;
	sort(arr.begin(),arr.end());
	int i=0;int j=arr.size()-1;
	while(i<j){
		if(arr[i]*arr[j]==n){
			result.push_back(arr[i]);result.push_back(arr[j]);return result;
		}
		else if(arr[i]*arr[j]>n)j--;
		else i++;
	}
	result.push_back(0);result.push_back(0);return result;
	
}
int main(){
    int size;
    cin>>size;
    std::vector<int> arr;
     std::vector<int> result;
    while(size){
        int x;
        cin>>x;
        arr.push_back(x);
       size--;
    }
    int n;
    cin>>n;
    result=twoProduct(arr,n);
    for(auto &x:result){cout<<x<<" ";}
}
