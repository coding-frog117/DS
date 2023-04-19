#include <stdio.h>

#define N 10
#pragma warning(disable: 4326 4996 6031)

typedef int Item;

void main()
{
	int  IsEmptyStack(int nTop);
	int  IsFullStack(int nTop);
	int  Push(Item aStack[], int& nTop, Item nItem);
	int  Pop(Item aStack[], int& nTop, Item& nItem);
	void PrintStack(Item aStack[], int nTop);
	int  Error(const char *sMsg);

	/** Create Stack **/
	Item aStack[N];
	int nTop;

	nTop = -1;
	while (1) {
		Item value;
		printf("-2:Exit -1:Pop, *:Push ? ");
		scanf("%d", &value);
		if (value < -1)
			break;
		if (value == -1) {
			if (Pop(aStack, nTop, value) == false)
				Error("empty");
			else
				printf("%d is deleted\n", value);
		}
		else {
			if (Push(aStack, nTop, value) == false)
				Error("full");
			else
				printf("%d is inserted\n", value);
		}
		PrintStack(aStack, nTop);
	}
}

int IsEmptyStack(int nTop)
{	// ������ ��������� ���� T/F�� ��ȯ�Ѵ�.
	return nTop == -1;
}

int IsFullStack(int nTop)
{	// ������ ���� á������ ���� T/F�� ��ȯ�Ѵ�.
	return nTop == N - 1;
}

int Push(Item aStack[], int& nTop, Item nItem)
{	// ���ÿ� nItem�� push�ϴµ� ���п� ���� T/F�� ��ȯ�Ѵ�.
	// top�� �����Ͽ� ����
	if (IsStack_full(nTop))
		return false;
	aStack[++nTop] = nTop;

}

int Pop(Item aStack[], int& nTop, Item& nItem)
{	// ���ÿ��� pop�Ͽ� nItem�� �����ϴµ� ���п� ���� T/F�� ��ȯ�Ѵ�.
	// �޾Ƴ��� top�� ����
	if (IsEmptyStack(nTop))
		return false;
	nItem = aStack[nTop--]
}

void PrintStack(Item aStack[], int nTop)
{
	printf("|    |\n");
	for (int i = nTop; i >= 0; i--)
		printf("|%3d |\n", aStack[i]);
	printf("+----+\n\n");
}

int Error(const char *sMsg)
{
	printf("***** Stack is %s. *****\n", sMsg);
	return false;
}
