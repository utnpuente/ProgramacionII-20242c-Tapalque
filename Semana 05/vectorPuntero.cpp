#include <iostream>
using namespace std;

int main()
{
//    int vec[5] = {10, 20, 30, 40, 50};
//    int* pVec;
//
//    pVec = vec;
//    pVec[4] = 70;
//    cout << pVec << endl;
//    pVec++;
//    cout << pVec << endl;
//    pVec++;
//    cout << pVec << endl;
//    pVec++;
//    cout << pVec << endl;
//    pVec++;
//    cout << pVec << endl;
//
//
//    cout << endl;
//    cout << *(vec + 0) << endl;
//    cout << *(vec + 1) << endl;
//    cout << *(vec + 2) << endl;
//    cout << *(vec + 3) << endl;
//    cout << *(vec + 4) << endl;
//
//    cout << endl;
//    cout << &vec[0] << endl;
//    cout << &vec[1] << endl;
//    cout << &vec[2] << endl;
//    cout << &vec[3] << endl;
//    cout << &vec[4] << endl;

    int num[5];
    int* pNum;

    pNum = num;

    for(int i = 0; i < 5; i++)
    {
        cout << "N: ";
        cin >> *(pNum + i);
    }

    for(int i = 0; i < 5; i++)
    {
        cout << *(pNum + i) << endl;
    }

    return 0;
}
