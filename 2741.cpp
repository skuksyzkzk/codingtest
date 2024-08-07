#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        // cout << i << endl; 이렇게하면 endl은 단순 개행뿐만아니라 버퍼도 비우는 작업을 수행해서 안좋다.
        cout << i << "\n";
    }
}
/*
ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
이 코드는 C와 C++의 표준 stream의 동기화를 끊는 역할을 한다.
cin과 cout의 속도가 C의 입출력 속도에 비해 떨어지기 때문에 저 코드를 사용해 속도를 높이는 기능으로 사용한다.
자세한 내용은 이 글을 참고
하지만 동기화를 끊게되면 C의 입출력 함수를 더 이상 사용하지 못하는데
그 동안 printf와 scanf만 주의하면 된다고 생각했었는데 getchar도 C에서 쓰이는 입출력 함수이다.
*/