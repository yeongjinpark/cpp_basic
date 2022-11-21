//01 예외처리

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, sum, average;
//	try 
//	{
//		while (true)
//		{
//			cout << "합을 입력하세요>>";
//			cin >> sum;
//			cout << "인원수를 입력하세요>>";
//			cin >> n;
//			if (n == 0)
//				throw n;//예외발생 catch(int x) 블록으로 점프
//			average = sum / n;		//예외가 발생하는 시점.. 수/0 -> 
//			cout << "인원수 : " << n << "총합 : " << sum << "평균 : " << average << endl;
//		}
//	}
//	catch (int x)
//	{
//		cout << "예외 발생!!" << x << " 로는 나눌수가 없습니다" << endl;
//		average = 0;
//		cout << endl;
//	}
//
//	cout << "종료시점" << endl;
//
//	return 0;
//}


//02 예외처리


//#include <iostream>
//using namespace std;
//
//int getExp(int base, int exp)
//{
//	if (base <= 0 || exp <= 0)
//		throw "음수사용불가";
//	int value = 1;
//	for (int n = 0; n < exp; n++)
//		value = value * base;
//	return value;
//}
//int main()
//{
//	int v = 0;
//	try {
//		v = getExp(2, 3);
//		cout << "2 의 3승은 " << v << "입니다" << endl;
//		v = getExp(2, -3);
//		cout << "2 의 -3승은 " << v << "입니다" << endl;
//	}
//	catch (const char * s) {
//		cout << "예외발생!!" << s << endl;
//	}
//	cout << "종료 시점" << endl;
//	return 0;
//}


//03 예외클래스 만들어서 기본 타입보다 많은 정보를 전달


//#include <iostream>
//#include <string>
//using namespace std;
//
//class MyException { // 사용자가 만드는 기본 예외 클래스 선언
//	int lineNo;
//	string func, msg;
//public:
//	MyException(int n, string f, string m) {
//		lineNo = n; func = f; msg = m; 
//	}
//	void print() { cout << func << ":" << lineNo << ", " << msg << endl; }
//};
//
//class DivideByZeroException : public MyException { // 0으로 나누는 예외 클래스 선언
//public:
//	DivideByZeroException(int lineNo, string func, string msg)
//		: MyException(lineNo, func, msg) { }
//};
//
//class InvalidInputException : public MyException { // 잘못된 입력 예외 클래스 선언
//public:
//	InvalidInputException(int lineNo, string func, string msg)
//		: MyException(lineNo, func, msg) { }
//};
//
//int main() {
//		int x, y;
//		try {
//			cout << "나눗셈을 합니다. 두 개의 양의 정수를 입력하세요>>";
//			cin >> x >> y;
//			if (x < 0 || y < 0)
//				throw InvalidInputException(33, "main()", "음수 입력 예외 발생"); // 임시 객체 생성
//			if (y == 0)
//				throw DivideByZeroException(35, "main()", "0으로 나누는 예외 발생"); // 임시 객체 생성
//			cout << (double)x / (double)y << endl;;
//		}
//		catch (DivideByZeroException &e) {
//			e.print();
//		}
//		catch (InvalidInputException &e) {
//			e.print();
//		}
//
//}






