//11 �̿ϼ��� Ŭ���� �ϼ��غ�����

#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	string name;
public:
	Person() {} //��ü�迭�� ����� ���ؼ� ����Ʈ ������ �߰�
	Person(string name) { this->name = name; }
	string getName() { return name; }
	/*~person()
	{
		cout << "Person��ü�Ҹ�" << endl;
	}*/
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
		cout << "Family��ü�Ҹ�!" << endl;
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