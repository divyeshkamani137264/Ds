#include <stdio.h>
#include <conio.h>

int main()
{
  int a[10],i, search,found = 0;

  printf("Enter 10 elements are:\n");
  for(i=0; i< 10; i++)
  {
	scanf("%d", &a[i]);
  }
  printf("\nArray elements are:\n");
  for(i=0; i< 10; i++)
  {
	printf("%d", a[i]);
  }
  printf("\n\nenter element to search: ");
  scanf("%d",&search);

  for(i=0; i<10; i++)
  {
    if(a[i] ==  search)
    {
	found =1;
	printf("element found at position %d\n",i + 1);
		break;
		}
	}
	if(found == 0)
	{
		printf("element not found.\n");
	}
	 return 0;
	}
