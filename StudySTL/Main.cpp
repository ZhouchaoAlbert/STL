#include<iostream>
#include<map>
using namespace std;
#include<atlstr.h>
using namespace ATL;
#include<tchar.h>
#include<string>
//排序： 第一种：小于号重载
typedef struct tagStudentInfo
{
	int id;
	string name;

	bool operator < (const tagStudentInfo& a)const
	{
		if (id < a.id)
		{
			return true;
		}
		if (id == a.id)
		{
			if (name.compare(a.name) < 0)
			{
				return true;
			}
			
		}
		return false;
	}
}S_T_STUDENTINFO;

int main()
{
	//1用insert函数插入pair数据
	map<int, string> mapStudent;
	mapStudent.insert(pair<int, string>(1111, "zhouchao1"));
	mapStudent.insert(pair<int, string>(2222, "zhouchao2"));
	mapStudent.insert(pair<int, string>(3333, "zhouchao3"));
	mapStudent.insert(make_pair(4444, "zhouchao4"));
	for (map<int, string>::iterator iter = mapStudent.begin(); iter != mapStudent.end(); iter++)
	{
		cout << iter->first << " " << iter->second << endl;
	}

	//2用insert函数插入value_type数据

	mapStudent.clear();
	mapStudent.insert(map<int, string>::value_type(5555, "zhouchao555"));
	mapStudent.insert(map<int, string>::value_type(6666, "zhouchao666"));
	mapStudent.insert(map<int, string>::value_type(7777, "zhouchao777"));

	for (map<int, string>::iterator iter = mapStudent.begin(); iter != mapStudent.end(); iter++)
	{
		cout << iter->first << " " << iter->second << endl;
	}
	//3使用数组插入
	mapStudent.clear();
	mapStudent[8888] = "zhouchao888";
	mapStudent[9999] = "zhouchao999";
	mapStudent[101010] = "zhouchao101010";


	mapStudent.erase(8888);
	mapStudent.erase(mapStudent.begin(), mapStudent.end());
	for (map<int, string>::iterator iter = mapStudent.begin(); iter != mapStudent.end(); iter++)
	{
		cout << iter->first << " " << iter->second << endl;
	}

	map<S_T_STUDENTINFO, int>mapStudentKey;
	S_T_STUDENTINFO st1, st2, st3;
	st1.id = 3;
	st1.name = "zhouchao1";
	st2.id = 1;
	st2.name = "zhouchao2";
	st3.id = 3;
	st3.name = "chouchao2";

	mapStudentKey[st1] = 80;

	mapStudentKey[st2] = 90;

	mapStudentKey[st3] = 100;
	for (map<S_T_STUDENTINFO, int>::iterator iter = mapStudentKey.begin(); iter != mapStudentKey.end(); iter++)
	{
		cout << iter->first.id << " " << iter->first.name << " " << iter->second << endl;
	}


	getchar();
	return 0;
}