#include<stdio.h>
#include<string.h>
struct book
{
	int book_id;
	char book_name[50];
	char book_author[50];
	char book_subject[50];
};
int main()
{
	struct book b[10];
	printf("Enter 10 books details\n");
	for(int i=0;i<10;i++)
	{
		printf("Enter the book %d id :",i+1);
		scanf("%d",&b[i].book_id);
		printf("Enter the book name %d :",i+1);
		scanf("%s",b[i].book_name);
		printf("Enter the book_author %d :",i+1);
		scanf("%s",b[i].book_author);
		printf("Enter the book_subject %d :",i+1);
		scanf("%s",b[i].book_subject);
	}
	printf("Book details\n");
	for(int i=0;i<10;i++)
	{
		printf("book_id = %d\n",b[i].book_id);
		printf("book_name = %s\n",b[i].book_name);
		printf("book_author = %s\n",b[i].book_author);
		printf("book_subject = %s\n",b[i].book_subject);
	}
}

