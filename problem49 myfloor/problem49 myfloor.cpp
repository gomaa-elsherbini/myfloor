#include <iostream>
using namespace std;



float readNumber()
{
    float num;
    cout << "\nEnter a Number? ";
    cin >> num;
    cout << "\n";
    return num;
}

int myFloor(float num)
{
    if (num < 0)
        return (int)--num;
    else
        return int(num);
}

void printResult(string msg, float res)
{
    cout << msg << res << endl;
}



int main()
{
    float num = readNumber();

    printResult("My floor result is: ", myFloor(num));
    printResult("C++ floor result is : ", floor(num));



    return main();
}