#include <iostream>
#include<string>
using namespace std;
int GetDate(int month,int day,bool isRun) {
	int months[12]= {31,28,31,30,31,30,31,30,31,31,30,31};
	if(!isRun) {
		int days=0;
		for(int i=0;i<month-1;i++)
		{
			days=days+months[i];
		}
		return days+day;
	}//isrun=false
	else {
		months[1]++;//get new year of date
				int days=0;
		for(int i=0;i<month-1;i++)
		{
			days=days+months[i];
		}
		return days+day;
		//istun=true
	}
}
int main() {
	int day,month,year;
	int all;
	cout<<"请输入年月日，自动获取对应的星期：";
    cin>>year>>month>>day;//get year,month and day
    for(int i=0;i<year-1;i++){
    	if(i%400==0 || i%4==0){
    		//判断为闰年
			all=all+366; 
		}else{
			all=all+365;
			//平年 
		}
    	//先算之前的 
	}
		//计算完毕得到数字all代表从公元0年开始经过了多少天 
	    //算今年的
    //判断今年是否为闰年
	if(year%400==0 || year%4==0)
	{
		all=all+GetDate(month,day,true);
		 }	 else
		 {
		 	all=all+GetDate(month,day,false);
		 }
		 string weeks[7]={"6","日","1","2","3","4","5"};
		 cout<<"那天是"<<weeks[all%7];
}
