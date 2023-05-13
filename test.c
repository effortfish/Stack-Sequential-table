#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

#define MAXSIZE 50

typedef struct SeqStack {
	int Data[MAXSIZE];
	int top;
}SeqStack;

void InitStack(SeqStack* ps)
{
	ps->top = -1;
	printf("Initialization succeeded.\n");
}

int isEmpty(SeqStack* ps)
{
	if (ps->top == -1)
	{
		printf("The stack is empty\n");
		return 1;
	}
	else
		return 2;
}

bool Push(SeqStack* ps, int d)
{
	if (ps->top == MAXSIZE - 1)
	{
		printf("Full\n");
		return false;
	}
	else
	{
		ps->top++;
		ps->Data[ps->top] = d;
		printf("The addition succeeded\n");
		return true;
	}
}

bool Pop(SeqStack* ps)
{
	if (ps->top == -1)
	{
		printf("The stack is empty\n");
		return false;
	}
	else
	{
		int e = ps->Data[ps->top];
		ps->top--;
	}
}

bool Show(SeqStack* ps)
{
	if (ps->top == -1)
	{
		printf("The stack is empty\n");
		return false;
	}
	else
	{
		for (int i = ps->top; i > -1; i--)
		{
			printf("%d  ", ps->Data[i]);
		}
	}
}

bool isFull(SeqStack* ps)
{
	if (ps->top == MAXSIZE - 1)
	{
		printf("Full\n");
		return true;
	}
	return false;
}

int main()
{
	SeqStack s;
	int num;
	int data;
	printf("Please enter nums\n");
	scanf("%d", &num);
	InitStack(&s);
	for (int i = 0; i < num; i++)
	{
		printf("Please enter the data\n");
		scanf("%d", &data);
		Push(&s, data);
	}
	Show(&s);
	return 0;
}

//stack ��Ҫ�ص��Ǻ���ȳ�
//stack ��һ��topָ�����������ݣ���top=-1ʱΪ��stack����top=maxsizeΪ��stack
//stackΪ�����Ƶ����Ա�
//�ڶ�stack����ʱ�ǵ��ж�stack�Ƿ�Ϊ��