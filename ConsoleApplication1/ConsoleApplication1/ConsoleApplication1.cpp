// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
int DP[100001];
long answer = -1000001;
int main()
{
	int length;
	int minushigh;
	cin >> length;
	cin >> DP[0];
	answer = DP[0];
	bool check = true;
	for (int i = 1; i < length; i++)
	{
		cin >> DP[i];
		if (DP[i - 1] > 0 && DP[i - 1] + DP[i] > 0)
		{
			DP[i] += DP[i - 1];
		}
		if (DP[i] > answer)
		{
			answer = DP[i];
		}
	}
	cout << answer;
}