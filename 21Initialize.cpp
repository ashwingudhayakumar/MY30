/*
Question:


Initialize
Create a function that takes in an array of full names and returns the initials.

Examples
initialize(["Stephen Hawking"]) ➞ ["S. H."]

initialize(["Harry Potter", "Ron Weasley"]) ➞ ["H. P.", "R. W."]

initialize(["Sherlock Holmes", "John Watson", "Irene Adler"]) ➞ ["S. H.", "J. W.", "I. A."]
Notes
Each initial is followed by a dot.
Names will always be made of two words, separated by a space.






Answer:





Answer:
*/



using namespace std;
vector<string> initialize(vector<string> names) {
	vector<string> result;
	for(int i=0;i<names.size();i++){
		string s="";
		s+=names[i][0];
		s+=". ";
		int j=1;
		while(names[i][j]!=' '){
			j++;
		}
		s+=names[i][++j];
		s+='.';
		result.push_back(s);
	}
	return result;
}
