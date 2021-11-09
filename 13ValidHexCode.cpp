/*QUESTION :





Valid Hex Code
Create a function that determines whether a string is a valid hex code.

A hex code must begin with a pound key # and is exactly 6 characters in length. Each character must be a digit from 0-9 or an alphabetic character from A-F. All alphabetic characters may be uppercase or lowercase.

Examples
isValidHexCode("#CD5C5C") ➞ true

isValidHexCode("#EAECEE") ➞ true

isValidHexCode("#eaecee") ➞ true

isValidHexCode("#CD5C58C") ➞ false
// Length exceeds 6

isValidHexCode("#CD5C5Z") ➞ false
// Not all alphabetic characters in A-F

isValidHexCode("#CD5C&C") ➞ false
// Contains unacceptable character

isValidHexCode("CD5C5C") ➞ false
// Missing #
Notes
N/A



ANSWER:





*/
using namespace std;
bool isValidHexCode(std::string str) {
	if(str.size()==7){
		if(str[0]=='#'){
			for(int i=1;i<str.size();i++){
				if(!((str[i]>='1'&&str[i]<='9')||(str[i]>='a'&&str[i]<='f')||(str[i]>='A'&&str[i]<='F')))
					return false;
			}
			return true;
		}
		else{
			return false;
		}
	}
	else{
		return false;
	}
}
