#include <iostream>

//int main(void) {
//	int array[5] = {}; // 0���� �ʱ�ȭ
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

/* enum class����Ҷ��� static_cast�������.*/
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

/* enum class��� standard enum���°� ���� namespace�� ��Ȯ�� �ϴ°� ����.*/
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
/* �Ϲݺ����� �Լ��� �����Ҷ� �������� ������ ������ �迭�� �������� ����
   �����迭�� ������ ������ ������ �Լ� �Ķ���͸� const �� �޾ƾ� ��.
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

/* size of �� �迭�� ũ�� ������ �Լ��ȿ��� ���� ���� �迭�� ũ�� ���� �迭�������� ũ�⸸ ����.
	size_of ���� ����!!!!!!!!!!!!!!!!!!!!!
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

/* �迭�� ���� : c++17���� �迭�� �迭�� ũ��� ����. c++17������ std::size()����*/
int main()
{
	int array[] = { 1, 1, 2, 3, 5, 8, 13, 21 };
	std::cout << "The array has: " << sizeof(array) / sizeof(array[0]) << "elements\n";
	std::cout << "The array has: " << std::size(array) << "elements\n";

	return 0;
}