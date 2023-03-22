#include <stdio.h>

#pragma warning(disable: 4326 4996 6031)

void main()
{
	while (1) {
		int k, n;
		printf("k ? ");
		scanf("%d", &k);
		if (k < 0)
			break;
		printf("n ? ");
		scanf("%d", &n);
		if (k > n)
			break;
		int PrintK2NFwrd1(int k, int n);
		int PrintK2NFwrd2(int k, int n);
		int PrintK2NFwrd3(int k, int n);
		printf(" Print: ");
		printf("\nReturn: %d\n\n", PrintK2NFwrd1(k, n));
		printf(" Print: ");
		printf("\nReturn: %d\n\n", PrintK2NFwrd2(k, n));
		printf(" Print: ");
		printf("\nReturn: %d\n\n", PrintK2NFwrd3(k, n));
	}
}

// k���� n���� ����ϰ� �׵��� ���� ��ȯ�Ѵ�
int PrintK2NFwrd1(int k, int n)		// n-1���� ��ȯ�� ������ 1
{
	/***
	[����] [k, n-1] n
	[�Ϲݱ�Ģ] p(k,n) ::= t= p(k,n-1), n��, t+n��
	[�������] n�� 1����
	[�ߴ�����] k>n
	[�ܼ���] ��x, ��0
	***/
	if (k>n)
		return 0;
	int t = PrintK2NFwrd1(k, n - 1);
	printf("% d", n);
	return t + n;
}

int PrintK2NFwrd2(int k, int n)		// 1���� ������ n-1���� ��ȯ
{
	/***
	[����] k [k+1,n]
	[�Ϲݱ�Ģ] p(k,n) ::=k��, t= p(k+1, n), t+k��;
	[�������] k�� 1 ����
	[�ߴ�����] p(n,n) :: = n��, t=p(n+1,n), t+n��; 
	[�ܼ���] ��x, ��0-
	***/
	if (k==n)
		return n;
	int t = PrintK2NFwrd2(k + 1, n);
	printf("%d", n);
	return t + n;
}

int PrintK2NFwrd3(int k, int n)		//  n/2��, 1��, n/2���� ��ȯ
{
	/***
	[����] [k,m-1], m, [m+1,n]
	[�Ϲݱ�Ģ] p(k,n) ::= m= k+n, p(k,m-1) + m + p(m+1, n);

	[�������] ������ ���ݾ� ����
	[�ߴ�����] ?
	[�ܼ���] ?
	***/
	return 0;
}