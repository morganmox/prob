#include <iostream>
#include <string>
using namespace std;

char turn(char x)
{
	if(x == 'N'){
		return 'E';
	}
	else if(x == 'E'){
		return 'S';
	}
	else if (x == 'S'){
		return 'W';
	}
	else{
		return 'N';
	}
	return 'X';
}

int main()
{
	string r1000,r2000 = "",r2001 = "";
	char dir = 'N';
	cin >> r1000;
	int sizestr = r1000.length();
	for(int i = 0;i<sizestr;i++) {
		if(r1000[i]!='Z'){
			while(dir!=r1000[i]){
				dir = turn(dir);
				r2000+='R';
			}
			r2000+='F';
		}else{
			r2000+='Z';
			dir = 'N';
		}
	}
	int sizestr2 = r2000.length(),Rcounter = 0;
	for(int i = 0;i<sizestr2;i++) {
		if(r2000[i]!='R'){
			if(Rcounter!=0)
			{
				for(int i = 0;i<Rcounter;i++)
				{
					r2001+='R';
				}
				Rcounter = 0;
			}
			r2001 += r2000[i];
		}else{
			Rcounter+=1;
			if(Rcounter == 4){
				Rcounter = 0;
			}
		}
	}
	cout << r2001;
}