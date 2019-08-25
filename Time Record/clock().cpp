#include<iostream>
#include<cstdio>
#include<ctime>
using namespace std;
clock_t startTime,endTime; //define the special variate for time record
void a_function()
{
    startTime = clock();//start
    for (int i = 0; i < 1<<25; i++)
        i++;
    endTime = clock();//end
}
void print_part()
{
    printf("The run time of the 'a_function' is:%dms\n",endTime-startTime);
    printf("The run time of the 'a_function' is:%fs\n",(endTime-startTime)/CLOCKS_PER_SEC);
    cout << "The run time of the 'a_function' is: " <<(double)(endTime - startTime) / CLOCKS_PER_SEC << "s" << endl;
    //no asking me why the first is unavailable while the second is .
    //in VC++6.0 CLOCKS_PRE_SEC can be replaced by CLK_TCK
    printf("\n");
}
void print_all()
{
    printf("The run time of the whole program is:%d\n",clock());
    cout << "The run time of the whole program is:" << (double)clock() /CLOCKS_PER_SEC<< "s" << endl;
    
}
int main()
{
    a_function();
    print_part();
    print_all();
    system("pause");
    return 0;
}
