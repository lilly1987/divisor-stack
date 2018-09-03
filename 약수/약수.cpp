#include <iostream>
#include <cstdio>
#include <cmath>
#include <memory.h>
#include <stack>

using namespace std;

int main()
{
	// 입력값
	unsigned int n,c,m1,m2,ns;
	cout << "찿을값:";
	cin >> n;
	cout << endl;

	// 만일 n이 1보다 작거나 같으면 함수 종료
	if (n <= 1) {
		cout << "1보다 작음";
		cout << endl;
		return 0;
	}

	// 스택 생성
	stack<int> s;

	c = 0;
	ns = int(sqrt(n));

	while (true)
	{
		c += 1;
		//if (c<=n)	//입력값까지 증가
		if (c<=ns)	//입력값까지 증가
		{
			m1 = int(n / c);	//몫을 저장
			m2 = n % c;			//나머지 저장
			if (m2==0)			//나머지가 0이 아니면 약수가 아님. 
			{
				s.push(c);
				cout << s.size() << ":" << c << endl;
			}
		}
		else {
			cout << endl;
			cout << s.size()<<"개"<< endl;
			cout << endl;
			c = 0;
			//while(0< s.size()) //성능은 어느쪽이 좋을려나
			while(!s.empty())
			{
				cout << ++c << ":"<< s.top() <<","<<n/ s.top()<< endl;
				s.pop();
			}
			cout << endl;
			return 0;
		}
	}


	return 0;
}

