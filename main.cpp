#include <iostream>

using namespace std;
//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
int main()
{
	//1 + 2 + 3 + 4 + ... + 100 을 반복문으로 구해보시오
	//array배열
	int Korean[100] = { 0, };	// { 0, } 은 0 이후의 모든 값을 0으로 저장

	for (int i = 0; i < 100; ++i)	// for( 초기치; 조건; 증가치 ) ( ++i = 1 + i )
	{
		Korean[i] = i + 1;
		cout << Korean[i] << ", ";
	}
	cout << endl;


	//1 - 100까지 합과 평균을 구하세요.
	//Sum = Sum + 1;
	//Sum = Sum + 2;
	int Sum = 0;
	float Avg = 0.0f;

		for (int i = 1; i <= 100; i = i++)
	{
		Sum = Sum + i;
		cout << Sum << ", ";
	}
		cout << endl;
		Avg = static_cast<float>(Sum) / 100.0f;
		cout << Avg << endl;

	return 0;
}