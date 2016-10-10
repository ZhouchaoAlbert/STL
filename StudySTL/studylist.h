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
	//1.list 构造函数
	list <int > L0;        // 空链表
	list <int > L1(10);    // 建一个含个默认值是的元素的链表
	list <int > L2(5, 2);  // 建一个含个元素的链表，值都是
	list <int > L3(L2);    // 建一个L 2 的 copy 链表
	list <int > L4(L1.begin(), L1.end());// 建一个含 L0 一个区域的元素

	PrintList(L1, "L1");
	PrintList(L2, "L2");
	PrintList(L3, "L3");
	PrintList(L4, "L4");

	//2. assign() 分配值
	L0.assign(3, 4);
	PrintList(L0, "L0");
	//3. front() 返回第一个元素的引用
	int nRet = L0.front();
	//4. back() 返回最后一 元素的引用
	int nRet2 = L0.back();

	L0.push_front(5);
	L0.push_back(6);
	PrintList(L0, "L0");

	L0.sort();

	PrintList(L0, "L0");
}
