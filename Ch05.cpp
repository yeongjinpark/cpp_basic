////01 객체간의 관계구현 클래스
//
////정우균이  GS25에서 Kantata 를 구매한다
//
////정우균	 - 고객
////GS25	 - 편의 점
//
////Customer class
////속성
//// 보유금액 
//// 제품수량
////기능
//// 지불하다
//// convenience class
////속성
//// 보유금액
//// 커피수량
////기능
//// 요금받기
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
//			//판매할 제품명과 돈을 받아서 MyMoney에 넣고
//		MyMoney += GetMoney;
//		//재고량을 받은금액만큼 CoffeeCnt를 감소시킨다(Coffee하나 가격은 1000원)
//		int cnt = GetMoney / 1000;
//		CoffeeCnt -= cnt;
//		//제공 제품개수 리턴
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
//		//구입할 제품명과 돈을 편의점에 전달
//		//구입제품의 수량을 CoffeeCnt에 추가
//		CoffeeCnt+=ref.Receive(PN, putMoney);
//		//고객의 금액 차감
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
//	//구매 전
//	GS25.ShowInfo();
//	cout << endl;
//	Jung.ShowInfo();
//	cout << endl;
//	//구매
//	Jung.Pay("Kantata", 3000, GS25);
//	//구매 후
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
//문제 

// 정우균이 사과장수에게 사과를 구매한다

//Seller class(사과장수클래스)

//속성
//보유금액
//사과판매금액
//사과보유개수

//기능
//요금받기(Receive())

//Buyer class(고객클래스)

//속성
//보유금액
//사과보유개수

//기능
//지불하기(Pay())

//class Seller
//{
//private:
//	int Mymoney;	// 보유금액
//	int Price;		// 사과 1개당 가격
//	int AppleCnt;	// 보유 사과개수
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

