#include "stack.h"
#include <iostream>

bool paren(const char exp[], int lo, int hi)
{ //���ʽ����ƥ���飬�ɼ����������
	Stack<char> S; //ʹ��ջ��¼�ѷ��ֵ���δƥ���������
	for (int i = lo; i <= hi; i++) /* ��һ��鵱ǰ�ַ� */
		switch (exp[i])
		{ //������ֱ�ӽ�ջ������������ջ��ʧ�䣬����ʽ�ز�ƥ��
		case '(':
		case '[':
		case '{':
			S.push(exp[i]);
			break;
		case ')':
			if ((S.empty()) || ('(' != S.pop()))
				return false;
		case ']':
			if ((S.empty()) || ('[' != S.pop()))
				return false;
		case '}':
			if ((S.empty()) || ('{' != S.pop()))
				return false;
		default:
			break; //�������ַ�һ�ɺ���
		}
	return S.empty(); //�������ʽɨ�����ջ�����Բ����������ţ���ƥ�䣻����ջ�գ�ƥ��
}

int main()
{
	using namespace std;

	cin.get();
	return 0;
}