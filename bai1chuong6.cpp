using namespace std;
#include <iostream>
#include <string.h>
#define SIZE 1000
void ChuyenThapSangNhiPhan(int n,char NP[]);
int main()
{
	char NP[SIZE];
	int n; cin>>n;
	for(int i=1;i<=n;i++)
		ChuyenThapSangNhiPhan(i,NP);
	return 0;
}
void ChuyenThapSangNhiPhan(int n,char NP[])
{
	int i=0;
	while(n!=0)
	{
		NP[i]=n%2+'0';
		i++;
		n=n/2;
	}
	NP[i]='\0';
	strrev(NP);
	cout<<NP<<endl;
}
