#include<stdio.h>
char* Reveres(char *Str);
int main()
{
	char Str[30];
	printf("Enter A String :");
	scanf("%[^'\n']s",Str);
	Reveres(Str);
	printf("\nModified String is : %s",Str);

	return 0;

}
char* Reveres(char *Str)
{
	int iStart=0,iEnd=0;
	char Temp='\0';

	while(Str[iEnd] !='\0')
	{
		iEnd ++;
	}
	iEnd --; 
	while(iStart < iEnd)
	{
		Temp = Str[iStart]; 
		Str[iStart]= Str[iEnd];
		Str[iEnd]= Temp;

		iStart ++;
		iEnd --;
	}
	return Str;
}