//01 상속 기본
//#include <iostream>
//using namespace std;
//class Super
//{
//private:
//	int num1;
//public:
//	Super() :num1(0) { cout << "SuperClass 생성자 호출" << endl; }
//	void SetNum(int n){num1 = n;}
//	void ShowNum() { cout << "num1 : " << num1 << endl; }
//};
//class Sub : public Super	//: public Super ->Super클래스로부터
//{							// 상속받겠다 
//public:
//	Sub() { cout << "SubClass 생성자호출" << endl; }
//};
//int main()
//{
//	Sub obj;
//	obj.SetNum(10);
//	obj.ShowNum();
//	return 0;
//}


//02 상속 기본 + 확장

//#include <iostream>
//using namespace std;
//class Super
//{
//private:
//	int num1;
//public:
//	Super() :num1(0) { cout << "SuperClass 생성자 호출" << endl; }
//	void SetNum(int n) { num1 = n; }
//	void ShowNum() { cout << "num1 : " << num1 << endl; }
//};
//class Sub : public Super	//: public Super ->Super클래스로부터
//{							// 상속받겠다
//private:
//	int num2;	//확장된 멤버변수
//public:
//	Sub() { cout << "SubClass 생성자호출" << endl; }
//	void SetNum2(int n) { num2 = n; }//확장된 멤버함수
//	void BShowNum() //확장된 멤버함수
//	{ 
//		ShowNum();	//상위클래스의 멤버 함수 사용가능
//		cout << "num2 : " << num2 << endl; 
//	}
//};
//int main()
//{
//	Sub obj;
//	obj.SetNum(10);
//	obj.SetNum2(20);
//	obj.BShowNum();
//	return 0;
//}


//03 오버라이딩 

//#include <iostream>
//using namespace std;
//class Animal
//{
//public:
//	void sound() { cout << "소리를 냅니다" << endl; }
//};
//class Cat : public Animal
//{
//public:
//	void sound() { cout << " 야옹 소리를 냅니다" << endl; }
//};
//class Dog : public Animal
//{
//public:
//	void sound() { cout << " 멍멍 소리를 냅니다" << endl; }
//};
//int main()
//{
//	Dog Poppi;
//	Cat Yummi;
//	Poppi.sound();
//	Yummi.sound();
//
//	Poppi.Animal::sound();
//	return 0;
//}


//상속문제

//문제!!

////문제 1 - 상속 관계 문제
//#include <iostream>
//#include<string>
//using namespace std;
//
//class Computer 
//{
//private:
//	string ProdNum;
//	string CPUSpec;
//	string RamSpec;
//	string DiskSpec;
//
//public:
//	Computer(string p, string c, string r, string d)
//	{
//		ProdNum = p; CPUSpec = c; RamSpec = r; DiskSpec = d;
//	}
//	void PowerOn()
//	{
//		cout << "전원을 켭니다" << endl;
//	}
//
//	void PowerOff()
//	{
//		cout << "전원을 끕니다" << endl;
//	}
//};
//
//
//class Notebook :public Computer
//{
//	public:
//	int battery;
//public:
//	Notebook(string p, string c, string r, string d, int bat) :Computer(p, c, r, d)
//	{
//		battery = bat;
//	}
//	void move()
//	{
//		cout << "이동을 합니다" << endl;
//		battery--;
//	}
//		
//		void showbattery()
//		{
//			cout << "남은 배터리양은" << battery<<"%입니다"<< endl;
//		}
//};
//
//class Tablet :public Notebook
//{
//private:
//	string PenNum;
//public:
//	Tablet(string p, string c, string r, string d, int bat, string pn) :Notebook(p, c, r, d, bat)
//	{
//		PenNum = pn;
//	}
//	void write()
//	{
//		cout << "펜을 씁니다." << endl;
//		battery--;
//	}
//	
//};
//
//int main()
//{
//Notebook LGGram("1-2-3-4", "i7", "16G", "1Tb", 100);
//LGGram.PowerOn();
//LGGram.move();
//LGGram.showbattery();
//LGGram.PowerOff();
//cout << endl;
//
//Tablet Ipad("11-22-33","i5","8G","256",100,"Pen01234");
//Ipad.PowerOn();
//Ipad.move();
//Ipad.write();
//Ipad.showbattery();
//Ipad.PowerOff();
//
//return 0;
//}


////예제04- 포인터형의 사용+up/down casting
//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	void Sleep()
//	{
//		cout << "Sleep" << endl;
//	}
//};
//class Student : public Person
//{
//public:
//	void study()
//	{
//		cout << "Study" << endl;
//	}
//};
//class Parttimestudent : public Student
//{
//public:
//	void work()
//	{
//		cout << "work!" << endl;
//	}
//};
//int main()
//{
//	//No Casing
//	Person*ptr1 = new Person();
//	ptr1->Sleep();
//	cout << endl;
//	Student* ptr2 = new Student();
//	ptr2->Sleep();
//	ptr2->study();
//	cout << endl;
//	Parttimestudent* ptr3 = new Parttimestudent();
//	ptr3->Sleep();
//	ptr3->study();
//	ptr3->work();
//
//	//Upcasing
//	//상속관계에 있는 객체에 공통된 기능을 사용하기 위한 방식
//	//확장된 멤버변수나 함수에는 접근이 불가능하다
//	cout << "Upcasing" << endl;
//	ptr1 = ptr2; //Upcasing
//	ptr1->Sleep();
//
//	ptr1 = ptr3;
//	ptr1->Sleep();
//
//	ptr2 = ptr3;
//	ptr2->Sleep();
//	ptr2->study();
//
//	//다운캐스팅
//	//하위객체의 확장된 멤버함수나 변수에 접근하기 위해서 사용
//	//ptr1=ptr3;
//	//ptr1->Sleep();
//
//	Parttimestudent*down = (Parttimestudent *)ptr1;
//
//	down->Sleep();
//    down->study();
//	down->work();
//
//	delete ptr1, ptr2, ptr3;
//
//
//
//	return 0;
//}

////05 가상함수(오버라이딩+동적바인딩)
////가상함수는 상속관계에 있는 객체를 업캐스팅 하는 경우에
////최종 오버라이딩 된 멤버 함수를 사용할 수 있도록 하는 기능
//
//#include<iostream>
//using namespace std;
//
//class animal
//{
//public:
//	//virtual void sound(){cout << "소리를 냅니다" << endl;} //가상함수 사용
//	virtual void sound()
//	{
//		cout << "소리를 냅니다" << endl;
//	}
//};
//class dog : public animal
//{
//public:
//	void sound()
//	{
//		cout << "멍멍 소리를 냅니다" << endl;
//	}
//};
//class siba : public dog
//{
//public:
//	void sound()
//	{
//		cout << "siba가 멍멍 소리를 냅니다" << endl;
//	}
//};
//int main()
//{
//	animal * dog1 = new siba;
//	dog1->sound();
//
//
//	dog * dog2 = new siba;
//	dog2->sound();
//
//	dog2->animal::sound();
//	dog2->dog::sound();
//	dog2->sound;
//
//
//	return 0;
//}
//


//06 오버로딩 vs 오버라이딩
//오버로딩
//단일클래스에서 하나의 기능을 가지는 멤버함수의 인자의 형태를 다양하게 지정할 수
//있도록 허용한 방식

//오버라이딩
//상속관계에서 상위클래스로부터 물려받는 멤버함수를 다시 고쳐서 사용하는 방식

////계산기 코드(오버로딩,오버라이딩)
//#include<iostream>
//using namespace std;
//
//class calculator
//{
//public:
//	int sum(int x, int y)  //함수 오버로딩
//	{
//		cout << "전자계산기 int 사용" << endl;
//		return x + y;
//	}
//	double sum(double x, double y)  //함수 오버로딩
//	{
//		cout << "전자계산기 double 사용" << endl;
//		return x + y;
//	}
//};
//
////공학용 계산기
//class sientificcal : public calculator
//{
//public:
//	int sum(int x, int y)  //함수 오버라이딩
//	{
//		cout << "공학용 계산기 int 사용" << endl;
//		return x + y;
//	}
//	double sum(double x, double y)  //함수 오버라이딩
//	{
//		cout << "공학용 계산기 double사용" << endl;
//		return x + y;
//	}
//	int sum(int x, int y, int z)  //상속받은 sum함수를 오버로딩
//	{
//		cout << "공학용 계산기 상속받은 sum함수 오버로딩" << endl;
//		return x + y + z;
//	}
//};
//
//int main()
//{
//	sientificcal cal;
//	cal.sum(10, 20, 30);
//	cal.sum(10, 20);
//	cal.sum(1.1, 2.2);
//	return 0;
//}



////07 순수가상함수
//
////순수가상함수는 해당클래스로 불필요하게 객체를 생성하지 못하도록 방지하고
////하위클래스로만 객체를 생성하여 사용할 수 있도록 하는 기능
////virtual 반환형 함수명(인자형태)=0
//#include<iostream>
//using namespace std;
//
//class moonbanggu
//{
//public:
//	virtual void write() =0;   //순수가상함수
//	virtual void erase() =0;    //가상함수
//
//};
//class sharp : public moonbanggu
//{
//	void write()
//	{
//		cout << "샤프로 씁니다" << endl;
//	}
//	void erase() 
//	{
//		cout << "샤프의 지우개로 지웁니다" << endl;
//	}
//};
//int main()
//{
//	moonbanggu * moon = new sharp();
//	moon->write();
//	moon->erase();
//	return 0;
//}

//08 가상소멸자
#include<iostream>
#include<string>
using namespace std;

class SoSimple
{
private:
	string *ptr;
public:
	SoSimple()
	{
		ptr = new string;
		
	}
	virtual ~SoSimple()
	{
		cout << "SoSimple 소멸자 호출" << endl;
		delete ptr;
	}
};
class sub : public SoSimple
{
private:
	string *ptr2;
public:
	sub()
	{
		ptr2 = new string;
	}
	~sub()
	{
		cout << "sub 소멸자 호출" << endl;
		delete ptr2;
	}
};
int main()
{
	SoSimple *p = new sub;
	delete p;
	return 0;
}