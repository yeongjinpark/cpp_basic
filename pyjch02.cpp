//���� 1 �⺻���

//#include<iostream>
////int main()
////{
////	std::cout << "hello woeld"; //::�� ~�ȿ���� ��(std�ȿ� cout), <<�� ���⼳�� : std�ȿ��ִ� cout�� ���� ���� 
////	std::cout << "hello world\n";
////	std::cout << "1+2=" << 1 + 2 << "�Դϴ�\n";
////	std::cout << "������ endl�ε� ����" << std::endl;
////
////
////	return 0;
////}
//
////����02 �⺻�Է�
//
//#include<iostream>
//int main()
//{
//	int num = 0;
//	std::cout << "ǥ�� ���Ȯ��!" << std::endl;
//	std::cout << "���Է�:";
//	std::cin >> num;
//	std::cout << "�Է��� ��:" << num << std::endl;
//	return 0;
//}

////����3 �⺻���
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

////����4 ������ �Է¹ޱ�
//#include<iostream>
//int main()
//{
//	int x,y,z ;
//	std::cout << "������ �Է��ϼ���: ";
//	std::cin >> x >> y >> z;
//	std::cout << "�Է��� 3���� ��������: ";
//	std::cout << x << y << z;
//	return 0;
//
//}

////����5 
//#include<iostream>
//int main()
//{
//	char name[100];
//	char lang[100];
//
//	std::cout << "����� �̸��� �����Դϱ�?";
//	std::cin >> name;
//	std::cout << "�����ϴ� ���α׷��� ���� �����ΰ���?";
//	std::cin >> lang;
//
//	std::cout << "�� �̸���" << name << "�Դϴ�" << std::endl;
//	std::cout << "�����ϴ� ����" << lang << "�Դϴ�." << std::endl;
//
//	return 0;
//}

//���� 3

//���ڸ� �ϳ� �Է¹޾Ƽ� �� ���ڿ� �ش��ϴ� �������� ����ϴ� ���α׷��� �ۼ��غ���
//#include<iostream>
//int main()
//{
//	int x, y; 
//	y++;
//	std::cout << "���� �Է��Ͻÿ�";
//	std::cin >> x;	
//	std::cout << "�Է��Ѱ��� ��������";
//	std::cout <<  << 
//	return 0;
//}

//���� 4

//�Ǹſ����� �޿� ��� ���α׷��� �ۼ��� ����.�� ȸ��� ��� �Ǹſ����� �Ŵ� 50������
//�⺻ �޿��� ��ǰ �Ǹ� ������ 12 % �� �ش��ϴ� ���� �����Ѵ�.���� �� �μ���� ģ���� �̹��� ��ǰ
//�Ǹ� �ݾ��� 100�����̶��, 50 + 100 * 0.12 = 62, ���� 62������ �޿��� ���޹޴´�
//��, �Ʒ��� ������ ������ ���̵��� �̷��� �޿��� ����� - 1�� �ɋ����� ��ӵǾ�� �Ѵ�
//
//- ���� �� -
//�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end) : 100
//�̹� �� �޿� : 62����
//�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end) : 200
//�̹� �� �޿� : 200����
//�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end) : -1
//���α׷��� �����մϴ�.