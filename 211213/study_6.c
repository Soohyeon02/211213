///* 
//역참조 연산자 *는 덧셈 및 뺄셈 연산자보다 우선순위가 높다!
//▷ (*pInt + 1)은 *pInt에 1을 더한 값
//▷ *(pInt + 1)은 pInt가 가리키는 곳의 다음 변수에 저장되어 있는 값
//
// 증가 및 감소 연산자는 전치형과 후치형에 따라서 우선순위가 달라진다!
//▷ 역참조 연산자는 전치형 증가 및 전치형 감소 연산자보다는 우선순위가 낮으나
//후치형 증가 및 후치형 감소 연산자보다는 우선순위가 높다
//
//*pInt++는 *pInt의 값이 연산의 결과값
//즉, pInt 주소에 저장된 값을 가져온 후 pInt를 하나 증가시킴
//
//*++pInt는 pInt가 하나 증가되어 다음 장소를 지시한 다음 그 장소의 값이 연산의 결과
//즉, pInt 주소를 하나 증가시킨 후 그 위치의 값을 가져옴
//
//? int iValue[2][5];로 배열을 선언하면 iValue는 iValue[0][0]의 주소
//즉 iValue == &iValue[0][0]
//? 이때 iValue[0]는?
//역시 iValue[0][0]의 주소
//? iValue[1]는 iValue[1][0]의 주소
//
//const 자료형 *변수명; const int *pInt;
//pInt 주소에 저장된 변수의 값을
//*pInt를 사용하여 변경할 수 없다.
//
//자료형 *const 변수명 int *const pInt;
//pInt는 항상 같은 주소만 가리킬 수 있다.
//따라서 pInt를 선언할 때 반드시 초기화해야 한다.
//
//const 자료형 *const 변수명 const int *const pInt;
//pInt는 항상 같은 주소만 가리키며
//*pInt를 사용하여 저장된 값을 변경할 수 없다.
//
//
//*/
//#include <stdio.h>
//int main(void)
//{
//	int iValue[5];
//	int* pInt = &iValue[4];
//	int diff = pInt - iValue;
//	printf("%d", diff);
//}