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
 
//��������
TypeName
void Sort(T R[],int n)
{
	int l = 0, r = n - 1;
	while (l<r)
	{
		for (int i = l; i < r; i++)//��������ɨ�裬�����ֵ�����ұ�
		{
			if (R[i]>R[i + 1])
				SWAP(R, i, i + 1);
		}
		--r;
		for (int j = r; j > l; --j)//��������ɨ�裬����Сֵ�������
		{
			if (R[j] < R[j - 1])
				SWAP(R, j, j - 1);
		}
		++l;
	}
}
 
 
//��ӡ
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
