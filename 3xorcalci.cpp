#include <bits/stdc++.h>

using namespace std;

int XOR(int x, int y) 
{ 
    int res = 0; // Initialize result 
      
    // Assuming 32-bit Integer  
    for (int i = 31; i >= 0; i--)                      
    { 
       // Find current bits in x and y 
       bool b1 = x & (1 << i); 
       bool b2 = y & (1 << i); 
         
        // If both are 1 then 0 else xor is same as OR 
        bool xoredBit = (b1 & b2) ? 0 : (b1 | b2);           
  
        // Update result 
        res <<= 1; 
        res |= xoredBit; 
    } 
    return res; 
} 

int main(){
	int a[6] = {1, 2, 3, 4, 5, 6};
	for(int i = 0 ; i < 6 ;i++)
		cout<<XOR(XOR(a[i], a[(i+1)%6]), a[(i+2)%6])<<'\n';
		
}
