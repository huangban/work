#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <strstream>

using namespace std;

//����ַ������һ�����ʵĳ���
//�ַ��� �ҵ����һ���ǿ��ַ� û��0 �б�� �ҵ���һ���ջ�����ǰ��

int main()
{
	string str;
	getline(cin, str);
	if(str.empty())
	{
		cout << 0 << endl;	
		return 0;
	}
	int len = str.length();
	if(len > 128)
		return -1;
	int index1;
	bool flag = false;
	for(int i=len-1;i>=0;i--)
	{
		if(str[i] != ' ')
		{
			flag = true;
			index1 = i;
			break;
		}
	}
	if(flag == false)
	{
		cout << 0 << endl;	
		return 0;
	}
	int index2 = 0;
	bool flag2 = false;
	for(int i=index1;i>=0;i--)
	{
		if(str[i] == ' ')
		{
			flag2 = true;
			index2 = i;
			break;
		}
	}
	if(flag2 == false)
	{
		cout << index1+1 << endl;
		return 0;
	}
	int wl = index1 - index2;

	cout << wl << endl;

    return 0;
}
