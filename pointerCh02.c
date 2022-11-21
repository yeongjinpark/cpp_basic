//pointer: ~을 가리키는 도구
//
//	메모리의 특정 위치를 가리키는 기호 또는 주소값
//
//	변수종류
//
//	1) 일반변수 : data저장
//	2) 포인터 변수 : address저장
//
//
//	포인터 연산자
//	*(포인터 연산자) : 포인터안의 주소가 가리키는 값 / 공간
//
//	&& (참조 연산자) : 변수공간의 주소를 확인
//
//
//	코드 확인
//	int num = 3;  //4byte 정수공간을 만들고 num이름을 붙인 뒤 3으로 초기화
//		 int *ptr = &num; // int정도의 크기를 가리키는 ptr 포인터변수 생성하고 num 주소값으로 초기화
//		 *ptr = 10; // ptr이 가리키는 공간에 10을 대입
//		 int num2 = *ptr; // 4byte 정수 num2 변수공간에 ptr이 가리키는 곳의 값으로 초기화


////예제1 포인터 기본
//#include<stdio.h>
//int main()
//{
//	char ch1 = 'A', ch2; ////ch1 공간 만들고 A초기화, ch2 공간생성
//	char * ptr;         //// char를 가리키는 ptr 포인터 생성
//
//	ptr = &ch1; //// ch1의 주소값을 ptr 공간에 대입
//	ch2 = *ptr; //// ptr포인터가 가리키는 값을 ch2공간에 대입
//	printf("ch1의 주소: %p\n", &ch1); ////ch1 공간의 주소를 %p서식에 맞게 print
//	printf("ptr안의 값: %p\n", ptr);  //// ptr안의 값을 %p서식에 맞게 print
//	printf("ptr이 가리키는 곳의 값: %c\n", *ptr); //// ptr이 가리키는 곳의 값을 %c서식 print
//	printf("ch2안의 값: %c\n", ch2); //// ch2안의 값을 %c서식에 맞게 print
//
//	return 0;
//
//}

////예제02 포인터 기본
//#include<stdio.h>
//int main()
//{
//	int num1 = 10, num2; ////num1 공간 만들고 10으로 초기화, num2 공간생성
//	int*ptr;  ////int를 가리키는 ptr포인터 생성
//	ptr = &num1; ////num1의 주소값을 ptr공간에 대입
//	num1++; ////
//	num2 = 5; ////num2  공간의 5대입
//	ptr = &num2;
//	*ptr = *ptr + num1 + num2;
//	printf("num1=%d num2=%d *ptr=%d\n", num1, num2, *ptr);
//	return 0;
//}

////03문제
////아래의 예제 실행시 변수와 포인처 변수의 관계를 그림을 그려서 설명해보세요
//#include<stdio.h>
//int main()
//{
//	int num = 10;    //num 공간 만들고 10으로 초기화
//	int * ptr1 = &num;
//	int *ptr2 = ptr1;
//	(*ptr1)++;
//	(*ptr2)++;
//	printf("%d\n", num);
//	return 0;
//
//}


////03 배열과 포인터
////배열에서 배열의 이름은 배열공간이
//#include<stdio.h>
//int main()
//{
//	int arr1[3] = { 1,2,3 };
//	double arr2[3] = { 1.1,2.2,3.3 };
//	printf("%d %1f\n", *arr1, *arr2);
//
//	*arr1 = *arr1 + 100;
//	*arr2 = *arr2 + 120.5;
//
//	printf("%d %1f\n", *arr1, *arr2);
//
//	return 0;
//}

////예제4 포인터의 연산 + 포인터를 이용한 배열 접근
////포인터의 연산!: 포인처에 값을 증가시 포인터 자료형의 크기만큼 주소위치가 변경된다.
//#include<stdio.h>
//int main()
//{
//	/*int num = 3;
//	char *ptr1 = &num;
//	printf("%p \n", ptr1);
//	printf("%p \n", ptr1 + 1);
//	printf("%p \n", ptr1 + 2);
//	printf("%p \n", ptr1 + 3);
//	printf("%p \n", ptr1 + 4);*/
//
//	int arr[3] = { 11,22,33 };
//	int *ptr = arr;
//	printf("%d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2));
//	printf("%d %d %d\n", ptr[0], ptr[1], ptr[2]);
//
//	return 0;
//}

////예제6 swap 함수로 main함수의 지역변수의 값을 바꿀수있을까?
////call-by-value 방식으로는 main 함수의 a,b의 값을 swap 할 수 없다. 
////call- by- addree 방식으로 변수의 주소값을 전달하여 포인터바인딩을 통해 교환한다.
//
//#include<Stdio.h>
//void swap(int a, int b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//int main()
//{
//	int a = 10, b = 20;
//	printf("swap전 a=%d b=%d \n", a, b);
//	//swap(a, b); // call-by- value
//	swap(&a, &b); //call-by-address
//	printf("swap 후 a=%d b=%d \n", a, b);
//	return 0;
//}


//07 동적할당
//메모리 공간을 필요한만큼 유동적으로 할당하기 위한 기술
//메모리 영역중 heap 영역에 할당
//동적할당 함수: malloc 동적할당 해제 함수 : free
//동적할당시 반드시 null체크를 통해서 할당여부 확인

//프로그램의 메모리 영역
// code영역: 기계어로 번역된 코드가 저장되는 영역
// data영역: 전액변수 /static변수가 할당되는 영역
//heap 영역: malloc으로 할당/free로 해제
//stack영역: 지역변수, 매개변수가 할당되는 영역

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int*pi;
//	pi = (int*)malloc(sizeof(int));
//	if (pi == NULL)
//	{
//		printf("동적할당 실패.. heap 메모리 공간부족!!\n")
//
//			exit(1)
//	}
//	*pi = 10;
//	printf("정수형으로 사용: %d\n", *pi);
//	free(pi);
//	return 0;
//}

////예제8 구조체
////사용자 정의 자료형
////표현하고자하는 개체에 대한 정보를 담기위해서 만들어놓은 자료형

//#include <stdio.h>
//struct person
//{
//	char name[30];
//	int age;
//	float height;
//	double weight;
//	char addr[30];
//};
//
//int main()
//{
//	/*struct person jung = { "정우균",35,177,80,"대구광역시" };
//	struct person lee = { "이지성",27,172,68,"부산광역시" };
//
//	printf("%s, %d, %lf, %s\n", jung.name, jung.age, jung.height, jung.weight, jung.addr);
//	printf("%s, %d, %lf, %s\n", lee.name, lee .age, lee.height, lee.weight, lee.addr);
//*/
//	struct person employee[3] = {
//		{ "정우균",35,177,80,"대구광역시"},
//		{ "이지성",27,172,68,"부산광역시"},
//		{ "이태수", 55, 166, 55, "창원시"}
//	};
//	for (int i = 0; i < 3; i++)
//		printf("%s, %d, %f, %lf, %s\n", employee[i].name, employee[i].age, employee[i].height, employee[i].weight, employee[i].addr);
//	return 0;
//}