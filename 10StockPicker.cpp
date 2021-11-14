/*QUESTION:



Stock Picker
Create a function that takes an array of integers that represent the amount in dollars that a single stock is worth, and return the maximum profit that could have been made by buying stock on day x and selling stock on day y where y>x.

If given the following array:

[44, 30, 24, 32, 35, 30, 40, 38, 15]
... your program should return 16 because at index 2 the stock was worth $24 and at the index 6 the stock was then worth $40, so if you bought the stock at 24 and sold it on 40, you would have made a profit of $16, which is the maximum profit that could have been made with this list of stock prices.

If there is no profit that could have been made with the stock prices, then your program should return -1 (e.g. [[10, 9, 8, 2]] should return -1).

Examples
stockPicker([10, 12, 4, 5, 9]) ➞ 5

stockPicker([14, 20, 4, 12, 5, 11]) ➞ 8

stockPicker([80, 60, 10, 8]) ➞ -1
Notes
N/A



ANSWER:

*/

/*QUESTION:



Stock Picker
Create a function that takes an array of integers that represent the amount in dollars that a single stock is worth, and return the maximum profit that could have been made by buying stock on day x and selling stock on day y where y>x.

If given the following array:

[44, 30, 24, 32, 35, 30, 40, 38, 15]
... your program should return 16 because at index 2 the stock was worth $24 and at the index 6 the stock was then worth $40, so if you bought the stock at 24 and sold it on 40, you would have made a profit of $16, which is the maximum profit that could have been made with this list of stock prices.

If there is no profit that could have been made with the stock prices, then your program should return -1 (e.g. [[10, 9, 8, 2]] should return -1).

Examples
stockPicker([10, 12, 4, 5, 9]) ➞ 5

stockPicker([14, 20, 4, 12, 5, 11]) ➞ 8

stockPicker([80, 60, 10, 8]) ➞ -1
Notes
N/A



ANSWER:

*/

#include<iostream>
#include<vector>
using namespace std;
int stockPicker(std::vector<int> arr) {
	int max=-1;
	for(int i=0;i<arr.size()-1;i++){
		for(int j=i+1;j<arr.size();j++){
			if(arr[j]-arr[i]>max)max=arr[j]-arr[i];
		}
	}
	return max;
}
int main(){
	std::vector<int> arr;
	int size;
	cout<<"Enter the size\n";
	cin>>size;
	cout<<"Enter the elements\n";
	for(int i=0;i<size;i++){
	    int x;
	    cin>>x;
	    arr.push_back(x);
	};
	cout<<stockPicker(arr);
}

