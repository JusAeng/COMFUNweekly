
//WordChain

#include <iostream>
using namespace std;

int findError(char x,char y);

struct words
{
	char word[1001];
}w[30001];

int main()
{
	int L,N,check;
	cin>>L>>N;
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=L;j++)
		{
			cin>>w[i].word[j];
		}
	}
	cout<<endl;
	for(int i=2;i<=N;i++)
	{
		check=0;
		for(int j=1;j<=L;j++)
		{
			check+=findError(w[i].word[j],w[i-1].word[j]);
		}
		if(check>=3)
		{
			for(int j=1;j<=L;j++)
			{
				cout<<w[i-1].word[j];
			}
			break;
		}
	}
	
	
	return 0;
}

int findError(char x,char y)
{
	int no=0;
	if(x != y)
	{
		no+=1;
	}
	return no;
}

