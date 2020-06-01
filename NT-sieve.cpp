#include <bits/stdc++.h>
using namespace std;

vector<bool> flag(1000000, true);
vector<int> primes;

void sieve() {
	flag[0] = false;
	flag[1] = false;

	for(int i = 2; i*i < 1000000; i++)
		if(flag[i])
			for(int j = 2; i*j < 1000000; j++)
				flag[i*j] = false;

	/*
	primes.push_back(2);
	for(int i = 3; i < 1000000; i += 2)
		if(flag[i])
			primes.push_back(i);
	*/
}

int main() { }
///BITWISE SIEVE SHIKTE HOBE
