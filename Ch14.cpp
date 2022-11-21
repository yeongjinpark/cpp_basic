//01 Vector 컨테이너를 통한 자료저장

//#include <iostream>
//#include <vector>	//벡터클래스 사용을 위한 헤더
//using namespace std;
//int main()
//{
//	vector<int> v;	// 정수만 삽입 가능한 벡터 v 생성
//
//	v.push_back(1);	// 데이터 삽입함수 사용(기존데이터 뒤에 삽입)
//	v.push_back(2);
//	v.push_back(3);
//
//	for (int i = 0; i < v.size(); i++)	//size() 저장되어진 데이터의 개수 반환
//		cout << v[i] << " ";		//[] -> 배열형으로 구성 0 ~ (size()-1) idx 
//	cout << endl;
//
//	v[0] = 10;	//0 idx 에 10 대입	
//	int n = v[2];	//n 변수공간에 v[2]요소값(3) 대입
//	v.at(2) = 5;	//at(idx) : 해당 idx의 값/공간
//	
//	for (int i = 0; i < v.size(); i++)
//		cout << v[i] << " ";
//	cout << endl;
//	return 0;
//}


//02 Vector 컨테이너 사용

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>	//sort()사용위한 헤더
using namespace std;
int main() {
	vector<string> sv;
	string name;

	cout << "이름을 입력(5번)>>" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">>";
		getline(cin, name);
		sv.push_back(name);
	}
	name = sv.at(0);	//벡터의 첫번 째 이름
	for (int i = 1; i < sv.size(); i++) {
		if (name < sv[i])
			name = sv[i];
	}
	cout << "사전에서 가장 뒤에 나오는 이름은 " << name << endl;
	
	//sort(sv.begin(), sv.end());//오름차순 정렬
	sort(sv.begin(), sv.end(),greater<string>());//내림차순 정렬
	for (int i = 0; i < sv.size(); i++)
	{
		cout << sv[i] << " ";
	}
	cout << endl;
}





