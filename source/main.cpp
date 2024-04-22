//main.cpp
#include<iostream>
#include "../include/swap.h"
#include "../include/datatype.h"

using namespace std;

int main(int argc, char **argv)
{
   int i = 10;
   float f = static_cast<float>(i);
   int v1 = 100;
   int v2 = 200;
   cout << "Before:" << v1 << " " << v2 << endl;
   swap(v1,v2);
   cout << "After:" << v1 << ' ' << v2 << endl;
   cout << "cmake调试\n"; 
   cout << "cmake调试\n";
   system("pwd");
   printtype();
   return 0;
}
