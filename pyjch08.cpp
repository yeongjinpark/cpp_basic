////01 ��������� ����
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
//	//�Ϲ� �ڷ��� ����
//	int num1 = 10; //int num1(10)�� ����
//	int num2 = num1; //int num2(num1)�� ����
//	int num3(num2); //int num3=num2�� ����
//	cout << num1 << "," << num2 << "," << num3 << endl;
//
//	SoSimple obj1(1, 2);  //2�����ڸ� �޴� ������ ȣ��
//	SoSimple obj2 = obj1; //���� ������ ȣ�����!
//	SoSimple obj3(obj1); // SoSimple obj3=obj1�� ����, ��������� ȣ�����!
//	cout << obj2. x <<","<< obj2.y << endl;
//	cout << obj3.x << "," << obj3.y << endl;
//}


////02 ����Ʈ ��������� Ȯ��
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
//		cout << "��������� ȣ��!" << endl;
//	}
//};
//int main()
//{
//	//�Ϲ� �ڷ��� ����
//	int num1 = 10; //int num1(10)�� ����
//	int num2 = num1; //int num2(num1)�� ����
//	int num3(num2); //int num3=num2�� ����
//	cout << num1 << "," << num2 << "," << num3 << endl;
//
//	SoSimple obj1(1, 2);  //2�����ڸ� �޴� ������ ȣ��
//	SoSimple obj2 = obj1; //���� ������ ȣ�����!
//	SoSimple obj3(obj1); // SoSimple obj3=obj1�� ����, ��������� ȣ�����!
//	cout << obj2.x << "," << obj2.y << endl;
//	cout << obj3.x << "," << obj3.y << endl;
//}

////����
////�����ּ�ó���Ǿ��ִ� �κп� ��������ڸ� �־ �ϼ��ϼ���
//
//#include<iostream>
//using namespace std;
//class simpleA
//{
//public:
//	int x;
//	int y;
//	simpleA(int a, int b) : x(a), y(b){}
//	//����Ʈ ��������� ����(x=0, y�� �����ϱ�)
//	simpleA(const simpleA & ob)
//	{
//		this->x = 0;
//		this->y = ob.y;
//		cout << "simpleA ��������� ȣ��, y�� ����" << endl;
//	}
//};
//class simpleB
//{
//public:
//	int x;
//	int y;
//	simpleB(int a, int b): x(a), y(b){}
//	//����Ʈ ��������� ����(x�� ����, y=0)
//	simpleB(const simpleB & ob)
//	{
//		this->x = ob.x;
//		this->y = 0;
//		cout << "simpleB ��������� ȣ��, x�� ����" << endl;
//	}
//};
//int main()
//{
//	simpleA obj1(10, 20);
//	simpleA obj2 = obj1; //��������� ȣ��
//	cout << obj2.x << "," << obj2.y << endl;
//	simpleB obj3(30,40);
//	simpleB obj4 = obj3; // ��������� ȣ��
//	cout << obj4.x << "," << obj4.y << endl;
//}


//03 ����������� ȣ�����
//1) ��ü�� ������ ���ÿ� �ʱ�ȭ
//2) �Լ��� �Ű������� ��ü�� ���ڷ� ���޵ɋ�
//3) �Լ��� ��ȯ���� Ŭ���� �ڷ����϶�

////2) �Լ��� �Ű������� ��ü�� ���ڷ� ���޵ɶ�
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
//		cout << "��������� ȣ���" << endl;
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

////3) �Լ��� ��ȯ���� Ŭ���� �ڷ����϶�
//#include<iostream>
//using namespace std;
//class SoSimple
//{
//public:
//	int x;
//	int y;
//	SoSimple() { cout << "����Ʈ������ȣ��" << endl; }
//	SoSimple(int x, int y): x(x), y(y){}
//	SoSimple(const SoSimple & obj)
//	{
//		this->x = obj.x; this->y = obj. y;
//		cout << "��������� ȣ���" << endl;
//	}
//	SoSimple getSoSimple()
//	{
//		return *this;
//	}
//	~SoSimple()
//	{
//		cout << "��ü�Ҹ��" << endl;
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



//04 ����Ʈ ���� �������� ������(���� ����)
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
//		cout << "�̸�: " << name << endl;
//		cout << "����: " << age << endl;
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

////05 ����Ʈ ����������� �����ذ�(��������) //��������ڸ� ��Ȯ�ϰ� ����ؾ� ������ �ذ��� �� ����
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
//		this->name = new char[strlen(copy.name) + 1]; //��������� ���
//		strcpy_s(this->name, _msize(this->name), copy.name);
//		cout << "��������� ȣ��!" << endl;
//	}
//	void ShowPersonInfo() const
//	{
//		cout << "�̸�: " << name << endl;
//		cout << "����: " << age << endl;
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




////01 const �����
//
////const������ ������ ���ȭ��Ű�µ� ���ȴ�(�ɺ������)
////��ü�� const���� ����Ǹ� ��������� ���� ������ �� ����
//// ��ü�� ����Լ��� const���� ����Ǹ� �ش��Լ��� ��������� ���� ������ �� ����.
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
//	void Showdata() const //�Լ��� const�� �����ϸ� ��������� ����Ұ�
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
//	obj1.Showdata(); //const�� ����Լ� ���
//	obj2.Showdata(); //�⺻�� ����Լ� ���
//
//}


////02 friend �����
////friend ������ private���� ������ ��������� ���������� �����Ҽ��ִ�
//// Ŭ������ �ܺ��Լ��� ����ϴ� �����
//#include<iostream>
//using namespace std;
//class A
//{
//private:
//	int numA;
//	friend class B;  //BŬ������ ���� ��ü�� ���������� numA�� ���ٰ���
//	friend class C;
//public:
//	friend void Outterset(A& ref); // �ܺ��Լ� outterset�� ���������� ������� ���
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
//		cout << "A num From B: " << ref.numA << endl;      //Friend ������ �Ǿ����� �ʱ� ������ ���ٺҰ�(Friend �����ϸ� ���ٰ���)
//	}
//};
////�ܺ��Լ��� Ŭ���� ����
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
//	friend void RequestSign(Entertainer &ref, string str); //�ܺ��Լ�
//	
//public:
//	Entertainer(string n, double w, double h) :name(n), weight(w), height(h){}
//	void Takesign(string str)
//	{
//		cout << str << "���� ���� " << name << "�� sign" << endl;
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
//	Entertainer Jung("���켺", 72.1, 188.1);
//	Manager Lee;
//	Lee.Chekenter(Jung);
//	RequestSign(Jung, "������");
//}



////04 static- ��ü�� ���� �޸� ������ �����Ҷ� ���
//
////C static ������������ ���� -> ��������ȭ(�����Ϳ���)
////C++ static Ŭ������ ��������� static���� ������ �� �� ��ü�� �����ϱ� ����
//// �̸� �����޸𸮿���(�����Ϳ���)�� ������ �Ҵ�޾Ƽ� �����Ǿ��� ���� ��ü����
////�ش� static��������� ������ �� �� �ֵ��� �ϴ� �������
//
//#include<iostream>
//using namespace std;
//
//class ABC
//{
//public:
//	static int numA;      //numA������ �����޸� ������ �̸� ����
//	int numB;
//public:
//	ABC() : numB(0){}
//	void ShowAB()
//	{
//		cout << "numA: " << numA << endl;
//		cout << "numB: " << numB << endl;
//	}
//};
//int ABC::numA = 0; //��������� �ʱⰪ ������ ������������� 0���� �ʱ�ȭ�� ��
//int main()
//{
//	ABC test1;
//	test1.numA++; //numA�� �� 0->1
//	ABC test2;
//	cout << test2.numA << endl; // test2. numA�� ��: 1
//	test2.numA++;
//	cout << test1.numA << endl; //1->2;
//	ABC::numA = 20; //Ŭ���������ε� Static��������� ���� ����
//	cout << test1.numA << endl;
//	cout << test2.numA << endl;
//
//	return 0;
//}
//
//
////05 static- ���� Ŭ���� �����غ���
//
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Reservation
//{
//public:
//	static int roomcnt;  //��ü�� �����������
//	Reservation(string name)
//	{
//		if (roomcnt == 0)
//			cout << "���� �Ұ����մϴ�" << endl;
//		else
//		{
//			roomcnt--;  //roomcnt�� ������ 1����
//			cout << name << "�� ���� �Ϸ� �Ǿ����ϴ�." << endl;
//		}
//	}
//	static void ShowRoom()
//	{
//		cout << "���� ���� ������" << roomcnt << "�Դϴ�." << endl;
//	}
//};
//int Reservation::roomcnt = 50;
//int main()
//{
//	/*Reservation Kim("�����");
//	Reservation Lee("������");*/
//	cout << "���� Room�� ��: " << Reservation::roomcnt << endl;
//	Reservation ::ShowRoom();
//
//	return 0;
//}