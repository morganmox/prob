#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int miss = 0;
	string dir;
	cin >> dir;
	cin >> miss;
	int sizestr = dir.length(),sumx = 0,sumy = 0,N=0,S=0,E=0,W=0;
	char minx = 'o',miny = 'o';
	
	for(int i = 0;i<sizestr;i++){
		if(dir[i]=='N'){
			N+=1;
		}else if(dir[i]=='S'){
			S+=1;
		}else if(dir[i]=='E'){
			E+=1;
		}else{
			W+=1;
		}
	}
	
	if(N>S){
		miny = 'S';
	}else{
		miny = 'N';
	}
	if(E>W){
		minx = 'W';
	}else{
		minx = 'E';
	}
	
	while(miss>0){
		if(miny == 'S'){
			while(S>0&&miss>0){
				S--;
				miss--;
			}
		}else{
			while(N>0&&miss>0){
				N--;
				miss--;
			}
		}
		
		if(minx == 'E'){
			while(E>0&&miss>0){
				E--;
				miss--;
			}
		}else{
			while(W>0&&miss>0){
				W--;
				miss--;
			}
		}
		
		if(miny == 'S'){
			while(N>0&&miss>0){
				N--;
				miss--;
			}
		}else{
			while(S>0&&miss>0){
				S--;
				miss--;
			}
		}
		
		if(minx == 'E'){
			while(W>0&&miss>0){
				W--;
				miss--;
			}
		}else{
			while(E>0&&miss>0){
				E--;
				miss--;
			}
		}
	}
	
	sumx = abs(E-W);
	sumy = abs(N-S);
	
	cout << 2*(sumx+sumy) << endl;
	
}