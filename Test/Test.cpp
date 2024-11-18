
#include <iostream>
using namespace std;

void First()
{
	int R[5];
	cout << "정수 5개 입력하세요." << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> R[i]; // 배열 R [] 안의 값을  다섯개 입력

		cout << R[i] << " "; // 입력한 값을 출력.
	}
};
void Second()
{
	int R[5] = { 1,2,3,4,5 };
	int SUM;
	int sum = 0;

	for (int i = 0; i < 5; i++) // 배열 R[ ] 안에 들어가는 값이 0으로 시작할 때, R[] 안의 값이 5보다 작을 때, 
	{					// SUM (합을 쉽게 구하기 위해 선언한 변수) 의 값은 기초 값 0이 되는  sum 변수와 R[] 안에 들어간 기초 값을 전부 더한 값
		SUM = sum += R[i];		// 조건이 충족될 시,합하는 수를 1개씩 올려 R[] 안의 값을 구하여 SUM 변수 값으로 출력된다.
		cout << "배열의 합은 " << SUM << " 입니다." << endl;
	}

};
void Three() 
{
	int R[5] = { 4, 7, 2, 9, 5 };

	int Max = R[0]; // 최대 값을 알아낼 변수 Max 의 기본 값을 배열 변수 R[] 의 0번째 상자, 즉 값 4로 지정.

	int index;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 1; j < 5; j++) // 비교 대상. R[] 의 값이 첫번째 상자, 7의 값일 때 5번째 상자까지를 대상으로 함.
		{
			if (Max < R[j]) // Max 의 값은 4가 R[j]의 값 7보다 작을 때
			{
				Max = R[j + 2]; // 최대 값(Max) 은 R[j]의 원래 위치인 1번째 상자 보다 두 상자를 이동해서 값 9가 나옴.
				cout << "배열에서 가장 큰 값은" << Max << " 입니다." << endl; // 출력
			}
		}
	}
}
void Four()
{
	int R[5] = { 1, 2, 3,4, 5 };

	for (int i = 4; i >= 0; i--) // R[] 안에 들어가는 상자 번호 수 i의 값이 4번째 상자 값 5부터 시작할 떄, 
	{							// 0번째 상자 값 1까지 들어갈 수 있도록 하고, 
		cout << R[i] << " ";	// 조건이 맞을 시 하나씩 마이너스 해 카운트 한다. 
	}


}
void Five()
{
	int R[5] = { 10, 20, 30, 40, 50 };
	int Index;

	for (int i = 0; i < 5; i++)
	{
		cin >> R[i];

		if (Index = R[i]) // Index 변수의 값이 R[]의 값과 같을 때
		{
			cout << "입력값 : " << R[i] << "의 위치는 " << Index << "번에 있습니다." << endl;
			// break; 는 보기 편하기 위해 안함.
		}
		else
		{
			cout << "값이 겹치지 않습니다." << endl;
			break;
		}
	}
}



int main()
{
	First();
	Second();
	Three();
	Four();
	Five();
}
