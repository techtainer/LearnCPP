/* char pointer는 주소를 나타내는게 아니라 문자를 출력함!*/
#include <iostream>

int main()
{
	int nArray[5] = { 9, 7, 5, 3, 1 };
	char cArray[] = "Hello!";
	const char *name = "Alex";

	std::cout << nArray << '\n'; // nArray will decay to type int*
	std::cout << cArray << '\n'; // cArray will decay to type char*
	std::cout << name << '\n'; // name is already type char*

	return 0;
}