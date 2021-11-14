

/*QUESTION:



Check Magic Square
A "magic square" is a square divided into smaller squares each containing a number, such that the numbers in each vertical, horizontal, and diagonal row add up to the same value.

3x3 Magic Square

Write a function that takes a 2D array, checks if it's a magic square and returns either true or false depending on the result.

Examples
isMagicSquare([
  [8, 1, 6],
  [3, 5, 7],
  [4, 9, 2]
]) ➞ true

isMagicSquare([
  [16,  3,  2, 13],
  [ 5, 10, 11,  8],
  [ 9,  6,  7, 12],
  [ 4, 15, 14,  1]
]) ➞ true

isMagicSquare([
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9]
]) ➞ false
Notes
Check diagonals as well.
Test input will always be square.
Check the Resources tab for additional info on magic squares.



ANSWER:



*/


#include<iostream>
#include<vector>
using namespace std;
bool isMagicSquare(std::vector<std::vector<int>> square) {
  vector<int> result;
	for(vector<int>x:square){
		int sum=0;
		for(int ele:x){
			sum+=ele;
		}
		result.push_back(sum);
	}
	int x=0;
	for(int i=1;i<result.size();i++){
		if(result[x]!=result[i])return false;
	}
	return true;
	
}
int main(){
    std::vector<std::vector<int>> square;
    int row;
    cout<<"Enter row which is same as column\n";
    cin>>row;
int val;
cout<<"Enter the elements\n"
for(int i = 0; i < row; i++){
    vector<int> temp;
    for(int j = 0; j < row; j++){
        cin >> val;
        temp.push_back(val);
    }
    square.push_back(temp);
    temp.clear();
}
    cout<<isMagicSquare(square);
    

}



