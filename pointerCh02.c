//pointer: ~�� ����Ű�� ����
//
//	�޸��� Ư�� ��ġ�� ����Ű�� ��ȣ �Ǵ� �ּҰ�
//
//	��������
//
//	1) �Ϲݺ��� : data����
//	2) ������ ���� : address����
//
//
//	������ ������
//	*(������ ������) : �����;��� �ּҰ� ����Ű�� �� / ����
//
//	&& (���� ������) : ���������� �ּҸ� Ȯ��
//
//
//	�ڵ� Ȯ��
//	int num = 3;  //4byte ���������� ����� num�̸��� ���� �� 3���� �ʱ�ȭ
//		 int *ptr = &num; // int������ ũ�⸦ ����Ű�� ptr �����ͺ��� �����ϰ� num �ּҰ����� �ʱ�ȭ
//		 *ptr = 10; // ptr�� ����Ű�� ������ 10�� ����
//		 int num2 = *ptr; // 4byte ���� num2 ���������� ptr�� ����Ű�� ���� ������ �ʱ�ȭ


////����1 ������ �⺻
//#include<stdio.h>
//int main()
//{
//	char ch1 = 'A', ch2; ////ch1 ���� ����� A�ʱ�ȭ, ch2 ��������
//	char * ptr;         //// char�� ����Ű�� ptr ������ ����
//
//	ptr = &ch1; //// ch1�� �ּҰ��� ptr ������ ����
//	ch2 = *ptr; //// ptr�����Ͱ� ����Ű�� ���� ch2������ ����
//	printf("ch1�� �ּ�: %p\n", &ch1); ////ch1 ������ �ּҸ� %p���Ŀ� �°� print
//	printf("ptr���� ��: %p\n", ptr);  //// ptr���� ���� %p���Ŀ� �°� print
//	printf("ptr�� ����Ű�� ���� ��: %c\n", *ptr); //// ptr�� ����Ű�� ���� ���� %c���� print
//	printf("ch2���� ��: %c\n", ch2); //// ch2���� ���� %c���Ŀ� �°� print
//
//	return 0;
//
//}

////����02 ������ �⺻
//#include<stdio.h>
//int main()
//{
//	int num1 = 10, num2; ////num1 ���� ����� 10���� �ʱ�ȭ, num2 ��������
//	int*ptr;  ////int�� ����Ű�� ptr������ ����
//	ptr = &num1; ////num1�� �ּҰ��� ptr������ ����
//	num1++; ////
//	num2 = 5; ////num2  ������ 5����
//	ptr = &num2;
//	*ptr = *ptr + num1 + num2;
//	printf("num1=%d num2=%d *ptr=%d\n", num1, num2, *ptr);
//	return 0;
//}

////03����
////�Ʒ��� ���� ����� ������ ����ó ������ ���踦 �׸��� �׷��� �����غ�����
//#include<stdio.h>
//int main()
//{
//	int num = 10;    //num ���� ����� 10���� �ʱ�ȭ
//	int * ptr1 = &num;
//	int *ptr2 = ptr1;
//	(*ptr1)++;
//	(*ptr2)++;
//	printf("%d\n", num);
//	return 0;
//
//}


////03 �迭�� ������
////�迭���� �迭�� �̸��� �迭������
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

////����4 �������� ���� + �����͸� �̿��� �迭 ����
////�������� ����!: ����ó�� ���� ������ ������ �ڷ����� ũ�⸸ŭ �ּ���ġ�� ����ȴ�.
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

////����6 swap �Լ��� main�Լ��� ���������� ���� �ٲܼ�������?
////call-by-value ������δ� main �Լ��� a,b�� ���� swap �� �� ����. 
////call- by- addree ������� ������ �ּҰ��� �����Ͽ� �����͹��ε��� ���� ��ȯ�Ѵ�.
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
//	printf("swap�� a=%d b=%d \n", a, b);
//	//swap(a, b); // call-by- value
//	swap(&a, &b); //call-by-address
//	printf("swap �� a=%d b=%d \n", a, b);
//	return 0;
//}


//07 �����Ҵ�
//�޸� ������ �ʿ��Ѹ�ŭ ���������� �Ҵ��ϱ� ���� ���
//�޸� ������ heap ������ �Ҵ�
//�����Ҵ� �Լ�: malloc �����Ҵ� ���� �Լ� : free
//�����Ҵ�� �ݵ�� nullüũ�� ���ؼ� �Ҵ翩�� Ȯ��

//���α׷��� �޸� ����
// code����: ����� ������ �ڵ尡 ����Ǵ� ����
// data����: ���׺��� /static������ �Ҵ�Ǵ� ����
//heap ����: malloc���� �Ҵ�/free�� ����
//stack����: ��������, �Ű������� �Ҵ�Ǵ� ����

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int*pi;
//	pi = (int*)malloc(sizeof(int));
//	if (pi == NULL)
//	{
//		printf("�����Ҵ� ����.. heap �޸� ��������!!\n")
//
//			exit(1)
//	}
//	*pi = 10;
//	printf("���������� ���: %d\n", *pi);
//	free(pi);
//	return 0;
//}

////����8 ����ü
////����� ���� �ڷ���
////ǥ���ϰ����ϴ� ��ü�� ���� ������ ������ؼ� �������� �ڷ���

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
//	/*struct person jung = { "�����",35,177,80,"�뱸������" };
//	struct person lee = { "������",27,172,68,"�λ걤����" };
//
//	printf("%s, %d, %lf, %s\n", jung.name, jung.age, jung.height, jung.weight, jung.addr);
//	printf("%s, %d, %lf, %s\n", lee.name, lee .age, lee.height, lee.weight, lee.addr);
//*/
//	struct person employee[3] = {
//		{ "�����",35,177,80,"�뱸������"},
//		{ "������",27,172,68,"�λ걤����"},
//		{ "���¼�", 55, 166, 55, "â����"}
//	};
//	for (int i = 0; i < 3; i++)
//		printf("%s, %d, %f, %lf, %s\n", employee[i].name, employee[i].age, employee[i].height, employee[i].weight, employee[i].addr);
//	return 0;
//}