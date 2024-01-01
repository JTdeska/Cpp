#include <stdio.h>
#include <vector>
using namespace std;

vector<int> buf;

void gcd(int invalue)
{
	for (int i = 2; i <= invalue; i++)
	{
		if ((invalue%i) == 0)
		{
			buf.push_back(i);
			gcd(invalue / i);
			return;
		}
	}
}

int main()
{
	int invalue;

	//printf("Input Value: ");
	scanf("%d", &invalue);
	//getchar();

	gcd(invalue);

	for (int i = 0; i < buf.size(); i++)
	{
		int count = 1;

		for (int j = i + 1; j < buf.size(); j++)
		{
			if (buf[j] == buf[i])
				count++;
			else
				break;
		}

		if (i > 0)
			printf("* ");

		if (count > 1)
		{
			printf("%d^%d ", buf[i], count);
			i += (count - 1);
		}
		else
			printf("%d ", buf[i]);
	}

	//printf("\nPress any key to Exit.");
	//getchar();
    return 0;
}

