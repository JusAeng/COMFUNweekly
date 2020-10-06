
//fighting_star
#include <iostream>
using namespace std;

void copyString(char x[],char y[])
{
	for(int i=0;i<=10000;i++)
	{
		x[i]=y[i];
		if(x[i]=='\0')
		{
			break;
		}
	}
}
struct applicantInfo
{
	char name[30];
	int point=0;
}ap[9];
struct applicantInfos
{
	char name[30];
	int point=0;
}aps[9];

int main()
{
	int m,vote[10000],max=0,min=10001,z=0,seq;
	for(int i=1;i<=8;i++)
	{
		cin>>ap[i].name;
	}
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>vote[i];
		for(int j=1;j<=8;j++)
		{
			if(vote[i]==j)
			ap[j].point+=1;
		}
	}
	
////arragement
	for(int j=1;j<=8;j++)
	{
		for(int i=1;i<=8;i++)
		{
			if(j==1)
			{
				if(ap[i].point<=min)
				{
					min=ap[i].point;
				}
			}
			if(ap[i].point>max)
			{
				max=ap[i].point;
				seq=i;
			}
			if(i==8)
			{
				z++;
				aps[z].point=ap[seq].point;
				copyString(aps[z].name,ap[seq].name);
				ap[seq].point=-1;
				max=-1;
			}
		}
	}
////output
	for(int i=1;i<=8;i++)
	{
		if(aps[i].point!=min)
		{
			cout<<aps[i].name<<endl;
		}
	}
	
	
	
	
	return 0;
}
