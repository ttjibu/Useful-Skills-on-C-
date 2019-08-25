#include<iostream>
#include<cstdio>
#include<Windows.h>
using namespace std;
//tips:the parameters below is just what that
//which means don't change the captain letter
int main()
{
    DWORD startTime = GetTickCount();//start
    for (int i = 0; i < 1<<25; i++)
        i++;
    DWORD endTime = GetTickCount();//end it
    cout << "The run time is:" << endTime - startTime << "ms" << endl;
    printf("%d\n",endTime-startTime);
    system("pause");
    return 0;
}
