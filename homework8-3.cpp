
//data_record_and_retrieval
#include <iostream>
#include <string.h>
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
struct studentInfo{
	int id;
	char name[31];
	char surname[51];
	int year;	
}a[20001];
struct arrange_studentInfo{
	int id;
	char name[31];
	char surname[51];
	int year;	
}b[20001];


int main()
{
	int y,m=10000000,N,j=0,seq,count,c=0;
	cin >> N;
	for(int i=1;i<=N;i++)
	{
		cin >> a[i].id >> a[i].name>>a[i].surname>>a[i].year;
	}
	cin>>y;
	count=N;
/////ArrangeInfo
	do
	{
		for(int i=1;i<=N;i++)
		{
			if(a[i].id<m)
			{
				m=a[i].id;
				seq=i;
			}
			if(i==N)
			{
				j++;
				b[j].id=a[seq].id;
				b[j].year=a[seq].year;
				copyString(b[j].name,a[seq].name);
				copyString(b[j].surname,a[seq].surname);
				a[seq].id=10000000;
			}
		}
		m=10000000;
		count-=1;
	}while(count>0);
	
	
/////PrintInfo
	for(int i=1;i<=N;i++)
	{
		if(b[i].year==y)
		{
			printf("%d  %s %s",b[i].id,b[i].name,b[i].surname);
			printf("\n");
			c+=1;
		}
		if(i==N && c==0)
		{
			printf("NONE");
		}
		
	}	
	
	return 0;
}
