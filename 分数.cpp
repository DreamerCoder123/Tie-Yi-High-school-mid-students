#include<iostream>
using namespace std;
int main() {
	system("title 学生分数管理系统v1.0");
	
	int input;
	while(1){
	cout<<"请输入学生成绩\n";
	cin>>input;
	input=input/10; 
switch (input) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		cout<<"不及格";
		break;
	case 6:
		cout<<"及格";
		break;
	case 7:
		cout<<"良好";
		break;
	case 8:
	case 9:
	case 10:
		cout<<"你真棒";
		break;
	    default:
		cout<<"不要输入奇怪♂的东西";
		    break;
	}
	system("echo .");
	system("pause");
	system("cls");
}
}
