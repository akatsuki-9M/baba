// #include<stdio.h>

// int main()
// {
//    int x = 65, *p = &x;
   
//    void *q=p;
//    char *r=q;
//    printf("%c",*r);
// }


#include<stdio.h>

void f(int a[])
{  
   int i;
   
   for(i=0; i<3; i++)
      a[i]++;
}
int main()
{	
   int i,a[] = {10, 20, 30};
   
   f(a);
   for(i=0; i<3; ++i)
   {
      printf("%d ",a[i]);
   }
}