
#include <iostream>

using namespace std;

int main()
{
    // xn = xn−1 + xn−2
    int firstNum = 0;
    int secondNum = 1;
    int fibNum;
    for(int i = 0; i <= 5;i++)
    {
        fibNum =  firstNum -1 + secondNum;
        cout << fibNum << endl;
        
    }

    cout << "THE END" << endl;
}