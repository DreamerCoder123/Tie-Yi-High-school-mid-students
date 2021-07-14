#include<iostream>

using namespace std;
int Iszhishu(int num) {
	for(int x=1; x<num+1; x++) {
		if(num%x==0 && x!=num && x!=1) {
			return 0;
		}
	}
	return 1;
}
int main()
{
	while(true){
	int Inputnumber;
	cin>>Inputnumber;
	if(Iszhishu(Inputnumber)==1){
		cout<<"是质数"<<endl; 
	}else{
		cout<<"非质数"<<endl;
	}
	char stop='N';
	cout<<"是否要停止？（N/Y）";
	cin>>stop;
	
	if(stop=='Y'){
		return 1;
	}else{
		system("cls");
	}
}
}
