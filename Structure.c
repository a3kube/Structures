#include<stdio.h>

struct mall
{
	char product[50];
	long id;
	float cost;
	int discount;
};
void display(struct mall);
mall read();
int main()
{
	struct mall a;
	a=read();
	display(a);
}
mall read()
{
	struct mall b;
	printf("Enter the product: \n");
	scanf("%s",b.product);
	
	printf("Enter the ID of the entered product: \n");
	scanf("%ld",&b.id);
	
	printf("Enter the cost of the entered product: \n");
	scanf("%f",&b.cost);
	
	printf("Enter the discount on the entered product: \n");
	scanf("%d",&b.discount);
	return b;
}
void display(struct mall z)
{
	printf("\n***Product Detail***\n");
	
	printf("The product: \n%s",z.product);
	printf("\nThe ID of the entered product: \n%ld",z.id);
	printf("\nThe cost of the entered product: \n%f",z.cost);
	printf("\nThe discount on the entered product: \n%d %",z.discount);
	printf("%c",'%');
}
