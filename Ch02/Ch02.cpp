//����01 �⺻ ���

//#include <iostream>
//
//int main()
//{
//	std::cout << "hello World";
//	std::cout << "hello World\n";
//	std::cout << "1 + 2=" << 1 + 2 << "�Դϴ�\n";
//	std::cout << "������ endl�ε� ����" << std::endl;
//
//	return 0;
//}

//����02 �⺻ �Է�

//#include <iostream>
//int main()
//{
//	int num = 0;
//	std::cout << "ǥ�� ��� Ȯ��!" << std::endl;
//	std::cout << "�� �Է�:";
//	std::cin >> num;
//	std::cout << "�Է��� �� : " << num << std::endl;
//	return 0;
//}


//����03 �⺻ ���(���Ĺ��� ���� ��밡���� cout)

//#include <iostream>
//int main()
//{
//	int num = 20;
//	std::cout << "Hello World!" << std::endl;
//	std::cout << "Hello " << "World" << std::endl;
//	std::cout << num << ' ' << 'A' << "hello world" << std::endl;
//	std::cout << ' ' << 3.14 << std::endl;
//	return 0;
//}


//����04 ���� �� �Է� �ޱ�

//#include <iostream>
//int main()
//{
//	int x,y,z;
//	std::cout << "������ �Է��ϼ��� : ";
//	std::cin >> x >> y >> z;
//	std::cout << "�Է��� 3���� �������� :";
//	std::cout << x << y << z << std::endl;
//
//	return 0;
//}


//����05 

//#include <iostream>
//int main()
//{
//	char name[100];
//	char lang[100];
//
//	std::cout << "����� �̸��� �����Դϱ�? ";
//	std::cin >> name;
//	std::cout << "�����ϴ� ���α׷��� ���� �����ΰ���? ";
//	std::cin >> lang;
//
//	std::cout << "�� �̸��� " << name << "�Դϴ�" << std::endl;
//	std::cout << "�����ϴ� ���� " << lang << "�Դϴ�" << std::endl;
//
//	return 0;
//}

//���� 1

//����ڷκ��� �� 5���� ������ �Է� �޾Ƽ�, ������ ����ϴ� ���α׷��� �ۼ��� ����.
//��, ���α׷��� ������ ������ ���� �̷����� �Ѵ�
//
//- ������ �� -
//1��° ���� //�Է� : 1
//2��° ���� �Է� : 2
//3��° ���� �Է� : 3
//4��° ���� �Է� : 4
//5��° ���� �Է� : 5
//�հ� : 15

//#include<iostream>
//int main()
//{
//	int a, b, c, d, e;
//	std::cout << "5���� ������ �Է�: ";
//	std::cin >> a >> b >> c >> d >> e;
//    std::cout << "1��° ����: " << a << std ::endl;
//	std::cout << "2��° ����: " << b << std::endl;
//	std::cout << "3��° ����: " << c << std::endl;
//	std::cout << "4��° ����: " << d << std::endl;
//	std::cout << "5��° ����: " << e << std::endl;
//	return 0;
//}

//���� 2
//���α׷� ����ڷκ��� �̸��� ��ȭ��ȣ�� ���ڿ� ���·� �Է¹޾Ƽ�, �Է¹��� �����͸�
//�״�� ����ϴ� ���α׷��� �ۼ��� ����
//#include<iostream>
//int main()
//{
//	char name[100];
//	char num[100];
//
//	std::cout << "����� �̸���?";
//	std::cin >> name;
//		std::cout << "����� ��ȭ��ȣ��?";
//		std::cin >> num;
//	std::cout << " �̸���?" << name << std::endl;
//	std::cout << " ��ȭ��ȣ��?" << num << std::endl;
//	return 0;
//}

//���� 3

//���ڸ� �ϳ� �Է¹޾Ƽ� �� ���ڿ� �ش��ϴ� �������� ����ϴ� ���α׷��� �ۼ��غ���
//#include<iostream>
//int main()
//{
//	int x, y, z;
//	y++;
//	z = x * y;
//	std::cout << "���� �Է��Ͻÿ�";
//	std::cin >> x;	
//	std::cout << "�Է��Ѱ��� ��������" << z << std::endl;
//	
//		
//	return 0;
//}

//���� 4

//�Ǹſ����� �޿� ��� ���α׷��� �ۼ��� ����.�� ȸ��� ��� �Ǹſ����� �Ŵ� 50������
//�⺻ �޿��� ��ǰ �Ǹ� ������ 12 % �� �ش��ϴ� ���� �����Ѵ�.���� �� �μ���� ģ���� �̹��� ��ǰ
//�Ǹ� �ݾ��� 100�����̶��, 50 + 100 * 0.12 = 62, ���� 62������ �޿��� ���޹޴´�
//��, �Ʒ��� ������ ������ ���̵��� �̷��� �޿��� ����� - 1�� �ɋ����� ��ӵǾ�� �Ѵ�
//
//- ���� �� -
//�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end) : 100
//�̹� �� �޿� : 62����
//�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end) : 200
//�̹� �� �޿� : 200����
//�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end) : -1
//���α׷��� �����մϴ�.
//#include<iostream>
//int main()
//{
//	
//	int money = 0;
//	int salary;
//	while (true)
//	{
//		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end)";
//			std::cin >> money;
//			if (money == -1)
//				break;
//			salary = 50 + money * 0.12;
//
//			std::cout << "�̹��� �޿�: " << salary << std::endl;
//	}
//	std::cout << "���α׷��� �����մϴ�" << std::endl;
//	return 0;
//}


//����06 �Լ������ε� �⺻
//#include<iostream>
//int sum(int a, int b)
//{
//	return a + b;
//}
//int sum(int a, int b, int c)
//{
//	return a + b + c;
// }
//double sum(double a, double b)
//{
//	return a + b;
//}
//int main()
//{
//	std::cout << "������ ��: " << sum(1, 2) << std::endl;
//	std::cout << "������ ��: " << sum(1, 2,3) << std::endl;
//	std::cout << "������ ��: " << sum(1.1,2.2) << std::endl;
//	return 0;
//}

//����07 �Լ� �����ε�
//#include<iostream>
//void func()
//{
//	std::cout << "func()called!" << std::endl;
//
//}
//void func(char c)
//{
//	std::cout << "func(char)called!" << std::endl;
//
//}
//void func(int a, int b)
//{
//	std::cout << "func(int a int b)called!" << std::endl;
//
//}
//int main()
//{
//	func();
//	func('A');
//	func(12, 13);
//	return 0;
//}

////����
////���� main�Լ����� �ʿ�� �ϴ� swap�Լ��� �����ε� �غ�����
//#include<iostream>
//void swap(int *p1, int *p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//void swap(char *p1, char *p2)
//{
//	char tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//
//int main()
//{
//	int num1 = 20, num2 = 30;
//	swap(&num1, &num2);
//	std::cout << num1 << ' ' << num2 << std::endl;
//
//	
//	
//	char ch1 = 'A', ch2 = 'z';
//	swap(&ch1, &ch2);
//	std::cout << ch1 << ' ' << ch2 << std::endl;
//
//	return 0;
//}


////����8 �Լ��� ����Ʈ��
//#include<iostream>
//
//int sum(int a = 10, int b = 20)
//{
//	return a + b;
//}
//int main()
//{
//	std::cout << "�������� x: " << sum() << std::endl;
//	std::cout << "�������� 1: " << sum(1) << std::endl; //�Ű����� �������� ���ڰ����� ���� �� ���� ���ʺ��� ���� �׷��� 20+1=21
//	std::cout << "�������� 2: " << sum(1,2) << std::endl;
//	return 0;
//}

////����9 ����Ʈ���� �κ�����
//#include<iostream>
//int BoxVolume(int length=1, int width = 1, int height = 2)
//{
//	return length * width* height;
//}
//int main()
//{
//	std::cout << "[3,3,3]" << BoxVolume(3, 3, 3) << std::endl;
//	std::cout << "[5,5,D]" << BoxVolume(5,5) << std::endl;
//	std::cout << "[D,D,D]" << BoxVolume() << std::endl;
//	return 0;
//}

//����- ����9�� ���ǵ� �Լ� BoxVolume�� �Ű������� ����Ʈ �� ���� ���°� �ƴ�
//�Լ� �����ε� ���·� �籸���غ�����, main�Լ��� �������� �ʾƾ� �ϸ�, ���� ����� �����ؾ��մϴ�.




//����10 inline �Լ� 
//�Ϲ��Լ��� ȣ�⸮�Ͽ� ���� ������� �߻��� ���� �ֱ� ������
//�ڵ� ���ο� �Լ��� ������ ���� �����ϴ� ���
// �ӵ������ ���� ���

//#include<iostream>
//inline int SQARE(int x)
//{
//	return x;
//}
//int main()
//{
//	std::cout << SQARE(5) << std::endl;
//	std::cout << SQARE(12) << std::endl;
//	return 0;
//}

//����11- namespace�⺻
//namespace�� �Լ��� ������ �̸��浹�� �����ϱ� ���ؼ� ���� �������
//namespace�� ���ؼ� ������ �̸��� �Լ��� ������ ������ �����ϴ�.

//#include<iostream>
//namespace name01
//{
//	void func()
//	{
//		std::cout << "name01���� func() �Լ�" << std::endl;
//
//	}
//}
//namespace name02
//{
//	void func()
//	{
//		std::cout << "name02���� func()�Լ�" << std::endl;
//	}
//}
//int main()
//{
//	name01::func();
//	name02::func();
//	return 0;
//}
//void name01::func()
//{
//	std::cout << "name01���� func()" << std::endl;
//}
//void name02::func()
//{
//	std::cout < "name02���� func()" << std::endl;
//}

////����12 ��ø namespace
//#include <iostream>
//namespace Parent
//{
//	int num = 2;
//	namespace subOne
//	{
//		int num = 3;
//	}
//	namespace subTwo
//	{
//		int num = 5;
//
//		namespace son
//		{
//			int num = 10;
//		}
//	}
//}
//int main()
//{
//	std::cout << Parent::num << std::endl;
//	std::cout << Parent::subOne::num << std::endl;
//	std::cout << Parent::subTwo::num << std::endl;
//	namespace ABC = Parent::subTwo::son;
//	std::cout << ABC::num << std::endl;
//	return 0;
//}


//����13 using�⺻
//using�� ���ؼ� ���ֻ���ϴ� namespace�� ����̳� namespace �̸���ü�� �����ϰ� ����Ҽ��� �ִ�.

//#include<iostream>
////using std::cin;      //std���ӽ����̽��� cin��ɸ� using
////using std::cout;    //std���ӽ����̽��� cout��ɸ� using
////using std::endl;    //std���ӽ����̽��� endl��ɸ� using
//using namespace std;  //std�������̽� ��ü����� using
//int main()
//{
//	int num = 20;
//	cout << "hello world" << num << std::endl;
//	cin >> num;
//
//	return 0;
//}

//����14- ���������� �����ϱ�����::(�������� ������)
//::(��������������)�� ���ؼ� ���������� ������ ���� �ִ�
//
//
//#include<iostream>
//using namespace std;
//
//int val = 100; //��������
//int main()
//{
//	int val = 20; //��������
//	val += 3;
//	::val += 7;
//	cout << "�������� val:" << val << endl;
//	cout << "�������� val: " << ::val << endl;
//}



//����01- true/fulse ������� ���

#include<iostream>
using namespace std;

int main()
{ 
	cout << "true" << true << endl;
	cout << "false: " << false << endl;
	cout << "sizeof 1: " << sizeof(1) << endl; //���ͷ�1�� �⺻int�ڷ���
	cout << "sizeof 1: " << sizeof(0) << endl; // ���ͷ�0�� �⺻ int�ڷ���
	cout << "sizeof true: " << sizeof(true) << endl; //true�� size�� 1byte
	cout << "sizeof false : " << sizeof(false) << endl; // false size�� 1byte

	if (-1)
	{
		cout << "-1�� ���̳׿�?" << endl;

	}
	return 0;
}