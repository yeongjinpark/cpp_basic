//예제 1 기본출력

//#include<iostream>
////int main()
////{
////	std::cout << "hello woeld"; //::는 ~안에라는 뜻(std안에 cout), <<는 방향설정 : std안에있는 cout를 향해 지시 
////	std::cout << "hello world\n";
////	std::cout << "1+2=" << 1 + 2 << "입니다\n";
////	std::cout << "개행은 endl로도 가능" << std::endl;
////
////
////	return 0;
////}
//
////예제02 기본입력
//
//#include<iostream>
//int main()
//{
//	int num = 0;
//	std::cout << "표쥰 기능확인!" << std::endl;
//	std::cout << "값입력:";
//	std::cin >> num;
//	std::cout << "입력한 값:" << num << std::endl;
//	return 0;
//}

////예제3 기본출력
//#include<iostream>
//int main()
//{
//	int num = 20;
//	std::cout << "hello world" << std::endl;
//	std::cout << "hello" << "world" << std::endl;
//	std::cout << num << ' ' << 'A'<<"hello world" << std::endl;
//	std::cout << num << ' ' << 3.14<< std::endl;
//	return 0;
//}

////예제4 여러값 입력받기
//#include<iostream>
//int main()
//{
//	int x,y,z ;
//	std::cout << "세수를 입력하세요: ";
//	std::cin >> x >> y >> z;
//	std::cout << "입력한 3개의 정수값은: ";
//	std::cout << x << y << z;
//	return 0;
//
//}

////예제5 
//#include<iostream>
//int main()
//{
//	char name[100];
//	char lang[100];
//
//	std::cout << "당신의 이름은 무엇입니까?";
//	std::cin >> name;
//	std::cout << "좋아하는 프로그래밍 언어는 무엇인가요?";
//	std::cin >> lang;
//
//	std::cout << "내 이름은" << name << "입니다" << std::endl;
//	std::cout << "좋아하는 언어는" << lang << "입니다." << std::endl;
//
//	return 0;
//}

//문제 3

//숫자를 하나 입력받아서 그 숫자에 해당하는 구구단을 출력하는 프로그램을 작성해보자
//#include<iostream>
//int main()
//{
//	int x, y; 
//	y++;
//	std::cout << "수를 입력하시오";
//	std::cin >> x;	
//	std::cout << "입력한값의 구구단은";
//	std::cout <<  << 
//	return 0;
//}

//문제 4

//판매원들의 급여 계산 프로그램을 작성해 보자.이 회사는 모든 판매원에게 매달 50만원의
//기본 급여와 물품 판매 가격의 12 % 에 해당하는 돈을 지급한다.예를 들어서 민수라는 친구의 이번달 물품
//판매 금액이 100만원이라면, 50 + 100 * 0.12 = 62, 따라서 62만원을 급여로 지급받는다
//단, 아래의 실행의 예에서 보이듯이 이러한 급여의 계산은 - 1이 될떄까지 계속되어야 한다
//
//- 실행 예 -
//판매 금액을 만원 단위로 입력(-1 to end) : 100
//이번 달 급여 : 62만원
//판매 금액을 만원 단위로 입력(-1 to end) : 200
//이번 달 급여 : 200만원
//판매 금액을 만원 단위로 입력(-1 to end) : -1
//프로그램을 종료합니다.