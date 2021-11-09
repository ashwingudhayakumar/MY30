/*QUESTION:
Tweaking Letters
Create a function that tweaks letters by one forward (+1) or backwards (-1) according to an array.

Examples
tweakLetters("apple", {0, 1, -1, 0, -1}) ➞ "aqold"
// "p" + 1 => "q"; "p" - 1 => "o"; "e" - 1 => "d"

tweakLetters("many", {0, 0, 0, -1}) ➞ "manx"

tweakLetters("rhino", {1, 1, 1, 1, 1}) ➞ "sijop"
Notes
Don't worry about capital letters.


ANSWER:*/
std::string tweakLetters(std::string s, std::vector<int> arr) {
	for(int i=0;i<arr.size();i++){
		if(s[i]=='a'&&arr[i]==-1)s[i]='z';
		else if(s[i]=='z'&&arr[i]==1)s[i]='a';
		else s[i]+=arr[i];
	}
	return s;
}