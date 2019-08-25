#include<set>
using namespace std;
struct node{
  int rank,value;
}a[100];
bool operator <(const node &x,const node &y){
  return x.value>y.value;
}
set<node> s; 
int main()
{
	return 0;
}
