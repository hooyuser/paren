#include "stack.h"
#include <iostream>
#include <string>

bool paren(const char exp[], int lo, int hi)  //����char����exp[lo,hi),
{ //���ʽ����ƥ���飬�ɼ����������
	Stack<char> S; //ʹ��ջ��¼�ѷ��ֵ���δƥ���������
	for (int i = lo; i < hi; i++) /* ��һ��鵱ǰ�ַ� */
		switch (exp[i])
		{ //������ֱ�ӽ�ջ������������ջ��ʧ�䣬����ʽ�ز�ƥ�䣻����������ջ��������ƥ�䣬�򵯳�ջ��������
		case '(':
		case '[':
		case '{':
			S.push(exp[i]);
			break;
		case ')':
			if ((S.empty()) || ('(' != S.pop()))
				return false;
			break;
		case ']':
			if ((S.empty()) || ('[' != S.pop()))
				return false;
			break;
		case '}':
			if ((S.empty()) || ('{' != S.pop()))
				return false;
			break;
		default:
			break; //�������ַ�һ�ɺ���
		}
	return S.empty(); //�������ʽɨ�����ջ�����Բ����������ţ���ƥ�䣻����ջ�գ�ƥ��
}

int main()
{
	using namespace std;
	string str;
	cin >> str;
	const char* exp = str.c_str();
	if (paren(exp, 0, str.size()))
		cout << "Match";
	else
		cout << "Not Match";

	cin.get();
	cin.get();
	return 0;
}