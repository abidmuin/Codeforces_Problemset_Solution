//https://codeforces.com/problemset/problem/148/A

#include <iostream>

int main()
{
	int k = 0, l = 0, m = 0, n = 0, d = 0;
	std::cin >> k >> l >> m >> n >> d;

	int _count=0;
	for(int i=1; i<=d; i++){
		if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
			_count++;
	}

	std::cout << _count << std::endl;

	return 0;
}
