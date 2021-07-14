#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
void wind(float *a,float *b,float *c) {
	if(*a>*b&&*b>*c) {
		cout<<*a<<" "<<*b<<" "<<*c;
	}
	if(*a<*b&&*b>*c) {
		if(*a>*c) {
			cout<<*b<<" "<<*a<<" "<<*c;
			//6 7 5
		}
		cout<<*b<<" "<<*c<<" "<<*a ;
		//3 4 5
	}
	if(*a<*b&&*b<*c) {
		cout<<*c<<" "<<*b<<" "<<*a;
		//4 5 6

	}
	if(*a>*b&&*b<*c) {
		if(*a>*c) {
			cout<<*a<<" "<<*c<<" "<<*b;
		}

		cout<<*c<<" "<<*a<<" "<<*b;
		//3 1 4
	}
	cout<<endl;
}
int main() {
	while(1) {
		printf("Please inout 3 words:\n");
		float a,b,c;
		cin>>a>>b>>c;
		wind(&a,&b,&c);
		system("pause");
		cout<<"\n停止请直接退出";
		for(int i=6; i>0; i--) {
			system("timeout /break /t 5");
			for(int z=0; z<200; z++) {
				cout<<"\n";
			}
			cout<<"还剩"<<i<<"秒\n";
		}
		system("cls");
	}
}
