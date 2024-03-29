﻿#include <iostream>

using namespace std;

int main()
{
    // 1. int 최고 표현 범위를 넘으면 어떻게 되는가

    int maximum = 5000000000; // 50억

    cout << maximum << endl; // 실행 결과 705032704 라는 값을 받음.

    // 더 큰 수를 넣어도 똑같은가

    int maximum2 = 10000000000; // 100억

    cout << maximum2 << endl; // 실행 결과 1410065408 라는 값을 받음.

    // 아마도 오버플로우 현상으로 2147483647을 넘으면 -2147483648부터 시작해서 남는 만큼 계산되고 남는 값이 반환되는게 아닌가 추측.
    // 궁금해서 계산 해본 결과로 2147483648 * 2 = 4,294,967,296 으로 5,000,000,000 - 4,294,967,296 = 705,032,704
}

