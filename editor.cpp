#include <iostream>
#include <list>
using namespace std;

void print_list(list<string> x)
{
	list<string>::iterator p = x.begin();
	for(p = x.begin();p!=x.end();++p)
	{
		cout<<*p<<" ";
	}
	cout << endl;
}

int main()
{
	list<string> a;
	list<string>::iterator p = a.begin();
	string st;
	char cmd;
	int N;
	cin >> N;
	for(int i = 0 ;i<N;i++)
	{
		cin >> cmd;
		if(cmd=='i')
		{
			cin >> st;
			a.insert(p,st);
			//print_list(a);
		}
		else if(cmd=='l'&&p!=a.begin())
		{
			p--;
			//print_list(a);
		}
		else if(cmd == 'r'&&p!=a.end())
		{
			p++;
			//print_list(a);
		}
		else if(cmd == 'b'&&p!=a.begin())
		{
			p--;
			a.erase(p);
			p--;
			p++;
			//print_list(a);
		}
		else if(cmd == 'd'&&p!=a.end())
		{
			a.erase(p);
			p--;
			p++;
			//print_list(a);
		}
	}
	
	print_list(a);
}