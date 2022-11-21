//객체 class

//예제01 objct의 속성/기능분류

////에어컨
// 속성: 제품명,display, 전력량..
// 기능: power on/off, 제습, 파워냉방...


////나무
//속성: 줄기, 뿌리, 잎, 가지...  
//기능: 광합성, 산소생성, 물흡수, 홍수예방....


////자동차
//속성: 바퀴,백미러, 엔진, 연료량, 현재속도...
//기능: 시동을 건다, 감속한다, 가속한다.


////컴퓨터
//속성: cpu, ram, hdd, gpu, 주변장치...
//기능: power on/off, app실행...


//
////예제2 클래스만들기(속성:멤버변수)
//// 
//#include<iostream>
//using namespace std;
//
//class car // 클래스 car자료형 선언
//{
//     public: //접근지시자 외부에서의 접근허용여부
//		 char owner[10]; //멤버변수(속성데이터 저장)
//		 int speed; // 멤버변수
//		 int fuel; //멤버변수
//};
//int main()
//{
//	car lee = { "이태수", 0, 100 }; //car클래스로 lee object 정의
//	cout << "owner= " << lee.owner << endl; // lee object의 소유자 확인
//	cout << "cueewnt speed: " << lee.speed << endl; // lee object의 현재스피드 확인
//	cout << "corrent fuel: " << lee.fuel << endl;  //lee object의 현재 연료량 확인
//	return 0;
//}

//문제01computer 클래스를 만들고 필요한 속성을 부여하세요
//class computer
//{ 
//public:
//	 //컴퓨터의 소유자
//	char owner[20];
//	//일련번호 저장
//	char prodnum[30];
//	//cpu스펙저장
//	char CPUspec[10];
//	//ram스펙저장
//	 char RAMspec[10];
//	//disk 스펙 저장
//	char DISKspec[10];
//};
//int main()
//{
//	computer samsungFlex = { "정우균","1-2-3-4", "I7","16G", "500G" };
//	cout << samsungFlex.owner << endl;
//	cout << samsungFlex.prodnum << endl;
//	cout << samsungFlex.CPUspec << endl;
//	cout << samsungFlex.RAMspec << endl;
//	cout << samsungFlex.DISKspec << endl;
//	return 0;
//}

//예제3 클래스의 멤버함수
//#include<iostream>
//using namespace std;
//
//class car // 클래스 car자료형 선언
//{
//     public: //접근지시자 외부에서의 접근허용여부
//		 char owner[10]; //멤버변수(속성데이터 저장)
//		 int speed; // 멤버변수
//		 int fuel; //멤버변수
//public:
//	//가속하다 voud accel()
//	void accel()
//	{
//		if (fuel == 0) //현재 연료량 x
//		//엑셀을 밟으면 속도는 10씩 증가, 연료량은 1씩감소
//		{
//			cout << "연료 부족으로 가속불가능 합니다" << endl;
//		}
//		else //연료량 남아있는 상태라면
//		{
//			if (speed >= 200)
//			{
//				speed = 200; //최대시속 200km/h
//				cout << "현재" << owner << "남의 차가 최대 속도입니다." << endl;
//			}
//			else
//			{
//				speed = speed + 10; //speed증가
//				cout << "현재" << owner << "님의 차를 가속합니다. 현재속도: " << speed << endl;
//			}
//	
//			fuel--; // 연료량 1씩 감소
//		}
//	}
//	//감속하다 void break()
//	void Break()
//	{
//		if (speed - 10 <= 0) // 만약 break함수 사용시 speed가 -이거나 작다면
//		{
//			speed = 0;
//			cout << owner << "님의 차가 정지합니다" << endl;
//		}
//		else //speed-10의 값이 양수라면
//		{
//			speed = speed - 10;
//			cout << owner << "님의 차가 감속합니다. 현재속도: " << speed << endl;
//
//
//		}
//		//Break를 사용하면 speed가 10씩 감소하도록 설정
//		//만약 speed가 0이하로 떨어지는 경우 speed는 0으로 설정한다.
//	}
//	//정보확인 void showinfo()
//	void showinfo()
//	{
//		cout << "현재 차량 소유자: " << owner << endl;
//		cout << "현재 차량 스피드: " << owner << endl;
//		cout << " 현재 차량 연료량: " << fuel << endl;
//		//현재 소유자 확인
//		//현재 스피드 확인
//		//현재 연료량 확인
//
//	}
//};
//int main()
//{
//	car lee = { "이태수", 0, 100 }; //car클래스로 lee object 정의
//	car kim = { "김상중",0,100 };
//	lee.accel();
//	lee.accel();
//	lee.accel();
//	lee.Break();
//	lee.showinfo();
//	//cout << "owner= " << lee.owner << endl; // lee object의 소유자 확인
//	//cout << "cueewnt speed: " << lee.speed << endl; // lee object의 현재스피드 확인
//	//cout << "corrent fuel: " << lee.fuel << endl;  //lee object의 현재 연료량 확인
//	return 0;
//}

//문제
//현재 conputer class에서 다음 기능을 추가하세요
//전원 켜기: void poweron();  "owner님의 컴퓨터 전원을 켭니다"가 출력
//전원 끄기: void poweroff();  "owner님의 컴퓨터 전원을 끕니다"가 출력
//현재 정보확인: void ShowInfo(); 현재 소유자/ 제품번호/컴퓨터 스펙이 출력될 수 있도록 설정
//#include <iostream>
//using namespace std;
//
//class computer
//{
//public:
//	// 컴퓨터의 소유자
//	char owner[20];
//	//	//일련번호 저장
//	char prodnum[30];
//	//	//cpu스펙저장
//	char CPUspec[10];
//	//	//ram스펙저장
//	char RAMspec[10];
//	//disk 스펙 저장
//	char DISKspec[10];
//public:
//	void poweron()
//	{
//		cout << owner << "님의 컴퓨터 전원을 켭니다" << endl;
//	}
//	void poweroff()
//	{
//		cout << owner << "님의 컴퓨터 전원을 켭니다" << endl;
//	}
//	void showinfo()
//	{
//		cout << "컴퓨터의 소유자명: " << owner << endl;
//		cout << "제품명: " << prodnum << endl;
//		cout << "cpuspec: " << CPUspec << endl;
//		cout << "ramspec: " << RAMspec << endl;
//		cout << "ramspec: " << DISKspec << endl;
//	};
//	int main()
//	{
//		computer samsungFlex = { "정우균","1-2-3-4", "I7","16G", "500G" };
//		samsungFlex.poweron(); samsungFlex.poweroff(); samsungFlex.showinfo()
//
//			
//	}
//	return 0;
//}

////예제
//#include<iostream>
//using namespace std;
//
//class car
//{
//     public:
//		 char owner[10]; 
//		 int speed;
//		 int fuel; 
//		 //멤버변수 추가
//		 char cupholder1[20];
//		 char cupholder2[20];
//public:
//	
//	void accel()
//	{
//		if (fuel == 0) 
//		
//		{
//			cout << "연료 부족으로 가속불가능 합니다" << endl;
//		}
//		else 
//		{
//			if (speed >= 200)
//			{
//				speed = 200;
//				cout << "현재" << owner << "남의 차가 최대 속도입니다." << endl;
//			}
//			else
//			{
//				speed = speed + 10; 
//				cout << "현재" << owner << "님의 차를 가속합니다. 현재속도: " << speed << endl;
//			}
//	
//			fuel--; 
//		}
//	}
//	
//	void Break()
//	{
//		if (speed - 10 <= 0) 
//		{
//			speed = 0;
//			cout << owner << "님의 차가 정지합니다" << endl;
//		}
//		else 
//		{
//			speed = speed - 10;
//			cout << owner << "님의 차가 감속합니다. 현재속도: " << speed << endl;
//
//
//		}
//		
//	}
//	//컵홀더에 음료를 넣는 함수
//	void cupholderadd(const char* cup1)
//	{
//		strcpy_s(cupholder1, sizeof(cupholder1), cup1);
//		strcpy_s(cupholder2, sizeof(cupholder2), "텅 빔");
//	}
//	//컵홀더에 음료를 넣는 함수(오버로딩)
//	void cupholderadd(const char * cup1, const char * cup2)
//	{
//		strcpy_s(cupholder1, sizeof(cupholder1), cup1);
//		strcpy_s(cupholder2, sizeof(cupholder2), cup2);
//	}
//
//
//
//
//	void showinfo()
//	{
//		cout << "현재 차량 소유자: " << owner << endl;
//		cout << "현재 차량 스피드: " << owner << endl;
//		cout << " 현재 차량 연료량: " << fuel << endl;
//		cout << "cupholder01: " << cupholder1 << endl;
//		cout << "cupholder02: " << cupholder2 << endl;
//		
//	}
//};
//int main()
//{
//	car lee = { "이태수", 0, 100 };
//	
//	car kim = { "김상중",0,100 };
//	lee.cupholderadd("식혜", "커피"); //2개의 인자를 받는 cupholderadd함수 사용
//	kim.cupholderadd("수정과");        //1개의 인자를 받는 cupholderadd함수 사용
//	//lee.accel();
//	//lee.accel();
//	//lee.accel();
//	//lee.Break();
//	//lee.showinfo();
//
//
//		return 0;
//}

//문제 오버로딩 함수 만들기
//현재 컴퓨터 클래스에서 실행하기(appstart())함수를 만드시고
//메모장, 게임, 엑셀을 실행시에 각각 어떤 app이 실행되는지 화면에 출력하세요

//실행하기 함수(메모장만 실행): appstart(const char *memo)
//"전달받은 메모장 파일명", "메모장을 실행합니다" 가 출력

//실행하기 함수(메모장, 엑셀실행): appstart(const char *memo, const char excel)
// "메모장을 실행합니다: 메모장 파일명: "전달받은 메모장 파일명"" 이 출력
// "excel 을 실행합니다: excel 파일명: " 전달받은 excel 파일명"" 이출력
// "game 을 실행합니다: game명: " 전달받은 game 파일명"" 이출력