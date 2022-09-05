//Aung Myint Myat
//tokisaki0909@gmail.com
//Sept 5, 2022
//alien_language_project

#include <stdio.h>
#include <string.h>

//this is a function to reverse the input string
void reverseFun(char* str)
{
	int l;
	char *iniPtr, *finPtr, x;

	l = strlen(str);
	iniPtr = str;
	finPtr = str;

	//final ptr is shifted to the final character
	for (int i = 0; i < l - 1; i++)
		finPtr++;

	//Swap the characters using pointers and change ptr position every time 
	for (int i = 0; i < l / 2; i++) {

		//swap the characters
		x = *finPtr;
		*finPtr = *iniPtr;
		*iniPtr = x;

		//change ptr position , 1st becomes 2nd, n becomes n-1
		iniPtr++;
		finPtr--;
	}
}

//main code
int main()
{
    //tell a bit about this dic
    char name[20]="Tokisaki09";
    printf("Hello, this is Eng-Alien dictionary \n");
    printf("Enter your name and get started! \n");
    scanf("%s",&name);
	
    //get input
    printf("Welcome, %s \n",&name);
	char inputStr[100] = "Senyamiku";
	printf("Enter something: \n");
    scanf("%s",inputStr);

	//reverse input
    reverseFun(inputStr);

	//print input
	printf("Alien language: %s \n",inputStr);

	return 0;
}
