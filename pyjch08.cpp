////01 복사생성자 예제
//
//#include<iostream>
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
//	int num1 = 10; //int num1(10)과 같음
//	int num2 = num1; //int num2(num1)과 같음
//	int num3(num2); //int num3=num2와 같음
//	cout << num1 << "," << num2 << "," << num3 << endl;
//
//	SoSimple obj1(1, 2);  //2개인자를 받는 생성자 호출
//	SoSimple obj2 = obj1; //복사 생성자 호출시점!
//	SoSimple obj3(obj1); // SoSimple obj3=obj1과 동일, 복사생성자 호출시점!
//	cout << obj2. x <<","<< obj2.y << endl;
//	cout << obj3.x << "," << obj3.y << endl;
//}


////02 디폴트 복사생성자 확인
//
//#include<iostream>
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
//	SoSimple(const SoSimple & ob) // SoSimple obj2(obj1);
//	{
//		this->x = ob.x;
//		this->y = ob.y;
//		cout << "복사생성자 호출!" << endl;
//	}
//};
//int main()
//{
//	//일반 자료형 복사
//	int num1 = 10; //int num1(10)과 같음
//	int num2 = num1; //int num2(num1)과 같음
//	int num3(num2); //int num3=num2와 같음
//	cout << num1 << "," << num2 << "," << num3 << endl;
//
//	SoSimple obj1(1, 2);  //2개인자를 받는 생성자 호출
//	SoSimple obj2 = obj1; //복사 생성자 호출시점!
//	SoSimple obj3(obj1); // SoSimple obj3=obj1과 동일, 복사생성자 호출시점!
//	cout << obj2.x << "," << obj2.y << endl;
//	cout << obj3.x << "," << obj3.y << endl;
//}

////문제
////다음주석처리되어있는 부분에 복사생성자를 넣어서 완성하세요
//
//#include<iostream>
//using namespace std;
//class simpleA
//{
//public:
//	int x;
//	int y;
//	simpleA(int a, int b) : x(a), y(b){}
//	//디폴트 복사생성자 지정(x=0, y만 복사하기)
//	simpleA(const simpleA & ob)
//	{
//		this->x = 0;
//		this->y = ob.y;
//		cout << "simpleA 복사생성자 호출, y만 복사" << endl;
//	}
//};
//class simpleB
//{
//public:
//	int x;
//	int y;
//	simpleB(int a, int b): x(a), y(b){}
//	//디폴트 복사생성자 지정(x만 복사, y=0)
//	simpleB(const simpleB & ob)
//	{
//		this->x = ob.x;
//		this->y = 0;
//		cout << "simpleB 복사생성자 호출, x만 복사" << endl;
//	}
//};
//int main()
//{
//	simpleA obj1(10, 20);
//	simpleA obj2 = obj1; //복사생성자 호출
//	cout << obj2.x << "," << obj2.y << endl;
//	simpleB obj3(30,40);
//	simpleB obj4 = obj3; // 복사생성자 호출
//	cout << obj4.x << "," << obj4.y << endl;
//}


//03 복사생성자의 호출시점
//1) 객체를 생성과 동시에 초기화
//2) 함수의 매개변수에 객체가 인자로 전달될떄
//3) 함수의 반환형이 클래스 자료형일때

////2) 함수의 매개변수에 객체가 인자로 전달될때
//#include<iostream>
//using namespace std;
//class SoSimple
//{
//public:
//	int x;
//	int y;
//	SoSimple(int x, int y): x(x), y(y){}
//	SoSimple(const SoSimple & obj)
//	{
//		this->x = obj.x; this->y = obj. y;
//		cout << "복사생성자 호출됨" << endl;
//	}
//};
//void ShowXY(SoSimple test) //SoSimple test=obj1 -> SoSimple test(obj1)
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

////3) 함수의 반환형이 클래스 자료형일때
//#include<iostream>
//using namespace std;
//class SoSimple
//{
//public:
//	int x;
//	int y;
//	SoSimple() { cout << "디폴트생성자호출" << endl; }
//	SoSimple(int x, int y): x(x), y(y){}
//	SoSimple(const SoSimple & obj)
//	{
//		this->x = obj.x; this->y = obj. y;
//		cout << "복사생성자 호출됨" << endl;
//	}
//	SoSimple getSoSimple()
//	{
//		return *this;
//	}
//	~SoSimple()
//	{
//		cout << "객체소멸됨" << endl;
//	}
//};
//void ShowXY(SoSimple test) //SoSimple test=obj1 -> SoSimple test(obj1)
//{
//	cout << test.x << "," << test.y << endl;
//}
//int main()
//{
//	SoSimple obj1(10, 20);
//	SoSimple obj2 = obj1.getSoSimple();
//	cout << "testcode-----------------" << endl;
//	cout << "testcode-----------------" << endl;
//	cout << "testcode-----------------" << endl;
//	cout << "testcode-----------------" << endl;
//	cout << "testcode-----------------" << endl;
//	
//	return 0;
//}



//04 디폴트 복사 생성자의 문제점(얕은 복사)
//#include<iostream>
//using namespace std;
//class person
//{
//private:
//
//	char* name;
//	int age;
//public:
//	person(const char* myname, int myage)
//	{
//		int len = strlen(myname) + 1;
//		name = new char[len];
//		strcpy_s(name, _msize(name), myname);
//	}
//	void ShowPersonInfo() const
//	{
//		cout << "이름: " << name << endl;
//		cout << "나이: " << age << endl;
//	}
//	~person()
//	{
//		delete[] name;
//		cout << "called destructor" << endl;
//	}
//};
//int main()
//{
//	person man1("Lee ji sung", 29);
//	person man2 = man1;
//	man1.ShowPersonInfo();
//	man2.ShowPersonInfo();
//	return 0;
//}
//

////05 디폴트 복사생성자의 문제해결(깊은복사) //복사생성자를 정확하게 명시해야 오류를 해결할 수 있음
//#include<iostream>
//using namespace std;
//class person
//{
//private:
//
//	char* name;
//	int age;
//public:
//	person(const char* myname, int myage)
//	{
//		int len = strlen(myname) + 1;
//		name = new char[len];
//		strcpy_s(name, _msize(name), myname);
//	}
//	person(const person & copy) : age(copy.age)
//	{
//		this->name = new char[strlen(copy.name) + 1]; //복사생성자 명시
//		strcpy_s(this->name, _msize(this->name), copy.name);
//		cout << "복사생성자 호출!" << endl;
//	}
//	void ShowPersonInfo() const
//	{
//		cout << "이름: " << name << endl;
//		cout << "나이: " << age << endl;
//	}
//	~person()
//	{
//		delete[] name;
//		cout << "called destructor" << endl;
//	}
//};
//int main()
//{
//	person man1("Lee ji sung", 29);
//	person man2 = man1;
//	man1.ShowPersonInfo();
//	man2.ShowPersonInfo();
//	return 0;
//}




////01 const 예약어
//
////const예약어는 변수를 상수화시키는데 사용된다(심볼릭상수)
////객체에 const형이 적용되면 멤버변수의 값을 변경할 수 없다
//// 객체의 멤버함수에 const형이 적용되면 해당함수는 멤버변수의 값을 변경할 수 없다.
//#include<iostream>
//using namespace std;
//
//class Simple
//{
//private:
//	int num;
//public:
//	Simple(int n): num(n){}
//
//	void addnum(int n)
//	{
//		num += n;
//	}
//
//	void Showdata() const //함수에 const이 존재하면 멤버변수값 변경불가
//	{
//		cout << "num(const): " << num << endl;
//	}
//	void Showdata()
//	{
//		num += 10;
//		cout << "num(not const): " << num << endl;
//	}
//};
//
//int main()
//{
//	const Simple obj1(10);
//	Simple obj2(10);
//	//obj1.addnum(20);
//	obj2. addnum(20);
//
//	obj1.Showdata(); //const형 멤버함수 사용
//	obj2.Showdata(); //기본형 멤버함수 사용
//
//}


////02 friend 예약어
////friend 예약어는 private으로 지정된 멤버변수에 예외적으로 접근할수있는
//// 클래스나 외부함수를 허용하는 예약어
//#include<iostream>
//using namespace std;
//class A
//{
//private:
//	int numA;
//	friend class B;  //B클래스로 만든 객체는 예외적으로 numA에 접근가능
//	friend class C;
//public:
//	friend void Outterset(A& ref); // 외부함수 outterset은 예외적으로 멤버접근 허용
//	A(int x) : numA(x){}
//};
//class B
//{
//public:
//	void Shownum(A & ref)
//	{
//		cout << "A num From B: " << ref.numA << endl;
//	}
//};
//class C
//{
//public:
//	void Shownum(A& ref)
//	{
//		cout << "A num From B: " << ref.numA << endl;      //Friend 설정이 되어있지 않기 떄문에 접근불가(Friend 설정하면 접근가능)
//	}
//};
////외부함수에 클래스 적용
//void Outterset(A& ref)
//{
//	ref.numA = 20;
//	cout << "A num From Outtersetfunc: " << ref.numA << endl;
//}
//
//int main()
//{
//	A obj1(10);
//	B obj2;
//	C obj3;
//	obj2.Shownum(obj1);
//	obj3.Shownum(obj1);
//	Outterset(obj1);
//	return 0;
//}


////03 friend
//
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Entertainer
//{
//private:
//	string name;
//	double weight;
//	double height;
//	friend class Manager;
//
//	friend void RequestSign(Entertainer &ref, string str); //외부함수
//	
//public:
//	Entertainer(string n, double w, double h) :name(n), weight(w), height(h){}
//	void Takesign(string str)
//	{
//		cout << str << "님을 위한 " << name << "의 sign" << endl;
//	}
//};
//class Manager
//{
//public:
//	void Chekenter(Entertainer & ref)
//	{
//		cout << "My Entertainer's Name: " << ref.name << endl;
//		cout << "My Entertainer's weight: " << ref.weight << endl;
//		cout << "My Entertainer's height: " << ref.height<< endl;
//	}
//};
//void RequestSign(Entertainer &ref, string str)
//{
//	ref.Takesign(str);
//}
//int main()
//{
//	Entertainer Jung("정우성", 72.1, 188.1);
//	Manager Lee;
//	Lee.Chekenter(Jung);
//	RequestSign(Jung, "열혈팬");
//}



////04 static- 객체간 공유 메모리 영역을 지정할때 사용
//
////C static 지역변수에서 시작 -> 전역변수화(데이터영역)
////C++ static 클래스내 멤버변수가 static으로 지정이 될 때 객체를 생성하기 전에
//// 미리 공유메모리영역(데이터영역)에 공간을 할당받아서 생성되어진 여러 객체들이
////해당 static멤버변수에 접근을 할 수 있도록 하는 공유기능
//
//#include<iostream>
//using namespace std;
//
//class ABC
//{
//public:
//	static int numA;      //numA변수를 공유메모리 영역에 미리 적재
//	int numB;
//public:
//	ABC() : numB(0){}
//	void ShowAB()
//	{
//		cout << "numA: " << numA << endl;
//		cout << "numB: " << numB << endl;
//	}
//};
//int ABC::numA = 0; //멤버변수에 초기값 지정시 만들어질떄마다 0으로 초기화가 됨
//int main()
//{
//	ABC test1;
//	test1.numA++; //numA의 값 0->1
//	ABC test2;
//	cout << test2.numA << endl; // test2. numA의 값: 1
//	test2.numA++;
//	cout << test1.numA << endl; //1->2;
//	ABC::numA = 20; //클래스명으로도 Static멤버변수에 접근 가능
//	cout << test1.numA << endl;
//	cout << test2.numA << endl;
//
//	return 0;
//}
//
//
////05 static- 예약 클래스 생성해보기
//
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Reservation
//{
//public:
//	static int roomcnt;  //객체간 공유멤버변수
//	Reservation(string name)
//	{
//		if (roomcnt == 0)
//			cout << "예약 불가능합니다" << endl;
//		else
//		{
//			roomcnt--;  //roomcnt의 개수를 1감소
//			cout << name << "님 예약 완료 되었습니다." << endl;
//		}
//	}
//	static void ShowRoom()
//	{
//		cout << "남의 방의 개수는" << roomcnt << "입니다." << endl;
//	}
//};
//int Reservation::roomcnt = 50;
//int main()
//{
//	/*Reservation Kim("김상태");
//	Reservation Lee("이은성");*/
//	cout << "남은 Room의 수: " << Reservation::roomcnt << endl;
//	Reservation ::ShowRoom();
//
//	return 0;
//}