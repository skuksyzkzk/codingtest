#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    ios_base::sync_with_stdio(false);

    int a;
    for (int i = 0; i < 10; i++)
    {
        cout << i << "번 째 입력\n";
        cin >> a;
    }
    return 0;
}