//01 ��� �⺻

//#include <iostream>
//using namespace std;
//class Super
//{
//private:
//	int num1;
//public:
//	Super() :num1(0) { cout << "SuperClass ������ ȣ��" << endl; }
//	void SetNum(int n){num1 = n;}
//	void ShowNum() { cout << "num1 : " << num1 << endl; }
//};
//class Sub : public Super	//: public Super ->SuperŬ�����κ���
//{							// ��ӹްڴ� 
//public:
//	Sub() { cout << "SubClass ������ȣ��" << endl; }
//};
//int main()
//{
//	Sub obj;
//	obj.SetNum(10);
//	obj.ShowNum();
//	return 0;
//}


//02 ��� �⺻ + Ȯ��

//#include <iostream>
//using namespace std;
//class Super
//{
//private:
//	int num1;
//public:
//	Super() :num1(0) { cout << "SuperClass ������ ȣ��" << endl; }
//	void SetNum(int n) { num1 = n; }
//	void ShowNum() { cout << "num1 : " << num1 << endl; }
//};
//class Sub : public Super	//: public Super ->SuperŬ�����κ���
//{							// ��ӹްڴ�
//private:
//	int num2;	//Ȯ��� �������
//public:
//	Sub() { cout << "SubClass ������ȣ��" << endl; }
//	void SetNum2(int n) { num2 = n; }//Ȯ��� ����Լ�
//	void BShowNum() //Ȯ��� ����Լ�
//	{ 
//		ShowNum();	//����Ŭ������ ��� �Լ� ��밡��
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


//03 �������̵� 

//#include <iostream>
//using namespace std;
//class Animal
//{
//public:
//	void sound() { cout << "�Ҹ��� ���ϴ�" << endl; }
//};
//class Cat : public Animal
//{
//public:
//	void sound() { cout << " �߿� �Ҹ��� ���ϴ�" << endl; }
//};
//class Dog : public Animal
//{
//public:
//	void sound() { cout << " �۸� �Ҹ��� ���ϴ�" << endl; }
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



//��ӹ���

//����!!


//���� 1 - ��� ���� ����

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Computer
//{
//private:
//	string ProdNum;
//	string CPUSpec;
//	string RamSpec;
//	string DiskSpec;
//public:
//Computer(string p, string c, string r, string d)
//{
//	ProdNum = p; CPUSpec = c; RamSpec = r; DiskSpec = d;
//}
//void PowerOn(){cout << "������ �մϴ�" << endl;}
//void PowerOff(){cout << "������ ���ϴ�" << endl;}
//};
//class Notebook :public Computer
//{
//public:
//	int battery;
//public:
//	Notebook(string p, string c, string r, string d, int bat) :Computer(p, c, r, d)
//	{
//		battery = bat;
//	}
//	void move()
//	{
//		cout << "�̵��� �մϴ�" << endl;
//		battery--;
//	}
//	void showbattery()
//	{
//		cout << "�������͸�����" << battery<< "% �Դϴ�" << endl;
//	}
//};
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
//		cout << "���� ���ϴ�" << endl;
//		battery--;
//	}
//};
//int main()
//{
//	Notebook LGGram("1-2-3-4", "i7", "16G", "1Tb", 100);
//	LGGram.PowerOn();
//	LGGram.move();
//	LGGram.showbattery();
//	LGGram.PowerOff();
//	cout << endl;
//
//	Tablet Ipad("11-22-33","i5","8G","256",100,"Pen01234");
//	Ipad.PowerOn();
//	Ipad.move();
//	Ipad.write();
//	Ipad.showbattery();
//	Ipad.PowerOff();
//	return 0;
//}



//04 UP/DOWN Casting

//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	void Sleep() { cout << "Sleep" << endl; }
//};
//class Student : public Person
//{
//public:
//	void Study() { cout << "Study" << endl; }
//};
//class PartTimeStudent : public Student
//{
//public:
//	void Work() { cout << "Work!" << endl; }
//};
//int main()
//{
//	//No Casing
//	Person * ptr1 = new Person();
//	ptr1->Sleep();
//	cout << endl;
//	Student* ptr2 = new Student();
//	ptr2->Sleep();
//	ptr2->Study();
//	cout << endl;
//	PartTimeStudent * ptr3 = new PartTimeStudent();
//	ptr3->Sleep();
//	ptr3->Study();
//	ptr3->Work();
//
//	//Upcasing
//	//��Ӱ��迡 �ִ� ��ü�� ����� ����� ����ϱ� ���� ���
//	//Ȯ��� ��������� �Լ����� ������ �Ұ����ϴ�
//
//	cout << "Upcasting"<<endl;
//	ptr1 = ptr2;	//Upcasing
//	ptr1->Sleep();
//
//	ptr1 = ptr3;
//	ptr1->Sleep();
//
//	ptr2 = ptr3;
//	ptr2->Sleep();
//	ptr2->Study();
//
//	//�ٿ� ĳ����
//	//������ü�� Ȯ��� ����Լ��� ������ �����ϱ� ���ؼ� ���
//	//ptr1 = ptr3;
//	//ptr1->Sleep();
//	
//	PartTimeStudent * down = (PartTimeStudent *)ptr1;
//	
//	down->Sleep();
//	down->Study();
//	down->Work();
//
//	delete ptr1, ptr2, ptr3;
//
//	return 0;
//}


//05 �����Լ�

//�����Լ��� ��Ӱ��迡 �ִ� ��ü�� ��ĳ���� �ϴ� ��쿡
//���� �������̵��� ��� �Լ��� ����� �� �ֵ��� �ϴ� ���


//#include <iostream>
//using namespace std;
//
//class Animal
//{
//public:
//	//virtual void sound() { cout << "�Ҹ��� ���ϴ�" << endl; } //�����Լ����
//	void sound() { cout << "�Ҹ��� ���ϴ�" << endl; }
//};
//class Dog:public Animal
//{
//public:
//	void sound() { cout << "�۸� �Ҹ��� ���ϴ�" << endl; }
//};
//class Siba :public Dog
//{
//public:
//	void sound() { cout << "Siba���� �۸� �Ҹ��� ���ϴ�" << endl; }
//};
//int main()
//{
//	Animal * dog1 = new Siba;	//��ĳ����
//	dog1->sound();	
//
//	Dog * dog2 = new Siba;
//	dog2->sound();
//
//	dog2->Animal::sound();
//	dog2->Dog::sound();
//	dog2->sound();
//
//	return 0;
//}


//06 �����ε� vs �������̵�

//�����ε�
//����Ŭ�������� �ϳ��� ����� ������ ����Լ��� ������ ���¸� �پ��ϰ� �����Ҽ�
//�ֵ��� ����� ���

//�������̵�
//��Ӱ��迡�� ����Ŭ�����κ��� �����޴� ����Լ��� �ٽ� ���ļ� ����ϴ� ���

////����
//
//#include <iostream>
//using namespace std;
//
////���ڰ���
//class Calculator {
//public:
//	int sum(int x, int y)	//�Լ� �����ε�
//	{
//		cout << "���� ���� int ���" << endl;
//		return x + y;
//	}
//	double sum(double x, double y)//�Լ� �����ε�
//	{
//		cout << "���� ���� double ���" << endl;
//		return x + y;
//	}
//};
////���п� ����
//class SientificCal : public Calculator
//{
//public:
//	int sum(int x, int y) //�������̵�
//	{
//		cout << "���п� ���� int ���" << endl;
//		return x + y;
//	}
//	double sum(double x, double y)//�������̵�
//	{
//		cout << "���п� ���� double ���" << endl;
//		return x + y;
//	}
//	int sum(int x, int y, int z)//��ӹ��� sum�Լ��� �����ε�
//	{
//		cout << "���п� ���� ��ӹ��� sum�Լ� �����ε�" << endl;
//		return x + y + z;
//	}
//};
//int main()
//{
//	SientificCal cal;
//	cal.sum(10, 20, 30);
//	cal.sum(10, 20);
//	cal.sum(1.1, 2.2);
//	return 0;
//}


//07 ���������Լ�

//���������Լ��� �ش�Ŭ������ ���ʿ��ϰ� ��ü�� �������� ���ϵ��� �����ϰ�
//����Ŭ�����θ� ��ü�� �����Ͽ� ����Ҽ� �ֵ��� �ϴ� ���
// virtual ��ȯ�� �Լ���(��������) = 0 

//#include <iostream>
//using namespace std;
//
//class moonbanggu
//{
//public:
//	virtual void write() =0;	//���������Լ�
//	virtual void erase() {};	//�����Լ�
//};
//class sharp : public moonbanggu
//{
//	void write()
//	{
//		cout << "������ ���ϴ�" << endl;
//	}
//	void erase()
//	{
//		cout << "������ ���찳�� ����ϴ�" << endl;
//	}
//};
//int main()
//{
//	moonbanggu * moon = new sharp();
//	moonbanggu test;	//���������Լ������� ���ؼ� ��ü���� �Ұ���
//	moon->write();
//	moon->erase();
//	return 0;
//}


////08 ����Ҹ���
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class SoSimple
//{
//private:
//	string *ptr;
//public:
//	SoSimple()
//	{
//		ptr = new string;
//	}
//	 ~SoSimple()
//	{
//		cout << "SoSimple �Ҹ��� ȣ��" << endl;
//		delete  ptr;
//	}
//};
//class Sub :public SoSimple
//{
//private:
//	string * ptr2;
//public:
//	Sub(){ptr2 = new string;}
//	~Sub()
//	{
//		cout << "sub �Ҹ��� ȣ��" << endl;
//		delete ptr2;
//	}
//};
//int main()
//{
//	SoSimple * p = new Sub;
//	delete p;
//	return 0;
//}
//
//
//
//







