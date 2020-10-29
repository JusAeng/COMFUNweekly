
//best_quiz_student_excl_min

#include <iostream>
using namespace std;

int findMax(int x);
struct Student
{
	char number[12];
	int  score[11];
	int totalsc=0;
}st[1001];

int main()
{
	int N,T;
	//input
	cin>>N>>T;
	for(int i=1;i<=N;i++)
	{
		cin>>st[i].number;
		for(int j=1;j<=T;j++)
		{
			cin>>st[i].score[j];
		}
	}
	
	//process
	int min,maxsc;
	for(int i=1;i<=N;i++)
	{
		min=10;
		for(int j=1;j<=T;j++)
		{
			st[i].totalsc+=st[i].score[j];
			if(st[i].score[j]<=min)
			{
				min=st[i].score[j];
			}
		}
		st[i].totalsc-=min;
	}
	for(int i=1;i<=N;i++)
	{
		maxsc=findMax(st[i].totalsc);
	}
	
	
	

	//output
	cout<<"\n"<<maxsc<<endl;
	for(int i=1;i<=N;i++)
	{
		if(st[i].totalsc==maxsc)
		{
			cout<<st[i].number<<endl;
		}
	}
	
		
	return 0;
}
int findMax(int x)
{
	int maxsc=0;
	if(x>=maxsc)
	{
		maxsc=x;
	}
	return maxsc;
}

