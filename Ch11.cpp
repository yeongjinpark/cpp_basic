//01 ������ �����ε� �⺻

//��ü�� ���꿡�� ���Ǵ� ������(+,-,*,/...)���� �����ε��Ͽ�
//����� �� �ִ�

//#include <iostream>
//using namespace std;
//
//int num = 0; //��������
//
//class Power
//{
//private:
//	int kick;
//	int punch;
//public:
//	Power(int k = 0, int p = 0) :kick(k), punch(p) 
//	{
//		cout << ++num << " 2������ ������ȣ��" << endl;
//	}
//	void Show() { cout << "Kick=" << kick << ",Punch=" << punch << endl;}
//	//+������ �Լ� �߰�
//	Power operator+(Power op2)//Power op2=b;<<���������ȣ��
//	{
//		Power tmp;		//�ӽð�ü ����
//		tmp.kick = this->kick + op2.kick;		// Kick ����
//		tmp.punch = this->punch + op2.punch;	//Punch ����
//		cout << ++num << " Operator+�������Լ� ȣ��" << endl;
//		return tmp;		 //tmp�� ��ȯ
//	}
//	//�����Լ� �����ε��Լ� �����
//	Power operator-(Power op2)
//	{
//		Power tmp;// 2������ ������ ȣ��
//		tmp.kick = this->kick - op2.kick;
//		tmp.punch = this->punch - tmp.punch;
//		cout << ++num << " Operator-�������Լ� ȣ��" << endl;
//		return tmp;
//	}
//	//����Ʈ ��������� Ȯ��
//	Power(const Power & copy)
//	{
//		this->kick = copy.kick;
//		this->punch = copy.punch;
//		cout << ++num << " ��������� ȣ��" << endl;
//	}
//	//����Ʈ ���Կ����� Ȯ��
//	void operator=(Power ob2)//Power ob2=�̸������ӽð�ü
//	{
//		this->kick = ob2.kick;
//		this->punch = ob2.punch;
//		cout << +num << " Operator=�Լ� ȣ��" << endl;
//	}
//};
//int main()
//{
//	Power a(3, 5), b(4, 6), c , d;
//	c = a + b;//	c.operator=(a.operator+(b))
//	d = b - a;//	d.operator=(b.operator-(a))
//	a.Show();
//	b.Show();
//	c.Show();
//	return 0;
//}



//����

//#include <iostream>
//using namespace std;
//class Simple
//{
//public:
//	int num;
//public:
//	Simple(int n = 0) :num(n) {}
//	void ShowNum() { cout << "num=" << num << endl; }
//	//Simple operator+(Simple ob) �����
//	Simple operator+(Simple ob)
//	{
//		Simple tmp;
//		tmp=this->num + ob.num;
//		return tmp;
//	}
//	//Simple operator-(Simple ob) �����
//	Simple operator-(Simple ob)
//	{
//		Simple tmp;
//		tmp = this->num - ob.num;
//		return tmp;
//	}
//	//Simple operator*(Simple ob) �����
//	Simple operator*(Simple ob)
//	{
//		Simple tmp;
//		tmp = this->num * ob.num;
//		return tmp;
//	}
//	//Simple operator/(Simple ob) �����
//	Simple operator/(Simple ob)
//	{
//		Simple tmp;
//		tmp = this->num / ob.num;
//		return tmp;
//	}
//	//Simple operator=(Simple ob) �����
//	void operator=(Simple ob)
//	{
//		this->num = ob.num;	
//	}
//};
//int main()
//{
//	Simple a(30), b(20), c, d, e, f;
//	c = a + b;
//	d = a - b;
//	e = a * b;
//	f = a / b;
//	
//	c.ShowNum();
//	d.ShowNum();
//	e.ShowNum();
//	f.ShowNum();
//	return 0;
//}


//02 ������ �����ε� ��ġ������

//#include <iostream>
//using namespace std;
//class Simple
//{
//public:
//	int num;
//public:
//	Simple(int n=0) :num(n) {}
//	void ShowNum() { cout << "num = " << num << endl; }
//	//��ġ������ �����ε�
//	Simple operator++()
//	{
//		this->num++;
//		Simple tmp = *this;	//Simple tmp=�ְ�ü�ǰ� ->���������ȣ��
//		return tmp;//tmp��ü�ǰ��� ȣ���ߴ� main�Լ�Ư���������ٰ�
//					//�����ϴ°������� main�Լ��κп� ������ڰ� ȣ��ȴ�
//	}
//};
//int main()
//{
//	Simple a(10), b;	//1�����ڸ� �޴� �����Լ� 2�� ȣ��
//	b = ++a;// b.operator=(a.operator())
//	a.ShowNum();
//	b.ShowNum();
//	return 0;
//}


//03 ������ �����ε� ��ġ������

#include <iostream>
using namespace std;
class Simple
{
public:
	int num;
public:
	Simple(int n = 0) :num(n) {}
	void ShowNum() { cout << "num = " << num << endl; }
	//��ġ������(x--,x++)�����ε��Լ� ����
	Simple operator++(int)
	{
		Simple tmp = *this; //tmp�� ������ a��ü�� ���� ��������ڿ� ���� �ʱ�ȭ
		this->num++;		//�ְ�ü�� num�� ���� ������Ų��
		return tmp;			//������ ���� ������ �ִ� tmp�� �����Ѵ� 
	}
	//��ġ������++�Լ� �����
	//��ġ������--�Լ� �����
	//��ģ������--�Լ� �����
};
int main()
{
	//��ġ������ ++a :a�������� 1�����ѵ� �ٸ�����
	//��ġ������ a++ :�ٸ������� ó�� ���� ���Ŀ� ���� ����/����
	Simple a(10), b;
	b = a++;
	a.ShowNum();
	b.ShowNum();
	return 0;
}























