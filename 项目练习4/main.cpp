#include<iostream>
#include<string>
#include<Windows.h>

using namespace std;

int main(void){
	int nian;
	int yue;
	int tian[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};
	

	cout<<"���������:"<<endl;
	cin>>nian;
	cout<<"�������·�;"<<endl;
	cin>>yue;

	if(nian%400==0){
		tian[2]=29;
		cout<<yue<<"����"<<tian[yue]<<"��"<<endl;
	}else if(nian%4==0 && nian%100!=0){
		tian[2]=29;
		cout<<yue<<"����"<<tian[yue]<<"��"<<endl;
	}else{
		tian[2]=28;
		cout<<yue<<"����"<<tian[yue]<<"��"<<endl;
	}
	
	system("pause");
	return 0;
}