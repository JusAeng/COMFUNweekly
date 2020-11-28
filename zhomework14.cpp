#include <iostream>

using namespace std;

struct student
{
	char name[20];
	int sc[6];
	float allsc;
	float mean;
	
}s[101];

struct studentArrage
{
	char name[20];
	float mean;
	
}sr[101];

void copyString(char x[],char y[]);

int main()
{
	int N,M,seq;
	float max=-1;
	cin>>N>>M;
	for(int i=1;i<=N;i++)
	{
		cin>>s[i].name;
		for(int j=1;j<=M;j++)
		{
			cin>>s[i].sc[j];
		}
	}
	
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=M;j++)
		{
			s[i].allsc+=s[i].sc[j];
		}
		s[i].mean=s[i].allsc/M;
	}
	
	for(int j=1;j<=N;j++)
	{
		for(int i=1;i<=N;i++)
		{
			if(s[i].mean>max)
			{
				max=s[i].mean;
				seq=i;
			}
			if(i==N)
			{
				sr[j].mean=s[seq].mean;
				copyString(sr[j].name,s[seq].name);
				s[seq].mean=-1;
				max=-1;
			}
		}
	}
	cout<<endl;
	
	for(int i=1;i<=N;i++)
	{
		cout<<sr[i].name<<"	"<<sr[i].mean<<endl;
	}
	
	
	
	
	
	return 0;
}

void copyString(char x[],char y[])
{
	for(int i=0;i<=100;i++)
	{
		x[i]=y[i];
		if(x[i]=='\0')
		{
			break;
		}
	}
}

/*
3 5 
jus  7 5 9 3 7                      
by   3 5 2 6 7						
hut  4 8 7 9 4						

3 5 
jus  7 5 9 3 7                      hut  6.4
by   3 5 2 6 7						jus  6.2
hut  4 8 7 9 4						by   4.6		

*/


