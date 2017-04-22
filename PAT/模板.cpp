#ifdef moban

#include<iostream>
using namespace std;
int main(void)
{

	return 0;
}




void sort(vector<int> &a)
{
	int tmp;
	for(auto &i:a)
		for (auto &j : a)
		{
			if (i < j)
			{
				tmp = i;
				i = j;
				j = tmp;
			}
		}
}
#endif // moban
