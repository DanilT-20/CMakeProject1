// CMakeProject1.cpp: определяет точку входа для приложения.
//

#include "CMakeProject1.h"

using namespace std;

int main()
{
	/*
	Переменная - это названная область памяти, которая хранит в себе какое - либо значение, к которому можно обращаться и изменять его
	Типы Переменных:
	Целочисленные:
	char - 1 байт (2^8) uns 0 - 255 s -128 - 127
	short - 2 байта (2^16) uns 0-65 535 s -32 768 - 32 767 
	int - 4 байта (2^32) uns 0 - 4 294 967 295 s -2 147 483 648 - 2 147 483 647
	long - 4 байта (2^32) uns 0 - 4 294 967 295 s -2 147 483 648 - 2 147 483 647
	long long - 8 байт (2^64) uns 0 - 18 446 744 073 709 551 616 s -9 223 372 036 854 775 808 - 9 223 372 036 854 775 807  
	singht (s) - знаковый
	unsinght (uns) - беззнаковый
	Вещественные:
	float - 4 байта (2^32) -3.40282e+38 - 3.40282e+38
	double - 8 байт (2^64) -1.79769e+308 - 1.79769e+308
	long double - 12 байт (2^96) -1.79769e+308 - 1.79769e+308
	Символьные:
	char 1 байт (2^8)
	Логические:
	bool 1 байт (2) 0 - 1
	*/
	char c = 'a';
	short sh = 12354;
	int i = 90889;
	long l = 90999;
	long long ll = 99978732;
	float fl = 11.33232451;
	double d = 1.4432346345;
	long double ld = 0.2314212345;
	bool b = 1;
	std::cout << "char -128 - 127 " << c + c << std::endl;
	std::cout << "short " << std::numeric_limits<short>::lowest() << ' ' << std::numeric_limits<short>::max() << ' ' << sh + sh << std::endl;
	std::cout << "int " << std::numeric_limits<int>::lowest() << ' ' << std::numeric_limits<int>::max() << ' ' << i + i << std::endl;
	std::cout << "long " << std::numeric_limits<long>::lowest() << ' ' << std::numeric_limits<long>::max() << ' ' << l + l << std::endl;
	std::cout << "long long " << std::numeric_limits<long long>::lowest() << ' ' << std::numeric_limits<long long>::max() << ' ' << ll + ll << std::endl;
	std::cout << "float " << std::numeric_limits<float>::lowest() << ' ' << std::numeric_limits<float>::max() << ' ' << fl + fl << std::endl;
	std::cout << "double " << std::numeric_limits<double>::lowest() << ' ' << std::numeric_limits<double>::max() << ' ' << d + d << std::endl;
	std::cout << "long double " << std::numeric_limits<long double>::lowest() << ' ' << std::numeric_limits<long double>::max() << ' ' << ld + ld << std::endl;
	std::cout << "bool " << std::numeric_limits<bool>::lowest() << ' ' << std::numeric_limits<bool>::max() << ' ' << b + b << std::endl;
	std::cout << b + ld << std::endl;
	return 0;
}
