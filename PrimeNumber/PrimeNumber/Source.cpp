#include <math.h> 
#include <iostream> 

bool IsPrime(int num) {
	double sqrtNum = sqrt(num);

	 //例外処理
	if (num < 2) {
		return false;
	}
	else if (num == 2) {
		return true;
	}
	//偶数の処理
	else if (num % 2 == 0) {
		return false;
	}

	//奇数の処理
	for (int i = 3; i <= (int)sqrtNum; i += 2) {
		if (num % i == 0) {
			return false;
		}
	}

	return true;
}

int main() {
	for (int i = 0; i < 1000; i++) {
		std::cout << i << "\t" << IsPrime(i) << std::endl;
	}
	return 0;
}