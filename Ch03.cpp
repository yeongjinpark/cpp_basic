//����01 - true/faluse ������� ���

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	cout << "true : " << true << endl;
//	cout << "false : " << false << endl;
//	cout << "sizeof 1 : " << sizeof(1) << endl;	//���ͷ� 1�� �⺻ int �ڷ���
//	cout << "sizeof 0 : " << sizeof(0) << endl; //���ͷ� 0�� �⺻ int �ڷ���
//	cout << "sizeof true : " << sizeof(true) << endl; //true�� size�� 1byte
//	cout << " sizeof false : " << sizeof(false) << endl; //false size�� 1byte
//
//	if (-1)
//	{
//		cout << "-1�� ���̳׿�??" << endl;
//	}
//	return 0;
//}

//����01 -true/false ������� ���
//#include<iostream>
//using namespace std;
//bool IsPositive(int num)
//{
//	if (num < 0)
//		return false;
//	else
//		return true;
//}
//int main()
//{
//	bool isPos;  //bool�� true/false�� �ֱ����� ��ġ(1byte ����)
//	int num;
//	cout << "InPut Number: ";
//	cin >> num;
//	isPos = IsPositive(num);
//	if (isPos)
//		cout << "Positive number" << endl;
//	else
//		cout << "Negative number" << endl;
//	return 0; 
//}

//����03- ������
//#include<iostream>
//using namespace std;
//int main()
//{
//	int num1 = 1234;
//	int &num2 = num1;
//
//	num2 = 4567;
//	cout << "num1 ���� ��: " << num1 << endl; //num1���� 1234�� �ʱ�ȭ
//	cout << "num2 �������� ��: " << num1 << endl; //������ num2�� num1���� �ʱ�ȭ
//	
//	cout << "num1 ������ �޸� �ּ�: " << &num1 << endl;
//    cout << "num2 ���������� �޸� �ּ�: " << &num2 << endl;
//	
//	return 0;
//}
//������ �⺻��Ģ
//01) ������� ����� �Ұ����ϴ�( int &ref = 20(X))
//02) �����ڴ� �ٷ� �ʱ�ȭ�ؼ� ����ؾ��Ѵ�. (int &ref(X))
//03) �����ڴ� NULL�� �ʱ�ȭ �ؼ��� �� �ȴ�. (int &ref=NULL(X))

//����04 �����ڿ� �迭
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int arr[3] = { 1,3,5 };
//	int &ref1 = arr[0];
//	int &ref2 = arr[1];
//	int &ref3 = arr[2];
//
//	ref1 = 10;
//	ref2 = 20;
//	ref3 = 30;
//
//	cout << ref1 << endl;
//	cout << ref2 << endl;
//	cout << ref3 << endl;
//	return 0;
//}

////����5 �����Ϳ� ������
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int num = 12;
//	int *ptr = &num;
//	int **dptr = &ptr;
//
//	int &ref = num;
//	int*(&pref) = ptr;
//	int**(&dpref) = dptr;
//
//	cout << ref << endl;
//	cout << *pref << endl;
//	cout << **dpref << endl;
//	
//	return 0;
//}

//����6 �Ű������� ������

//#include<iostream>
//using namespace std;
//	void swap(int &ref1, int &ref2)
//{
//	int tmp = ref1;
//	ref1 = ref2;
//	ref2 = tmp;
//}
//int main()
//{
//	int n1 = 100;
//	int n2 = 200;
//	cout << "swap �� n1= " << n1 << "n2=" << n2 << endl;
//	swap(n1, n2);
//	cout << "swap �� n1=" << n1 << "n2=" << n2 << endl;
//	
//	return 0;
//}


//����
//�����ڵ带 ���� ������ Ǯ�����
//int main()
//{
//	int num1 = 5;
//	AddOne(num);
//	cout << num << endl;
//	Code Change(num);
//	cout << num << endl;
//}
// ������ �����ϴ� AddOne�Լ�, CodeChange�Լ��� ���弼��
//	�����ڸ� �Ű������� ����մϴ�.
//#include<iostream>
//using namespace std;
//
//void AddOne(int &ref);
//void CodeChange(int &ref);
//
//int main()
//{
//	int num = 5;
//	AddOne(num); //1�� ����
//	cout << num << endl;
//	CodeChange(num); // ��ȣ����
//	cout << num << endl;
//}
//void AddOne(int &ref)
//{
//	ref++;
//}
//void CodeChange(int &ref)
//{
//	ref = -ref;
//}

//����7 
//#include<iostream>
//using namespace std;
//
//int & func(int &ref) //func�Լ��� ��ȯ���� int &(������)�ڷ����ϋ� ref�� �����ϴ� �̸��ּҸ� ����
//{
//	ref++;
//	return ref; //�Լ��� ����Ǹ鼭 ref���������� ���ŵʰ� ���ÿ� ������������ ref�� �����ߴ� num1�� �̸��ּҰ� ȣ���ߴ� ��ġ�� ����
//}
//int main()
//{
//	int num1 = 1;
//	int &num2 = func(num1); //func()�� ��ȯ���� int &(��������)�� ��쿡 ref�� �����ϴ� num1 �����ּҰ� ��ȯ int &num2= num1���� �ؼ�
//	num1++;
//	num2++;
//	cout << "num1: " << num1 << endl;
//	cout << "num2: " << num2 << endl;
//	return 0;
//}

//����8 ��ȯ���� ���������� �ƴѰ��
//#include<iostream>
//using namespace std;
//
//int func(int &ref) //func�Լ��� ��ȯ���� int &(������)�ڷ����ϋ� ref�� �����ϴ� �̸��ּҸ� ����
//{
//	ref++;
//	return ref; 
//}
//int main()
//{
//	int num1 = 1;
//	int &num2 = func(num1); //int &num=2; �⺻������ ���ͷ������ �������� �ʴ´�.(�տ� const�� ���̸� �ذᰡ��)
//	//int num2= func(num1); //int num2=2;
//	num1++;
//	num2++;
//	cout << "num1: " << num1 << endl;
//	cout << "num2: " << num2 << endl;
//	return 0;
//}

//����09- �Լ��� ��ȯ���� ���� ������ ��ȭȮ��
//�Լ��� ��ȯ���� ������- �޴º����� ������          int &num2= num1;
//�Լ��� ��ȯ���� ������- �޴º����� �Ϲݺ���        int num2= num1;
//�Լ��� ��ȯ���� �Ϲݺ��� - �޴� ������ ������      int &num2=2; �����Ͽ��� �߻� 
//�Լ��� ��ȯ���� �Ϲݺ���- �޴� ������ �Ϲݺ���     int num2=2;

//#include<iostream>
//using namespace std;
//
//int & func(int &ref) 
//{
//	ref++;
//	return ref; 
//}
//int main()
//{
//	int num1 = 1;
//	int &num2 = func(num1); 
//	num1++;
//	num2++;
//	cout << "num1: " << &num1 << endl;
//	cout << "num2: " << &num2 << endl;
//	return 0;
//}

////����
//#include <iostream>
//using namespace std;
//int main()
//{
//	int num = 12;
//	//�����ͺ����� �����ؼ� num�� ����Ű�� �ڵ��ۼ�
//	int *ptr = &num;
//	//������ ������ �����ϴ� �����ڸ� �ϳ� ����
//	int *(&ref) = ptr;
//	//������ ������ �̿��ؼ� num �� 1����
//	(*ptr)++;        //������ �켱������ ���Ͽ� ()�ʿ�
//	//�����ڸ� �̿��ؼ� num�� 1����
//	(*ref)++;
//	//num���� valueȮ��
//	cout << num << endl;
//	return 0;
//}

//����10- ��malloc�� ����� new
//#include<iostream>
//#include<cstdlib> //c���� ����ߴ� ��������� �����ҋ��� �տ� c�� ���̰� .h�� �����Ѵ�.
//using namespace std;
//
//int main()
//{
//	//malloc ��� �����Ҵ�
//	int*ptr1 = (int*)malloc(sizeof(int)); //�����Ҵ� ��������
//	*ptr1 = 10;
//	cout << *ptr1 << endl;
//	free(ptr1);
//
//	char *str1 = (char *)malloc(sizeof(char) * 20); //�������� �迭�� ����
//	strcpy_s(str1, _msize(str1), "Hello World"); //���ڿ����� strcpy_s(���,ũ��,����)
//	cout << str1 << endl;
//	free(str1); //�������� �迭�� ����
//
//
//	//new �⺻��
//	int *ptr2 = new int;
//	*ptr2 = 20;
//	cout << *ptr2 << endl;
//	delete ptr2;
//
//	//new �迭��
//	char* str2 = new char[20]; //�迭�� ���� ���� ����
//	strcpy_s(str2, _msize(str2), "Hello World");
//	cout << str2 << endl;
//	delete[] str2;//�迭�� �������� ����
//
//	return 0;
//
//}

//����11- malloc�� new�� ���� (��ü������ �־�� ����) //��ü������ �־�� new ����� ȿ����
#include<iostream>
#include<cstdlib>

using namespace std;

class simple
{
public:
	simple()
	{
		cout << "simple�� ������ �Լ� ȣ��" << endl;

	}
};
int main()
{
	cout << "case1: ";
	simple *sp1 = new simple;

	cout << "case2:";
	simple *sp2 = (simple *)malloc(sizeof(simple));

	cout << endl << "end of main" << endl;
	delete sp1;
	free (sp2);
	return 0;
}