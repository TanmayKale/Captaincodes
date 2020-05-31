#include<stdio.h>
int main()
{
	int marks;
	printf("Enter the marks obtained:");
	scanf("%d", &marks);
	printf("%s",(marks<40)?("Grade F"): ((marks>40 && marks<54 ?("Grade D"):((marks>55 && marks<69)?("Grade C"):((marks >70 && marks<84)?("Grade B"):("Grade A"))))));
	return 0;
}
