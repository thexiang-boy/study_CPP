//main.cpp
#include<iostream>
#include "Lib/swap.h"
using namespace std;

int main(int argc, char **argv)
{
   int v1 = 100;
   int v2 = 200;
   cout << "Before:" << v1 << " " << v2 << endl;
   swap(v1,v2);
   cout << "After:" << v1 << ' ' << v2 << endl;
   cout << "cmake调试\n";
   system("pwd");
   return 0;
}
