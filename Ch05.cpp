////01 ��ü���� ���豸�� Ŭ����
//
////�������  GS25���� Kantata �� �����Ѵ�
//
////�����	 - ��
////GS25	 - ���� ��
//
////Customer class
////�Ӽ�
//// �����ݾ� 
//// ��ǰ����
////���
//// �����ϴ�
//// convenience class
////�Ӽ�
//// �����ݾ�
//// Ŀ�Ǽ���
////���
//// ��ݹޱ�
//
//

//#include <iostream>
//using namespace std;
//
//class Convenience
//{
//private:
//	int MyMoney;
//	int CoffeeCnt;
//public:
//	Convenience(int cnt) :MyMoney(0), CoffeeCnt(cnt) {};
//	int Receive(const char * PN, int GetMoney)
//	{
//		//if (strcmp(PN,"Kantata")==0)
//		//{
//			//�Ǹ��� ��ǰ��� ���� �޾Ƽ� MyMoney�� �ְ�
//		MyMoney += GetMoney;
//		//����� �����ݾ׸�ŭ CoffeeCnt�� ���ҽ�Ų��(Coffee�ϳ� ������ 1000��)
//		int cnt = GetMoney / 1000;
//		CoffeeCnt -= cnt;
//		//���� ��ǰ���� ����
//		return cnt;
//		//}
//
//	}
//	void ShowInfo()
//	{
//		cout << "My Money = " << MyMoney << endl;
//		cout << "My CoffeeCnt = " << CoffeeCnt << endl;
//	}
//};
//
//class Customer
//{
//private:
//	int MyMoney;
//	int CoffeeCnt;
//public:
//	Customer(int money):MyMoney(money),CoffeeCnt(0){}
//	void Pay(const char * PN , int putMoney , Convenience& ref)
//	{
//		//������ ��ǰ��� ���� �������� ����
//		//������ǰ�� ������ CoffeeCnt�� �߰�
//		CoffeeCnt+=ref.Receive(PN, putMoney);
//		//���� �ݾ� ����
//		MyMoney -= putMoney;
//	}
//	void ShowInfo()
//	{
//		cout << "My Money = " << MyMoney << endl;
//		cout << "My CoffeeCnt = " << CoffeeCnt << endl;
//	}
//};
//
//
//int main()
//{
//	Convenience GS25(100);
//	Customer Jung(10000);
//	//���� ��
//	GS25.ShowInfo();
//	cout << endl;
//	Jung.ShowInfo();
//	cout << endl;
//	//����
//	Jung.Pay("Kantata", 3000, GS25);
//	//���� ��
//	GS25.ShowInfo();
//	cout << endl;
//	Jung.ShowInfo();
//	cout << endl; 
//	return 0;
//}


//
//
//
//
//
//
//���� 

// ������� ���������� ����� �����Ѵ�

//Seller class(������Ŭ����)

//�Ӽ�
//�����ݾ�
//����Ǹűݾ�
//�����������

//���
//��ݹޱ�(Receive())

//Buyer class(��Ŭ����)

//�Ӽ�
//�����ݾ�
//�����������

//���
//�����ϱ�(Pay())

//class Seller
//{
//private:
//	int Mymoney;	// �����ݾ�
//	int Price;		// ��� 1���� ����
//	int AppleCnt;	// ���� �������
//public:
//	Seller(int M, int P, int A) :Mymoney(M), Price(P), AppleCnt(A) {}
//	int Receive(const char* pn, int getmoney)
//	{
//		if (strcmp(pn, "Apple") == 0)
//		{
//			Mymoney += getmoney;
//			AppleCnt -= (getmoney / Price);
//			return (getmoney / Price);
//		}
//	}
//	void ShowInfo()
//	{
//		cout << "Seller Money = " << Mymoney << endl;
//		cout << "Seller AppleCnt = " << AppleCnt << endl;
//	}
//};
//class Buyer
//{
//private:
//	int Mymoney;
//	int AppleCnt;
//public:
//	Buyer(int M) :Mymoney(M), AppleCnt(0) {}
//	void Pay(const char*pn, int putmoney, Seller &ref)
//	{
//		AppleCnt += ref.Receive(pn, putmoney);
//		Mymoney - +putmoney;
//	}
//	void ShowInfo()
//	{
//		cout << "Buyer Money = " << Mymoney << endl;
//		cout << "Buyer AppleCnt = " << AppleCnt << endl;
//	}
//};
//
//int main()
//{
//	Buyer Jung(10000);
//	Seller AppleSeller(0, 1000, 100);
//	Jung.Pay("Apple", 3000, AppleSeller);
//	AppleSeller.ShowInfo();
//	cout << endl;
//	Jung.ShowInfo();
//}

