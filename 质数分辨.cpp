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
		cout<<"������"<<endl; 
	}else{
		cout<<"������"<<endl;
	}
	char stop='N';
	cout<<"�Ƿ�Ҫֹͣ����N/Y��";
	cin>>stop;
	
	if(stop=='Y'){
		return 1;
	}else{
		system("cls");
	}
}
}
