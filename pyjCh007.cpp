//01 This �⺻

//#include <iostream>
//using namespace std;
//
//class Point
//{
//private:
//	int xpos;
//	int ypos;
//public:
//	Point() :xpos(0), ypos(0)
//	{
//		cout << "��ü�ּ�" << this << endl;//This�� �����Ǿ��� ��ü�� �ּҸ� �����ϰ��ִ�
//	}
//};
//int main()
//{
//	Point p1;
//	Point p2;
//	cout << "P1 �ּ� = " << &p1 << endl;
//	cout << "P2 �ּ� = " << &p2 << endl;
//}


//02 This �⺻

//#include <iostream>
//using namespace std;
//class SoSimple
//{
//private:
//	int num;
//public:
//	SoSimple(int num)
//	{
//		this->num = num;//�Ű�������� ����������� ���Ͻ� this�� �̿��Ͽ� ��������
//		cout << "num = " << num << ",";
//		cout << "address = " << this << endl;
//	}
//	void ShowSimpleData()
//	{
//		cout << num << endl;
//	}
//	SoSimple* GetThisPointer()//����Լ��� �̿��ؼ� this(��ü�ּ�)�� ��ȯ�Ҽ� �ִ�
//	{
//		return this;
//	}
//};
//int main()
//{
//	SoSimple sim1(100);
//	SoSimple * ptr1 = sim1.GetThisPointer();//SoSimple * ptr = (SoSimple *)sim1���ּҰ�
//	cout << ptr1 << ", ";
//	ptr1->ShowSimpleData();
//
//	SoSimple sim2(200);
//	SoSimple * ptr2 = sim2.GetThisPointer();
//	cout << ptr2 << ", ";
//	ptr2->ShowSimpleData();
//	return 0;
//}


//03 Self-Reference �� ��ȯ


//#include <iostream>
//using namespace std;
//
//class SelfRef
//{
//private:
//	int num;
//public:
//	SelfRef(int n) :num(n)
//	{
//		cout << "��ü ����" << endl;
//	}
//	SelfRef& Adder(int n)
//	{
//		num += n;
//		return *this;
//	}
//	SelfRef& ShowTwoNumber()
//	{
//		cout << num << endl;
//		return *this;
//	}
//};
//int main()
//{
//	SelfRef obj(3);
//	SelfRef& ref = obj.Adder(2);
//
//	obj.ShowTwoNumber();
//	ref.ShowTwoNumber();
//	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
//	return 0;
//}


//04 string Ŭ����

//#include <iostream>
//#include <string>	//string Ŭ���� ����� ���� ����
//using namespace std;
//int main()
//{
//	string str;	//�� ���ڿ��� ���� ��Ʈ�� ��ü ����
//	string address("�뱸������ ���ﵿ 111-222 ����");//���ڿ��� �Է¹޾� string ��ü�� ����
//	string copyAddress(address); //string copyAddress=address;
//	
//	char text[] = { 'L','o','v','e','\0'};
//	string title(text);
//
//	cout << str << endl;
//	cout << address << endl;
//	cout << copyAddress << endl;
//	cout << title << endl;
//	return 0;
//}


//05 String Ŭ���� getline �Լ�

//#include <iostream>
//#include <string>	//string Ŭ���� ����� ���� ����
//using namespace std;
//int main()
//{
//	string names[5];	//string ��ü �迭 ����
//	for (int i = 0; i < 5; i++)	//�� 5�� �ݺ�
//	{
//		cout << "�̸� : ";
//		getline(cin, names[i], '\n');	//ǥ���Է½�Ʈ��(cin)�������� '\n'�� ���ö�����
//	}									//names[i]��° �迭��ҿ� ���Է�
//	string latter = names[0];			//�迭����� ù��° ���ڿ� latter�� ����
//	for (int i = 1; i < 5; i++)			//2��° ��Һ��� ���������� �ݺ�
//	{
//		if (latter < names[i])			//���� �������� �� ���� latter ���� names[i]��ũ�ٸ�
//		{								//���� ���������� �ڿ� �ִٴ� �ǹ�
//			latter = names[i];			//latter�� names[i]�� ���ڿ� ����
//		}
//	}
//	cout << "�������� ���� �ڿ� ������ �̸��� : " << latter << endl;
//	return 0;
//
//}

//���� 

//�̸��� �й��� �Է� ���� string name[3] , string studentID[3] �� �����
//������� ����غ�����

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string name[3]; string studentID[3];
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "�̸� : ";
//		getline(cin, name[i], '\n');
//		cout << "�й� : ";
//		getline(cin, studentID[i], '\n');
//	}
//	cout << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "�̸� : " << name[i] << endl;
//		cout << "�й� : " << studentID[i] << endl;
//	}
//
//	return 0;
//}


//06 ���ڿ� �ڸ���substr()

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string str;
//	cout << "���ڿ� �Է� : ";
//	getline(cin, str, '\n');
//	int cnt = 1;
//	
//	for (int i = 0; i <= str.length(); i++) //.length() : ���ڿ��� ���� ��������ȯ
//	{
//
//		cout << str.substr(str.length()-i, 1);//stbstr(����Idx, ����)
//	}
//	cout << endl;
//
//	return 0;
//}


//07 ���ڿ� ȸ��

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string s;
//	cout << "���ڿ� �Է�(�����Է�) : " << endl;
//	getline(cin, s, '\n');
//	int len = s.length();
//	for (int i = 0; i < len; i++)
//	{
//		string first = s.substr(0, 1);	//���� �չ��� 1���� ���ڿ��� �и�
//		string sub = s.substr(1, len - 1);//�ι�° ���ں��� ������ ���ڵ��� ���ڿ��� �и�
//		s = sub + first;	//�� ���ڿ��� �����Ͽ� ���ο� ���ڿ��� ����
//		cout << s << endl;	//������ ���ڿ� ���
//	}
//	return 0;
//}


//08 string �� find�Լ�

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string s;
//	cout << "���ڿ� �Է� : ";
//	getline(cin, s, '\n');
//
//	//find(�˻��� ���ڿ�, ����idx);
//	int idx = s.find('a', 0);
//	cout << idx << endl;
//
//	//find �� �˻��� ���ڰ� ������ -1�� ��ȯ
//	idx = s.find("@", 0);
//	cout << idx << endl;
//	//find �� ���� ���� ��ü �˻�
//	int curIdx = -1;
//	for (int i = 0; i < s.length(); i++)
//	{
//		curIdx = s.find('a', curIdx + 1);
//		if (curIdx == -1)
//			break;
//		cout << curIdx << " ��° idx" << endl;
//	}
//	cout << "���� �˻��Ǿ����ϴ�" << endl;
//	return 0;
//}


//09 ���ڿ��� ���ڷ� ��ȯ stoi() 

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string str1, str2;
//	cout << "���ڿ� �Է� 1 : ";
//	getline(cin, str1, '\n');
//	cout << "���ڿ� �Է� 2 : ";
//	getline(cin, str2, '\n');
//	cout << "�� ���ڿ��� �ܼ� ���� " << str1 + str2 << endl;
//	cout << "�� ���ڿ��� int������ ��ȯ " << stoi(str1) + stoi(str2) << endl;
//
//	return 0;
//}


//10 replace(������ġ , ���� , �ٲܹ��ڿ�)

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string str;
//	cout << "���ڿ� �Է� : ";
//	getline(cin, str, '\n');
//	str.replace(3, str.length(), "ABC");
//	cout << "�Է��� ���ڿ� : " << str << endl;
//	return 0;
//}


//11 �̿ϼ��� Ŭ���� �ϼ��غ�����

#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	string name;
public:
	Person(){} //��ü�迭�� ����� ���ؼ� ����Ʈ ������ �߰�
	Person(string name) { this->name = name; }
	string getName() { return name; }
~person()
{
cout<<"Person��ü�Ҹ�"<<endl;
}
};
class Family
{
private:
	Person * p;
	int size;
	string FamilyName;
	//Family ���� �����ҿ뵵�� ��� ����(FamilyName)�� �߰�
public:
	Family(string name, int size)
	//Person ũ�⸦ size��ŭ �����Ҵ��Ͽ� p�����Ϳ� ���ε�
	{
		FamilyName = name;
		this->size = size;
		p = new Person[size];
	}

	void show()
	{
		for (int i = 0; i < size; i++)
			cout << p[i].getName() << endl; //���� �йи� �������� ���
	}
	void setName(int num, string Person)
	{
		p[num] = Person;
	}
	//���� �迭���Idx �ް� Person���� ���� ���ڿ��� �ش� Idx�� ����
	~Family()
	{
        cout<<"Family��ü�Ҹ�!" <<endl;
		delete[] p;
	}
	//���� p�� ���ε��� ���������� ����
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










