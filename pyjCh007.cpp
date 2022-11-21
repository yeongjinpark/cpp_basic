//01 This 기본

//#include <iostream>
//using namespace std;
//
//class Point
//{
//private:
//	int xpos;
//	int ypos;
//public:
//	Point() :xpos(0), ypos(0)
//	{
//		cout << "객체주소" << this << endl;//This는 생성되어질 객체의 주소를 저장하고있다
//	}
//};
//int main()
//{
//	Point p1;
//	Point p2;
//	cout << "P1 주소 = " << &p1 << endl;
//	cout << "P2 주소 = " << &p2 << endl;
//}


//02 This 기본

//#include <iostream>
//using namespace std;
//class SoSimple
//{
//private:
//	int num;
//public:
//	SoSimple(int num)
//	{
//		this->num = num;//매개변수명과 멤버변수명이 동일시 this를 이용하여 구별가능
//		cout << "num = " << num << ",";
//		cout << "address = " << this << endl;
//	}
//	void ShowSimpleData()
//	{
//		cout << num << endl;
//	}
//	SoSimple* GetThisPointer()//멤버함수를 이용해서 this(객체주소)를 반환할수 있다
//	{
//		return this;
//	}
//};
//int main()
//{
//	SoSimple sim1(100);
//	SoSimple * ptr1 = sim1.GetThisPointer();//SoSimple * ptr = (SoSimple *)sim1의주소값
//	cout << ptr1 << ", ";
//	ptr1->ShowSimpleData();
//
//	SoSimple sim2(200);
//	SoSimple * ptr2 = sim2.GetThisPointer();
//	cout << ptr2 << ", ";
//	ptr2->ShowSimpleData();
//	return 0;
//}


//03 Self-Reference 의 반환


//#include <iostream>
//using namespace std;
//
//class SelfRef
//{
//private:
//	int num;
//public:
//	SelfRef(int n) :num(n)
//	{
//		cout << "객체 생성" << endl;
//	}
//	SelfRef& Adder(int n)
//	{
//		num += n;
//		return *this;
//	}
//	SelfRef& ShowTwoNumber()
//	{
//		cout << num << endl;
//		return *this;
//	}
//};
//int main()
//{
//	SelfRef obj(3);
//	SelfRef& ref = obj.Adder(2);
//
//	obj.ShowTwoNumber();
//	ref.ShowTwoNumber();
//	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
//	return 0;
//}


//04 string 클래스

//#include <iostream>
//#include <string>	//string 클래스 사용을 위한 선언
//using namespace std;
//int main()
//{
//	string str;	//빈 문자열을 가진 스트링 객체 생성
//	string address("대구광역시 감삼동 111-222 번지");//문자열을 입력받아 string 객체를 생성
//	string copyAddress(address); //string copyAddress=address;
//	
//	char text[] = { 'L','o','v','e','\0'};
//	string title(text);
//
//	cout << str << endl;
//	cout << address << endl;
//	cout << copyAddress << endl;
//	cout << title << endl;
//	return 0;
//}


//05 String 클래스 getline 함수

//#include <iostream>
//#include <string>	//string 클래스 사용을 위해 선언
//using namespace std;
//int main()
//{
//	string names[5];	//string 객체 배열 생성
//	for (int i = 0; i < 5; i++)	//총 5번 반복
//	{
//		cout << "이름 : ";
//		getline(cin, names[i], '\n');	//표준입력스트림(cin)방향으로 '\n'이 나올때까지
//	}									//names[i]번째 배열요소에 값입력
//	string latter = names[0];			//배열요소의 첫번째 문자열 latter에 저장
//	for (int i = 1; i < 5; i++)			//2번째 요소부터 마지막까지 반복
//	{
//		if (latter < names[i])			//사전 편찬순서 비교 가능 latter 보다 names[i]이크다면
//		{								//사전 편찬순서가 뒤에 있다는 의미
//			latter = names[i];			//latter에 names[i]의 문자열 대입
//		}
//	}
//	cout << "사전에서 가장 뒤에 나오는 이름은 : " << latter << endl;
//	return 0;
//
//}

//문제 

//이름과 학번을 입력 받을 string name[3] , string studentID[3] 을 만들고
//순서대로 출력해보세요

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string name[3]; string studentID[3];
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "이름 : ";
//		getline(cin, name[i], '\n');
//		cout << "학번 : ";
//		getline(cin, studentID[i], '\n');
//	}
//	cout << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "이름 : " << name[i] << endl;
//		cout << "학번 : " << studentID[i] << endl;
//	}
//
//	return 0;
//}


//06 문자열 자르기substr()

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string str;
//	cout << "문자열 입력 : ";
//	getline(cin, str, '\n');
//	int cnt = 1;
//	
//	for (int i = 0; i <= str.length(); i++) //.length() : 문자열의 길이 정수값반환
//	{
//
//		cout << str.substr(str.length()-i, 1);//stbstr(시작Idx, 길이)
//	}
//	cout << endl;
//
//	return 0;
//}


//07 문자열 회전

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string s;
//	cout << "문자열 입력(영문입력) : " << endl;
//	getline(cin, s, '\n');
//	int len = s.length();
//	for (int i = 0; i < len; i++)
//	{
//		string first = s.substr(0, 1);	//제일 앞문자 1개를 문자열로 분리
//		string sub = s.substr(1, len - 1);//두번째 문자부터 나머지 문자들을 문자열로 분리
//		s = sub + first;	//두 문자열을 연결하여 새로운 문자열로 만듦
//		cout << s << endl;	//합쳐진 문자열 출력
//	}
//	return 0;
//}


//08 string 의 find함수

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string s;
//	cout << "문자열 입력 : ";
//	getline(cin, s, '\n');
//
//	//find(검색할 문자열, 시작idx);
//	int idx = s.find('a', 0);
//	cout << idx << endl;
//
//	//find 로 검색시 문자가 없으면 -1을 반환
//	idx = s.find("@", 0);
//	cout << idx << endl;
//	//find 로 동일 문자 전체 검색
//	int curIdx = -1;
//	for (int i = 0; i < s.length(); i++)
//	{
//		curIdx = s.find('a', curIdx + 1);
//		if (curIdx == -1)
//			break;
//		cout << curIdx << " 번째 idx" << endl;
//	}
//	cout << "에서 검색되었습니다" << endl;
//	return 0;
//}


//09 문자열을 숫자로 변환 stoi() 

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string str1, str2;
//	cout << "문자열 입력 1 : ";
//	getline(cin, str1, '\n');
//	cout << "문자열 입력 2 : ";
//	getline(cin, str2, '\n');
//	cout << "두 문자열의 단순 연산 " << str1 + str2 << endl;
//	cout << "두 문자열을 int형으로 변환 " << stoi(str1) + stoi(str2) << endl;
//
//	return 0;
//}


//10 replace(시작위치 , 범위 , 바꿀문자열)

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string str;
//	cout << "문자열 입력 : ";
//	getline(cin, str, '\n');
//	str.replace(3, str.length(), "ABC");
//	cout << "입력한 문자열 : " << str << endl;
//	return 0;
//}


//11 미완성된 클래스 완성해보세요

#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	string name;
public:
	Person(){} //객체배열을 만들기 위해서 디폴트 생성자 추가
	Person(string name) { this->name = name; }
	string getName() { return name; }
~person()
{
cout<<"Person객체소멸"<<endl;
}
};
class Family
{
private:
	Person * p;
	int size;
	string FamilyName;
	//Family 명을 저장할용도로 멤버 변수(FamilyName)을 추가
public:
	Family(string name, int size)
	//Person 크기를 size만큼 동작할당하여 p포인터에 바인딩
	{
		FamilyName = name;
		this->size = size;
		p = new Person[size];
	}

	void show()
	{
		for (int i = 0; i < size; i++)
			cout << p[i].getName() << endl; //현재 패밀리 구성원을 출력
	}
	void setName(int num, string Person)
	{
		p[num] = Person;
	}
	//현재 배열요소Idx 받고 Person으로 받은 문자열을 해당 Idx에 저장
	~Family()
	{
        cout<<"Family객체소멸!" <<endl;
		delete[] p;
	}
	//현재 p가 바인딩한 동적공간을 제거
};
int main()
{
	Family* simpson = new Family("Simson", 3);
	simpson->setName(0, "Mr.Simpson");
	simpson->setName(1, "Mrs.Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;
	return 0;
}










