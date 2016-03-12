#include <iostream>

int main()
{
	int n;
	
	std::cin >> n;
	
	while(1)
	{
		std::cout << n << " " ;
		
		if(n == 1)
			break;	
		
		if(n % 2 == 1)
			n = 3 * n + 1;
		else 
			n = n / 2;
	}
	
	return 0;
}
