#include<set>
using namespace std;
struct node{
  friend bool operator <(const node &x,const node &y){
    return x.value>y.value;
  }
  int rank,value;
}a[100];
set<node> s; 
int main()
{
	return 0;
}
