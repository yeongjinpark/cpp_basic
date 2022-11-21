//01 ���� - ���ø� �Լ� �⺻

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
////���ø� �Լ� ����
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
//	myswap(a, b);//myswap(int&a , int& b) ȣ��
//	cout << a << '\t' << b << endl;
//
//	double c = 0.3, d = 12.5;
//	myswap(c, d); //myswap(double& a, double& b) ȣ��
//	cout << c << '\t' << d << endl;
//
//	char e = 'A', f = 'B';
//	myswap(e, f); 
//	cout << e << '\t' << f << endl;
//}


//02 ���� - ū���� �����ϴ� ���ʸ� �Լ� �����

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
//	cout << "bigger(20,50)�� ����� " << bigger(20, 50) << endl;
//	cout << "bigger(120.5,30.4)�� ����� " << bigger(120.5, 30.4) << endl;
//	string a = "test", b = "helloWorld";
//	cout << "bigger(test,helloworld)�� ����� " << bigger(a, b) << endl;
//
//	return 0;
//}

//03 ���� - ���ø� �Լ� vs �����ε� �Լ� �浹 - �����ε��� �Լ��� �����Ѵ�


//#include <iostream>
//using namespace std;
//
//template <class T>
//void print(T array[], int n){		//���ʸ� Ÿ�� ���ڹ޴� �Լ�
//	for (int i = 0; i<n; i++){
//		cout << array[i] << '\t';
//	}
//	cout << endl;
//	cout << "���ʸ� Ÿ�� print ���" << endl;
//}
//void print(char array[], int n) {	//char Ÿ�� ���ڹ޴� �Լ�
//	for (int i = 0; i < n; i++) {
//		cout << array[i] << '\t';
//	}
//	cout << endl;
//	cout << "char Ÿ�� print ���" << endl;
//}
//int main() {
//	int x[] = { 1,2,3,4,5 };
//	double d[5] = { 1.1,2.2,3.3,4.4,5.5 };
//	print(x, 5);//���ʸ� �Լ� ���
//	print(d, 5);//���ʸ� �Լ� ���
//	char c[5] = { 'a','b','c','d','e' };
//	print(c, 5);//char �Լ� ��� 
//	return 0;
//}


//04 ���� ���ʸ� Ŭ����

//#include <iostream>
//using namespace std;
//template <class T1, class T2> //�ΰ��� ���ʸ� Ÿ�� ����
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
//	GClass<int, double>x; // ���ʸ��ڷ����� �� �ڷ����� int, double �� ������ x��ü ����
//	x.set(2, 0.5);
//	x.get(a, b);
//	cout << "a=" << a << '\t' << "b=" << b << endl;
//
//	char c;
//	float d;
//	GClass<char, float>y; // ���ʸ��ڷ����� �� �ڷ����� char, float �� ������ y��ü ����
//	y.set('m',12.5);
//	y.get(c, d);
//	cout << "c=" << c << '\t' << "d=" << d << endl;
//
//	return 0;
//}

//05 �ڷᱸ�� ����� - ����Ŭ����

//#include <iostream>
//using namespace std;
//class MyStack{
//private:
//	int tos;			//���� ���帶������ ����� �������� Idx
//	int data[100];
//public:
//	MyStack() : tos(-1) {}//-1�� ������ ���� ó�� idx(0)���� �����ϱ� ���ؼ� 
//	void Push(int element){//������ ����
//		if (tos == 99)
//		{
//			cout << "stack full" << endl;
//			return;
//		}
//		tos++;
//		data[tos] = element;
//	}
//	int Pop(){//������ ���� 
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
//	cout << "POP ��� : " << iStack.Pop() << endl;
//	cout << "POP ��� : " << iStack.Pop() << endl;
//	cout << "POP ��� : " << iStack.Pop() << endl;
//}



////06 ���ʸ� Ÿ�� ���� ����
//#include <iostream>
//#include <string>
//using namespace std;
//
//template <class T>
//class MyStack {
//private:
//	int tos;			//���� ���帶������ ����� �������� Idx
//	T data[100];      //���ʸ� Ÿ���� �迭, ũ��� 100
//public:
//	MyStack() : tos(-1) {}//-1�� ������ ���� ó�� idx(0)���� �����ϱ� ���ؼ� 
//	void Push(T element) {//������ ����
//		if (tos == 99)
//		{
//			cout << "stack full" << endl;
//			return;
//		}
//		tos++;
//		data[tos] = element;
//	}
//	T Pop() {//������ ���� 
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
//	cout << "POP ��� : " << iStack.Pop() << endl;
//	cout << "POP ��� : " << iStack.Pop() << endl;
//	cout << "POP ��� : " << iStack.Pop() << endl;
//	
//	MyStack<char> cStack;
//	cStack.Push('a');
//	cStack.Push('b');
//	cStack.Push('c');
//	cout << "POP ��� : " << cStack.Pop() << endl;
//	cout << "POP ��� : " << cStack.Pop() << endl;
//	cout << "POP ��� : " << cStack.Pop() << endl;
//
//	MyStack<string> sStack;
//	sStack.Push("Hello World");
//	sStack.Push("Stack Class");
//	sStack.Push("Test");
//	cout << "POP ��� : " << sStack.Pop() << endl;
//	cout << "POP ��� : " << sStack.Pop() << endl;
//	cout << "POP ��� : " << sStack.Pop() << endl;
//
//	MyStack<char> *p = new MyStack<char>();
//	p->Push('v');
//}
//
//





