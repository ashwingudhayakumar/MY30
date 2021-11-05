/*
Question:

Find the Odd Integer
Create a function that takes an array and finds the integer which appears an odd number of times.

Examples
findOdd([1, 1, 2, -2, 5, 2, 4, 4, -1, -2, 5]) ➞ -1

findOdd([20, 1, 1, 2, 2, 3, 3, 5, 5, 4, 20, 4, 5]) ➞ 5

findOdd([10]) ➞ 10
Notes
There will always only be one integer that appears an odd number of times



Answer:
*/



using namespace std;

int findOdd(vector<int> arr) {
	vector<int> result;
	for(int i=0;i<arr.size();i++){
		if(result.size()!=0){
			for(int j=0;i<result.size();j++){
			if(result[j]==arr[i]){
				vector<int>::iterator itr= arr.begin()+j;
				arr.erase(itr);
			}
			else{
				result.push_back(arr[i]);
			}
		}
			
		
	}}return result[0];
	
}
