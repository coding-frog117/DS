#include <stdio.h>

#pragma warning(disable: 4326 4996 6031)

#define N	25

void main()
{
	int arr[N];
	for (int i = 0; i < N; i++)
		arr[i] = i + 101;
	while (1) {
		int n;
		printf("n ? ");
		scanf("%d", &n);
		if (n < 0 || n > N)
			break;
		int PrintArrayBwrd1(int a[], int n);
		int PrintArrayBwrd2(int a[], int n);
		int PrintArrayBwrd3(int a[], int n);
		printf(" Print: ");
		printf("\nReturn: %d\n\n", PrintArrayBwrd1(arr, n));
		printf(" Print: ");
		printf("\nReturn: %d\n\n", PrintArrayBwrd2(arr, n));
		printf(" Print: ");
		printf("\nReturn: %d\n\n", PrintArrayBwrd3(arr, n));
	}
}

// 배열에서 n개의 값들을 거꾸로 출력하고 그들의 합을 반환한다
int PrintArrayBwrd1(int n)		// n-1개의 순환과 나머지 1
{
	/***
	[분할] [1, n-1] n
	[일반규칙] p(a,n) ::= p(n-1)
	[진행방향] n이 1감소
	[중단조건] p(1) :: = 1출 , t=p(0), t+1반 --> n=0; 
	[단순해] 출X, 반0
	***/
	if  PrintArrayBwrd1(0)
		return 0;
	printf("%d", n);
	int t = PrintArrayBwrd1(n - 1);
	return t + n;
}

int PrintArrayBwrd2(int a[], int n)		// 1개와 나머지 n-1개의 순환
{
	/***
	[분할] ?
	[일반규칙] p(a,n) ::= ?
	[진행방향] ?
	[중단조건] ?
	[단순해] ?
	***/
	return 0;
}

int PrintArrayBwrd3(int a[], int n)		// n/2개, 1개, n/2개의 순환
{
	/***
	[분할] ?
	[일반규칙] p(a,n) ::= ?
	[진행방향] ?
	[중단조건] ?
	[단순해] ?
	***/
	return 0;
}