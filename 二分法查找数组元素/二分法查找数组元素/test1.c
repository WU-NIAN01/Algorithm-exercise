#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int find_number(int arr[],int x,int* p)
{
	int left = 0;
	int right = *p - 1;
	int mid = 0;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (arr[mid] > x)
			right = mid - 1;
		else if (arr[mid] < x)
			left = mid + 1;
		else
			return mid;
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int n = 0;
	scanf("%d", &n);
	int a = find_number(arr,n,&len);
	if (a == -1)
		printf("该数字不在数组内\n");
	else
		printf("该数字的下标为:%d\n", a);
	return 0;
}