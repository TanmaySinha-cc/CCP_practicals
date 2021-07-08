#include <stdio.h>
int main()
{
    struct book
    {
        char author[20];
        char title[20];
        float price;
        int no_pages;
        char publication[20];
    }
    
    book1,book2,book3;
    printf("Enter the book-1 details: Author,title,price,number of pages,date ofpublication\n");
    scanf("%s %s %f %d%s",book1.author,book1.title,&book1.price,&book1.no_pages,book1.publication);

    printf("Enter the book-2 details: Author,title,price,number of pages,date of publication\n");
    scanf("%s %s %f %d%s",book2.author,book2.title,&book2.price,&book2.no_pages,book2.publication);
    
    printf("Enter the book-3 details: Author,title,price,number of pages,date ofpublication\n");
    scanf("%s %s %f %d%s",book3.author,book3.title,&book3.price,&book3.no_pages,book3.publication);

    if(book1.price>=book2.price && book1.price>=book3.price)
    {
        printf("Book-1 has the highest price:Its details are:Author=%s, \nTitle=%s,\nPrice=%f,\nNumber of pages=%d,\nDate of publication=%s\n",book1.author,book1.title,book1.price,book1.no_pages,book1.publication);
    }
    else if (book2.price>=book1.price && book2.price>=book3.price)
    {
        printf("Book-2 has the highest price:Its details are:Author=%s,\nTitle=%s,\nprice=%f,\nNumber of pages=%d,\nDate of publication=%s\n",book2.author,book2.title,book2.price,book2.no_pages,book2.publication);
    }
    else
    {
        printf("Book-3 has the highest price:Its details are:Author=%s,\nTitle=%s,\nprice=%f,\nNumber of pages=%d,\nDate of publication=%s\n",book3.author,book3.title,book3.price,book3.no_pages,book3.publication);
    }

    return 0;
}