// 程序清单14.15.cpp : Defines the entry point for the console application.
//使用枚举值

#include "stdafx.h"
#include <Windows.h>

enum spectrum {
	red = 0,
	orange,
	yellow,
	green,
	blue,
	violet
};

const char * colors[] = {
	"red",
	"orange",
	"yellow",
	"green",
	"blue",
	"violet"
};

spectrum& operator++(spectrum& e);

spectrum& operator++(spectrum& e)
{
	int i = e;
	e = (enum spectrum)(i + 1);
	return e;
}

#define LEN 30

int main()
{
	char choice[LEN];
	enum spectrum color = red;
	bool color_is_found = false;

	puts("Enter a color (empty line to quit): ");
	while (gets_s(choice) != NULL && choice[0] != '\0')
	{



		/*for (color = red; color <= violet; color++)
		{

			if (strcmp(choice, colors[color]) == 0)
			{
				color_is_found = true;
				break;
			}

		}*/

		for (int i = 0; i < 6; i++)
		{

			if (strcmp(choice, colors[i]) == 0)
			{
				color_is_found = true;
				switch (i)
				{
				case red:
					color = red;
					break;
				case orange:
					color = orange;
					break;
				case yellow:
					color = yellow;
					break;
				case green:
					color = green;
					break;
				case blue:
					color = blue;
					break;
				case violet:
					color = violet;
					break;
				default:
					break;
				}
				break;
			}
		}
 

		if (color_is_found)
		{
			switch (color)
			{
			case red:
				puts("Rose are red.");
				break;
			case orange:
				puts("Poppies are orange.");
				break;
			case yellow:
				puts("Sunflowers are yellow.");
				break;
			case green:
				puts("Grass is green.");
				break;
			case blue:
				puts("Bluebells are blue.");
				break;
			case violet:
				puts("Violets are violet.");
				break;
			default:
				break;
			}
		}
		else
		{
			printf("I don't know about the color %s.\n", choice);
		}


		color_is_found = false;
		puts("Next color, Please (empty line to quit):");
	}

	puts("Bye!");

	system("pause");
    return 0;
}