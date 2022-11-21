	//Point: -가리키다
	//Pointer : -을 가리키는 도구

	//메모리의 특정 위치를 가리키는 기호 또는 주소값

	//변수 종류

	//일반 변수 : Data 저장
	//포인터 변수 : Address 저장


	//포인터 연산자
	//*(포인터 연산자) : 포인터안의 주소가 가리키는 값 / 공간
	//& (참조 연산자) : 변수공간의 주소를 확인

	//코드 확인
	//int num = 3; //4byte 정수공간 을만들고 num 이름을 붙인뒤 3으로 초기화
	//int * ptr = &num; //int 정도의 크기를 가리키는 ptr 포인터변수 생성하고 num주소값으로 초기화
	//*ptr = 10; // ptr이 가리키는 공간에 10을 대입
	//int num2 = *ptr; // 4byte정수 num2변수공간에 ptr이 가리키는 곳의 값으로 초기화


//예제01 포인터 기본

//#include <stdio.h>
//int main()
//{
//	char ch1 = 'A', ch2;	//ch1공간만들고 A 초기화 , ch2공간 생성
//	char * ptr;	// char 를 가리키는 ptr 포인터 생성
//
//	ptr = &ch1; //ch1의 주소값을 ptr 공간에 대입
//	ch2 = *ptr; //ptr포인터가 가리키는 값을 ch2공간에 대입
//	printf("ch1 의 주소:%p\n", &ch1);//ch1공간의주소를 %p서식에 맞게 print
//	printf("ptr 안의 값:%p\n", ptr); // ptr안의 값을 %p서식에 맞게 print
//	printf("ptr 이 가리키는 곳의 값:%c\n", *ptr);//ptr이 가리키는 곳의값을 %c서식 print
//	printf("ch2 안의 값:%c\n", ch2);//ch2안의 값을 %c서식에 맞게 print
//	return 0;
//}

//예제02 포인터 기본

//#include <stdio.h>
//int main()
//{
//	int num1 = 10, num2;
//	int * ptr;
//	ptr = &num1;
//	num1++;
//	num2 = 5;
//	ptr = &num2;
//	*ptr = *ptr + num1 + num2;
//	printf("num1=%d num2=%d *ptr=%d\n", num1, num2, *ptr);
//	return 0;
//}


//03문제
//아래의 예제 실행시 변수와 포인터 변수의 관계를 그림을 그려서 설명해보세요
//그리고 출력결과도 예상해 봅시다
//그림판 실행 -> 실행창(윈도우키+r) ->mspaint 엔터

//#include <stdio.h>
//int main()
//{
//	int num = 10;
//	int * ptr1 = &num;
//	int *ptr2 = ptr1;
//	(*ptr1)++;
//	(*ptr2)++;
//	printf("%d\n", num);
//	return 0;
//}


//03 배열과 포인터
//배열에서 배열의이름(배열명)은 배열공간이 존재하는 시작위치주소를 담고있는 포인터이다

//#include <stdio.h>
//int main()
//{
//	int arr1[3] = { 1,2,3 };
//	double arr2[3] = { 1.1,2.2,3.3 };
//	printf("%d %lf\n", *arr1, *arr2);
//
//	*arr1 = *arr1 + 100;
//	*arr2 = *arr2 + 120.5;
//
//	printf("%d %lf\n", *arr1, *arr2);
//
//	return 0;
//}



//예제04 포인터의 연산 + 포인터를 이용한 배열 접근

//포인터의 연산! : 포인터에 값을 증가시 포인터자료형의 크기만큼 주소위치가 변경된다!
#include <stdio.h>
int main()
{
	//int num = 3;
	//char *ptr1 = &num;
	//printf("%p \n", ptr1);
	//printf("%p \n", ptr1+1);
	//printf("%p \n", ptr1+2);
	//printf("%p \n", ptr1+3);
	//printf("%p \n", ptr1+4);

	int arr[3] = { 11,22,33 };
	int *ptr = arr;
	printf("%d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2));
	printf("%d %d %d\n", ptr[0], ptr[1], ptr[2]);



	return 0;
}






