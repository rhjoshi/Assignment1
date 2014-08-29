/* This C program demonstrates the switch statement without using breaks. */
/* The program is tested on MS Visual C++ platform */
#include <stdio.h>
#include<stdlib.h>
using namespace std;
#pragma warning(disable : 4996) 
void main() {
	char ch = '+';
	int f, a = 10, b = 20;
	printf("ch = %c\n", ch);
	switch (ch) {
	case '+': f = a + b; printf("f = %d\n", f);
	case '−': f = a - b; printf("f = %d\n", f);
	case '*': f = a * b; printf("f = %d\n", f);
	case '/': f = a / b; printf("f = %d\n", f);
	default: printf("invalid operator\n");
		break;
	}
	ch = '−';
	printf("ch = %c\n", ch);
	switch (ch) {
	case '+': f = a + b; printf("f = %d\n", f);
	case '−': f = a - b; printf("f = %d\n", f);
	case '*': f = a * b; printf("f = %d\n", f);
	case '/': f = a / b; printf("f = %d\n", f);
	default: printf("invalid operator\n");
		break;
	}
	ch = '*';
	printf("ch = %c\n", ch);
	switch (ch) {
	case '+': f = a + b; printf("f = %d\n", f);
	case '−': f = a - b; printf("f = %d\n", f);
	case '*': f = a * b; printf("f = %d\n", f);
	case '/': f = a / b; printf("f = %d\n", f);
	default: printf("invalid operator\n");
		break;
	}
	ch = '/';
	printf("ch = %c\n", ch); 
	switch (ch) {
		case '+': f = a + b; printf("f = %d\n", f);
		case '−': f = a - b; printf("f = %d\n", f);
		case '*': f = a * b; printf("f = %d\n", f);
		case '/': f = a / b; printf("f = %d\n", f);
		default: printf("invalid operator\n");
			break;
	}
	system("pause");
}