#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main() {
	int answer=0;
	int min[6];
	int BrIn1,GrIn1,ClIn1,BrIn2,GrIn2,ClIn2,BrIn3,GrIn3,ClIn3;
	while(cin>>BrIn1>>GrIn1>>ClIn1>>BrIn2>>GrIn2>>ClIn2>>BrIn3>>GrIn3>>ClIn3){
		min[1]=BrIn2+BrIn3+GrIn1+GrIn3+ClIn1+ClIn2;
		min[0]=BrIn2+BrIn3+GrIn1+GrIn2+ClIn1+ClIn3;
		min[2]=BrIn1+BrIn3+GrIn1+GrIn2+ClIn2+ClIn3;
		min[3]=BrIn1+BrIn2+GrIn1+GrIn3+ClIn2+ClIn3;
		min[5]=BrIn1+BrIn2+GrIn2+GrIn3+ClIn1+ClIn3;
		min[4]=BrIn1+BrIn3+GrIn2+GrIn3+ClIn1+ClIn2;
		answer=min[0];
		for (int i=1;i<6;i++){
			if(min[i]<answer)
				answer=min[i];
		}
		if(answer==min[0])
			cout<<"BCG "<<answer<<endl;
		else if(answer==min[1])
			cout<<"BGC "<<answer<<endl;
		else if(answer==min[2])
			cout<<"CBG "<<answer<<endl;
		else if(answer==min[3])
			cout<<"CGB "<<answer<<endl;
		else if(answer==min[4])
			cout<<"GBC "<<answer<<endl;
		else
			cout<<"GCB "<<answer<<endl;
	}
	return 0;
}
