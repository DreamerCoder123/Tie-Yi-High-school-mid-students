#include <iostream>
#include <string>
using namespace std;
int main() {
	string x[12]={"sheep","monkey","chicken","pig","mouse","ox","tiger","rabbit","dragon","snake","horse","sheep"};
	while(1){
	int Input;
	cin>>Input;
	cout<<"ÄúµÄÉúÐ¤Îª£º"<<x[Input%12]<<endl;
	system("pause");
	system("cls");
	
}
}
