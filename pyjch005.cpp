//��ü class

//����01 objct�� �Ӽ�/��ɺз�

////������
// �Ӽ�: ��ǰ��,display, ���·�..
// ���: power on/off, ����, �Ŀ��ù�...


////����
//�Ӽ�: �ٱ�, �Ѹ�, ��, ����...  
//���: ���ռ�, ��һ���, �����, ȫ������....


////�ڵ���
//�Ӽ�: ����,��̷�, ����, ���ᷮ, ����ӵ�...
//���: �õ��� �Ǵ�, �����Ѵ�, �����Ѵ�.


////��ǻ��
//�Ӽ�: cpu, ram, hdd, gpu, �ֺ���ġ...
//���: power on/off, app����...


//
////����2 Ŭ���������(�Ӽ�:�������)
//// 
//#include<iostream>
//using namespace std;
//
//class car // Ŭ���� car�ڷ��� ����
//{
//     public: //���������� �ܺο����� ������뿩��
//		 char owner[10]; //�������(�Ӽ������� ����)
//		 int speed; // �������
//		 int fuel; //�������
//};
//int main()
//{
//	car lee = { "���¼�", 0, 100 }; //carŬ������ lee object ����
//	cout << "owner= " << lee.owner << endl; // lee object�� ������ Ȯ��
//	cout << "cueewnt speed: " << lee.speed << endl; // lee object�� ���罺�ǵ� Ȯ��
//	cout << "corrent fuel: " << lee.fuel << endl;  //lee object�� ���� ���ᷮ Ȯ��
//	return 0;
//}

//����01computer Ŭ������ ����� �ʿ��� �Ӽ��� �ο��ϼ���
//class computer
//{ 
//public:
//	 //��ǻ���� ������
//	char owner[20];
//	//�Ϸù�ȣ ����
//	char prodnum[30];
//	//cpu��������
//	char CPUspec[10];
//	//ram��������
//	 char RAMspec[10];
//	//disk ���� ����
//	char DISKspec[10];
//};
//int main()
//{
//	computer samsungFlex = { "�����","1-2-3-4", "I7","16G", "500G" };
//	cout << samsungFlex.owner << endl;
//	cout << samsungFlex.prodnum << endl;
//	cout << samsungFlex.CPUspec << endl;
//	cout << samsungFlex.RAMspec << endl;
//	cout << samsungFlex.DISKspec << endl;
//	return 0;
//}

//����3 Ŭ������ ����Լ�
//#include<iostream>
//using namespace std;
//
//class car // Ŭ���� car�ڷ��� ����
//{
//     public: //���������� �ܺο����� ������뿩��
//		 char owner[10]; //�������(�Ӽ������� ����)
//		 int speed; // �������
//		 int fuel; //�������
//public:
//	//�����ϴ� voud accel()
//	void accel()
//	{
//		if (fuel == 0) //���� ���ᷮ x
//		//������ ������ �ӵ��� 10�� ����, ���ᷮ�� 1������
//		{
//			cout << "���� �������� ���ӺҰ��� �մϴ�" << endl;
//		}
//		else //���ᷮ �����ִ� ���¶��
//		{
//			if (speed >= 200)
//			{
//				speed = 200; //�ִ�ü� 200km/h
//				cout << "����" << owner << "���� ���� �ִ� �ӵ��Դϴ�." << endl;
//			}
//			else
//			{
//				speed = speed + 10; //speed����
//				cout << "����" << owner << "���� ���� �����մϴ�. ����ӵ�: " << speed << endl;
//			}
//	
//			fuel--; // ���ᷮ 1�� ����
//		}
//	}
//	//�����ϴ� void break()
//	void Break()
//	{
//		if (speed - 10 <= 0) // ���� break�Լ� ���� speed�� -�̰ų� �۴ٸ�
//		{
//			speed = 0;
//			cout << owner << "���� ���� �����մϴ�" << endl;
//		}
//		else //speed-10�� ���� ������
//		{
//			speed = speed - 10;
//			cout << owner << "���� ���� �����մϴ�. ����ӵ�: " << speed << endl;
//
//
//		}
//		//Break�� ����ϸ� speed�� 10�� �����ϵ��� ����
//		//���� speed�� 0���Ϸ� �������� ��� speed�� 0���� �����Ѵ�.
//	}
//	//����Ȯ�� void showinfo()
//	void showinfo()
//	{
//		cout << "���� ���� ������: " << owner << endl;
//		cout << "���� ���� ���ǵ�: " << owner << endl;
//		cout << " ���� ���� ���ᷮ: " << fuel << endl;
//		//���� ������ Ȯ��
//		//���� ���ǵ� Ȯ��
//		//���� ���ᷮ Ȯ��
//
//	}
//};
//int main()
//{
//	car lee = { "���¼�", 0, 100 }; //carŬ������ lee object ����
//	car kim = { "�����",0,100 };
//	lee.accel();
//	lee.accel();
//	lee.accel();
//	lee.Break();
//	lee.showinfo();
//	//cout << "owner= " << lee.owner << endl; // lee object�� ������ Ȯ��
//	//cout << "cueewnt speed: " << lee.speed << endl; // lee object�� ���罺�ǵ� Ȯ��
//	//cout << "corrent fuel: " << lee.fuel << endl;  //lee object�� ���� ���ᷮ Ȯ��
//	return 0;
//}

//����
//���� conputer class���� ���� ����� �߰��ϼ���
//���� �ѱ�: void poweron();  "owner���� ��ǻ�� ������ �մϴ�"�� ���
//���� ����: void poweroff();  "owner���� ��ǻ�� ������ ���ϴ�"�� ���
//���� ����Ȯ��: void ShowInfo(); ���� ������/ ��ǰ��ȣ/��ǻ�� ������ ��µ� �� �ֵ��� ����
//#include <iostream>
//using namespace std;
//
//class computer
//{
//public:
//	// ��ǻ���� ������
//	char owner[20];
//	//	//�Ϸù�ȣ ����
//	char prodnum[30];
//	//	//cpu��������
//	char CPUspec[10];
//	//	//ram��������
//	char RAMspec[10];
//	//disk ���� ����
//	char DISKspec[10];
//public:
//	void poweron()
//	{
//		cout << owner << "���� ��ǻ�� ������ �մϴ�" << endl;
//	}
//	void poweroff()
//	{
//		cout << owner << "���� ��ǻ�� ������ �մϴ�" << endl;
//	}
//	void showinfo()
//	{
//		cout << "��ǻ���� �����ڸ�: " << owner << endl;
//		cout << "��ǰ��: " << prodnum << endl;
//		cout << "cpuspec: " << CPUspec << endl;
//		cout << "ramspec: " << RAMspec << endl;
//		cout << "ramspec: " << DISKspec << endl;
//	};
//	int main()
//	{
//		computer samsungFlex = { "�����","1-2-3-4", "I7","16G", "500G" };
//		samsungFlex.poweron(); samsungFlex.poweroff(); samsungFlex.showinfo()
//
//			
//	}
//	return 0;
//}

////����
//#include<iostream>
//using namespace std;
//
//class car
//{
//     public:
//		 char owner[10]; 
//		 int speed;
//		 int fuel; 
//		 //������� �߰�
//		 char cupholder1[20];
//		 char cupholder2[20];
//public:
//	
//	void accel()
//	{
//		if (fuel == 0) 
//		
//		{
//			cout << "���� �������� ���ӺҰ��� �մϴ�" << endl;
//		}
//		else 
//		{
//			if (speed >= 200)
//			{
//				speed = 200;
//				cout << "����" << owner << "���� ���� �ִ� �ӵ��Դϴ�." << endl;
//			}
//			else
//			{
//				speed = speed + 10; 
//				cout << "����" << owner << "���� ���� �����մϴ�. ����ӵ�: " << speed << endl;
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
//			cout << owner << "���� ���� �����մϴ�" << endl;
//		}
//		else 
//		{
//			speed = speed - 10;
//			cout << owner << "���� ���� �����մϴ�. ����ӵ�: " << speed << endl;
//
//
//		}
//		
//	}
//	//��Ȧ���� ���Ḧ �ִ� �Լ�
//	void cupholderadd(const char* cup1)
//	{
//		strcpy_s(cupholder1, sizeof(cupholder1), cup1);
//		strcpy_s(cupholder2, sizeof(cupholder2), "�� ��");
//	}
//	//��Ȧ���� ���Ḧ �ִ� �Լ�(�����ε�)
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
//		cout << "���� ���� ������: " << owner << endl;
//		cout << "���� ���� ���ǵ�: " << owner << endl;
//		cout << " ���� ���� ���ᷮ: " << fuel << endl;
//		cout << "cupholder01: " << cupholder1 << endl;
//		cout << "cupholder02: " << cupholder2 << endl;
//		
//	}
//};
//int main()
//{
//	car lee = { "���¼�", 0, 100 };
//	
//	car kim = { "�����",0,100 };
//	lee.cupholderadd("����", "Ŀ��"); //2���� ���ڸ� �޴� cupholderadd�Լ� ���
//	kim.cupholderadd("������");        //1���� ���ڸ� �޴� cupholderadd�Լ� ���
//	//lee.accel();
//	//lee.accel();
//	//lee.accel();
//	//lee.Break();
//	//lee.showinfo();
//
//
//		return 0;
//}

//���� �����ε� �Լ� �����
//���� ��ǻ�� Ŭ�������� �����ϱ�(appstart())�Լ��� ����ð�
//�޸���, ����, ������ ����ÿ� ���� � app�� ����Ǵ��� ȭ�鿡 ����ϼ���

//�����ϱ� �Լ�(�޸��常 ����): appstart(const char *memo)
//"���޹��� �޸��� ���ϸ�", "�޸����� �����մϴ�" �� ���

//�����ϱ� �Լ�(�޸���, ��������): appstart(const char *memo, const char excel)
// "�޸����� �����մϴ�: �޸��� ���ϸ�: "���޹��� �޸��� ���ϸ�"" �� ���
// "excel �� �����մϴ�: excel ���ϸ�: " ���޹��� excel ���ϸ�"" �����
// "game �� �����մϴ�: game��: " ���޹��� game ���ϸ�"" �����