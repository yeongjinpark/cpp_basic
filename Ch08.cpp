//01 복사 생성자 예제

//#include <iostream>
//using namespace std;
//
//class SoSimple
//{
//public:
//	int x;
//	int y;
//	SoSimple(int x, int y)
//	{
//		this->x = x; this->y = y;
//	}
//};
//int main()
//{
//	//일반 자료형 복사
//	int num1 = 10;	// int num1(10)과 같음
//	int num2 = num1;// int num2(num1)과 같음
//	int num3(num2);	// int num3=num2 와 같음
//	cout << num1 <<","<< num2 <<","<< num3 << endl;
//
//	SoSimple obj1(1, 2);//2개인자를 받는 생성자호출
//	SoSimple obj2 = obj1;	//복사 생성자 호출시점!
//	SoSimple obj3(obj1);	//SoSimple obj3=obj1과 동일,복사생성자 호출시점!
//	cout << obj2.x << "," << obj2.y << endl;
//	cout << obj3.x << "," << obj3.y << endl;
//
//	return 0;
//}


//02 디폴트 복사생성자 확인

//#include <iostream>
//using namespace std;
//
//class SoSimple
//{
//public:
//	int x;
//	int y;
//	SoSimple(int x, int y)
//	{
//		this->x = x; this->y = y;
//	}
//	SoSimple(const SoSimple & ob)//SoSimple obj2(obj1);
//	{
//		this->x = ob.x;
//		this->y = ob.y;
//		cout << "복사생성자 호출!" << endl;
//	}
//};
//int main()
//{
//	//일반 자료형 복사
//	int num1 = 10;	// int num1(10)과 같음
//	int num2 = num1;// int num2(num1)과 같음
//	int num3(num2);	// int num3=num2 와 같음
//	cout << num1 << "," << num2 << "," << num3 << endl;
//
//	SoSimple obj1(1, 2);//2개인자를 받는 생성자호출
//	SoSimple obj2 = obj1;	//복사 생성자 호출시점!
//	SoSimple obj3(obj1);	//SoSimple obj3=obj1과 동일,복사생성자 호출시점!
//	cout << obj2.x << "," << obj2.y << endl;
//	cout << obj3.x << "," << obj3.y << endl;
//
//	return 0;
//}



//문제

//다음 주석처리되어있는 부분에 복사생성자를 넣어서 완성하세요

//#include <iostream>
//using namespace std;
//class SimpleA
//{
//public:
//	int x;
//	int y;
//	SimpleA(int a, int b) :x(a), y(b) {}
//	//디폴트 복사생성자 지정(x=0, y만 복사하기)
//	SimpleA(const SimpleA& ob)
//	{
//		this->x = 0;
//		this->y = ob.y;
//		cout << "SimpleA 복사생성자 호출, Y만 복사" << endl;
//	}
//};
//class SimpleB
//{
//public:
//	int x;
//	int y;
//	SimpleB(int a, int b) :x(a), y(b) {}
//	//디폴트 복사생성자 지정(x만복사,y=0)
//	SimpleB(const SimpleB& ob)
//	{
//		this->x = ob.x;
//		this->y = 0;
//		cout << "SimpleB 복사생성자 호출,X만 복사" << endl;
//	}
//};
//int main()
//{
//	SimpleA obj1(10, 20);
//	SimpleA obj2 = obj1;//복사생성자호출
//	cout << obj2.x << "," << obj2.y << endl;
//	SimpleB obj3(30, 40);
//	SimpleB obj4 = obj3;//복사생성자호출
//	cout << obj4.x << "," << obj4.y << endl;
//
//}


//03 복사생성자의 호출시점

//1) 객체를 생성과 동시에 초기화
//2) 함수의 매개변수에 객체가 인자로 전달될때
//3) 함수의 반환형이 클래스 자료형일때

//2) 함수의 매개변수에 객체가 인자로 전달될때

//#include <iostream>
//using namespace std;
//class SoSimple
//{
//public:
//	int x;
//	int y;
//	SoSimple(int x, int y) :x(x), y(y) {}
//	SoSimple(const SoSimple & obj)
//	{
//		this->x = obj.x; this->y = obj.y;
//		cout << "복사생성자 호출됨!" << endl;
//	}
//};
//void ShowXY(SoSimple test)//SoSimple test=obj1 -> SoSimple test(obj1)
//{
//	cout << test.x << "," << test.y << endl;
//}
//int main()
//{
//	SoSimple obj1(10, 20);
//	SoSimple obj2(30, 40);
//	ShowXY(obj1);
//	ShowXY(obj2);
//	return 0;
//}


//3) 함수의 반환형이 클래스 자료형일때

//#include <iostream>
//using namespace std;
//class SoSimple
//{
//public:
//	int x;
//	int y;
//	SoSimple() { cout << "디폴트생성자호출" << endl; }
//	SoSimple(int x, int y) :x(x), y(y) {}
//	SoSimple(const SoSimple & obj)
//	{
//		this->x = obj.x; this->y = obj.y;
//		cout << "복사생성자 호출됨!" << endl;
//	}
//	SoSimple GetSoSimple()
//	{
//		return *this;
//	}
//	~SoSimple()
//	{
//		cout << "객체소멸됨" << endl;
//	}
//};
//int main()
//{
//	SoSimple obj1(10, 20);
//	obj1.GetSoSimple();
//	cout << "testCode-----------------" << endl;
//	cout << "testCode-----------------" << endl;
//	cout << "testCode-----------------" << endl;
//	cout << "testCode-----------------" << endl;
//	return 0;
//}



//04 디폴트 복사 생성자의 문제점(얕은복사)

//#include <iostream>
//#include <cstring>
//using namespace std;
//class Person
//{
//private:
//	char * name;
//	int age;
//public:
//	Person(const char * myname, int myage)
//	{
//		int len = strlen(myname) + 1;
//		name = new char[len];
//		strcpy_s(name, _msize(name), myname);
//	}
//	void ShowPersonInfo() const
//	{
//		cout << "이름 : " << name << endl;
//		cout << "나이 : " << age << endl;
//	}
//	~Person()
//	{
//		delete[] name;
//		cout << "Called Destructor" << endl;
//	}
//};
//int main()
//{
//	Person man1("Lee Ji Sung", 29);
//	Person man2 = man1;
//	man1.ShowPersonInfo();
//	man2.ShowPersonInfo();
//	return 0;
//
//}


//05 디폴트 복사생성자의 문제 해결(깊은 복사)

//#include <iostream>
//#include <cstring>
//using namespace std;
//class Person
//{
//private:
//	char * name;
//	int age;
//public:
//	Person(const char * myname, int myage)
//	{
//		int len = strlen(myname) + 1;
//		name = new char[len];
//		strcpy_s(name, _msize(name), myname);
//	}
//	Person(const Person & copy):age(copy.age)
//	{
//		this->name = new char[strlen(copy.name) + 1];
//		strcpy_s(this->name, _msize(this->name), copy.name);
//		cout << "복사생성자 호출!" << endl;
//	}
//	void ShowPersonInfo() const
//	{
//		cout << "이름 : " << name << endl;
//		cout << "나이 : " << age << endl;
//	}
//	~Person()
//	{
//		delete[] name;
//		cout << "Called Destructor" << endl;
//	}
//};
//int main()
//{
//	Person man1("Lee Ji Sung", 29);
//	Person man2 = man1;
//	man1.ShowPersonInfo();
//	man2.ShowPersonInfo();
//	return 0;
//
//}


// 문제 - 다음 코드를 보고 복사생성자의 형태를 바꾸세요

#include <iostream>
using namespace std;
class SoSimple
{
	int * Aptr;
public:
	SoSimple(int num)
	{
		Aptr = new int[num];
	}
	//복사생성자 코드 작성
	SoSimple(const SoSimple & copy)
	{
		cout << "복사 생성자 호출!" << _msize(copy.Aptr) << " byte크기로 동적할당" << endl;
		Aptr = new int[_msize(copy.Aptr)];
	}
	~SoSimple()
	{
		delete[] Aptr;
		cout << "소멸자 호출" << endl;
	}
};
int main()
{
	SoSimple obj1(10);
	SoSimple obj2 = obj1; // 복사생성자 호출시점(현재 얕은복사)
	return 0;
}












































