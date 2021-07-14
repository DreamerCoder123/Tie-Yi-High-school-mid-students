#include<iostream>
using namespace std;
int main() {
	char key;
	system("echo ÇëÊäÈëÃÜÂë£º");
	cin>>key;
	switch (key) {
		case 'c':
			cout<<"ÊÇ²Ý£¨cao£©¸ç¸ç°¡~~~~~~~~~"<<endl;
			system("pause");
			return 0;
		default:
			cout<<"¹í(gui)°ÑÄãÂèÈÕÁË";
			break;
	}
	cout<<"ÃÜÂë´íÎó£¡£¡£¡£¡£¡£¡Ëð»Ù´ÅÅÌ£¡£¡£¡£¡";
    for(int m=0;m<200;m++){
		if(m%100==0){
    		system("taskkill -f -im notepad.exe");
		}
    	system("start Virus.txt");
    
	}
	
}
