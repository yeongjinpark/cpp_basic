////01 연산자 오버로딩 기본 
//
////객체간 연산에서 사용되는 연산자(+,-,*,/...)들을 오버로딩하여
////사용할 수 있다.
//#include<iostream>
//using namespace std;
//
//int num = 0; //전역변수
//class Power
//{
//private:
//	int kick;
//	int punch;
//
//public:
//	Power(int k=0, int p=0) : kick(k),punch(p)
//	{
//		cout << ++num << " 2개인자 생성자호출" << endl;
//	}
//	void Show()
//	{
//		cout <<"kick= " << kick << ",punch= " << punch << endl;
//	}
//	//+연산자함수 추가
//	Power operator+(Power op2)
//	{
//		Power tmp;        //임시객체생성
//		tmp.kick = this->kick + op2.kick; //kick 덧셈
//		tmp.punch = this->punch + op2.punch; //punch 덧셈
//		cout << ++num << "operator+연산자함수 호출" << endl;
//		return tmp;                          //tmp값 반환
//
//	}
//	//뺄셈함수 오버로딩 만들기
//	Power operator - (Power op2)
//	{
//		Power tmp;
//		tmp.kick = this->kick - op2.kick;
//		tmp.punch = this->punch - op2.punch;
//		cout << ++num << "operator-연산자함수 호출" << endl;
//		return tmp;
//	}
//	//복사생성자 만들기
//	Power(const Power&copy)
//	{
//		this->kick = copy.kick;
//		this->punch = copy.punch;
//		cout << ++num << "복사생성자 호출" << endl;
//	}
//	//디폴트 대입연사자 확인
//	void operator=(Power ob2)  //power ob2=이름없는 객체
//	{
//		this->kick = ob2.kick;
//		this->punch = ob2.punch;
//		cout << +num << "operator= 함수 호출" << endl;
//	}
//};
//int main()
//{
//	Power a(3, 5), b(4, 6), c, d;
//	c = a + b; //power 객체를 a,b를 +연산 // c.operator= a.operator+(b)
//	d = b - a;//d. operator= b.operator-(a)
//	a.Show();
//	b.Show();
//	c.Show();
//	return 0;
//}

//
////문제
//#include<iostream>
//using namespace std;
//class Simple
//{
//public:
//	int num;
//public:
//	Simple(int n=0) :num(n){}
//	void Shownum() { cout << "num=" << num << endl; }
//	//Simple operator+(Simple ob) 만들기
//	Simple operator + (Simple ob)
//	{
//
//	}
//	//Simple operator-(Simple ob) 만들기
//	Simple operator - (Simple ob)
//	{
//
//	}
//	//Simple operator*(Simple ob) 만들기
//	Simple operator * (Simple ob)
//	{
//		Simple tmp;
//		tmp = this->num*ob.num;
//		return tmp;
//	}
//	//Simple operator/(Simple ob) 만들기
//	Simple operator / (Simple ob)
//	{
//
//	}
//	//Simple operator=(Simple ob) 만들기
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


////문제
//#include<iostream>
//using namespace std;
//class simple
//{
//public:
//	int num;
//public:
//	simple(int n) : num(n) {}
//	void shownum() { cout << "num= " << num << endl; }
//	//전치연산자 오버로딩
//	simple operator++()
//	{
//		this->num++;
//		simple tmp = &this;               //sumple tmp= 주객체의 값 ->복사생성자호출
//		return tmp;                       //tmp 객체의 값은 호출했던 main함수특정공간에다가
//		                                     //전달하는 과정에서 main함수부분에 복사생자가 호출된다.
//	}
//};
//
//int main()
//{
//	simple a(10), b;  //1개인자를 받는 생성함수 2개호출
//	b = ++a;   //b.operator = (a.operator())
//	a.shownum();
//	b.shownum();
//	return 0;
//}


//03 연산자 오버로딩 후치연산자

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
	//후치연산자(x--,x++)오버로딩함수 구현
	simple operator++(int)
	{
		simple tmp = *this;   //tmp에 기존의 a객체의 값을 복사생성자에 의해 초기화
		this->num++;           //주객체의 num의 값을 증가시킨다
		return tmp;              //이전의 값을 가지고 있는 tmp를 리턴한다
	}
};
int main()
{
	//전치연산자 ++a:a변수값을 1증가한 뒤 다른연산
	//후치연산 a++ : 다른 연산자 처리 끝난 이후에 값을 증가/감소
	simple a(10), b;
	b = a++;
	a. shownum();
	b.shownum();
	return 0;
}