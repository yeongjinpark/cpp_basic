//01 ��ü�� ����Ű�� ������

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
//	Simple obj1("������");
//	Simple obj2("������");
//	Simple * ptr = &obj1;
//	ptr->ShowName();
//	ptr = &obj2;
//	ptr->ShowName();
//	return 0;
//}


//02 ��ü�迭

//#include <iostream>
//using namespace std;
//
//class Simple
//{
//private:
//	char name[30];
//public:
//	Simple()//�迭��ü �����ÿ� ����Ʈ�����ڸ� �̿��ؼ� ��ü�� �����Ѵ�!
//	{
//		cout << "�迭��ü������ ����Ʈ �����ڸ� ȣ���Ѵ�!!" << endl;
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
//		cout << name << " ��ü �Ҹ�" << endl;
//	}
//};
//int main()
//{
//	Simple objArr[3];
//	objArr[0].SetName("�����");
//	objArr[1].SetName("���¼�");
//	objArr[2].SetName("������");
//	objArr[0].ShowName();
//	objArr[1].ShowName();
//	objArr[2].ShowName();
//
//	return 0;
//}

//03 ������ ��ü�迭

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
//	Simple()//�迭��ü �����ÿ� ����Ʈ�����ڸ� �̿��ؼ� ��ü�� �����Ѵ�!
//	{
//		cout << "�迭��ü������ ����Ʈ �����ڸ� ȣ���Ѵ�!!" << endl;
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
//		cout << "�̸� : "<< name << endl;
//		cout << "���� : " << age << endl;
//		cout << "���� : " << height << endl;
//		cout << "������ :" << weight << endl;
//	}
//	~Simple()
//	{
//		cout << name << " ��ü �Ҹ�" << endl;
//	}
//};
//int main()
//{
//	Simple objArr[2][2];
//	objArr[0][0].Setting("�����", 35, 177.5, 80);
//	objArr[0][1].Setting("������", 40, 188.5, 70);
//	objArr[1][0].Setting("������", 28, 170.5, 67);
//	objArr[1][1].Setting("�ݿ���", 45, 167.5, 85);
//
//	objArr[0][0].ShowInfo();
//	objArr[0][1].ShowInfo();
//	objArr[1][0].ShowInfo();
//	objArr[1][1].ShowInfo();
//
//
//	return 0;
//}


//04 ��ü �����Ҵ�

//#include <iostream>
//using namespace std;
//
//class Simple
//{
//public:
//	int num;
//	Simple() :num(0) { cout << "����Ʈ ������ ȣ��" << endl; }
//	~Simple() { cout << "�Ҹ��� ȣ��" << endl; }
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


//05 Ŭ���� ���� �����Ҵ� ����


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
//		cout << "����Ʈ ������ ȣ��" << endl;
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
//		cout << name << addr << "�Ҹ��� ȣ�� " << endl;
//		delete[] name;
//		delete[] addr;
//	}
//};
//int main()
//{
//	Person * PersonList = new Person[3];
//	PersonList[0].SetPerson("������", "�뱸������");
//	PersonList[1].SetPerson("�����", "�λ걤����");
//	PersonList[2].SetPerson("�ݿ���", "����Ư����");
//
//	delete[] PersonList;
//	return 0;
//}














