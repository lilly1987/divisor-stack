#include <iostream>
#include <cstdio>
#include <cmath>
#include <memory.h>
#include <stack>

using namespace std;

int main()
{
	// �Է°�
	unsigned int n,c,m1,m2,ns;
	cout << "�O����:";
	cin >> n;
	cout << endl;

	// ���� n�� 1���� �۰ų� ������ �Լ� ����
	if (n <= 1) {
		cout << "1���� ����";
		cout << endl;
		return 0;
	}

	// ���� ����
	stack<int> s;

	c = 0;
	ns = int(sqrt(n));

	while (true)
	{
		c += 1;
		//if (c<=n)	//�Է°����� ����
		if (c<=ns)	//�Է°����� ����
		{
			m1 = int(n / c);	//���� ����
			m2 = n % c;			//������ ����
			if (m2==0)			//�������� 0�� �ƴϸ� ����� �ƴ�. 
			{
				s.push(c);
				cout << s.size() << ":" << c << endl;
			}
		}
		else {
			cout << endl;
			cout << s.size()<<"��"<< endl;
			cout << endl;
			c = 0;
			//while(0< s.size()) //������ ������� ��������
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

