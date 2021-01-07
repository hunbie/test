#include<graphics.h>
#include<Windows.h>
#include<MMSystem.h>
#pragma comment(lib,"winmm.lib")//告诉编译器执行这个库文件

int main(){
	initgraph(498,480);

	setbkcolor(RGB(58,152,226));
	cleardevice();
	loadimage(0,_T("爱心.JPG"));

	mciSendString(_T("play 光棍.mp3"),0,0,0);
	settextstyle(30,0,_T("微软雅黑"));
	settextcolor(RGB(255,0,0));

	outtextxy(40,40,_T("我爱你"));

	system("pause");
	closegraph();
	
	return 0;
}

