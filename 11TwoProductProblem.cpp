/*QUESTION:





Two Product Problem
Create a function that takes an array arr and a number n and returns an array of two integers from arr whose product equals n.

Examples
twoProduct([1, 2, -1, 4, 5], 20) ➞ [4, 5]

twoProduct([1, 2, 3, 4, 5], 10) ➞ [2, 5]

twoProduct([100, 12, 4, 1, 2], 15) ➞ []
Note:
Try doing this with 0(N) time complexity.
No duplicates.
In the array, there can be multiple solutions so return the solution with the lowest sum of indexes of product pairs (i.e. N = 10, solutions = [[2, 5], [10, 1]], indexes = [[600, 3000], [800, 900]], return [10, 1]).
The array can have multiple solutions, so return the first full match that you have found.






ANSWER:*/

/*QUESTION:





Two Product Problem
Create a function that takes an array arr and a number n and returns an array of two integers from arr whose product equals n.

Examples
twoProduct([1, 2, -1, 4, 5], 20) ➞ [4, 5]

twoProduct([1, 2, 3, 4, 5], 10) ➞ [2, 5]

twoProduct([100, 12, 4, 1, 2], 15) ➞ []
Note:
Try doing this with 0(N) time complexity.
No duplicates.
In the array, there can be multiple solutions so return the solution with the lowest sum of indexes of product pairs (i.e. N = 10, solutions = [[2, 5], [10, 1]], indexes = [[600, 3000], [800, 900]], return [10, 1]).
The array can have multiple solutions, so return the first full match that you have found.






ANSWER:*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> twoProduct(std::vector<int> arr, int n) {
	vector<int>result={};
	sort(arr.begin(),arr.end());
    
	int i=0;int j=arr.size()-1;
	while(i<j){
		if(arr[i]*arr[j]==n){
			result.push_back(arr[i]);
            result.push_back(arr[j]);
            return result;
		}
		else if(arr[i]*arr[j]>n)j--;
		else i++;
	}
	return result;

}
int main(){
	std::vector<int> arr;
	int size;
	 cout<<"enter size \n";
	cin>>size;
   
	int n;
	cout<<"enter arr elements ";
	for(int i=0;i<size;i++){
	    int x;
	    cin>>x;
	    arr.push_back(x);
	};
    cout<<"enter n "<<"\n";
    cin>>n;
	std::vector<int> result=twoProduct(arr,n);
    if(result.size()==0)cout<<"[]";
	for(int i=0;i<result.size();i++){cout<<result[i]<<" ";}
}

