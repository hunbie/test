#include<iostream>
#include<string>
#include<Windows.h>

using namespace std;

int main(void){
	int nian;
	int yue;
	int tian[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};
	

	cout<<"请输入年份:"<<endl;
	cin>>nian;
	cout<<"请输入月份;"<<endl;
	cin>>yue;

	if(nian%400==0){
		tian[2]=29;
		cout<<yue<<"月有"<<tian[yue]<<"天"<<endl;
	}else if(nian%4==0 && nian%100!=0){
		tian[2]=29;
		cout<<yue<<"月有"<<tian[yue]<<"天"<<endl;
	}else{
		tian[2]=28;
		cout<<yue<<"月有"<<tian[yue]<<"天"<<endl;
	}
	
	system("pause");
	return 0;
}