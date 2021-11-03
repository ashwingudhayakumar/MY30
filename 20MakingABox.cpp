/*
Question:



Create a function that creates a box based on dimension n.

Examples
makeBox(5) ➞ [
  "#####",
  "#   #",
  "#   #",
  "#   #",
  "#####"
]

makeBox(3) ➞ [
  "###",
  "# #",
  "###"
]

makeBox(2) ➞ [
  "##",
  "##"
]

makeBox(1) ➞ [
  "#"
]
Notes
N/A










Answer:
*/



std::vector<std::string> makeBox(int n) {
	std::vector<std::string> result;
	for(int i=0;i<n;i++){
		std::string s="";
		for(int j=0;j<n;j++){
			if(i==0||i==n-1||j==0||j==n-1){
				s=s+"#";
			}
			else{
				s=s+" ";
			}
		}
		result.push_back(s);
	}
	return result;
}
