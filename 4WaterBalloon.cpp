/*QUESTION:
Water Balloon
Once a water balloon pops, is soaks the area around it. The ground gets drier the further away you travel from the balloon.

The effect of a water balloon popping can be modeled using an array. Create a function that takes an array which takes the pre-pop state and returns the state after the balloon is popped. The pre-pop state will contain at most a single balloon, whose size is represented by the only non-zero element.

Examples
pop([0, 0, 0, 0, 4, 0, 0, 0, 0]) ➞ [0, 1, 2, 3, 4, 3, 2, 1, 0]

pop([0, 0, 0, 3, 0, 0, 0]) ➞ [0, 1, 2, 3, 2, 1, 0]

pop([0, 0, 2, 0, 0]) ➞ [0, 1, 2, 1, 0]

pop([0]) ➞ [0]
Notes
Length of input array is always odd.
The input array will always be the exact length it takes for there to be exactly one border zero.
If the input array consists only of zeroes, return the same array.




ANSWER:*/
std::vector<int> pop(std::vector<int> state) {
	std::vector<int>effect;
	int note;
	effect.push_back(0);
	if(state.size()==1)return effect;
	for(int i=0;i<state.size();i++){
		if(state[i]>0)note=i;
	}
	for(int i=1;i<=note;i++)effect.push_back(i);
	for(int i=note+1;i<state.size();i++)effect.push_back(--note);
	return effect;
}
