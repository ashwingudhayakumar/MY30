/*



Question:



Sum of Missing Numbers
Create a function that returns the sum of missing numbers.

Examples
sumMissingNumbers([1, 3, 5, 7, 10]) ➞ 29
// 2 + 4 + 6 + 8 + 9

sumMissingNumbers([10, 7, 5, 3, 1]) ➞ 29

sumMissingNumbers([10, 20, 30, 40, 50, 60]) ➞ 1575
Notes
The minimum and maximum value of the given array are the inclusive bounds of the numeric range to consider when searching for missing numbers.




Answer:



*/



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int sumMissingNumbers(std::vector<int> arr) {
	std::sort(arr.begin(),arr.end());
	int sum=0;
	for(int i=arr[0];i<=arr[arr.size()-1];i++){
		int flag=0;
		for(int j=0;j<arr.size();j++){
			if(i==arr[j]){
				flag=1;
				break;
			}
		}
		if(!flag){
			sum+=i;
		}
	}
	return sum;
}
int main(){
    vector<int> arr;
    int size;
	cout<<"Enter the size \n";
    cin>>size;
	cout<<"Enter the elements\n";
    while(size){
        int x;
        cin>>x;
        arr.push_back(x);size--;
    }
     cout<<sumMissingNumbers(arr);
}
