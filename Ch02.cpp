//예제01 기본 출력

//#include <iostream>
//
//int main()
//{
//	std::cout << "hello World";
//	std::cout << "hello World\n";
//	std::cout << "1 + 2=" << 1 + 2 << "입니다\n";
//	std::cout << "개행은 endl로도 가능" << std::endl;
//
//	return 0;
//}

//예제02 기본 입력

//#include <iostream>
//int main()
//{
//	int num = 0;
//	std::cout << "표준 기능 확인!" << std::endl;
//	std::cout << "값 입력:";
//	std::cin >> num;
//	std::cout << "입력한 값 : " << num << std::endl;
//	return 0;
//}


//예제03 기본 출력(서식문자 없이 사용가능한 cout)

//#include <iostream>
//int main()
//{
//	int num = 20;
//	std::cout << "Hello World!" << std::endl;
//	std::cout << "Hello " << "World" << std::endl;
//	std::cout << num << ' ' << 'A' << "hello world" << std::endl;
//	std::cout << ' ' << 3.14 << std::endl;
//	return 0;
//}


//예제04 여러 값 입력 받기

//#include <iostream>
//int main()
//{
//	int x,y,z;
//	std::cout << "세수를 입력하세요 : ";
//	std::cin >> x >> y >> z;
//	std::cout << "입력한 3개의 정수값은 :";
//	std::cout << x << y << z << std::endl;
//
//	return 0;
//}


//예제05 

//#include <iostream>
//int main()
//{
//	char name[100];
//	char lang[100];
//
//	std::cout << "당신의 이름은 무엇입니까? ";
//	std::cin >> name;
//	std::cout << "좋아하는 프로그래밍 언어는 무엇인가요? ";
//	std::cin >> lang;
//
//	std::cout << "내 이름은 " << name << "입니다" << std::endl;
//	std::cout << "좋아하는 언어는 " << lang << "입니다" << std::endl;
//
//	return 0;
//}

//문제 1

//사용자로부터 총 5개의 정수를 입력 받아서, 그합을 출력하는 프로그램을 작성해 보자.
//단, 프로그램의 실행은 다음과 같이 이뤄져야 한다
//
//- 실행의 예 -
//1번째 정수 //입력 : 1
//2번째 정수 입력 : 2
//3번째 정수 입력 : 3
//4번째 정수 입력 : 4
//5번째 정수 입력 : 5
//합계 : 15

//#include<iostream>
//int main()
//{
//	int a, b, c, d, e;
//	std::cout << "5개의 정수를 입력: ";
//	std::cin >> a >> b >> c >> d >> e;
//    std::cout << "1번째 정수: " << a << std ::endl;
//	std::cout << "2번째 정수: " << b << std::endl;
//	std::cout << "3번째 정수: " << c << std::endl;
//	std::cout << "4번째 정수: " << d << std::endl;
//	std::cout << "5번째 정수: " << e << std::endl;
//	return 0;
//}

//문제 2
//프로그램 사용자로부터 이름과 전화번호를 문자여 형태로 입력받아서, 입력받은 데이터를
//그대로 출력하는 프로그램을 작성해 보자
//#include<iostream>
//int main()
//{
//	char name[100];
//	char num[100];
//
//	std::cout << "당신의 이름은?";
//	std::cin >> name;
//		std::cout << "당신의 전화번호는?";
//		std::cin >> num;
//	std::cout << " 이름은?" << name << std::endl;
//	std::cout << " 전화번호는?" << num << std::endl;
//	return 0;
//}

//문제 3

//숫자를 하나 입력받아서 그 숫자에 해당하는 구구단을 출력하는 프로그램을 작성해보자
//#include<iostream>
//int main()
//{
//	int x, y, z;
//	y++;
//	z = x * y;
//	std::cout << "수를 입력하시오";
//	std::cin >> x;	
//	std::cout << "입력한값의 구구단은" << z << std::endl;
//	
//		
//	return 0;
//}

//문제 4

//판매원들의 급여 계산 프로그램을 작성해 보자.이 회사는 모든 판매원에게 매달 50만원의
//기본 급여와 물품 판매 가격의 12 % 에 해당하는 돈을 지급한다.예를 들어서 민수라는 친구의 이번달 물품
//판매 금액이 100만원이라면, 50 + 100 * 0.12 = 62, 따라서 62만원을 급여로 지급받는다
//단, 아래의 실행의 예에서 보이듯이 이러한 급여의 계산은 - 1이 될떄까지 계속되어야 한다
//
//- 실행 예 -
//판매 금액을 만원 단위로 입력(-1 to end) : 100
//이번 달 급여 : 62만원
//판매 금액을 만원 단위로 입력(-1 to end) : 200
//이번 달 급여 : 200만원
//판매 금액을 만원 단위로 입력(-1 to end) : -1
//프로그램을 종료합니다.
//#include<iostream>
//int main()
//{
//	
//	int money = 0;
//	int salary;
//	while (true)
//	{
//		std::cout << "판매 금액을 만원 단위로 입력(-1 to end)";
//			std::cin >> money;
//			if (money == -1)
//				break;
//			salary = 50 + money * 0.12;
//
//			std::cout << "이번달 급여: " << salary << std::endl;
//	}
//	std::cout << "프로그램을 종료합니다" << std::endl;
//	return 0;
//}


//예제06 함수오버로딩 기본
//#include<iostream>
//int sum(int a, int b)
//{
//	return a + b;
//}
//int sum(int a, int b, int c)
//{
//	return a + b + c;
// }
//double sum(double a, double b)
//{
//	return a + b;
//}
//int main()
//{
//	std::cout << "정수의 합: " << sum(1, 2) << std::endl;
//	std::cout << "정수의 합: " << sum(1, 2,3) << std::endl;
//	std::cout << "정수의 합: " << sum(1.1,2.2) << std::endl;
//	return 0;
//}

//예제07 함수 오버로딩
//#include<iostream>
//void func()
//{
//	std::cout << "func()called!" << std::endl;
//
//}
//void func(char c)
//{
//	std::cout << "func(char)called!" << std::endl;
//
//}
//void func(int a, int b)
//{
//	std::cout << "func(int a int b)called!" << std::endl;
//
//}
//int main()
//{
//	func();
//	func('A');
//	func(12, 13);
//	return 0;
//}

////문제
////다음 main함수에서 필요로 하는 swap함수를 오버로딩 해보세요
//#include<iostream>
//void swap(int *p1, int *p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//void swap(char *p1, char *p2)
//{
//	char tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//
//int main()
//{
//	int num1 = 20, num2 = 30;
//	swap(&num1, &num2);
//	std::cout << num1 << ' ' << num2 << std::endl;
//
//	
//	
//	char ch1 = 'A', ch2 = 'z';
//	swap(&ch1, &ch2);
//	std::cout << ch1 << ' ' << ch2 << std::endl;
//
//	return 0;
//}


////예제8 함수의 디폴트값
//#include<iostream>
//
//int sum(int a = 10, int b = 20)
//{
//	return a + b;
//}
//int main()
//{
//	std::cout << "인자전달 x: " << sum() << std::endl;
//	std::cout << "인자전달 1: " << sum(1) << std::endl; //매개변수 개수보다 인자개수가 작을 때 제일 왼쪽부터 적용 그래서 20+1=21
//	std::cout << "인자전달 2: " << sum(1,2) << std::endl;
//	return 0;
//}

////예제9 디폴트값의 부분적용
//#include<iostream>
//int BoxVolume(int length=1, int width = 1, int height = 2)
//{
//	return length * width* height;
//}
//int main()
//{
//	std::cout << "[3,3,3]" << BoxVolume(3, 3, 3) << std::endl;
//	std::cout << "[5,5,D]" << BoxVolume(5,5) << std::endl;
//	std::cout << "[D,D,D]" << BoxVolume() << std::endl;
//	return 0;
//}

//문제- 예제9에 정의된 함수 BoxVolume를 매개변수의 디폴트 값 지정 형태가 아닌
//함수 오버로딩 형태로 재구현해보세요, main함수는 변경하지 않아야 하며, 실행 결과도 동일해야합니다.




//예제10 inline 함수 
//일반함수의 호출리턴에 따른 오버헤드 발생할 수가 있기 떄문에
//코드 라인에 함수의 로직을 직접 삽입하는 방식
// 속도향상을 위한 기술

//#include<iostream>
//inline int SQARE(int x)
//{
//	return x;
//}
//int main()
//{
//	std::cout << SQARE(5) << std::endl;
//	std::cout << SQARE(12) << std::endl;
//	return 0;
//}

//예제11- namespace기본
//namespace는 함수나 변수의 이름충돌을 방지하기 위해서 만든 가상공간
//namespace를 통해서 동일한 이름의 함수와 변수의 구별이 가능하다.

//#include<iostream>
//namespace name01
//{
//	void func()
//	{
//		std::cout << "name01안의 func() 함수" << std::endl;
//
//	}
//}
//namespace name02
//{
//	void func()
//	{
//		std::cout << "name02안의 func()함수" << std::endl;
//	}
//}
//int main()
//{
//	name01::func();
//	name02::func();
//	return 0;
//}
//void name01::func()
//{
//	std::cout << "name01안의 func()" << std::endl;
//}
//void name02::func()
//{
//	std::cout < "name02안의 func()" << std::endl;
//}

////예제12 중첩 namespace
//#include <iostream>
//namespace Parent
//{
//	int num = 2;
//	namespace subOne
//	{
//		int num = 3;
//	}
//	namespace subTwo
//	{
//		int num = 5;
//
//		namespace son
//		{
//			int num = 10;
//		}
//	}
//}
//int main()
//{
//	std::cout << Parent::num << std::endl;
//	std::cout << Parent::subOne::num << std::endl;
//	std::cout << Parent::subTwo::num << std::endl;
//	namespace ABC = Parent::subTwo::son;
//	std::cout << ABC::num << std::endl;
//	return 0;
//}


//예제13 using기본
//using을 통해서 자주사용하는 namespace의 기능이나 namespace 이름자체를 생략하고 사용할수가 있다.

//#include<iostream>
////using std::cin;      //std네임스페이스의 cin기능만 using
////using std::cout;    //std네임스페이스의 cout기능만 using
////using std::endl;    //std네임스페이스의 endl기능만 using
//using namespace std;  //std네임페이스 전체기능을 using
//int main()
//{
//	int num = 20;
//	cout << "hello world" << num << std::endl;
//	cin >> num;
//
//	return 0;
//}

//예제14- 전역변수에 접근하기위한::(범위지정 연산자)
//::(범위지정연산자)를 통해서 전역변수에 접근할 수가 있다
//
//
//#include<iostream>
//using namespace std;
//
//int val = 100; //전역변수
//int main()
//{
//	int val = 20; //지역변수
//	val += 3;
//	::val += 7;
//	cout << "지역변수 val:" << val << endl;
//	cout << "전역변수 val: " << ::val << endl;
//}



//예제01- true/fulse 예약어의 사용

#include<iostream>
using namespace std;

int main()
{ 
	cout << "true" << true << endl;
	cout << "false: " << false << endl;
	cout << "sizeof 1: " << sizeof(1) << endl; //리터럴1은 기본int자료형
	cout << "sizeof 1: " << sizeof(0) << endl; // 리터럴0은 기본 int자료형
	cout << "sizeof true: " << sizeof(true) << endl; //true의 size는 1byte
	cout << "sizeof false : " << sizeof(false) << endl; // false size는 1byte

	if (-1)
	{
		cout << "-1은 참이네요?" << endl;

	}
	return 0;
}