int fast_exponentiation(int a, int x, int p){

	if(!a)
		return 0;

	int result = 1;

	while(a){

		if(x & 1)
			result = result * a % p;
		
		a = a * a % p;
		x >>= 1;
	}

	return result;
}
