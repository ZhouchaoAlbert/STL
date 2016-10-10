#include<list>
#include<string>
#include<iostream>
using namespace std;

void PrintList(list <int >_list,string name)
{
	cout << name << " : ";
	for (list <int >::iterator iter = _list.begin(); iter != _list.end(); iter++)
		cout << *iter << " ";
	cout << endl;
}

void List()
{
	//1.list ���캯��
	list <int > L0;        // ������
	list <int > L1(10);    // ��һ������Ĭ��ֵ�ǵ�Ԫ�ص�����
	list <int > L2(5, 2);  // ��һ������Ԫ�ص�����ֵ����
	list <int > L3(L2);    // ��һ��L 2 �� copy ����
	list <int > L4(L1.begin(), L1.end());// ��һ���� L0 һ�������Ԫ��

	PrintList(L1, "L1");
	PrintList(L2, "L2");
	PrintList(L3, "L3");
	PrintList(L4, "L4");

	//2. assign() ����ֵ
	L0.assign(3, 4);
	PrintList(L0, "L0");
	//3. front() ���ص�һ��Ԫ�ص�����
	int nRet = L0.front();
	//4. back() �������һ Ԫ�ص�����
	int nRet2 = L0.back();

	L0.push_front(5);
	L0.push_back(6);
	PrintList(L0, "L0");

	L0.sort();

	PrintList(L0, "L0");
}
