//01 ���� ������ ����

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
//	//�Ϲ� �ڷ��� ����
//	int num1 = 10;	// int num1(10)�� ����
//	int num2 = num1;// int num2(num1)�� ����
//	int num3(num2);	// int num3=num2 �� ����
//	cout << num1 <<","<< num2 <<","<< num3 << endl;
//
//	SoSimple obj1(1, 2);//2�����ڸ� �޴� ������ȣ��
//	SoSimple obj2 = obj1;	//���� ������ ȣ�����!
//	SoSimple obj3(obj1);	//SoSimple obj3=obj1�� ����,��������� ȣ�����!
//	cout << obj2.x << "," << obj2.y << endl;
//	cout << obj3.x << "," << obj3.y << endl;
//
//	return 0;
//}


//02 ����Ʈ ��������� Ȯ��

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
//		cout << "��������� ȣ��!" << endl;
//	}
//};
//int main()
//{
//	//�Ϲ� �ڷ��� ����
//	int num1 = 10;	// int num1(10)�� ����
//	int num2 = num1;// int num2(num1)�� ����
//	int num3(num2);	// int num3=num2 �� ����
//	cout << num1 << "," << num2 << "," << num3 << endl;
//
//	SoSimple obj1(1, 2);//2�����ڸ� �޴� ������ȣ��
//	SoSimple obj2 = obj1;	//���� ������ ȣ�����!
//	SoSimple obj3(obj1);	//SoSimple obj3=obj1�� ����,��������� ȣ�����!
//	cout << obj2.x << "," << obj2.y << endl;
//	cout << obj3.x << "," << obj3.y << endl;
//
//	return 0;
//}



//����

//���� �ּ�ó���Ǿ��ִ� �κп� ��������ڸ� �־ �ϼ��ϼ���

//#include <iostream>
//using namespace std;
//class SimpleA
//{
//public:
//	int x;
//	int y;
//	SimpleA(int a, int b) :x(a), y(b) {}
//	//����Ʈ ��������� ����(x=0, y�� �����ϱ�)
//	SimpleA(const SimpleA& ob)
//	{
//		this->x = 0;
//		this->y = ob.y;
//		cout << "SimpleA ��������� ȣ��, Y�� ����" << endl;
//	}
//};
//class SimpleB
//{
//public:
//	int x;
//	int y;
//	SimpleB(int a, int b) :x(a), y(b) {}
//	//����Ʈ ��������� ����(x������,y=0)
//	SimpleB(const SimpleB& ob)
//	{
//		this->x = ob.x;
//		this->y = 0;
//		cout << "SimpleB ��������� ȣ��,X�� ����" << endl;
//	}
//};
//int main()
//{
//	SimpleA obj1(10, 20);
//	SimpleA obj2 = obj1;//���������ȣ��
//	cout << obj2.x << "," << obj2.y << endl;
//	SimpleB obj3(30, 40);
//	SimpleB obj4 = obj3;//���������ȣ��
//	cout << obj4.x << "," << obj4.y << endl;
//
//}


//03 ����������� ȣ�����

//1) ��ü�� ������ ���ÿ� �ʱ�ȭ
//2) �Լ��� �Ű������� ��ü�� ���ڷ� ���޵ɶ�
//3) �Լ��� ��ȯ���� Ŭ���� �ڷ����϶�

//2) �Լ��� �Ű������� ��ü�� ���ڷ� ���޵ɶ�

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
//		cout << "��������� ȣ���!" << endl;
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


//3) �Լ��� ��ȯ���� Ŭ���� �ڷ����϶�

//#include <iostream>
//using namespace std;
//class SoSimple
//{
//public:
//	int x;
//	int y;
//	SoSimple() { cout << "����Ʈ������ȣ��" << endl; }
//	SoSimple(int x, int y) :x(x), y(y) {}
//	SoSimple(const SoSimple & obj)
//	{
//		this->x = obj.x; this->y = obj.y;
//		cout << "��������� ȣ���!" << endl;
//	}
//	SoSimple GetSoSimple()
//	{
//		return *this;
//	}
//	~SoSimple()
//	{
//		cout << "��ü�Ҹ��" << endl;
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



//04 ����Ʈ ���� �������� ������(��������)

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
//		cout << "�̸� : " << name << endl;
//		cout << "���� : " << age << endl;
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


//05 ����Ʈ ����������� ���� �ذ�(���� ����)

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
//		cout << "��������� ȣ��!" << endl;
//	}
//	void ShowPersonInfo() const
//	{
//		cout << "�̸� : " << name << endl;
//		cout << "���� : " << age << endl;
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


// ���� - ���� �ڵ带 ���� ����������� ���¸� �ٲټ���

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
	//��������� �ڵ� �ۼ�
	SoSimple(const SoSimple & copy)
	{
		cout << "���� ������ ȣ��!" << _msize(copy.Aptr) << " byteũ��� �����Ҵ�" << endl;
		Aptr = new int[_msize(copy.Aptr)];
	}
	~SoSimple()
	{
		delete[] Aptr;
		cout << "�Ҹ��� ȣ��" << endl;
	}
};
int main()
{
	SoSimple obj1(10);
	SoSimple obj2 = obj1; // ��������� ȣ�����(���� ��������)
	return 0;
}












































