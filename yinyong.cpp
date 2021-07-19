#include<iostream>
using namespace std;

void swap01(int a, int b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
};

void swap02(int * a, int * b)
{
    int tmp;
    tmp = * a;
    * a = * b;
    * b = tmp;
};

void swap03(int &a, int &b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
};

int main(void) 
{   
    int a = 1;
    int b = 2;

/*    //值传递
    swap01(a, b);
    cout << a << "\t" << b << endl;

    //地址传递
    swap02(&a, &b);
    cout << a << "\t" << b << endl;
*/
    //引用传递  int &a = aa;
    swap03(a, b);
    cout << a << "\t" << b << endl;

    return 0;
}