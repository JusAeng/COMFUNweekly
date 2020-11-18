
//qualified_examinees

#include <iostream>

using namespace std;

void copyString(char x[],char y[]);

struct student
{
	char id[6];
	int sc=0;
	
}s[10001] ;

struct studentPass
{
	char id[6];
	int sc=0;
	
}pass[10001] ;

struct studentPassArrage
{
	char id[6];
	
}p[10001] ;

int main()
{
	int N,sc,k=0;
	float mean,allsc=0;
	int count=0,seq=0,m=0,j=0;
	cin>>N;
	for(int i=1;i<=N;i++)
	{
		cin>>s[i].id>>s[i].sc;
		allsc+=s[i].sc;
	}
	
	mean=allsc/N;
	
	for(int i=1;i<=N;i++)
	{
		if(s[i].sc>=mean)
		{
			k++;
			copyString(pass[k].id,s[i].id);
			pass[k].sc=s[i].sc;
		}
	}
	
	
	
	count=k;
	do
	{
		for(int i=1;i<=k;i++)
		{
			if(pass[i].sc>m)
			{
				m=pass[i].sc;
				seq=i;
			}
			if(i==k)
			{
				j++;
				copyString(p[j].id,pass[seq].id);
				pass[seq].sc=0;
			}
		}
		m=0;
		count-=1;
	}while(count>0);
	
		
	cout<<k<<endl;
	for(int i=1;i<=k;i++)
	{
		cout<<p[i].id<<endl;
	}
	
	return 0;
}

void copyString(char x[],char y[])
{
	for(int i=0;i<=6;i++)
	{
		x[i]=y[i];
		if(x[i]=='\0')
		{
			break;
		}
	}
}


