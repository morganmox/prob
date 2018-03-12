#include <iostream>
using namespace std;

int main()
{
	int costx,costy,costz,N,tmp,nx = 0,ny = 0,nz = 0,min = 666;
	cin >> costx >> costy >> costz;
	cin >> N;
	for(int i = 0;i<N;i++){
		cin >> tmp;
		if(tmp==1){
			nx+=1;
		}else if(tmp==2){
			ny+=1;
		}else{
			nz+=1;
		}
	}
	costx*=nx;
	costy*=ny;
	costz*=nz;
	if(costx>costy){
		min = costy;
	}else{
		min = costx;
	}
	if(min>costz){
		min = costz;
	}
	cout << min;
}