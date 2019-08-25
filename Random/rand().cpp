#include<ctime>  //for time
#include<cstdio>
#include<cstdlib> //the header file for rand()
using namespace std;
void inl() //here is to initialize the rand()
{
	unsigned seed;
	seed=time(0);
	srand(seed);
	//another way is just one line:
	//srand((unsigned int)(time(NULL)));
}
int main()
{
	for(int i=1;i<=9;i++)
	{
		printf("%d. %d\n",i,rand());
		//here is a fake random function
		//it won't change when rerunning it
	}
	printf("\n");
	inl();
	for(int i=1;i<=9;i++)
	{
		printf("%d. %d\n",i,rand());
		//here is a initialized random function
		//it will change
	}
    system("pause");
    return 0;
}
