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

// k부터 n까지 출력하고 그들의 합을 반환한다
int PrintK2NFwrd1(int k, int n)		// n-1개의 순환과 나머지 1
{
	/***
	[분할] [k, n-1] n
	[일반규칙] p(k,n) ::= t= p(k,n-1), n출, t+n반
	[진행방향] n이 1감소
	[중단조건] k>n
	[단순해] 출x, 반0
	***/
	if (k>n)
		return 0;
	int t = PrintK2NFwrd1(k, n - 1);
	printf("% d", n);
	return t + n;
}

int PrintK2NFwrd2(int k, int n)		// 1개와 나머지 n-1개의 순환
{
	/***
	[분할] k [k+1,n]
	[일반규칙] p(k,n) ::=k출, t= p(k+1, n), t+k반;
	[진행방향] k가 1 증가
	[중단조건] p(n,n) :: = n출, t=p(n+1,n), t+n반; 
	[단순해] 출x, 반0-
	***/
	if (k==n)
		return n;
	int t = PrintK2NFwrd2(k + 1, n);
	printf("%d", n);
	return t + n;
}

int PrintK2NFwrd3(int k, int n)		//  n/2개, 1개, n/2개의 순환
{
	/***
	[분할] [k,m-1], m, [m+1,n]
	[일반규칙] p(k,n) ::= m= k+n, p(k,m-1) + m + p(m+1, n);

	[진행방향] 범위가 절반씩 감소
	[중단조건] ?
	[단순해] ?
	***/
	return 0;
}