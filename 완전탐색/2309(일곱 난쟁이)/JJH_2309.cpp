#include <iostream>
#include <stdio.h>
#include <math.h>
#include<algorithm>


using namespace std;

int init[9];
int arr[81][9];
int check[81];
int sum=0;
int cnt=0;
void chogiha()
{
	for(int i = 0 ;i < 9 ;i++)
	{
		init[i]=0;
	}
}
int main() {
	int n=0;
	int j=0;
	int z=1;
	int num=0;
	int index=0;

	for(int i = 0 ;i < 9 ; i++)
	{
		scanf("%d",&init[i]);
		getchar();
		for(int j=0; j < 81 ; j++)
			arr[j][i]=init[i];
	}

	j=0;

	for(int i = 0 ;i < 9 ; i++)
	{
		z=i+1;
		for(int k=i+1; k<9 ;k++)
		{
		arr[j][i]=0;
		arr[j++][z++]=0;
		}
	}

	for(int i = 0 ;i < 81 ; i++)
	{
		for(int j=0; j < 9 ; j++)
		{
			sum+=arr[i][j];
			init[j]=arr[i][j];
			if(arr[i][j]!=0)
			cnt++;

			if(sum==100&&cnt==7)
			{
				index=j;
				break;
			}
		}
		if(sum==100)
			break;
		else
		{
			sum=0;
			chogiha();
			cnt=0;
		}
	}

	sort(init,init+9);

	for(int i=2; i<9; i++)
	{
		printf("%d\n",init[i]);
	}

	return 0;
}