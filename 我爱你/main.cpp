#include<graphics.h>
#include<Windows.h>
#include<MMSystem.h>
#pragma comment(lib,"winmm.lib")//���߱�����ִ��������ļ�

int main(){
	initgraph(498,480);

	setbkcolor(RGB(58,152,226));
	cleardevice();
	loadimage(0,_T("����.JPG"));

	mciSendString(_T("play ���.mp3"),0,0,0);
	settextstyle(30,0,_T("΢���ź�"));
	settextcolor(RGB(255,0,0));

	outtextxy(40,40,_T("�Ұ���"));

	system("pause");
	closegraph();
	
	return 0;
}

