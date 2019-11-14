#include<cstdio>
#include<iostream>
using namespace std;
int read()
{
	re bool fl=1;
	re int res=0;
	char cc=getchar();
	while(!isdigit(cc)){if(cc=='-')fl=0;cc=getchar();}
	while(isdigit(cc)) {res=(res<<3)+(res<<1)+(cc^48);cc=getchar();}
	return fl?res:-res;
}
int main()
{
	int n=read();
	return 0;
}
