//01 객체를 가리키는 포인터

//#include <iostream>
//using namespace std;
//
//class Simple
//{
//private:
//	char name[30];
//public:
//	Simple(const char * n)
//	{
//		strcpy_s(name, sizeof(name), n);
//	}
//	void ShowName()
//	{
//		cout << name << endl;
//	}
//};
//int main()
//{
//	Simple obj1("강동원");
//	Simple obj2("이지성");
//	Simple * ptr = &obj1;
//	ptr->ShowName();
//	ptr = &obj2;
//	ptr->ShowName();
//	return 0;
//}


//02 객체배열

//#include <iostream>
//using namespace std;
//
//class Simple
//{
//private:
//	char name[30];
//public:
//	Simple()//배열객체 생성시에 디폴트생성자를 이용해서 객체를 생성한다!
//	{
//		cout << "배열객체생성시 디폴트 생성자를 호출한다!!" << endl;
//	}
//	void SetName(const char *n)
//	{
//		strcpy_s(name, sizeof(name), n);
//	}
//	void ShowName()
//	{
//		cout << name << endl;
//	}
//	~Simple()
//	{
//		cout << name << " 객체 소멸" << endl;
//	}
//};
//int main()
//{
//	Simple objArr[3];
//	objArr[0].SetName("정우균");
//	objArr[1].SetName("이태수");
//	objArr[2].SetName("강동원");
//	objArr[0].ShowName();
//	objArr[1].ShowName();
//	objArr[2].ShowName();
//
//	return 0;
//}

//03 다차원 객체배열

//#include <iostream>
//using namespace std;
//
//class Simple
//{
//private:
//	char name[30];
//	int age;
//	float height;
//	double weight;
//public:
//	Simple()//배열객체 생성시에 디폴트생성자를 이용해서 객체를 생성한다!
//	{
//		cout << "배열객체생성시 디폴트 생성자를 호출한다!!" << endl;
//	}
//	void Setting(const char *n,int a,float h,double w) 
//	{
//		strcpy_s(name, sizeof(name), n);
//		age = a;
//		height = h;
//		weight = w;
//	}
//	void ShowInfo()
//	{
//		cout << "이름 : "<< name << endl;
//		cout << "나이 : " << age << endl;
//		cout << "신장 : " << height << endl;
//		cout << "몸무게 :" << weight << endl;
//	}
//	~Simple()
//	{
//		cout << name << " 객체 소멸" << endl;
//	}
//};
//int main()
//{
//	Simple objArr[2][2];
//	objArr[0][0].Setting("정우균", 35, 177.5, 80);
//	objArr[0][1].Setting("강동원", 40, 188.5, 70);
//	objArr[1][0].Setting("이지성", 28, 170.5, 67);
//	objArr[1][1].Setting("금영석", 45, 167.5, 85);
//
//	objArr[0][0].ShowInfo();
//	objArr[0][1].ShowInfo();
//	objArr[1][0].ShowInfo();
//	objArr[1][1].ShowInfo();
//
//
//	return 0;
//}


//04 객체 동적할당

//#include <iostream>
//using namespace std;
//
//class Simple
//{
//public:
//	int num;
//	Simple() :num(0) { cout << "디폴트 생성자 호출" << endl; }
//	~Simple() { cout << "소멸자 호출" << endl; }
//};
//int main()
//{
//	Simple * Simptr = new Simple[3];
//	Simptr[0].num = 10;
//	Simptr[1].num = 20;
//	Simptr[2].num = 30;
//	delete[] Simptr;
//	return 0;
//}


//05 클래스 내부 동적할당 구성


//#include <iostream>
//using namespace std;
//class Person
//{
//private:
//	char *name;
//	char *addr;
//public:
//	Person()
//	{
//		cout << "디폴트 생성자 호출" << endl;
//		name = 0, addr = 0;
//	}
//	void SetPerson(const char * n, const char * a)
//	{
//		name = new char[strlen(n) + 1];
//		strcpy_s(name, _msize(name), n);
//		addr = new char[strlen(a) + 1];
//		strcpy_s(addr, _msize(addr), a);
//	}
//	~Person()
//	{
//		cout << name << addr << "소멸자 호출 " << endl;
//		delete[] name;
//		delete[] addr;
//	}
//};
//int main()
//{
//	Person * PersonList = new Person[3];
//	PersonList[0].SetPerson("이지성", "대구광역시");
//	PersonList[1].SetPerson("정우균", "부산광역시");
//	PersonList[2].SetPerson("금영석", "서울특별시");
//
//	delete[] PersonList;
//	return 0;
//}














