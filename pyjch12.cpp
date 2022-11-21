//01 예제 - 탬플릿 함수 기본

//#include <iostream>
//using namespace std;
//
////void myswap(int & a, int & b){
////	int tmp;
////	tmp = a;
////	a = b;
////	b = tmp;
////}
////void myswap(double& a, double& b){
////	double tmp;
////	tmp = a;
////	a = b;
////	b = tmp;
////}
//
////탬플릿 함수 생성
//
//template <class T>
//void myswap(T & a, T & b){
//	T tmp;
//	tmp = a;
//	a = b;
//	b = tmp;
//}
//int main(){
//	int a = 4, b = 5;
//	myswap(a, b);//myswap(int&a , int& b) 호출
//	cout << a << '\t' << b << endl;
//
//	double c = 0.3, d = 12.5;
//	myswap(c, d); //myswap(double& a, double& b) 호출
//	cout << c << '\t' << d << endl;
//
//	char e = 'A', f = 'B';
//	myswap(e, f); 
//	cout << e << '\t' << f << endl;
//}


//02 예제 - 큰값을 리턴하는 제너릭 함수 만들기

//#include <iostream>
//#include <string>
//using namespace std;
//
//template<class T>
//T bigger(T a, T b){
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//int main() {
//	cout << "bigger(20,50)의 결과는 " << bigger(20, 50) << endl;
//	cout << "bigger(120.5,30.4)의 결과는 " << bigger(120.5, 30.4) << endl;
//	string a = "test", b = "helloWorld";
//	cout << "bigger(test,helloworld)의 결과는 " << bigger(a, b) << endl;
//
//	return 0;
//}

//03 예제 - 템플릿 함수 vs 오버로딩 함수 충돌 - 오버로딩된 함수를 적용한다


//#include <iostream>
//using namespace std;
//
//template <class T>
//void print(T array[], int n){		//제너릭 타입 인자받는 함수
//	for (int i = 0; i<n; i++){
//		cout << array[i] << '\t';
//	}
//	cout << endl;
//	cout << "제너릭 타입 print 사용" << endl;
//}
//void print(char array[], int n) {	//char 타입 인자받는 함수
//	for (int i = 0; i < n; i++) {
//		cout << array[i] << '\t';
//	}
//	cout << endl;
//	cout << "char 타입 print 사용" << endl;
//}
//int main() {
//	int x[] = { 1,2,3,4,5 };
//	double d[5] = { 1.1,2.2,3.3,4.4,5.5 };
//	print(x, 5);//제너릭 함수 사용
//	print(d, 5);//제너릭 함수 사용
//	char c[5] = { 'a','b','c','d','e' };
//	print(c, 5);//char 함수 사용 
//	return 0;
//}


//04 예제 제너릭 클래스

//#include <iostream>
//using namespace std;
//template <class T1, class T2> //두개의 제너릭 타입 선언
//class GClass {
//private:
//	T1 data1;
//	T2 data2;
//public:
//	GClass() {
//		data1 = 0, data2 = 0;
//	};
//	void set(T1 a, T2 b){
//		data1 = a; data2 = b;
//	}
//	void get(T1& a ,T2& b) {
//		a = data1; b = data2;
//	}
//};
//int main() {
//	int a = 0;
//	double b = 0.0;
//	GClass<int, double>x; // 제너릭자료형에 들어갈 자료형을 int, double 로 지정한 x객체 생성
//	x.set(2, 0.5);
//	x.get(a, b);
//	cout << "a=" << a << '\t' << "b=" << b << endl;
//
//	char c;
//	float d;
//	GClass<char, float>y; // 제너릭자료형에 들어갈 자료형을 char, float 로 지정한 y객체 생성
//	y.set('m',12.5);
//	y.get(c, d);
//	cout << "c=" << c << '\t' << "d=" << d << endl;
//
//	return 0;
//}

//05 자료구조 만들기 - 스택클래스

//#include <iostream>
//using namespace std;
//class MyStack{
//private:
//	int tos;			//현재 가장마지막에 저장된 데이터의 Idx
//	int data[100];
//public:
//	MyStack() : tos(-1) {}//-1인 이유는 제일 처음 idx(0)부터 삽입하기 위해서 
//	void Push(int element){//데이터 삽입
//		if (tos == 99)
//		{
//			cout << "stack full" << endl;
//			return;
//		}
//		tos++;
//		data[tos] = element;
//	}
//	int Pop(){//데이터 삭제 
//		int rdata;
//		if (tos == -1) { cout << "Stack Empty" << endl; return 0; }
//		rdata = data[tos--];
//		return rdata;
//	}
//};
//int main()
//{
//	MyStack iStack;
//	iStack.Push(1);
//	iStack.Push(2);
//	iStack.Push(3);
//	cout << "POP 결과 : " << iStack.Pop() << endl;
//	cout << "POP 결과 : " << iStack.Pop() << endl;
//	cout << "POP 결과 : " << iStack.Pop() << endl;
//}



////06 제너릭 타입 스택 적용
//#include <iostream>
//#include <string>
//using namespace std;
//
//template <class T>
//class MyStack {
//private:
//	int tos;			//현재 가장마지막에 저장된 데이터의 Idx
//	T data[100];      //제너릭 타입의 배열, 크기는 100
//public:
//	MyStack() : tos(-1) {}//-1인 이유는 제일 처음 idx(0)부터 삽입하기 위해서 
//	void Push(T element) {//데이터 삽입
//		if (tos == 99)
//		{
//			cout << "stack full" << endl;
//			return;
//		}
//		tos++;
//		data[tos] = element;
//	}
//	T Pop() {//데이터 삭제 
//	T rdata;
//		if (tos == -1) { cout << "Stack Empty" << endl; return 0; }
//		rdata = data[tos--];
//		return rdata;
//	}
//};
//int main()
//{
//	MyStack<int> iStack;
//	iStack.Push(1);
//	iStack.Push(2);
//	iStack.Push(3);
//	cout << "POP 결과 : " << iStack.Pop() << endl;
//	cout << "POP 결과 : " << iStack.Pop() << endl;
//	cout << "POP 결과 : " << iStack.Pop() << endl;
//	
//	MyStack<char> cStack;
//	cStack.Push('a');
//	cStack.Push('b');
//	cStack.Push('c');
//	cout << "POP 결과 : " << cStack.Pop() << endl;
//	cout << "POP 결과 : " << cStack.Pop() << endl;
//	cout << "POP 결과 : " << cStack.Pop() << endl;
//
//	MyStack<string> sStack;
//	sStack.Push("Hello World");
//	sStack.Push("Stack Class");
//	sStack.Push("Test");
//	cout << "POP 결과 : " << sStack.Pop() << endl;
//	cout << "POP 결과 : " << sStack.Pop() << endl;
//	cout << "POP 결과 : " << sStack.Pop() << endl;
//
//	MyStack<char> *p = new MyStack<char>();
//	p->Push('v');
//}
//
//





