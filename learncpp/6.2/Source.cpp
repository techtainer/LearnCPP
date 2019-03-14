#include <iostream>

//int main(void) {
//	int array[5] = {}; // 0으로 초기화
//	int prime[5]{ 2,3,5,7,11 }; // uniform initialization.
//
//	for (int i=0; i < 5; i++) {
//		std::cout << array[i] << std::endl;
//	}
//	return 0;
//}


//enum StudentNames
//{
//	KENNY, // 0
//	KYLE, // 1
//	STAN, // 2
//	BUTTERS, // 3
//	CARTMAN, // 4
//	WENDY, // 5
//	MAX_STUDENTS // 6
//};
//
//int main()
//{
//	int testScores[MAX_STUDENTS]; // allocate 6 integers
//	testScores[STAN] = 76; // still works
//
//	return 0;
//}

/* enum class사용할때는 static_cast해줘야함.*/
//enum class StudentNames
//{
//	KENNY, // 0
//	KYLE, // 1
//	STAN, // 2
//	BUTTERS, // 3
//	CARTMAN, // 4
//	WENDY, // 5
//	MAX_STUDENTS // 6
//};
//
//int main()
//{
//	int testScores[static_cast<int>(StudentNames::MAX_STUDENTS)]; // allocate 6 integers
//	testScores[static_cast<int>(StudentNames::STAN)] = 76;
//
//	return 0;
//}

/* enum class대신 standard enum쓰는게 낫고 namespace로 명확히 하는게 낫다.*/
//namespace StudentNames
//{
//	enum StudentNames
//	{
//		KENNY, // 0
//		KYLE, // 1
//		STAN, // 2
//		BUTTERS, // 3
//		CARTMAN, // 4
//		WENDY, // 5
//		MAX_STUDENTS // 6
//	};
//}
//
//int main()
//{
//	int testScores[StudentNames::MAX_STUDENTS]; // allocate 6 integers
//	testScores[StudentNames::STAN] = 76;
//
//	return 0;
//}

/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
/* 일반변수를 함수에 전달할때 원본값은 변하지 않으나 배열의 원본값은 변경
   원본배열의 변경을 원하지 않으면 함수 파라미터를 const 로 받아야 함.
   void passArray(const int prime[5])
*/
//void passValue(int value) // value is a copy of the argument
//{
//	value = 99; // so changing it here won't change the value of the argument
//}
//
//void passArray(int prime[5]) // prime is the actual array
//{
//	prime[0] = 11; // so changing it here will change the original argument!
//	prime[1] = 7;
//	prime[2] = 5;
//	prime[3] = 3;
//	prime[4] = 2;
//}
//
//int main()
//{
//	int value = 1;
//	std::cout << "before passValue: " << value << "\n";
//	passValue(value);
//	std::cout << "after passValue: " << value << "\n";
//
//	int prime[5] = { 2, 3, 5, 7, 11 };
//	std::cout << "before passArray: " << prime[0] << " " << prime[1] << " " << prime[2] << " " << prime[3] << " " << prime[4] << "\n";
//	passArray(prime);
//	std::cout << "after passArray: " << prime[0] << " " << prime[1] << " " << prime[2] << " " << prime[3] << " " << prime[4] << "\n";
//
//	return 0;
//}

/* size of 로 배열의 크기 측정시 함수안에사 전달 받은 배열의 크기 찍어보면 배열포인터의 크기만 찍힘.
	size_of 사용시 주의!!!!!!!!!!!!!!!!!!!!!
*/

//void printSize(int array[])
//{
//	std::cout << sizeof(array) << '\n'; // prints the size of a pointer, not the size of the array!
//}
//
//int main()
//{
//	int array[] = { 1, 1, 2, 3, 5, 8, 13, 21 };
//	std::cout << sizeof(array) << '\n'; // will print the size of the array
//	printSize(array);
//
//	return 0;
//}

/* 배열의 개수 : c++17전은 배열을 배열의 크기로 나눔. c++17에서는 std::size()제공*/
int main()
{
	int array[] = { 1, 1, 2, 3, 5, 8, 13, 21 };
	std::cout << "The array has: " << sizeof(array) / sizeof(array[0]) << "elements\n";
	std::cout << "The array has: " << std::size(array) << "elements\n";

	return 0;
}