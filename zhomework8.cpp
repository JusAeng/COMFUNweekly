
////BIgram
#include <iostream>
using namespace std;
int main()
{
	int n[10001],i=1,xx=0,xy=0,yx=0,yy=0;
	do{
		cin >> n[i];
		i++;
		if(i>=3 && (n[i-1]==1||n[i-1]==0))
		{
			if((n[i-1]-n[i-2]==0)&&n[i-1]==0)
			{
				xx+=1;
			}
			else if(n[i-1]-n[i-2]==1)
			{
				xy+=1;
			}
			else if(n[i-1]-n[i-2]==-1)
			{
				yx+=1;
			}
			else if(n[i-1]-n[i-2]==0)
			{
				yy+=1;
			}
		}
	}while(n[i-1]==1||n[i-1]==0);
	printf("\n%d\n%d\n%d\n%d",xx,xy,yx,yy);
	return 0;
}
