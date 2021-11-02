/*Question:


Flipping Bits
You will be given a list of 32-bit unsigned integers. Flip all the bits 1 -> 0 and 0 -> 1 and return the result as an unsigned integer.

Worked Example
n = 4
4 is 0100 in binary. We are working in 32 bits so:
00000000000000000000000000000100 = 4
11111111111111111111111111111011 = 4294967291
return 4294967291
Examples
flippingBits(2147483647) ➞ 2147483648

flippingBits(1) ➞ 4294967294

flippingBits(4) ➞ 4294967291
Notes
N/A



Answer:
*/


long flippingBits(long n){
  for(int i=0;i<32;i++){
		n=n^(1u<<i);
	}
	return n;
}
