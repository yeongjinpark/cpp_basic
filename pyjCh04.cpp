//예제01 - true/faluse 예약어의 사용

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	cout << "true : " << true << endl;
//	cout << "false : " << false << endl;
//	cout << "sizeof 1 : " << sizeof(1) << endl;	//리터럴 1은 기본 int 자료형
//	cout << "sizeof 0 : " << sizeof(0) << endl; //리터럴 0은 기본 int 자료형
//	cout << "sizeof true : " << sizeof(true) << endl; //true의 size는 1byte
//	cout << " sizeof false : " << sizeof(false) << endl; //false size는 1byte
//
//	if (-1)
//	{
//		cout << "-1은 참이네요??" << endl;
//	}
//	return 0;
//}

//예제01 -true/false 예약어의 사용
//#include<iostream>
//using namespace std;
//bool IsPositive(int num)
//{
//	if (num < 0)
//		return false;
//	else
//		return true;
//}
//int main()
//{
//	bool isPos;  //bool은 true/false를 넣기위한 장치(1byte 공간)
//	int num;
//	cout << "InPut Number: ";
//	cin >> num;
//	isPos = IsPositive(num);
//	if (isPos)
//		cout << "Positive number" << endl;
//	else
//		cout << "Negative number" << endl;
//	return 0; 
//}

//예제03- 참조자
//#include<iostream>
//using namespace std;
//int main()
//{
//	int num1 = 1234;
//	int &num2 = num1;
//
//	num2 = 4567;
//	cout << "num1 변수 값: " << num1 << endl; //num1에서 1234로 초기화
//	cout << "num2 참조변수 값: " << num1 << endl; //참조자 num2에 num1으로 초기화
//	
//	cout << "num1 변수의 메모리 주소: " << &num1 << endl;
//    cout << "num2 참조변수의 메모리 주소: " << &num2 << endl;
//	
//	return 0;
//}
//참조자 기본규칙
//01) 상수에는 사용이 불가능하다( int &ref = 20(X))
//02) 참조자는 바로 초기화해서 사용해야한다. (int &ref(X))
//03) 참조자는 NULL로 초기화 해서는 안 된다. (int &ref=NULL(X))

//예제04 참조자와 배열
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int arr[3] = { 1,3,5 };
//	int &ref1 = arr[0];
//	int &ref2 = arr[1];
//	int &ref3 = arr[2];
//
//	ref1 = 10;
//	ref2 = 20;
//	ref3 = 30;
//
//	cout << ref1 << endl;
//	cout << ref2 << endl;
//	cout << ref3 << endl;
//	return 0;
//}

////예제5 포인터와 참조자
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int num = 12;
//	int *ptr = &num;
//	int **dptr = &ptr;
//
//	int &ref = num;
//	int*(&pref) = ptr;
//	int**(&dpref) = dptr;
//
//	cout << ref << endl;
//	cout << *pref << endl;
//	cout << **dpref << endl;
//	
//	return 0;
//}

//예제6 매개변수와 참조자

//#include<iostream>
//using namespace std;
//	void swap(int &ref1, int &ref2)
//{
//	int tmp = ref1;
//	ref1 = ref2;
//	ref2 = tmp;
//}
//int main()
//{
//	int n1 = 100;
//	int n2 = 200;
//	cout << "swap 전 n1= " << n1 << "n2=" << n2 << endl;
//	swap(n1, n2);
//	cout << "swap 후 n1=" << n1 << "n2=" << n2 << endl;
//	
//	return 0;
//}


//문제
//다음코드를 보고 문제를 풀어보세요
//int main()
//{
//	int num1 = 5;
//	AddOne(num);
//	cout << num << endl;
//	Code Change(num);
//	cout << num << endl;
//}
// 다음을 만족하는 AddOne함수, CodeChange함수를 만드세요
//	참조자를 매개변수로 사용합니다.
//#include<iostream>
//using namespace std;
//
//void AddOne(int &ref);
//void CodeChange(int &ref);
//
//int main()
//{
//	int num = 5;
//	AddOne(num); //1을 증가
//	cout << num << endl;
//	CodeChange(num); // 부호변경
//	cout << num << endl;
//}
//void AddOne(int &ref)
//{
//	ref++;
//}
//void CodeChange(int &ref)
//{
//	ref = -ref;
//}

//예제7 
//#include<iostream>
//using namespace std;
//
//int & func(int &ref) //func함수의 변환형이 int &(참조자)자료형일떄 ref가 참조하는 이름주소를 전달
//{
//	ref++;
//	return ref; //함수가 종료되면서 ref참조변수가 제거됨과 동시에 참조자형으로 ref가 참조했던 num1의 이름주소가 호출했던 위치로 전달
//}
//int main()
//{
//	int num1 = 1;
//	int &num2 = func(num1); //func()의 변환형이 int &(참조자형)인 경우에 ref가 참조하는 num1 문자주소가 반환 int &num2= num1으로 해석
//	num1++;
//	num2++;
//	cout << "num1: " << num1 << endl;
//	cout << "num2: " << num2 << endl;
//	return 0;
//}

//예제8 반환형이 참조자형이 아닌경우
//#include<iostream>
//using namespace std;
//
//int func(int &ref) //func함수의 변환형이 int &(참조자)자료형일떄 ref가 참조하는 이름주소를 전달
//{
//	ref++;
//	return ref; 
//}
//int main()
//{
//	int num1 = 1;
//	int &num2 = func(num1); //int &num=2; 기본적으로 리터럴상수는 참조하지 않는다.(앞에 const를 붙이면 해결가능)
//	//int num2= func(num1); //int num2=2;
//	num1++;
//	num2++;
//	cout << "num1: " << num1 << endl;
//	cout << "num2: " << num2 << endl;
//	return 0;
//}

//예제09- 함수의 변환형에 따른 값전달 변화확인
//함수의 변환형이 참조자- 받는변수가 참조자          int &num2= num1;
//함수의 반환형이 참조자- 받는변수가 일반변수        int num2= num1;
//함수의 반환형이 일반변수 - 받는 변수가 참조자      int &num2=2; 컴파일에러 발생 
//함수의 반환형이 일반변수- 받는 변수가 일반변수     int num2=2;

//#include<iostream>
//using namespace std;
//
//int & func(int &ref) 
//{
//	ref++;
//	return ref; 
//}
//int main()
//{
//	int num1 = 1;
//	int &num2 = func(num1); 
//	num1++;
//	num2++;
//	cout << "num1: " << &num1 << endl;
//	cout << "num2: " << &num2 << endl;
//	return 0;
//}

////문제
//#include <iostream>
//using namespace std;
//int main()
//{
//	int num = 12;
//	//포인터변수를 정의해서 num을 가리키는 코드작성
//	int *ptr = &num;
//	//포인터 변수를 참조하는 참조자를 하나 생성
//	int *(&ref) = ptr;
//	//포인터 변수를 이용해서 num 값 1증가
//	(*ptr)++;        //연산자 우선순위로 인하여 ()필요
//	//참조자를 이용해서 num값 1증가
//	(*ref)++;
//	//num안의 value확인
//	cout << num << endl;
//	return 0;
//}

//예제10- ㅡmalloc을 대신할 new
//#include<iostream>
//#include<cstdlib> //c언어에서 사용했던 헤더파일을 선언할떄는 앞에 c를 붙이고 .h를 제거한다.
//using namespace std;
//
//int main()
//{
//	//malloc 사용 동적할당
//	int*ptr1 = (int*)malloc(sizeof(int)); //동적할당 공간생성
//	*ptr1 = 10;
//	cout << *ptr1 << endl;
//	free(ptr1);
//
//	char *str1 = (char *)malloc(sizeof(char) * 20); //동적공간 배열형 생성
//	strcpy_s(str1, _msize(str1), "Hello World"); //문자열복사 strcpy_s(대상,크기,원본)
//	cout << str1 << endl;
//	free(str1); //동적공간 배열형 삭제
//
//
//	//new 기본형
//	int *ptr2 = new int;
//	*ptr2 = 20;
//	cout << *ptr2 << endl;
//	delete ptr2;
//
//	//new 배열형
//	char* str2 = new char[20]; //배열형 동적 공간 생성
//	strcpy_s(str2, _msize(str2), "Hello World");
//	cout << str2 << endl;
//	delete[] str2;//배열형 동적공간 제거
//
//	return 0;
//
//}

//예제11- malloc과 new의 차이 (객체생성에 있어서의 차이) //객체생성에 있어서는 new 사용이 효율적
#include<iostream>
#include<cstdlib>

using namespace std;

class simple
{
public:
	simple()
	{
		cout << "simple의 생성자 함수 호출" << endl;

	}
};
int main()
{
	cout << "case1: ";
	simple *sp1 = new simple;

	cout << "case2:";
	simple *sp2 = (simple *)malloc(sizeof(simple));

	cout << endl << "end of main" << endl;
	delete sp1;
	free (sp2);
	return 0;
}