	//Point: -����Ű��
	//Pointer : -�� ����Ű�� ����

	//�޸��� Ư�� ��ġ�� ����Ű�� ��ȣ �Ǵ� �ּҰ�

	//���� ����

	//�Ϲ� ���� : Data ����
	//������ ���� : Address ����


	//������ ������
	//*(������ ������) : �����;��� �ּҰ� ����Ű�� �� / ����
	//& (���� ������) : ���������� �ּҸ� Ȯ��

	//�ڵ� Ȯ��
	//int num = 3; //4byte �������� ������� num �̸��� ���ε� 3���� �ʱ�ȭ
	//int * ptr = &num; //int ������ ũ�⸦ ����Ű�� ptr �����ͺ��� �����ϰ� num�ּҰ����� �ʱ�ȭ
	//*ptr = 10; // ptr�� ����Ű�� ������ 10�� ����
	//int num2 = *ptr; // 4byte���� num2���������� ptr�� ����Ű�� ���� ������ �ʱ�ȭ


//����01 ������ �⺻

//#include <stdio.h>
//int main()
//{
//	char ch1 = 'A', ch2;	//ch1��������� A �ʱ�ȭ , ch2���� ����
//	char * ptr;	// char �� ����Ű�� ptr ������ ����
//
//	ptr = &ch1; //ch1�� �ּҰ��� ptr ������ ����
//	ch2 = *ptr; //ptr�����Ͱ� ����Ű�� ���� ch2������ ����
//	printf("ch1 �� �ּ�:%p\n", &ch1);//ch1�������ּҸ� %p���Ŀ� �°� print
//	printf("ptr ���� ��:%p\n", ptr); // ptr���� ���� %p���Ŀ� �°� print
//	printf("ptr �� ����Ű�� ���� ��:%c\n", *ptr);//ptr�� ����Ű�� ���ǰ��� %c���� print
//	printf("ch2 ���� ��:%c\n", ch2);//ch2���� ���� %c���Ŀ� �°� print
//	return 0;
//}

//����02 ������ �⺻

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


//03����
//�Ʒ��� ���� ����� ������ ������ ������ ���踦 �׸��� �׷��� �����غ�����
//�׸��� ��°���� ������ ���ô�
//�׸��� ���� -> ����â(������Ű+r) ->mspaint ����

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


//03 �迭�� ������
//�迭���� �迭���̸�(�迭��)�� �迭������ �����ϴ� ������ġ�ּҸ� ����ִ� �������̴�

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



//����04 �������� ���� + �����͸� �̿��� �迭 ����

//�������� ����! : �����Ϳ� ���� ������ �������ڷ����� ũ�⸸ŭ �ּ���ġ�� ����ȴ�!
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






