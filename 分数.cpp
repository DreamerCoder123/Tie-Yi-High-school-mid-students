#include<iostream>
using namespace std;
int main() {
	system("title ѧ����������ϵͳv1.0");
	
	int input;
	while(1){
	cout<<"������ѧ���ɼ�\n";
	cin>>input;
	input=input/10; 
switch (input) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		cout<<"������";
		break;
	case 6:
		cout<<"����";
		break;
	case 7:
		cout<<"����";
		break;
	case 8:
	case 9:
	case 10:
		cout<<"�����";
		break;
	    default:
		cout<<"��Ҫ������֡�Ķ���";
		    break;
	}
	system("echo .");
	system("pause");
	system("cls");
}
}
