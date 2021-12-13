///*    자료형 *const 변수명은
//      pInt는 항상 같은 주소만 가리키며
//      *pInt를 사용하여 저장된 값을 변경할 수 없다.
//
//*/
//
//#include <stdio.h>
//int main(void)
//{
//	int iValue1 = 10, iValue2 = 20;
//	int* ptr1 = &iValue1;
//	int* const ptr2 = &iValue1;
//
//	ptr1 = &iValue2;
//
//	*ptr2 = 30;
//	ptr2 = &iValue2;
//
//	return 0;
//}