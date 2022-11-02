
//第一题
/*
#include <stdio.h>

int main(void)

{
	int space,n,other;
	space = n = other = 0;
	printf("please input whatever you want:");
	char ch;
	while ((ch = getchar()) != '#')
	{
		if (ch == ' ')
		{
			space++;
		}
		else if (ch == '\n')
		{
			n++;
		}
		else
		{
			other++;
		}
	}
	printf("the number of space is %d, \\n is %d, and other is %d ", space, n, other);
	printf("\ndone");
	return 0;

}

*/

//第二题


/*
#include <stdio.h>

int main(void)

{
	int i = 0;
	char ch;
	printf("input whatever you want:\n");
	while ((ch = getchar()) != '#')
	{
		if (i++ % 8 == 0)
		{
			putchar('\n');
		}
		if (ch == '\n')
		{
			printf("\\n--%d  ", ch);
		}
		else if (ch == '\t')
		{
			printf("\\t--%d  ", ch);
		}
		else
		{
			printf("%c--%d  ",ch,ch);
		}

	}
	printf("\nDONE!");
	return 0;

}

*/

//第三题
/*
#include <stdio.h>

int main(void)

{

	int num,even,odd;
	int i, j;
	even = odd = i = j = 0;
	printf("please input integers:\n");
	while ((scanf_s("%d", &num)) == 1 && (num != 0))
	{
		if (num % 2 == 0)
		{
			i++;
			even += num ;
		}
		else
		{
			j++;
			odd += num;
		}
	}
	printf("even:%d,odd:%d,even average:%d,odd average:%d", i, j, even / i, odd / j);
	return 0;
}
*/

//第四题

/*

#include <stdio.h>

int main(void)

{
	char ch;
	int i;
	i= 0;
	printf("please enter whatever you want:\n");
	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			putchar('!');
			i++;
		}
		else if (ch == '!')
		{
			printf("!!");
			i++;
		}
		else
		{
			putchar(ch);
		}
	
	}

	printf("the number of replace is %d", i);
	return 0;
}

*/

//第五题

/*
#include <stdio.h>

int main(void)

{
	char ch;
	int i;
	i = 0;
	printf("please enter whatever you want:\n");
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case '.':
			putchar('!');
			i++;
			break;
		case'!':
			printf("!!");
			i++;
			break;
		default:
			putchar(ch);

		}
	}
	printf("the number of replace is %d", i);
	return 0;

}
*/


//第六题
/*
#include <stdio.h>

int main(void)

{
	int a = 0;
	int i = 0;
	char ch[100];
	printf("please enter whatever you want :\n");
	while ((ch = getchar()) != '#')
	{
		
	}
	printf("the number of 'ei' is %d.", i);
	return 0;
}

*/


// 第九题


/*
#include <stdio.h>

int main(void)

{
	int num;
	int i, j;
	i = 1;
	int flag;

	printf("please enter a positive integer(0 to quit): \n");
	while ((scanf_s("%d", &num)) == 1 && (num > 0))
	{
		for (i; i <= num; i++)
		{
			flag = 0;
			for (j = 2; j < i; j++)
			{
				if (i % j != 0)
				{
					flag++;

				}
				else
				{
					flag = 0;
				}
			}
			if (flag == i - 2)

			{
				printf("\n%d" ,i);
			}

		}
			
	}


	return 0;
}
*/


//第十题

/*
#include <stdio.h>
#define RATE_A 0.15
#define RATE_B 0.28

int main(void)


{
	int wage;
	int tax;
	int s;
	printf("please enter your wage(0 to quit):\n");
	while ((scanf_s("%d", &wage) == 1)&&(wage>0))
	{
		printf("Please enter your marital status and house property ownership(1 for Unmarried,2 for married, 3 for divorced and 4 for own a house ):\n");
		scanf_s("%d",&s);
		if (s == 1)
		{
			if (wage > 17850)
			{
				tax = 17850 * RATE_A + (wage - 17850) * RATE_B;
			}
			else
			{
				tax = wage * RATE_A;
			}
		}
		else if (s == 2)
		{
			if (wage > 29750)
			{
				tax = 29750 * RATE_A + (wage - 29750) * RATE_B;
			}
			else
			{
				tax = wage * RATE_A;
			}
		}
		else if (s == 3 )
		{
			if (wage > 14875)
			{
				tax = 14875 * RATE_A + (wage - 14875) * RATE_B;
			}
			else
			{
				tax = wage * RATE_A;
			}
		}
		else if (s == 4)
		{
			if (wage > 23900)
			{
				tax = 23900 * RATE_A + (wage - 23900) * RATE_B;
			}
			else
			{
				tax = wage * RATE_A;
			}
		}
		else
		{
			printf("\nplease enter number from 1~4 and enter your wage again:\n");
			continue;
		}

		printf("your tax is %d\n", tax);
		printf("please enter your wage:(0 to quit)\n");
		

	}
	


	return 0;
}

*/

//第十一题

#include <stdio.h>
#define Artichoke 2.05
#define Beet 1.15
#define Carrot 1.09


int main(void)

{
	char ch;
	double ar, be, ca;
	ar = be = ca = 0;
	double i, j, k;
	double all_w,all_m;
	all_w = all_m = 0;
	double discount_m;
	double fpfee;


	while (1)
	{
		printf("*********************************************************\n");
		printf("please enter the character to choose vegetable you want\n");
		printf("(a)--artickoke\n");
		printf("(b)--beet\n");
		printf("(c)--carrot\n");
		printf("(q)-- to quit\n");
		printf("*********************************************************\n");
		scanf_s("%c", &ch);

		switch (ch)
		{
		case 'a':
			printf("please enter the weight of artickoke:");
			scanf_s("%lf", &i);
			ar += i;
			break;
		case 'b':
			printf("please enter the weight of beet:");
			scanf_s("%lf", &j);
			be += j;
			break;
		case 'c':
			printf("please enter the weight of carrot:");
			scanf_s("%lf", &k);
			ca += k;
			break;
		}
		if (ch == 'q')
		{
			break;
		}
		while (getchar() != '\n')
			continue;

	}
	all_w = ar + be + ca;
	all_m = ar * Artichoke + be * Beet + ca * Carrot;
	if (all_m > 100)
	{
		discount_m = all_m * 0.95;

	}
	else
	{
		discount_m = 0;
	}
	if (all_w < 5)
	{
		fpfee = 6.5;
	}
	else if (all_w < 20)
	{
		fpfee = 14;
	}
	else
	{
		fpfee = 14 + (all_w - 20) * 0.5;
	}


	printf("\n\nFollowing is the summary information of this order\n");
	printf("**********************************************************\n");

	printf("$2.05--artickoke, weight:%g\n", ar);
	printf("$1.15--beet,weight:%g\n", be);
	printf("$1.09--carrot,weight:%g\n", ca);
	printf("total weight:%g\n", all_w);
	printf("Freight and packing charges :%g\n", fpfee);
	if (discount_m != 0)
	{
		printf("discounted money on vegetables:%g \n", discount_m);
		printf("total charges:%g", fpfee + discount_m);
	}
	else
	{
		printf("money on vegetables:%g\n", all_m);
		printf("total charges:%g\n", fpfee + all_m);
	}
	printf("\n**********************************************************\n");
	return 0;
}
