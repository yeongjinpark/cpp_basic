//예제01 Object 의 속성/기능분류

////에어컨
//속성 :제품명,Display,전력량..
//기능 : PowerOn, PowerOff,제습,파워냉방...


////나무
//속성 : 잎 , 가지 , 뿌리 ..
//기능 : 광합성 , 물흡수 ..

////자동차
//속성	: 바퀴 , 백미러 , 연료량,현재속도..
//기능  : 시동을 건다 , 가속한다 , 감속한다.

////컴퓨터
//속성	: CPU , RAM , HDD , GPU , 주변장치
//기능  : PowerOn/off ,APP실행한다..



//예제02 클래스만들기(속성:멤버변수)

//#include <iostream>
//using namespace std;
//
//class Car	//클래스 Car 자료형 선언
//{
//public:		//접근지시자 외부에서의 접근허용여부..
//	char owner[10];	//멤버변수(속성데이터 저장)
//	int speed;		//멤버변수
//	int fuel;		//멤버변수
//};
//int main()
//{
//	Car Lee = { "이태수",0,100 };						//Car클래스로 Lee Object정의
//	cout << "Owner = " << Lee.owner << endl;			//Lee Object 의 소유자 확인
//	cout << "Current Speed = " << Lee.speed << endl;	//Lee Object 의 현재 스피드 확인
//	cout << "Current Fuel = " << Lee.fuel << endl;		//Lee Object 의 현재 연료량 확인
//	return 0;
//}


//문제 01 Computer 클래스를 만들고 필요한 속성을 부여하세요

//#include <iostream>
//using namespace std;
//class Computer
//{
//public:
//	//컴퓨터의 소유자
//	char Owner[20];
//	char ProdNum[30];
//	char CPUSpec[10];
//	char RAMSpec[10];
//	char DISKSpec[10];
//	//일련번호 저장
//	//CPU 스펙 저장
//	//RAM 스펙 저장
//	//DISK 스펙 저장
//};
//int main()
//{
//	Computer SamsungFlex = { "정우균","1-2-3-4","I7","16G","500G" };
//	cout << SamsungFlex.Owner << endl;
//	cout << SamsungFlex.ProdNum << endl;
//	cout << SamsungFlex.CPUSpec << endl;
//	cout << SamsungFlex.RAMSpec << endl;
//	cout << SamsungFlex.DISKSpec << endl;
//	return 0;
//}


//예제03 클래스의 기능(멤버함수)

//#include <iostream>
//using namespace std;
//
//
//class Car	//클래스 Car 자료형 선언
//{
//public:		//접근지시자 외부에서의 접근허용여부..
//	char owner[10];	//멤버변수(속성데이터 저장)
//	int speed;		//멤버변수
//	int fuel;		//멤버변수
//public:
//	//가속하다 void Accel();
//	void Accel()
//	{
//		if (fuel == 0)	//현재 연료량 x - 엑셀불가능
//		{
//			cout << "연료 부족으로 가속불가능 합니다" << endl;
//		}
//		else //연료량 남아있는 상태라면
//		{
//			//엑셀을 밟으면 속도는 10씩증가,연료량은 1씩감소
//			//최대시속을 200Km/h제한 
//			if (speed >= 200)
//			{
//				speed = 200; //최대 시속 200Km/h
//				cout << "현재 " << owner << " 님의 차가 최대 속도 입니다" << endl;
//			}
//			else
//			{
//				speed = speed + 10; //speed 증가
//				cout << "현재 " << owner << " 님의 차를 가속합니다. 현재속도 : " << speed << endl;
//			}
//			fuel--; //연료량 1씩 감소
//		}
//	}
//	//감속하다 void Break();
//	void Break()
//	{
//		// Break를 사용하면 speed가 10씩 감소하도록 설정
//		// 만약 speed가 0이하로 떨어지는 경우 speed는 0으로 설정한다
//
//		if (speed - 10 <= 0)// 만약 Break함수 사용시 speed가 0이거나 작다면
//		{
//			speed = 0;
//			cout << owner << " 님의 차가 정지합니다" << endl;
//		}
//		else //speed-10 의 값이 양수라면
//		{
//			speed = speed - 10;//기존 speed에 -10 한 값을 speed 공간에 대입 
//			cout << owner << " 님의 차를 감속합니다. 현재 속도 : " << speed << endl;
//		}		
//	}
//	//정보확인 void ShowInfo();
//	void ShowInfo()
//	{
//		cout << "현재 차량 소유자 : " << owner << endl;//현재 소유자 확인
//		cout << "현재 차량 스피드 : " << speed << endl;//현재 스피드 확인
//		cout << " 현재 차량 연료량 : " << fuel << endl;//현재 연료량 확인
//	}
//};
//
//int main()
//{
//	Car Lee = { "이태수",0,100 };						//Car클래스로 Lee Object정의
//	Car Kim = { "김상중",0,100 };
//	Lee.Accel();
//	Lee.Accel();
//	Lee.Accel();
//	Lee.Break();
//	Lee.ShowInfo();
//	return 0;
//}



//문제
//현재 Computer Class 에서 다음 기능을 추가하세요
//접근지시자는 public : 으로 설정
//전원 켜기 : void PowerOn();	-> "owner 님의 컴퓨터 전원을 켭니다" 가 출력
//전원 끄기 : void PowerOff();	-> "owner 님의 컴퓨터 전월을 끕니다" 가 출력
//현재 정보확인 : void ShowInfo() ; -> 현재 소유자/제품번호/컴퓨터 스펙이 출력될 수 있도록 설정


//#include <iostream>
//using namespace std;
//class Computer
//{
//public:
//	//컴퓨터의 소유자
//	char Owner[20];
//	char ProdNum[30];
//	char CPUSpec[10];
//	char RAMSpec[10];
//	char DISKSpec[10];
//public:	//멤버 함수 선언
//	void PowerOn()
//	{
//		cout << Owner << " 님의 컴퓨터 전원을 켭니다" << endl;
//	}
//	void PowerOff()
//	{
//		cout << Owner << " 님의 컴퓨터 전원을 끕니다" << endl;
//	}
//	void ShowInfo()
//	{
//		cout << "컴퓨터 소유자명 : " << Owner << endl;
//		cout << "제품명 : " << ProdNum << endl;
//		cout << " CPUSPec :" << CPUSpec<<endl;
//		cout << " RAMSPec :" << RAMSpec<<endl;
//		cout << " DISKSPec :" << DISKSpec<<endl;
//	}
//};
//int main()
//{
//	Computer SamsungFlex = { "정우균","1-2-3-4","I7","16G","500G" };
//	SamsungFlex.PowerOn(); SamsungFlex.PowerOff(); SamsungFlex.ShowInfo();
//	return 0;
//}



//예제04 멤버함수 오버로딩 적용

//#include <iostream>
//using namespace std;
//
//
//class Car	
//{
//public:		
//	char owner[10];	
//	int speed;		
//	int fuel;		
//	//멤버변수 추가
//	char CupHolder1[20];
//	char CupHolder2[20];
//public:
//	void Accel()
//	{
//		if (fuel == 0)	
//		{
//			cout << "연료 부족으로 가속불가능 합니다" << endl;
//		}
//		else 
//		{
//			if (speed >= 200)
//			{
//				speed = 200;
//				cout << "현재 " << owner << " 님의 차가 최대 속도 입니다" << endl;
//			}
//			else
//			{
//				speed = speed + 10; 
//				cout << "현재 " << owner << " 님의 차를 가속합니다. 현재속도 : " << speed << endl;
//			}
//			fuel--; 
//		}
//	}
//	
//	void Break()
//	{
//		if (speed - 10 <= 0)
//		{
//			speed = 0;
//			cout << owner << " 님의 차가 정지합니다" << endl;
//		}
//		else 
//		{
//			speed = speed - 10; 
//			cout << owner << " 님의 차를 감속합니다. 현재 속도 : " << speed << endl;
//		}		
//	}
//	//컵홀더에 음료를 넣는 함수
//	void CupHolderAdd(const char * cup1)
//	{
//		strcpy_s(CupHolder1, sizeof(CupHolder1), cup1);
//		strcpy_s(CupHolder2, sizeof(CupHolder2), "텅빔");
//	}
//	//컵홀더에 음료를 넣는 함수(오버로딩)
//	void CupHolderAdd(const char * cup1, const char * cup2)
//	{
//		strcpy_s(CupHolder1, sizeof(CupHolder1), cup1);
//		strcpy_s(CupHolder2, sizeof(CupHolder2), cup2);
//	}
//	void ShowInfo()
//	{
//		cout << "현재 차량 소유자 : " << owner << endl;
//		cout << "현재 차량 스피드 : " << speed << endl;
//		cout << " 현재 차량 연료량 : " << fuel << endl;
//		cout << "CupHolder01 : " << CupHolder1 << endl;
//		cout << "CupHolder02 : " << CupHolder2 << endl;
//	}
//};
//
//int main()
//{
//	Car Lee = { "이태수",0,100 };						
//	Car Kim = { "김상중",0,100 };
//
//	Lee.CupHolderAdd("식혜", "커피");	//2개의 인자를 받는 CupHolderAdd함수 사용
//	Kim.CupHolderAdd("수정과");			//1개의 인자를 받는 CupHolderAdd함수 사용
//	Lee.ShowInfo();
//	Kim.ShowInfo();
//	return 0;
//}


//문제 오버로딩 함수 만들기

//현재 컴퓨터 클래스에서 실행하기(AppStart()) 함수를 만드시고 
//메모장, 게임 , 엑셀을 실행시에 각각 어떤 App 이 실행되는지 화면에 출력하세요

//실행하기 함수(메모장만실행) : AppStart(const char * memo) 
//-> "메모장을 실행합니다 : 메모장 파일명 : "전달받은 메모장파일명" " 이출력

//실행하기 함수(메모장, 엑셀 실행) : AppStart(const char * memo , const char * excel)
//-> "메모장을 실행합니다 : 메모장 파일명 : "전달받은 메모장파일명" " 이출력
//-> "EXCEL을 실행합니다 : Excel 파일명 : "전달받은 Excel파일명" " 이출력

//실행하기 함수(메모장, 엑셀 ,게임 실행) : AppStart(const char * memo , const char * excel,const char  *game)
//-> "메모장을 실행합니다 : 메모장 파일명 : "전달받은 메모장파일명" " 이출력
//-> "EXCEL을 실행합니다 : Excel 파일명 : "전달받은 Excel파일명" " 이출력
//-> "GAME을 실행합니다 : GAME 명 : "전달받은 GAME명" " 이출력







//#include <iostream>
//using namespace std;
//class Computer
//{
//public:
//	//컴퓨터의 소유자
//	char Owner[20];
//	char ProdNum[30];
//	char CPUSpec[10];
//	char RAMSpec[10];
//	char DISKSpec[10];
//public:	//멤버 함수 선언
//	void PowerOn()
//	{
//		cout << Owner << " 님의 컴퓨터 전원을 켭니다" << endl;
//	}
//	void PowerOff()
//	{
//		cout << Owner << " 님의 컴퓨터 전원을 끕니다" << endl;
//	}
//	void ShowInfo()
//	{
//		cout << "컴퓨터 소유자명 : " << Owner << endl;
//		cout << "제품명 : " << ProdNum << endl;
//		cout << " CPUSPec :" << CPUSpec<<endl;
//		cout << " RAMSPec :" << RAMSpec<<endl;
//		cout << " DISKSPec :" << DISKSpec<<endl;
//	}
//};
//int main()
//{
//	Computer SamsungFlex = { "정우균","1-2-3-4","I7","16G","500G" };
//	SamsungFlex.PowerOn(); SamsungFlex.PowerOff(); SamsungFlex.ShowInfo();
//	return 0;
//}





//예제5- 디폴트 생성자함수 사용

//생성자 함수: 객체를 생성할때 호출되어지는 함수
//객체를 만들기 위해서는 반드시 하나의 생성자를 호출해서 객체에 필요한 공간을 형성하고 초기값을 대입한다
//생성자 함수를 명시하지 않더라도 기본적으로 컴파일러가 제공하는 생성자함수를 디폴트 생성자 함수라고 한다.
//생성자 함수는 클래스 이름과 동일하며, 반환점이 없다
//생성자 함수는 객체의 초기값을 지정해 주지는 않는다
//자바의 디폴트 생성자 함수는 개체의 초기값을 NULL or 0으로 자동 초기화 한다.

//#include<iostream>
//using namespace std;
//
//class Simple
//{
//public:
//	int x;
//	int y;
//
//public:
//	Simple() // 디폴트 생성자 함수/.
//	{
//		cout << "디폴트 생성자 함수호출!!" << endl;
//		x = 10;
//		y = 20;
//	}
//};
//int main()
//{
//	Simple obj1;
//	Simple obj2;
//	cout << obj1.x << endl;
//	cout << obj1.y<< endl;
//	cout << obj2.x << endl;
//	cout << obj2.y << endl;
//	return 0;
//}



//예제06- 생성자 함수 오버로딩
//생성자 함수를 오버로딩 할 떄 디포트 생성자를 사용해야 되는 경우가 있다면
//디폴트 생성자 함수를 반드시 명시(코딩)해줘야 한다.
//
//#include<iostream>
//using namespace std;
//
//class Simple
//{
//public:
//	int x;
//	int y;
//
//public:
//	Simple() // 디폴트 생성자 함수/.
//	{
//		cout << "디폴트 생성자 함수호출!!" << endl;
//	}
//	Simple(int a)               //오버로딩 된 생성자
//	{
//		cout << "오버로딩된 생성자(인자1) 함수호출" << endl;
//		x = a; y = 0;
//	}
//	Simple(int a, int b) //오버로딩된 생성자
//	{
//		cout << "오버로딩된 생성자(인자2) 함수호출" << endl;
//		x = a; y=b;
//	}
//
//};
//int main()
//{
//	Simple obj1;             //디폴트 생성자 호출- 객체 생성
//	Simple obj2(100);        //오버로딩생성자(인자1)- 객체 생성
//	Simple obj3(100, 200);     //오버로딩생성(인자2)- 객체 생성
//
//	return 0;
//}

//예제07- 생성자함수- 이니셜라이져(:) 사용을 통한 멤버값 초기화
//
//#include<iostream>
//using namespace std;
//
//class Simple
//{
//public:
//	int x;
//	int y;
//
//public:
//	Simple() :x(0), y(0) {}
//
//		Simple(int a) : x(a), y(0) {}
//
//		Simple(int a, int b) : x(a), y(b) {}
//
//};
//
//int main()
//{
//	int num1 = 10;
//	int num2(20); // int num2=20;
//
//	Simple ob1;
//	Simple ob2(10);
//	Simple ob3(10, 20);
//
//	cout << ob1.x << "," << ob1.y << endl;
//	cout << ob2.x << "," << ob2.y << endl;
//	cout << ob3.x << "," << ob3.y << endl;
//
//	return 0;
//}

//예제 8- Car 클래스에 생성자 함수 적용
//#include <iostream>
//using namespace std;
//
//class Car	
//{
//public:		
//	char owner[10];	
//	int speed;		
//	int fuel;		
//	//멤버변수 추가
//	char CupHolder1[20];
//	char CupHolder2[20];
//public:
//	Car(const char * name, int s, int f) : speed(s), fuel(f)
//	{
//		strcpy_s(owner, sizeof(owner), name);
//		cout << "생성자 함수가 호출됨!" << endl;
//	}
//	void Accel()
//	{
//		if (fuel == 0)	
//		{
//			cout << "연료 부족으로 가속불가능 합니다" << endl;
//		}
//		else 
//		{
//			if (speed >= 200)
//			{
//				speed = 200;
//				cout << "현재 " << owner << " 님의 차가 최대 속도 입니다" << endl;
//			}
//			else
//			{
//				speed = speed + 10; 
//				cout << "현재 " << owner << " 님의 차를 가속합니다. 현재속도 : " << speed << endl;
//			}
//			fuel--; 
//		}
//	}
//	
//	void Break()
//	{
//		if (speed - 10 <= 0)
//		{
//			speed = 0;
//			cout << owner << " 님의 차가 정지합니다" << endl;
//		}
//		else 
//		{
//			speed = speed - 10; 
//			cout << owner << " 님의 차를 감속합니다. 현재 속도 : " << speed << endl;
//		}		
//	}
//	//컵홀더에 음료를 넣는 함수
//	void CupHolderAdd(const char * cup1)
//	{
//		strcpy_s(CupHolder1, sizeof(CupHolder1), cup1);
//		strcpy_s(CupHolder2, sizeof(CupHolder2), "텅빔");
//	}
//	//컵홀더에 음료를 넣는 함수(오버로딩)
//	void CupHolderAdd(const char * cup1, const char * cup2)
//	{
//		strcpy_s(CupHolder1, sizeof(CupHolder1), cup1);
//		strcpy_s(CupHolder2, sizeof(CupHolder2), cup2);
//	}
//	void ShowInfo()
//	{
//		cout << "현재 차량 소유자 : " << owner << endl;
//		cout << "현재 차량 스피드 : " << speed << endl;
//		cout << " 현재 차량 연료량 : " << fuel << endl;
//		cout << "CupHolder01 : " << CupHolder1 << endl;
//		cout << "CupHolder02 : " << CupHolder2 << endl;
//	}
//};
//
//int main()
//{
//	Car Lee ( "이태수",0,100);						
//	Car Kim = ( "김상중",0,100);
//	Car Jung = ("정우균", 0, 100);
//
//	return 0;
//}
//


//예제09- 소멸자 함수 확인
//
//#include<iostream>
//using namespace std;
//
//class simple
//{
//public:
//	int num;
//public:
//	simple(int n) :num(n)
//	{
//		cout << num << ":생성자 호출" << endl;
//	}
//	~simple() //디폴트 소멸자 , 가장 마지막에 생성된 생성자부터 소멸 됨
//	{
//		cout << num << " : 소멸자 호출" << endl;
//	}
//};
//
//int main()
//{
//	simple obj1(10);
//	simple obj2(20);
//	simple obj3(30);
//	return 0;
//}

//예제10: 정보은닉(접근한정자 + 멤버함수로 멤버변수에 접근)

//public: 외부에서 멤버에 접근 허용
//protected: 상속관계에서 상위클래스의 멤버의 하위클래스의 접근 허용
//private: 외부에서 접근 불가

//#include<iostream>
//using namespace std;
//
//class person
//{
//public:      //외부에서 해당 멤버에 접근가능
//	char name[30];
//private:      //외부에서  해당 멤버에 접근불가
//	int age;
//	double weight;
//	double height;
//
//public:
//	person(const char*n) : age(0), weight(0), height(06)
//	{
//		strcpy_s(name, sizeof(name), n);
//	}
//	void Setage(int a) { age = a; }
//	void Setweight(double w) { weight = w; }
//	void Setheight(double h) { height = h; }
//	void showinfo()
//	{
//		cout << "이름:" << name << endl;
//		cout << "나이:" << age << endl;
//		cout << "체중:" << weight << endl;
//		cout << "신장:" << height << endl;
//	}
//};
//int main()
//{
//	person Lee("이병헌");
//	Lee.Setage(45);
//	Lee.Setweight(70);
//	Lee.Setheight(177.2);
//	Lee.showinfo();
//
//	return 0;
//}

//예제11- 캡슐화

//캡슐화는 객체에 필요한 여러 과정을 하나로 묶는 작업
//자동차 엔진을 예로 들면 자동차엔진의 동작원리인 "흡입>>압축>>폭발>>배기" 과정을 거치게 되는데
// 이러한 과정을 엔진의 동작이라는 기능에 묶어서 실행하는 것을 캡슐화라고 한다.
// 캡슐화는 기본적으로 정보은닉을 수반한다. 외부에서 함부로 접근하게되면 동작과정에 문제가 생기기 떄문이다.
// 엔진의 도작과정중 흡입/압축 등 과정이 외부에 노출되어 잘못 된 순서로 진행되게 된다면 엔진동작에 큰 문제가 발생한다
// 중요부품이 외부에 노출되게되더라도 엔진손상이 발생
//그렇기때문에 캡슐화는 정보은닉을 수반하게 된다./
// 캡슐화는 작업공정을 정의하기가 매우 까다롭다
//엄격한 과정을 거쳐서 캡슐화 과정을 진행해야한다.

//#include<iostream>
//using namespace std;
//
//class carengine
//{
//private:
//	void Inducation()
//	{
//		cout << "가솔린+공기 흡입" << endl;
//	}
//	void compress()
//	{
//		cout << "피스톤이 상승하면서 흡기 벨브가 닫힘" << endl;
//
//	}
//	void power()
//	{
//		cout << "피스톤이 위/아래로 움직이면서 폭발" << endl;
//	}
//	void exhaust()
//	{
//		cout << "배기밸브가 오픈되면서 배기가스가 외부로 빠짐" << endl;
//
//	}
//
//public:
//	void enginestart()
//	{
//		Inducation();
//		compress();
//		power();
//		exhaust();
//	}
//};
//
//class Car	
//{
//private:		
//	char owner[10];	
//	int speed;		
//	int fuel;		
//	carengine engin;
//
//public:
//	//생성자 함수
//	Car(const char * name, int s, int f) : speed(s), fuel(f)
//	{
//		strcpy_s(owner, sizeof(owner), name);
//		cout << "생성자 함수가 호출됨!" << endl;
//	}
//	//자동차 시동함수
//	void start()
//	{
//		cout << "시동을 겁니다" << endl;
//		engin.enginestart();
//	}
//
//	void Accel()
//	{
//		if (fuel == 0)	
//		{
//			cout << "연료 부족으로 가속불가능 합니다" << endl;
//		}
//		else 
//		{
//			if (speed >= 200)
//			{
//				speed = 200;
//				cout << "현재 " << owner << " 님의 차가 최대 속도 입니다" << endl;
//			}
//			else
//			{
//				speed = speed + 10; 
//				cout << "현재 " << owner << " 님의 차를 가속합니다. 현재속도 : " << speed << endl;
//			}
//			fuel--; 
//		}
//	}
//	
//	void Break()
//	{
//		if (speed - 10 <= 0)
//		{
//			speed = 0;
//			cout << owner << " 님의 차가 정지합니다" << endl;
//		}
//		else 
//		{
//			speed = speed - 10; 
//			cout << owner << " 님의 차를 감속합니다. 현재 속도 : " << speed << endl;
//		}		
//	}
//
//	void ShowInfo()
//	{
//		cout << "현재 차량 소유자 : " << owner << endl;
//		cout << "현재 차량 스피드 : " << speed << endl;
//		cout << " 현재 차량 연료량 : " << fuel << endl;
//		
//	}
//};
//
//int main()
//{
//	Car Lee ( "이태수",0,100);						
//	Lee.start();
//	Lee.Accel();
//	Lee.Accel();
//	Lee.Accel();
//	Lee.Break();
//	cout << endl;
//	Lee.ShowInfo();
//
//	return 0;
//}