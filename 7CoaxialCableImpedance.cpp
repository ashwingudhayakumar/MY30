/*QUESTION:



Coaxial Cable Impedance
Create a function that takes the values Dd (Dielectric Outer Diameter), Dc (Inner Conductor Diameter) and er (Dielectric Constant) and calculates the Coaxial Cable Impedance.

Examples
impedanceCalculator(20.7, 2, 4) ➞ 70

impedanceCalculator(5.3, 1.2, 2.2) ➞ 60

impedanceCalculator(4.48, 1.33, 2.2) ➞ 50
Notes
If you get stuck on a challenge, find help in the Resources tab.
Round your result to one decimal place.



ANSWER:

*/

#include<cmath>
#include<iostream>
using namespace std;
int impedanceCalculator(float Dd, float Dc, float er) {
	return (ceil(138*log10(Dd/Dc)))/sqrt(er);
}
int main(){
    float Dd,
    Dc,er;
    cin>>Dd>>Dc>>er;
    cout<<impedanceCalculator(Dd,Dc,er);
}
