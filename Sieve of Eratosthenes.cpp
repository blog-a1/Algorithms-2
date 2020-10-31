#include<bits/stdc++.h>
using namespace std;

bool isprime[1000000];
int main(){
	
	memset(isprime, 1, sizeof(isprime));
	isprime[0] = isprime[1] = 0;

	for(int i=2; i*i<1000000; i++)
		if(isprime[i])
			for(int j=2*i; j<1000000; j+=i)
				isprime[j] = 0;
}
