// 程序清单15.4.cpp : 定义控制台应用程序的入口点。
//位字段 和 位运算

#include "stdafx.h"
#include <Windows.h>

//是否透明和是否可见
#define		YES		1
#define		NO		0

//边框线的样式
#define		SOLID	0
#define		DOTTED	1
#define		DASHED	2

//三原色
#define		BLUE	4
#define		GREEN	2
#define		RED		1

//混合颜色
#define		BLACK	0
#define		YELLOW	(RED | GREEN)
#define		MAGENTA (RED | BLUE)
#define		CYAN	(GREEN | BLUE)
#define		WHITE	(RED | GREEN | BLUE)


//位运算中使用的常量
#define		OPAQUE			0x1    //0000 0000 0001

#define		FILL_BLUE		0x8    //0000 0000 1000
#define		FILL_GREEN		0x4    //0000 0000 0100
#define		FILL_RED		0x2    //0000 0000 0010
#define		FILL_MASK		0xE    //0000 0000 1110

#define		BORDER			0x100  //0001 0000 0000
#define		BORDER_BLUE		0x800  //1000 0000 0000
#define		BORDER_GREEN	0x400  //0100 0000 0000
#define		BORDER_RED		0x200  //0010 0000 0000
#define		BORDER_MASK		0xE00  //1110 0000 0000

#define		B_SOLID			0x0	   //0000 0000 0000 0000
#define		B_DOTTED		0x1000 //0001 0000 0000 0000
#define		B_DASHED		0x2000 //0010 0000 0000 0000
#define		STYLE_MASK		0x3000 //0011 0000 0000 0000

const char * colors[8] = {"black", "red", "green", "yellow", "blue", "magenta", "cyan", "white"};

typedef struct box_props
{
	unsigned int opaque			: 1;
	unsigned int fill_color		: 3;
	unsigned int				: 4;
	unsigned int show_border	: 1;
	unsigned int border_color	: 3;
	unsigned int border_style   : 2;
	unsigned int				: 2;
}box_props;

typedef union Views
{
	box_props		st_view;
	unsigned int	ui_view;
}Views;

void show_settings(const box_props * pb);
void show_settings1(unsigned short);
char * itobs(int, char *);

int _tmain(int argc, _TCHAR* argv[])
{
	Views box = {{YES, YELLOW, YES, GREEN, DASHED}};
	char bin_str[8 * sizeof(int) + 1];

	printf("Original box settings:\n");
	show_settings(&box.st_view);

	printf("\nBox setting using unsigned int view:\n");
	show_settings1(box.ui_view);

	printf("bits are %s\n", itobs(box.ui_view, bin_str));



	box.ui_view &= ~FILL_MASK;                      //0000 0000 0000 1110   -> 1111 1111 1111 0001   
	box.ui_view |= (FILL_BLUE | FILL_GREEN);        //   0000 0000 1000 | 0000 0000 0100 = 0000 0000 1100
	box.ui_view ^= OPAQUE;                          //0000 0000 0001
	box.ui_view |= BORDER_RED;                     //0010 0000 0000
	box.ui_view &= ~STYLE_MASK;                    //0011 0000 0000 0000   -> 1100 1111 1111 1111
	box.ui_view |= B_DOTTED;                       //0001 0000 0000 0000

	printf("\n\nModified box settings:\n");
	show_settings(&box.st_view);
	printf("\nBox settings using unsigned int view:\n");
	show_settings1(box.ui_view);
	printf("bits are %s\n", itobs(box.ui_view, bin_str));

	system("pause");
	return 0;
}

void show_settings(const box_props * pb)
{
	printf("Box is %s.\n", pb->opaque == YES ? "opaque" : "transparent");
	printf("The fill color is %s.\n", colors[pb->fill_color]);
	printf("Border %s.\n", pb->show_border == YES ? "shown" : "not shown");
	printf("The border color is %s.\n", colors[pb->border_color]);
	printf("The border style is ");
	switch (pb->border_style)
	{
	case SOLID:
		printf("solid.\n");
		break;
	case DOTTED:
		printf("dotted.\n");
		break;
	case DASHED:		
		printf("dashed.\n");
		break;
	default:
		printf("unknow type.\n");
		break;
	}
}

void show_settings1(unsigned short us)
{
	printf("Box is %s.\n", us & OPAQUE == YES ? "opaque" : "transparent");
	printf("The fill color is %s.\n", colors[(us >> 1) & 0x7]);
	printf("Border %s.\n", us & BORDER == YES ? "shown" : "not shown");
	printf("The border color is %s.\n", colors[(us >> 9) & 0x7]);
	printf("The border style is ");
	switch (us & STYLE_MASK)
	{
	case B_SOLID:
		printf("solid.\n");
		break;
	case B_DOTTED:
		printf("dotted.\n");
		break;
	case B_DASHED:		
		printf("dashed.\n");
		break;
	default:
		printf("unknow type.\n");
		break;
	}
}

char * itobs(int n, char * ps)
{
	static int size = 8 * sizeof(int);

	for (int i = size - 1; i >= 0; i--)
	{
		ps[i] = (0x0001 & n) + '0';
		n >>= 1;
	}
	ps[size] = '\0';

	return ps;
}