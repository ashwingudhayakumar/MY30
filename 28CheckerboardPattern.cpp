/*
Question:

Checkerboard Pattern
Create a function that returns true if the two-dimensional n x n input array has a checker-board pattern.

Examples
isCheckerboard([
  [1, 1],
  [0, 1]
]) ➞ false

isCheckerboard([
  [0, 1],
  [1, 0]
]) ➞ true

isCheckerboard([
  [1, 0, 1, 0, 1],
  [0, 1, 0, 1, 0],
  [1, 0, 1, 0, 1],
  [0, 1, 0, 1, 0],
  [1, 0, 1, 1, 1]
]) ➞ false

isCheckerboard([
  [1, 0, 1, 0, 1],
  [0, 1, 0, 1, 0],
  [1, 0, 1, 0, 1],
  [0, 1, 0, 1, 0],
  [1, 0, 1, 0, 1]
]) ➞ true
Notes
An element in the array adheres to the checker-board pattern if the elements directly to the left, right, top and below are of a different type, and the elements on the diagonal direction are of the same type.
The element in the upper-left corner can be either 0 or 1.



Answer:
*/


#include<vector>
#include<iostream>
using namespace std;
bool isCheckerboard(std::vector<std::vector<int>> arr) {
	for(int i=0;i<arr.size()-1;i++){
		for(int j=0,k=1;j<arr[i].size()-1;j++,k++){
			if(arr[i][j]!=arr[i+1][k])return false;
		}
		if(arr[i][1]!=arr[i+1][0])return false;
	}
	return true;
}
int main(){
    std::vector<std::vector<int>> arr;
    int size;
    cout<<"Enter the row that is same as column also\n";
    cin>>size;
    cout<<"Enter the elements\n";
    for(int i=0;i<size;i++){
        vector <int >temp;
        for(int j=0;j<size;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        arr.push_back(temp);
    }
    cout<<isCheckerboard(arr);
}
