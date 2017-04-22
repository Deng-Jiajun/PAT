


////1001
//#include<iostream>
//using std::cin;
//using std::cout;
//using std::endl;
//int main(void)
//{
//	int n, count;
//	count = 0;
//	cin >> n;
//	while (n != 1)
//	{
//		if (n % 2 == 1)
//			n = n * 3 + 1;
//
//		n /= 2;
//		count++;
//	}
//	cout << count << endl;
//	return 0;
//}


////1002
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int main(void)
//{
//	string n;
//	vector<string> num{ "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
//	vector<string> OutPut;
//	int sum = 0;
//	cin >> n;
//
//	for (auto i : n)
//	{
//		sum = sum + i - '0';
//	}
//
//	if (sum == 0)
//		cout << num[0] << endl;
//	while (sum > 0)
//	{
//		OutPut.push_back(num[sum % 10]);
//		sum /= 10;
//	}
//	for (int i = OutPut.size() - 1; i > 0; i--)
//		cout << OutPut[i] << " ";
//
// 
//	cout << OutPut[0] << endl;
//
//	return 0;
//}



////1004
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//struct info
//{
//	string name;
//	string ID;
//	unsigned grade;
//};
//
//int main(void)
//{
//	string name;
//	string ID;
//	unsigned grade;
//	unsigned n;
//	info tmp,max,min;
//	cin >> n;
//	cin >> tmp.name >> tmp.ID >> tmp.grade;
//	max = min = tmp;
//	n--;
//	while (n--)
//	{
//		cin >> tmp.name >> tmp.ID >> tmp.grade;
//		if (tmp.grade > max.grade)
//			max = tmp;
//		if (tmp.grade < min.grade)
//			min = tmp;
//	}
//	cout << max.name << " " << max.ID << endl;
//	cout << min.name << " " << min.ID << endl;
//
//	return 0;
//}


////1005
//#include<iostream>
//#include<vector>
//using namespace std;
//
//void sort(vector<int> &a)
//{
//	int tmp;
//	for (auto &i : a)
//		for (auto &j : a)
//		{
//			if (i > j)
//			{
//				tmp = i;
//				i = j;
//				j = tmp;
//			}
//		}
//}
//int main(void)
//{
//	vector<int> ivec1, ivec2,target;
//	int n, tmp;
//	cin >> n;
//	for (int i = 0; i != n; i++)
//	{
//		cin >> tmp;
//		if (tmp != 0)
//			ivec1.push_back(tmp);
//	}
//
//	for (const auto &i : ivec1)
//	{
//		int n = i;
//		while (n != 1)
//		{
//			if (n % 2 == 1)
//				n = n * 3 + 1;
//
//			n /= 2;
//			ivec2.push_back(n);
//		}
//	}
//	
//	for(const auto &i:ivec1)
//	{
//		bool flag = 0;
//		for (const auto &j : ivec2)
//		{
//			if (i == j)
//			{
//			flag = 1;
//			break;
//			}
//		}
//		if(!flag)
//			target.push_back(i);
//	}
//
//	
//	sort(target);
//	for (int i = 0; i != target.size() - 1; i++)
//	{
//		cout << target[i] << " ";
//	}
//	cout << target[target.size() - 1] << endl;
//	return 0;
//}





////1006
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int main(void)
//{
//	int digit[3];
//	int n;
//	cin >> n;
//	digit[2] = n % 10;
//	n /= 10;
//	digit[1] = n % 10;
//	n /= 10;
//	digit[0] = n;
//	for (int i = digit[0]; i != 0; i--)
//		cout << 'B'; 
//	for (int i = digit[1]; i != 0; i--)
//		cout << 'S'; 
//
//	for (int i = 1; i != digit[2]+1; i++)
//		cout << i;
//	cout << endl;
//	return 0;
//}


////1008
//#include<iostream>
//#include<vector>
//using namespace std;
//void reserve(vector<int> &ivec, int beg, int end)
//{
//	for (int i = 0; i != 1 + (end - beg) / 2; i++)
//	{
//		int tmp;
//		tmp = ivec[beg + i];
//		ivec[beg + i] = ivec[end - i];
//		ivec[end - i] = tmp;
//	}
//}
//
//int main(void)
//{
//	int n, rotation, num;
//	vector<int> num_line;
//	cin >> n >> rotation;
//
//	for (int i = 0; i != n; i++)
//	{
//		cin >> num;
//		num_line.push_back(num);
//	}
//	while (rotation >= n)
//		rotation -= n;
//
//	if (rotation != 0)
//	{
//		reserve(num_line, 0, n - 1);
//		reserve(num_line, 0, rotation - 1);
//		reserve(num_line, rotation, n - 1);
//	}
//
//	for (int i = 0; i != n - 1; ++i)
//	{
//		cout << num_line[i] << " ";
//	}
//	cout << num_line[n - 1];
//	system("pause");
//	return 0;
//}


////1009
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//void myprint(vector<string>::iterator beg, vector<string>::iterator end)
//{
//	if ((beg+1) != end)
//	{
//		cout << *--end << " ";
//		myprint(beg, end);
//	}
//}
//
//int main(void)
//{
//	string s;
//	vector<string> svec;
//	while(cin>>s)
//	{
//		svec.push_back(s);
//	}
//	myprint(svec.begin(), svec.end());
//	cout << svec[0] << endl;
//	system("pause");
//	return 0;
//}




////1010
////"段错误"原因：无输入时也输出"0 0"
//#include<iostream>
//#include<vector>
//using namespace std;
//int main(void)
//{
//	int tmp;
//	vector<int> ivec, ivec2;
//	while (cin >> tmp)
//		ivec.push_back(tmp);
//
//	if (!ivec.empty()&&ivec[1] != 0)
//	{	
//		decltype(ivec.size()) i;
//		for (i = 0; i != ivec.size(); i += 2)
//		{
//			if (ivec[i + 1] == 0)
//			{
//				ivec[i] = 0;
//			}
//			else
//			{
//				ivec[i] *= ivec[i + 1];
//				ivec[i + 1] -= 1;
//			}
//		}
//
//		i -= 2;
//		while (ivec[i] == 0)
//		{
//			i -= 2;
//		}
//		i += 2;
//		int j;
//		for (j = 0; j != i - 1; j++)
//			cout << ivec[j] << " ";
//		cout << ivec[j];
//		return 0;
//	}
//	cout << "0 0" << endl;
//	system("pause");
//	return 0;
//}

////1029
//#include<iostream>
//#include<string>
//using namespace std;
//int main(void)
//{
//	string output, actual;
//	cin >> output >> actual;
//	for (auto &o : output)
//		for (auto &a : actual)
//		{
//			if (o == a) { o = '#'; break; }//相等
//
//			if (o >= 'a'&&o <= 'z')//小写字母
//				if (toupper(o) == a)
//				{
//					o = '#'; break;
//				}
//
//			if (o >= 'A'&&o <= 'Z')//大写字母
//				if (tolower(o) == a)
//				{
//					o = '#'; break;
//				}
//
//		}
//
//	string print;
//	for (auto &c : output)
//	{
//		c = toupper(c);
//		if (c != '#')
//		{
//			bool flag = false;
//			for (auto &ch : print)
//			{
//				if (ch == c)
//					flag = true;
//			}
//			if (!flag)//print里没有c
//			{
//				print.push_back(c);
//			}
//		}			
//	}
//	for (auto &c : print)
//		cout << c;
//	cout << endl;
//	system("pause");
//	return 0;
//}



////1033
//#include<iostream>
//#include<string>
//using namespace std;
//int main(void)
//{
//	string bad, print;
//	getline(cin, bad);
//	getline(cin, print);
//	bool flag = false;
//
//	for (auto &c : bad)
//	{
//		if (c == '+')
//			flag = true;
//	}
//
//	for (auto &p : print)
//	{
//		for (auto &b : bad)
//		{
//			if (p == b)//相等，不输出
//				p = '#';
//
//			if (flag)//上档键坏，大写字母不能输出
//				if (p >= 'A'&&p <= 'Z')
//					p = '#';
//
//			if (p >= 'a'&&p <= 'z')//小写字母，和大写坏键一样
//			{
//				char tmp = toupper(p);
//				if (tmp == b)
//					p = '#';
//			}
//		}
//	}
//	for (auto &c : print)
//	{
//		if (c != '#')
//			cout << c;
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}


////1059
//#include<iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//bool prime(int x)
//{
//	int i;
//	bool t = true;
//
//	if (x == 1)
//		return(false);
//
//	for (i = 2; i <= sqrt(x); i++)
//		if (x % i == 0)
//			t = false;
//	return(t);
//}
//void award(int i)
//{
//	if (i == 0)
//	{
//		cout << "Checked" << endl;
//		return;
//	}
//	if (i == 1)
//	{
//		cout << "Mystery Award" << endl;
//		return;
//	}
//	if (prime(i))
//		cout << "Minion" << endl;
//	else
//		cout << "Chocolate" << endl;
//}
//
//
//#include<iomanip>
//int main(void)
//{
//	int give, find, tmp;
//
//	vector<pair<int, int> >list;
//	vector<int> list_find;
//	cin >> give;
//	int i = 0;
//	while (++i != give + 1)
//	{
//		cin >> tmp;
//		list.push_back(pair<int, int>(tmp, i));
//	}
//
//	cin >> find;
//	i = 0;
//	while (++i != find + 1)
//	{
//		cin >> tmp;
//		list_find.push_back(tmp);
//	}
//
//	for (auto&i_find : list_find)
//	{
//	//	printf("%04d: ", i_find);
//		cout << setfill('0') << setw(4);
//		cout << i_find << ": ";
//		bool flag = false;//是否在排名内
//		for (auto&rank : list)
//		{
//			if (i_find == rank.first)
//			{
//				award(rank.second);
//				rank.second = 0;
//				flag = true;
//			}			
//		}
//		if (!flag)//不在
//		{
//			cout << "Are you kidding?" << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}



////1025
///*
//00100 6 4
//00000 4 33218
//33218 3 12309
//12309 2 00100
//00100 1 99999
//99999 5 68237
//68237 6 - 1
//*/
//#include<iostream>
//#include<vector>
//#include<iomanip>
//using namespace std;
//int main(void)
//{
//	int first, N, K;
//	cin >>first>> N >> K;
//	vector<int> address(N);
//	vector<int> data(N);
//	vector<int> next(N);
//
//
//	for (size_t i = 0; i != N; ++i)
//	{
//		cin >> address[i] >> data[i] >> next[i];
//	}
//
//	for (size_t i = 0; i != N; ++i)
//	{
//		//cout <<  address[i]<<" "<< data[i]<<" " << next[i] << endl;
//		printf("%05d %d %05d\n", address[i], data[i], next[i]);
//	}
//
//	cout << next[5] << endl;
//	//for (auto &i : address)
//	//	cout << i << endl;
//	system("pause");
//	return 0;
//}



////1016
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main(void)
//{
//	pair<string, int> A, B;
//	cin >> A.first >> A.second >> B.first >> B.second;
//	int PA=0, PB=0;
//	for(auto &c:A.first)
//	{
//		if (c-'0' == A.second)
//			PA = PA * 10 + A.second;
//	}
//	for (auto &c : B.first)
//	{
//		if (c-'0' == B.second)
//			PB = PB * 10 + B.second;
//	}
//	cout << PA + PB << endl;
//	//system("pause");
//	return 0;
//}

////1022进制转换
//#include<iostream>
//#include<vector>
//using namespace std;
//int main(void)
//{
//	int a, b, digit;
//	cin >> a >> b >> digit;
//	a += b;
//	vector<int> ivec;
//
//	do
//	{		
//		ivec.push_back(a % digit);
//		a /= digit;
//	} while (a != 0);
//
//	for (auto beg = ivec.begin(), end = ivec.end(); end != beg; )
//	{
//		cout << *(--end);
//	}
//	//system("pause");
//	return 0;
//}


////1011
//#include<iostream>
//using namespace std;
//int main(void)
//{
//	int T;
//	long long A, B, C;
//	cin >> T;
//	for (size_t i = 0; i != T; )
//	{
//		cin >> A >> B >> C;
//		cout << "Case #" << ++i << ": ";
//		cout << (A + B > C ? "true" : "false") << endl;
//	/*	if (A + B > C)
//			cout << "true" << endl;
//		else
//			cout << "false" << endl;*/			
//	}
//	
//	return 0;
//}


////1034
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//long long a1, b1, a2, b2, a3, b3, k1(0), k2(0), k3(0);
//char DivisionSign;
//vector<string> OperatorWithSpace{ " + "," - "," * "," / " ," = " };
//
//long long gcd(long long a, long long b)
//{
//	while (a != b)
//	{
//		if (a > b)
//			a -= b;
//		else
//			b -= a;
//	}
//	return a;
//}
//
//void simplification(long long &a, long long &b)
//{
//	if (a != 0 && b != 0)
//	{
//		long long tmp_a(abs(a)), tmp_b(abs(b));
//
//		if (a < 0)
//			a = -tmp_a / gcd(tmp_a, tmp_b);
//		else
//			a = tmp_a / gcd(tmp_a, tmp_b);
//
//		b = tmp_b / gcd(tmp_a, tmp_b);
//	}
//}
//
//
//void PrintSingle(long long &a, long long &b, long long &k)
//{
//	bool flag(false);
//	simplification(a, b);
//	long long tmp_a(abs(a)), tmp_b(abs(b));
//	if (tmp_a == 0)cout << "0";
//	else
//	{
//		while (tmp_b != 1 && tmp_a >= tmp_b)
//		{
//			tmp_a -= tmp_b;
//			if (a > 0)
//				++k;
//			if (a < 0)
//				--k;
//		}
//		if (!k)
//		{
//			if (a < 0) { cout << "("; flag = true; }
//			if (a) cout << a;
//		}
//		else
//		{
//			if (k < 0) { cout << "("; flag = true; }
//			cout << k << " " << tmp_a;
//		}
//		if (b != 1)cout << "/" << b;
//		if (flag) { cout << ")"; flag = false; }
//	}
//	k = 0;
//}
//
//void PrintResult(unsigned sign)
//{
//	PrintSingle(a1, b1, k1);
//	cout << OperatorWithSpace[sign];
//	PrintSingle(a2, b2, k2);
//	cout << OperatorWithSpace[4];
//	if (sign == 0)/* + */
//	{
//		if (a1 != 0 && a2 != 0)
//		{
//			a3 = a1*b2 + a2*b1;
//			b3 = b1*b2;
//		}
//		else
//		{
//			if (a1 == 0) { a3 = a2; b3 = b2; }
//			if (a2 == 0) { a3 = a1; b3 = b1; }
//		}
//	}
//	if (sign == 1)/* - */
//	{
//		if (a1 != 0 && a2 != 0)
//		{
//			a3 = a1*b2 - a2*b1;
//			b3 = b1*b2;
//		}
//		else
//		{
//			if (a1 == 0) { a3 = -a2; b3 = b2; }
//			if (a2 == 0) { a3 = a1; b3 = b1; }
//		}
//	}
//	if (sign == 2)/* * */
//	{
//		if (a1 != 0 && a2 != 0)
//		{
//			a3 = a1*a2;
//			b3 = b1*b2;
//		}
//		else
//		{
//			a3 = 0;
//			b3 = 0;
//		}
//	}
//	if (sign == 3)/* / */
//	{
//		if (a1 == 0) { a3 == 0; b3 == 0; }
//		if (a2 == 0) { cout << "Inf" << endl; return; }
//		if (a2 < 0)
//		{
//			a2 = -a2; b2 = -b2;
//			swap(a2, b2);
//			a3 = a1*a2;
//			b3 = b1*b2;
//		}
//	}
//
//	k3 = 0;
//	PrintSingle(a3, b3, k3);
//	cout << endl;
//}
//
//int main(void)
//{
//	cin >> a1 >> DivisionSign >> b1 >> a2 >> DivisionSign >> b2;
//	PrintResult(0);
//	PrintResult(1);
//	PrintResult(2);
//	PrintResult(3);
//	system("pause");
//	return 0;
//}




#include<iostream>
int main(void)
{
	std::cout << "h";
	system("pause");
	return 0;
}