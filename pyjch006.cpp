//����01 Object �� �Ӽ�/��ɺз�

////������
//�Ӽ� :��ǰ��,Display,���·�..
//��� : PowerOn, PowerOff,����,�Ŀ��ù�...


////����
//�Ӽ� : �� , ���� , �Ѹ� ..
//��� : ���ռ� , ����� ..

////�ڵ���
//�Ӽ�	: ���� , ��̷� , ���ᷮ,����ӵ�..
//���  : �õ��� �Ǵ� , �����Ѵ� , �����Ѵ�.

////��ǻ��
//�Ӽ�	: CPU , RAM , HDD , GPU , �ֺ���ġ
//���  : PowerOn/off ,APP�����Ѵ�..



//����02 Ŭ���������(�Ӽ�:�������)

//#include <iostream>
//using namespace std;
//
//class Car	//Ŭ���� Car �ڷ��� ����
//{
//public:		//���������� �ܺο����� ������뿩��..
//	char owner[10];	//�������(�Ӽ������� ����)
//	int speed;		//�������
//	int fuel;		//�������
//};
//int main()
//{
//	Car Lee = { "���¼�",0,100 };						//CarŬ������ Lee Object����
//	cout << "Owner = " << Lee.owner << endl;			//Lee Object �� ������ Ȯ��
//	cout << "Current Speed = " << Lee.speed << endl;	//Lee Object �� ���� ���ǵ� Ȯ��
//	cout << "Current Fuel = " << Lee.fuel << endl;		//Lee Object �� ���� ���ᷮ Ȯ��
//	return 0;
//}


//���� 01 Computer Ŭ������ ����� �ʿ��� �Ӽ��� �ο��ϼ���

//#include <iostream>
//using namespace std;
//class Computer
//{
//public:
//	//��ǻ���� ������
//	char Owner[20];
//	char ProdNum[30];
//	char CPUSpec[10];
//	char RAMSpec[10];
//	char DISKSpec[10];
//	//�Ϸù�ȣ ����
//	//CPU ���� ����
//	//RAM ���� ����
//	//DISK ���� ����
//};
//int main()
//{
//	Computer SamsungFlex = { "�����","1-2-3-4","I7","16G","500G" };
//	cout << SamsungFlex.Owner << endl;
//	cout << SamsungFlex.ProdNum << endl;
//	cout << SamsungFlex.CPUSpec << endl;
//	cout << SamsungFlex.RAMSpec << endl;
//	cout << SamsungFlex.DISKSpec << endl;
//	return 0;
//}


//����03 Ŭ������ ���(����Լ�)

//#include <iostream>
//using namespace std;
//
//
//class Car	//Ŭ���� Car �ڷ��� ����
//{
//public:		//���������� �ܺο����� ������뿩��..
//	char owner[10];	//�������(�Ӽ������� ����)
//	int speed;		//�������
//	int fuel;		//�������
//public:
//	//�����ϴ� void Accel();
//	void Accel()
//	{
//		if (fuel == 0)	//���� ���ᷮ x - �����Ұ���
//		{
//			cout << "���� �������� ���ӺҰ��� �մϴ�" << endl;
//		}
//		else //���ᷮ �����ִ� ���¶��
//		{
//			//������ ������ �ӵ��� 10������,���ᷮ�� 1������
//			//�ִ�ü��� 200Km/h���� 
//			if (speed >= 200)
//			{
//				speed = 200; //�ִ� �ü� 200Km/h
//				cout << "���� " << owner << " ���� ���� �ִ� �ӵ� �Դϴ�" << endl;
//			}
//			else
//			{
//				speed = speed + 10; //speed ����
//				cout << "���� " << owner << " ���� ���� �����մϴ�. ����ӵ� : " << speed << endl;
//			}
//			fuel--; //���ᷮ 1�� ����
//		}
//	}
//	//�����ϴ� void Break();
//	void Break()
//	{
//		// Break�� ����ϸ� speed�� 10�� �����ϵ��� ����
//		// ���� speed�� 0���Ϸ� �������� ��� speed�� 0���� �����Ѵ�
//
//		if (speed - 10 <= 0)// ���� Break�Լ� ���� speed�� 0�̰ų� �۴ٸ�
//		{
//			speed = 0;
//			cout << owner << " ���� ���� �����մϴ�" << endl;
//		}
//		else //speed-10 �� ���� ������
//		{
//			speed = speed - 10;//���� speed�� -10 �� ���� speed ������ ���� 
//			cout << owner << " ���� ���� �����մϴ�. ���� �ӵ� : " << speed << endl;
//		}		
//	}
//	//����Ȯ�� void ShowInfo();
//	void ShowInfo()
//	{
//		cout << "���� ���� ������ : " << owner << endl;//���� ������ Ȯ��
//		cout << "���� ���� ���ǵ� : " << speed << endl;//���� ���ǵ� Ȯ��
//		cout << " ���� ���� ���ᷮ : " << fuel << endl;//���� ���ᷮ Ȯ��
//	}
//};
//
//int main()
//{
//	Car Lee = { "���¼�",0,100 };						//CarŬ������ Lee Object����
//	Car Kim = { "�����",0,100 };
//	Lee.Accel();
//	Lee.Accel();
//	Lee.Accel();
//	Lee.Break();
//	Lee.ShowInfo();
//	return 0;
//}



//����
//���� Computer Class ���� ���� ����� �߰��ϼ���
//���������ڴ� public : ���� ����
//���� �ѱ� : void PowerOn();	-> "owner ���� ��ǻ�� ������ �մϴ�" �� ���
//���� ���� : void PowerOff();	-> "owner ���� ��ǻ�� ������ ���ϴ�" �� ���
//���� ����Ȯ�� : void ShowInfo() ; -> ���� ������/��ǰ��ȣ/��ǻ�� ������ ��µ� �� �ֵ��� ����


//#include <iostream>
//using namespace std;
//class Computer
//{
//public:
//	//��ǻ���� ������
//	char Owner[20];
//	char ProdNum[30];
//	char CPUSpec[10];
//	char RAMSpec[10];
//	char DISKSpec[10];
//public:	//��� �Լ� ����
//	void PowerOn()
//	{
//		cout << Owner << " ���� ��ǻ�� ������ �մϴ�" << endl;
//	}
//	void PowerOff()
//	{
//		cout << Owner << " ���� ��ǻ�� ������ ���ϴ�" << endl;
//	}
//	void ShowInfo()
//	{
//		cout << "��ǻ�� �����ڸ� : " << Owner << endl;
//		cout << "��ǰ�� : " << ProdNum << endl;
//		cout << " CPUSPec :" << CPUSpec<<endl;
//		cout << " RAMSPec :" << RAMSpec<<endl;
//		cout << " DISKSPec :" << DISKSpec<<endl;
//	}
//};
//int main()
//{
//	Computer SamsungFlex = { "�����","1-2-3-4","I7","16G","500G" };
//	SamsungFlex.PowerOn(); SamsungFlex.PowerOff(); SamsungFlex.ShowInfo();
//	return 0;
//}



//����04 ����Լ� �����ε� ����

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
//	//������� �߰�
//	char CupHolder1[20];
//	char CupHolder2[20];
//public:
//	void Accel()
//	{
//		if (fuel == 0)	
//		{
//			cout << "���� �������� ���ӺҰ��� �մϴ�" << endl;
//		}
//		else 
//		{
//			if (speed >= 200)
//			{
//				speed = 200;
//				cout << "���� " << owner << " ���� ���� �ִ� �ӵ� �Դϴ�" << endl;
//			}
//			else
//			{
//				speed = speed + 10; 
//				cout << "���� " << owner << " ���� ���� �����մϴ�. ����ӵ� : " << speed << endl;
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
//			cout << owner << " ���� ���� �����մϴ�" << endl;
//		}
//		else 
//		{
//			speed = speed - 10; 
//			cout << owner << " ���� ���� �����մϴ�. ���� �ӵ� : " << speed << endl;
//		}		
//	}
//	//��Ȧ���� ���Ḧ �ִ� �Լ�
//	void CupHolderAdd(const char * cup1)
//	{
//		strcpy_s(CupHolder1, sizeof(CupHolder1), cup1);
//		strcpy_s(CupHolder2, sizeof(CupHolder2), "�ֺ�");
//	}
//	//��Ȧ���� ���Ḧ �ִ� �Լ�(�����ε�)
//	void CupHolderAdd(const char * cup1, const char * cup2)
//	{
//		strcpy_s(CupHolder1, sizeof(CupHolder1), cup1);
//		strcpy_s(CupHolder2, sizeof(CupHolder2), cup2);
//	}
//	void ShowInfo()
//	{
//		cout << "���� ���� ������ : " << owner << endl;
//		cout << "���� ���� ���ǵ� : " << speed << endl;
//		cout << " ���� ���� ���ᷮ : " << fuel << endl;
//		cout << "CupHolder01 : " << CupHolder1 << endl;
//		cout << "CupHolder02 : " << CupHolder2 << endl;
//	}
//};
//
//int main()
//{
//	Car Lee = { "���¼�",0,100 };						
//	Car Kim = { "�����",0,100 };
//
//	Lee.CupHolderAdd("����", "Ŀ��");	//2���� ���ڸ� �޴� CupHolderAdd�Լ� ���
//	Kim.CupHolderAdd("������");			//1���� ���ڸ� �޴� CupHolderAdd�Լ� ���
//	Lee.ShowInfo();
//	Kim.ShowInfo();
//	return 0;
//}


//���� �����ε� �Լ� �����

//���� ��ǻ�� Ŭ�������� �����ϱ�(AppStart()) �Լ��� ����ð� 
//�޸���, ���� , ������ ����ÿ� ���� � App �� ����Ǵ��� ȭ�鿡 ����ϼ���

//�����ϱ� �Լ�(�޸��常����) : AppStart(const char * memo) 
//-> "�޸����� �����մϴ� : �޸��� ���ϸ� : "���޹��� �޸������ϸ�" " �����

//�����ϱ� �Լ�(�޸���, ���� ����) : AppStart(const char * memo , const char * excel)
//-> "�޸����� �����մϴ� : �޸��� ���ϸ� : "���޹��� �޸������ϸ�" " �����
//-> "EXCEL�� �����մϴ� : Excel ���ϸ� : "���޹��� Excel���ϸ�" " �����

//�����ϱ� �Լ�(�޸���, ���� ,���� ����) : AppStart(const char * memo , const char * excel,const char  *game)
//-> "�޸����� �����մϴ� : �޸��� ���ϸ� : "���޹��� �޸������ϸ�" " �����
//-> "EXCEL�� �����մϴ� : Excel ���ϸ� : "���޹��� Excel���ϸ�" " �����
//-> "GAME�� �����մϴ� : GAME �� : "���޹��� GAME��" " �����







//#include <iostream>
//using namespace std;
//class Computer
//{
//public:
//	//��ǻ���� ������
//	char Owner[20];
//	char ProdNum[30];
//	char CPUSpec[10];
//	char RAMSpec[10];
//	char DISKSpec[10];
//public:	//��� �Լ� ����
//	void PowerOn()
//	{
//		cout << Owner << " ���� ��ǻ�� ������ �մϴ�" << endl;
//	}
//	void PowerOff()
//	{
//		cout << Owner << " ���� ��ǻ�� ������ ���ϴ�" << endl;
//	}
//	void ShowInfo()
//	{
//		cout << "��ǻ�� �����ڸ� : " << Owner << endl;
//		cout << "��ǰ�� : " << ProdNum << endl;
//		cout << " CPUSPec :" << CPUSpec<<endl;
//		cout << " RAMSPec :" << RAMSpec<<endl;
//		cout << " DISKSPec :" << DISKSpec<<endl;
//	}
//};
//int main()
//{
//	Computer SamsungFlex = { "�����","1-2-3-4","I7","16G","500G" };
//	SamsungFlex.PowerOn(); SamsungFlex.PowerOff(); SamsungFlex.ShowInfo();
//	return 0;
//}





//����5- ����Ʈ �������Լ� ���

//������ �Լ�: ��ü�� �����Ҷ� ȣ��Ǿ����� �Լ�
//��ü�� ����� ���ؼ��� �ݵ�� �ϳ��� �����ڸ� ȣ���ؼ� ��ü�� �ʿ��� ������ �����ϰ� �ʱⰪ�� �����Ѵ�
//������ �Լ��� ������� �ʴ��� �⺻������ �����Ϸ��� �����ϴ� �������Լ��� ����Ʈ ������ �Լ���� �Ѵ�.
//������ �Լ��� Ŭ���� �̸��� �����ϸ�, ��ȯ���� ����
//������ �Լ��� ��ü�� �ʱⰪ�� ������ ������ �ʴ´�
//�ڹ��� ����Ʈ ������ �Լ��� ��ü�� �ʱⰪ�� NULL or 0���� �ڵ� �ʱ�ȭ �Ѵ�.

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
//	Simple() // ����Ʈ ������ �Լ�/.
//	{
//		cout << "����Ʈ ������ �Լ�ȣ��!!" << endl;
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



//����06- ������ �Լ� �����ε�
//������ �Լ��� �����ε� �� �� ����Ʈ �����ڸ� ����ؾ� �Ǵ� ��찡 �ִٸ�
//����Ʈ ������ �Լ��� �ݵ�� ���(�ڵ�)����� �Ѵ�.
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
//	Simple() // ����Ʈ ������ �Լ�/.
//	{
//		cout << "����Ʈ ������ �Լ�ȣ��!!" << endl;
//	}
//	Simple(int a)               //�����ε� �� ������
//	{
//		cout << "�����ε��� ������(����1) �Լ�ȣ��" << endl;
//		x = a; y = 0;
//	}
//	Simple(int a, int b) //�����ε��� ������
//	{
//		cout << "�����ε��� ������(����2) �Լ�ȣ��" << endl;
//		x = a; y=b;
//	}
//
//};
//int main()
//{
//	Simple obj1;             //����Ʈ ������ ȣ��- ��ü ����
//	Simple obj2(100);        //�����ε�������(����1)- ��ü ����
//	Simple obj3(100, 200);     //�����ε�����(����2)- ��ü ����
//
//	return 0;
//}

//����07- �������Լ�- �̴ϼȶ�����(:) ����� ���� ����� �ʱ�ȭ
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

//���� 8- Car Ŭ������ ������ �Լ� ����
//#include <iostream>
//using namespace std;
//
//class Car	
//{
//public:		
//	char owner[10];	
//	int speed;		
//	int fuel;		
//	//������� �߰�
//	char CupHolder1[20];
//	char CupHolder2[20];
//public:
//	Car(const char * name, int s, int f) : speed(s), fuel(f)
//	{
//		strcpy_s(owner, sizeof(owner), name);
//		cout << "������ �Լ��� ȣ���!" << endl;
//	}
//	void Accel()
//	{
//		if (fuel == 0)	
//		{
//			cout << "���� �������� ���ӺҰ��� �մϴ�" << endl;
//		}
//		else 
//		{
//			if (speed >= 200)
//			{
//				speed = 200;
//				cout << "���� " << owner << " ���� ���� �ִ� �ӵ� �Դϴ�" << endl;
//			}
//			else
//			{
//				speed = speed + 10; 
//				cout << "���� " << owner << " ���� ���� �����մϴ�. ����ӵ� : " << speed << endl;
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
//			cout << owner << " ���� ���� �����մϴ�" << endl;
//		}
//		else 
//		{
//			speed = speed - 10; 
//			cout << owner << " ���� ���� �����մϴ�. ���� �ӵ� : " << speed << endl;
//		}		
//	}
//	//��Ȧ���� ���Ḧ �ִ� �Լ�
//	void CupHolderAdd(const char * cup1)
//	{
//		strcpy_s(CupHolder1, sizeof(CupHolder1), cup1);
//		strcpy_s(CupHolder2, sizeof(CupHolder2), "�ֺ�");
//	}
//	//��Ȧ���� ���Ḧ �ִ� �Լ�(�����ε�)
//	void CupHolderAdd(const char * cup1, const char * cup2)
//	{
//		strcpy_s(CupHolder1, sizeof(CupHolder1), cup1);
//		strcpy_s(CupHolder2, sizeof(CupHolder2), cup2);
//	}
//	void ShowInfo()
//	{
//		cout << "���� ���� ������ : " << owner << endl;
//		cout << "���� ���� ���ǵ� : " << speed << endl;
//		cout << " ���� ���� ���ᷮ : " << fuel << endl;
//		cout << "CupHolder01 : " << CupHolder1 << endl;
//		cout << "CupHolder02 : " << CupHolder2 << endl;
//	}
//};
//
//int main()
//{
//	Car Lee ( "���¼�",0,100);						
//	Car Kim = ( "�����",0,100);
//	Car Jung = ("�����", 0, 100);
//
//	return 0;
//}
//


//����09- �Ҹ��� �Լ� Ȯ��
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
//		cout << num << ":������ ȣ��" << endl;
//	}
//	~simple() //����Ʈ �Ҹ��� , ���� �������� ������ �����ں��� �Ҹ� ��
//	{
//		cout << num << " : �Ҹ��� ȣ��" << endl;
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

//����10: ��������(���������� + ����Լ��� ��������� ����)

//public: �ܺο��� ����� ���� ���
//protected: ��Ӱ��迡�� ����Ŭ������ ����� ����Ŭ������ ���� ���
//private: �ܺο��� ���� �Ұ�

//#include<iostream>
//using namespace std;
//
//class person
//{
//public:      //�ܺο��� �ش� ����� ���ٰ���
//	char name[30];
//private:      //�ܺο���  �ش� ����� ���ٺҰ�
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
//		cout << "�̸�:" << name << endl;
//		cout << "����:" << age << endl;
//		cout << "ü��:" << weight << endl;
//		cout << "����:" << height << endl;
//	}
//};
//int main()
//{
//	person Lee("�̺���");
//	Lee.Setage(45);
//	Lee.Setweight(70);
//	Lee.Setheight(177.2);
//	Lee.showinfo();
//
//	return 0;
//}

//����11- ĸ��ȭ

//ĸ��ȭ�� ��ü�� �ʿ��� ���� ������ �ϳ��� ���� �۾�
//�ڵ��� ������ ���� ��� �ڵ��������� ���ۿ����� "����>>����>>����>>���" ������ ��ġ�� �Ǵµ�
// �̷��� ������ ������ �����̶�� ��ɿ� ��� �����ϴ� ���� ĸ��ȭ��� �Ѵ�.
// ĸ��ȭ�� �⺻������ ���������� �����Ѵ�. �ܺο��� �Ժη� �����ϰԵǸ� ���۰����� ������ ����� �����̴�.
// ������ ���۰����� ����/���� �� ������ �ܺο� ����Ǿ� �߸� �� ������ ����ǰ� �ȴٸ� �������ۿ� ū ������ �߻��Ѵ�
// �߿��ǰ�� �ܺο� ����ǰԵǴ��� �����ջ��� �߻�
//�׷��⶧���� ĸ��ȭ�� ���������� �����ϰ� �ȴ�./
// ĸ��ȭ�� �۾������� �����ϱⰡ �ſ� ��ٷӴ�
//������ ������ ���ļ� ĸ��ȭ ������ �����ؾ��Ѵ�.

//#include<iostream>
//using namespace std;
//
//class carengine
//{
//private:
//	void Inducation()
//	{
//		cout << "���ָ�+���� ����" << endl;
//	}
//	void compress()
//	{
//		cout << "�ǽ����� ����ϸ鼭 ��� ���갡 ����" << endl;
//
//	}
//	void power()
//	{
//		cout << "�ǽ����� ��/�Ʒ��� �����̸鼭 ����" << endl;
//	}
//	void exhaust()
//	{
//		cout << "����갡 ���µǸ鼭 ��Ⱑ���� �ܺη� ����" << endl;
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
//	//������ �Լ�
//	Car(const char * name, int s, int f) : speed(s), fuel(f)
//	{
//		strcpy_s(owner, sizeof(owner), name);
//		cout << "������ �Լ��� ȣ���!" << endl;
//	}
//	//�ڵ��� �õ��Լ�
//	void start()
//	{
//		cout << "�õ��� �̴ϴ�" << endl;
//		engin.enginestart();
//	}
//
//	void Accel()
//	{
//		if (fuel == 0)	
//		{
//			cout << "���� �������� ���ӺҰ��� �մϴ�" << endl;
//		}
//		else 
//		{
//			if (speed >= 200)
//			{
//				speed = 200;
//				cout << "���� " << owner << " ���� ���� �ִ� �ӵ� �Դϴ�" << endl;
//			}
//			else
//			{
//				speed = speed + 10; 
//				cout << "���� " << owner << " ���� ���� �����մϴ�. ����ӵ� : " << speed << endl;
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
//			cout << owner << " ���� ���� �����մϴ�" << endl;
//		}
//		else 
//		{
//			speed = speed - 10; 
//			cout << owner << " ���� ���� �����մϴ�. ���� �ӵ� : " << speed << endl;
//		}		
//	}
//
//	void ShowInfo()
//	{
//		cout << "���� ���� ������ : " << owner << endl;
//		cout << "���� ���� ���ǵ� : " << speed << endl;
//		cout << " ���� ���� ���ᷮ : " << fuel << endl;
//		
//	}
//};
//
//int main()
//{
//	Car Lee ( "���¼�",0,100);						
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