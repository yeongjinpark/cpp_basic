//01 ����ó��

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, sum, average;
//	try
//	{
//		while (true)
//		{
//			cout << "���� �Է��ϼ���>>";
//			cin >> sum;
//			cout << "�ο����� �Է��ϼ���>>";
//			cin >> n;
//			if (n == 0)
//				throw n; // ���ܹ߻� catch(int x) ������� ����
//			average = sum / n;             //���ܰ� �߻��ϴ� ����...��/0->
//			cout << "�ο���: " << n << "����" << sum << "���" << average << endl;
//
//		}
//	}
//	catch (int x)
//	{
//		cout << "���ܹ߻�!!" << x << "�δ� �������� �����ϴ�" << endl;
//		average = 0;
//		cout << endl;
//		
//	}
//
//	cout << "�������" << endl;
//
//
//	return 0;
//}



////02 ����ó��
//#include<iostream>
//using namespace std;
//
//int getEXP(int base, int exp)     //getEXP �¼��� ���ϴ� �Լ�
//{
//	if (base <= 0 || exp <= 0)
//		throw"�������Ұ�";
//	int value = 1;
//	for (int n = 0; n < exp; n++)
//		value = value * base;
//	return value;
//}
//
//int main()
//{
//	int v = 0;
//	try {
//		v = getEXP(2, 3);
//		cout << "2�� 3����" << v << "�Դϴ�" << endl;
//		v = getEXP(2, -3);
//		cout << "2�� -3����" << v << "�Դϴ�" << endl;
//		
//	}
//	catch (const char * s)
//	{
//		cout << "���ܹ߻�!" << s << endl;
//	}
//	cout << "�������" << endl;
//	return 0;
//}



////
//#include<iostream>
//#include<string>
//using namespace std;
//
//class MyException         //����ڰ� ����� �⺻ ���� Ŭ���� ����
//{
//	int lineNo;
//	string func, msg;
//
//public:
//	MyException(int n, string f, string m)
//	{
//		lineNo = n; func = f; msg = m;
//	}
//	void print() { cout << func << ":" << lineNo << ',' << msg << endl; }
//};
//
//class DivideByZeroException : public MyException      //0���� ������ ���� Ŭ���� ����
//{
//public:
//	DivideByZeroException(int lineNO, string func, string msg)
//		:MyException(lineNO, func, msg){}
//};
//
//class InvalidInputException : public MyException {             //�߸��� �Է� ���� Ŭ���� ����
//public:
//	InvalidInputException(int lineNO, string func, string msg)
//		:MyException(lineNO, func, msg) {}
//};
//
//int main()
//{
//	int x, y;
//	try {
//		cout << "�������� �մϴ�. �� ���� ���� ������ �Է��ϼ���>>";
//		cin >> x >> y;
//		//if (x < 0 || y < 0)
//		//	throw InvalidInputException(33, "main()", "���� �Է� ���� �߻�");  //�ӽ� ��ü ����
//		if (y == 0)
//			throw DivideByZeroException(35, "main()", "0���� ������ ���ܹ߻�"); //�ӽ� ��ü ����
//		cout << (double)x / (double)y;
//	}
//	catch (DivideByZeroException &e)
//	{
//		cout << "test" << endl;
//	}
//	catch (InvalidInputException &e)
//	{
//		
//	}
//}