////01 ������ �����ε� �⺻ 
//
////��ü�� ���꿡�� ���Ǵ� ������(+,-,*,/...)���� �����ε��Ͽ�
////����� �� �ִ�.
//#include<iostream>
//using namespace std;
//
//int num = 0; //��������
//class Power
//{
//private:
//	int kick;
//	int punch;
//
//public:
//	Power(int k=0, int p=0) : kick(k),punch(p)
//	{
//		cout << ++num << " 2������ ������ȣ��" << endl;
//	}
//	void Show()
//	{
//		cout <<"kick= " << kick << ",punch= " << punch << endl;
//	}
//	//+�������Լ� �߰�
//	Power operator+(Power op2)
//	{
//		Power tmp;        //�ӽð�ü����
//		tmp.kick = this->kick + op2.kick; //kick ����
//		tmp.punch = this->punch + op2.punch; //punch ����
//		cout << ++num << "operator+�������Լ� ȣ��" << endl;
//		return tmp;                          //tmp�� ��ȯ
//
//	}
//	//�����Լ� �����ε� �����
//	Power operator - (Power op2)
//	{
//		Power tmp;
//		tmp.kick = this->kick - op2.kick;
//		tmp.punch = this->punch - op2.punch;
//		cout << ++num << "operator-�������Լ� ȣ��" << endl;
//		return tmp;
//	}
//	//��������� �����
//	Power(const Power&copy)
//	{
//		this->kick = copy.kick;
//		this->punch = copy.punch;
//		cout << ++num << "��������� ȣ��" << endl;
//	}
//	//����Ʈ ���Կ����� Ȯ��
//	void operator=(Power ob2)  //power ob2=�̸����� ��ü
//	{
//		this->kick = ob2.kick;
//		this->punch = ob2.punch;
//		cout << +num << "operator= �Լ� ȣ��" << endl;
//	}
//};
//int main()
//{
//	Power a(3, 5), b(4, 6), c, d;
//	c = a + b; //power ��ü�� a,b�� +���� // c.operator= a.operator+(b)
//	d = b - a;//d. operator= b.operator-(a)
//	a.Show();
//	b.Show();
//	c.Show();
//	return 0;
//}

//
////����
//#include<iostream>
//using namespace std;
//class Simple
//{
//public:
//	int num;
//public:
//	Simple(int n=0) :num(n){}
//	void Shownum() { cout << "num=" << num << endl; }
//	//Simple operator+(Simple ob) �����
//	Simple operator + (Simple ob)
//	{
//
//	}
//	//Simple operator-(Simple ob) �����
//	Simple operator - (Simple ob)
//	{
//
//	}
//	//Simple operator*(Simple ob) �����
//	Simple operator * (Simple ob)
//	{
//		Simple tmp;
//		tmp = this->num*ob.num;
//		return tmp;
//	}
//	//Simple operator/(Simple ob) �����
//	Simple operator / (Simple ob)
//	{
//
//	}
//	//Simple operator=(Simple ob) �����
//	Simple operator = (Simple ob)
//	{
//		this->num = ob.num;
//	}
//
//};
//int main()
//{
//	Simple a(30), b(20), c, d, e, f;
//	c = a + b;
//	d = a - b;
//	e = a * b;
//	f = a / b;
//	return 0;
//}


////����
//#include<iostream>
//using namespace std;
//class simple
//{
//public:
//	int num;
//public:
//	simple(int n) : num(n) {}
//	void shownum() { cout << "num= " << num << endl; }
//	//��ġ������ �����ε�
//	simple operator++()
//	{
//		this->num++;
//		simple tmp = &this;               //sumple tmp= �ְ�ü�� �� ->���������ȣ��
//		return tmp;                       //tmp ��ü�� ���� ȣ���ߴ� main�Լ�Ư���������ٰ�
//		                                     //�����ϴ� �������� main�Լ��κп� ������ڰ� ȣ��ȴ�.
//	}
//};
//
//int main()
//{
//	simple a(10), b;  //1�����ڸ� �޴� �����Լ� 2��ȣ��
//	b = ++a;   //b.operator = (a.operator())
//	a.shownum();
//	b.shownum();
//	return 0;
//}


//03 ������ �����ε� ��ġ������

#include<iostream>
using namespace std;
class simple
{
public:
	int num;
public:
	simple(int n=0): num(n){}
	void shownum()
	{
		cout << "num= " << num << endl;
	}
	//��ġ������(x--,x++)�����ε��Լ� ����
	simple operator++(int)
	{
		simple tmp = *this;   //tmp�� ������ a��ü�� ���� ��������ڿ� ���� �ʱ�ȭ
		this->num++;           //�ְ�ü�� num�� ���� ������Ų��
		return tmp;              //������ ���� ������ �ִ� tmp�� �����Ѵ�
	}
};
int main()
{
	//��ġ������ ++a:a�������� 1������ �� �ٸ�����
	//��ġ���� a++ : �ٸ� ������ ó�� ���� ���Ŀ� ���� ����/����
	simple a(10), b;
	b = a++;
	a. shownum();
	b.shownum();
	return 0;
}