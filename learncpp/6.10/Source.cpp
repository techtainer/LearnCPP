

int value = 5;

/* ���� �ٲܼ� ����. ��, *ptr1 = 6; �ȵ�. */
const int *ptr1 = &value; // ptr1 points to a "const int", so this is a pointer to a const value.
/* OK */
int value = 5;
const int *ptr = &value; // ptr points to a "const int"
value = 6; // the value is non-const when accessed through a non-const identifier
/* OK */
int value1 = 5;
const int *ptr = &value1; // ptr points to a const int

int value2 = 6;
ptr = &value2; // okay, ptr now points at some other const int
/* Error */
int value = 5;
const int *ptr = &value; // ptr points to a "const int"
*ptr = 6; // ptr treats its value as const, so changing the value through ptr is not legal




/* ���� �ٲ� �� ������, �ּҺ����� �ȵ�. ��, *ptr1 = 6; �� �ǳ�, ptr2 = &value2; �� �ȵ� */
int *const ptr2 = &value; // ptr2 points to an "int", so this is a const pointer to a non-const value.
/* OK */
int value = 5;
int *const ptr = &value; // ptr will always point to value
*ptr = 6; // allowed, since ptr points to a non-const int
/* Error */
int value1 = 5;
int value2 = 6;

int * const ptr = &value1; // okay, the const pointer is initialized to the address of value1
ptr = &value2; // not okay, once initialized, a const pointer can not be changed.





/* �ּ�, �� �Ѵ� ���� �ȵ�. */
const int *const ptr3 = &value; // ptr3 points to a "const int", so this is a const pointer to a const value.