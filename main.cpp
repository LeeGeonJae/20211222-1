#include <iostream>

using namespace std;
//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
int main()
{
	//1 + 2 + 3 + 4 + ... + 100 �� �ݺ������� ���غ��ÿ�
	//array�迭
	int Korean[100] = { 0, };	// { 0, } �� 0 ������ ��� ���� 0���� ����

	for (int i = 0; i < 100; ++i)	// for( �ʱ�ġ; ����; ����ġ ) ( ++i = 1 + i )
	{
		Korean[i] = i + 1;
		cout << Korean[i] << ", ";
	}
	cout << endl;


	//1 - 100���� �հ� ����� ���ϼ���.
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