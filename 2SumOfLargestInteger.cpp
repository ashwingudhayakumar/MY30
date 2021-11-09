/*QUESTION:
Sum of Largest Integer
Create a function that takes a number n as an argument and returns the largest integer that is less than or equal to n and has the highest digit sum (see examples below for a better understanding).

Examples
largestDigitSum(100) ➞ 99
// Digit Sum for 99 = 9 + 9 = 18
// All numbers from 0 to 98 and 100 itself have digit sum lesser than 18.

largestDigitSum(48) ➞ 48
// Digit sum for 48 = 4 + 8 =12
// Digit sum for 39 = 3 + 9 =12
// Return 48 because 48 > 39

largestDigitSum(10) ➞ 9
Notes
N/A

ANSWER:*/
int largestDigitSum(int n) {
	int largestSum=-1;
	int correspondingNum=-1;
	for(int i=0;i<=n;i++){
		int j=i;
		int relativeSum=0;
		while(j>0){
			relativeSum+=j%10;
			j/=10;
		}
		if(relativeSum>largestSum){
			largestSum=relativeSum;
			correspondingNum=i;
		}
		else if(relativeSum==largestSum){
			correspondingNum=i;
		}
	}
	return correspondingNum;
}
