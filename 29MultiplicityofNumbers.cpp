/*
Question:

Multiplicity of Numbers
Write a function that returns an array of elements [number, multiplicity]. The multiplicity of a number refers to the number of times it occurs in the array.

To illustrate:

[5, 5, 1, 1, 5, 5, 3]
[[5, 4], [1, 2], [3, 1]]

// Since 5 appears 4 times, 1 appears twice, and 3 appears once.
The final array should only include unique elements, and the elements should be ordered by when they first appeared in the original array.

Examples
multiplicity([1, 1, 1, 2, 2, 3]) ➞ [[1, 3], [2, 2], [3, 1]]

multiplicity([1, 1, 1, 1, 1]) ➞ [[1, 5]]

multiplicity([1, 5, 4, 3, 2]) ➞ [[1, 1], [5, 1], [4, 1], [3, 1], [2, 1]]
Notes
N/A



Answer:
*/



#include<iostream>
#include<vector>
using namespace std;
std::vector<std::vector<int>> multiplicity(std::vector<int> arr) {
	std::vector<std::vector<int>> result;
	std::vector<int> temp;
	temp.push_back(arr[0]);
	temp.push_back(1);
	result.push_back(temp);
	for(int i=1;i<arr.size();i++){
		std::vector<int> temp;
		int j=0;
		int flag=1;
		while(j<result.size()){
			if(result[j][0]==arr[i]){
				flag=0;
				result[j][1]++;
			}
			if(!flag){break;}
			j++;
		}
		if(flag){
			temp.push_back(arr[i]);
			temp.push_back(1);
            result.push_back(temp);
		}
		
	}
	return result;
}
int main(){
    
    std::vector<int> arr;
    int size;
    cin>>size;
    while(size){
        int x;
        cin>>x;
        arr.push_back(x);
        size--;
    }
    std::vector<std::vector<int>> result=multiplicity(arr);
    for(std::vector<int> ar:result){
        for(int y:ar){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}
