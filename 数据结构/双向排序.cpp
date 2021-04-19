#include <bits/stdc++.h>
#define MaxSize 100
#define ArrayLen(array) sizeof(array)/sizeof(array[0])
#define TypeName template<class T>
/*
* Created by HarvestWu on 2018/07/23.
*/
 
using namespace std;
 
TypeName
void SWAP(T R[], int i, int j)
{
	int temp = R[i];
	R[i] = R[j];
	R[j] = temp;
}
 
//计数排序
TypeName
void Sort(T R[],int n)
{
	int l = 0, r = n - 1;
	while (l<r)
	{
		for (int i = l; i < r; i++)//由左向右扫描，将最大值置于右边
		{
			if (R[i]>R[i + 1])
				SWAP(R, i, i + 1);
		}
		--r;
		for (int j = r; j > l; --j)//由右向左扫描，将最小值置于左边
		{
			if (R[j] < R[j - 1])
				SWAP(R, j, j - 1);
		}
		++l;
	}
}
 
 
//打印
TypeName
void Visit(T R[],int n)
{
	for (int i = 0; i < n; i++)
		cout << R[i] << " ";
	cout << endl;
}
 
int main()
{
	int R[10] = { 1, 8, 115, 6, 7, 12, 4, 83, 9,0 };
	int len = ArrayLen(R);
	Sort(R, len);
	Visit(R, len);
	return 0;
}
