#include<stdio.h>
#include <string>
#include <iostream>
#include<string.h>

void chogiha(char arr[])
{
	int i=0;

	for(i=0;i<5;i++)
	{
		arr[i]='\0';
	}
}
int change(char arr[5])
{
	int i=0;
	int j=1;
	int num=0;
	
	for(i=0;i<5;i++)
	{
		if(arr[i] =='\0')
		{
			break;
		}
		else
		{
			num = num * 10 + (arr[i]-'0');
			
		}

	}
	return num;
}
int main()
{
	int i=0;
	int sum=0;
	int sum2=0;
	int cnt=0;
	int flag=0;
	char num[5]="";
	char arr[50]="";
	scanf("%s",arr);
	for(i=0;i<strlen(arr);i++)
	{

		if(arr[i]>='0'&&arr[i]<='9'&&flag==0)
		{
			num[cnt]=arr[i];
			cnt++;
		}
		else if(arr[i]=='+'&&flag==0)
		{
			sum+=change(num);
			cnt=0;
			chogiha(num);
		}
		else if(arr[i]=='-'&&flag==0)
		{
			sum+=change(num);
			flag=1;
			cnt=0;
			chogiha(num);
		}
		else if(arr[i]>='0'&&arr[i]<='9'&&flag==1)
		{
			num[cnt]=arr[i];
			cnt++;
		}
		else if((arr[i]=='+'||arr[i]=='-')&&flag==1)
		{
			sum2+=change(num);
			cnt=0;
			chogiha(num);
		}
	}
	//exception
	if(flag==0)
	{
		sum+=change(num);
	}
	else
	{
		sum2+=change(num);
	}
	printf("%d",sum-sum2);

	return 0;
}