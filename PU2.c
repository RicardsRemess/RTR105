#include <stdio.h>
#include <wchar.h>
//#include <fcntl.h>
#include <locale.h>
#include <stdlib.h>

#define INT_SIZE sizeof(int) * 8

/*#ifndef _O_U16TEXT
  #define _O_U16TEXT 0x20000
#endif*/



int main()
{
    int num, index, i;
    int bin[INT_SIZE];
	
	//_setmode(_fileno(stdout), _O_U16TEXT);
	setlocale(LC_ALL, "");
	wprintf(L"%ls", L"Ievadi decimālu skaitli: ");

    scanf("%i", &num);

    index = INT_SIZE - 1;

    while(index >= 0)
    {

        bin[index] = num & 1;

        index--;


        num >>= 1;
    }


    wprintf(L"%ls", L"Binārais skaitlis: ");
    for(i=0; i<INT_SIZE; i++)
    {
        wprintf(L"%d", bin[i]);
    }

    return 0;
}