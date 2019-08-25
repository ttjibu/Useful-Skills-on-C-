#include<set>
using namespace std;
struct node{
    int rank,value;
    bool operator<(const node & t) const {
        return value>t.value;
    }
}a[100];
set <node> s;
int main()
{
	return 0;
}
