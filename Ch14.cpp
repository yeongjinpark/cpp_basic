//01 Vector �����̳ʸ� ���� �ڷ�����

//#include <iostream>
//#include <vector>	//����Ŭ���� ����� ���� ���
//using namespace std;
//int main()
//{
//	vector<int> v;	// ������ ���� ������ ���� v ����
//
//	v.push_back(1);	// ������ �����Լ� ���(���������� �ڿ� ����)
//	v.push_back(2);
//	v.push_back(3);
//
//	for (int i = 0; i < v.size(); i++)	//size() ����Ǿ��� �������� ���� ��ȯ
//		cout << v[i] << " ";		//[] -> �迭������ ���� 0 ~ (size()-1) idx 
//	cout << endl;
//
//	v[0] = 10;	//0 idx �� 10 ����	
//	int n = v[2];	//n ���������� v[2]��Ұ�(3) ����
//	v.at(2) = 5;	//at(idx) : �ش� idx�� ��/����
//	
//	for (int i = 0; i < v.size(); i++)
//		cout << v[i] << " ";
//	cout << endl;
//	return 0;
//}


//02 Vector �����̳� ���

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>	//sort()������� ���
using namespace std;
int main() {
	vector<string> sv;
	string name;

	cout << "�̸��� �Է�(5��)>>" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">>";
		getline(cin, name);
		sv.push_back(name);
	}
	name = sv.at(0);	//������ ù�� ° �̸�
	for (int i = 1; i < sv.size(); i++) {
		if (name < sv[i])
			name = sv[i];
	}
	cout << "�������� ���� �ڿ� ������ �̸��� " << name << endl;
	
	//sort(sv.begin(), sv.end());//�������� ����
	sort(sv.begin(), sv.end(),greater<string>());//�������� ����
	for (int i = 0; i < sv.size(); i++)
	{
		cout << sv[i] << " ";
	}
	cout << endl;
}





