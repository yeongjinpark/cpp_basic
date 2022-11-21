//11 미완성된 클래스 완성해보세요

#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	string name;
public:
	Person() {} //객체배열을 만들기 위해서 디폴트 생성자 추가
	Person(string name) { this->name = name; }
	string getName() { return name; }
	/*~person()
	{
		cout << "Person객체소멸" << endl;
	}*/
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
		cout << "Family객체소멸!" << endl;
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