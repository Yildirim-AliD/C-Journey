# Week 4 Examples

This folder contains the C examples from Week 4 slides.

## Example 1;

```c
#include <stdio.h>

void printCharacters(const char *);
int main()
{
    char string[] = "Computer Science";
    printf("String:\n");
    
    printCharacters(string);
    printf("\n");
    
    return 0;
}

void printCharacters(const char *sPtr)
{
    for(;*sPtr !='\0';sPtr++)
        printf("%c ",*sPtr);
}
```


## Example 2; 

```c
#include <stdio.h>

void f(const int *);
int main()
{
    int y;
    f(&y);
    
    return 0;
}

void f(const int *xPtr)
{
    //A const object cannot be modified.
    *xPtr = 100;
}
```


## Example 3; 

```c
#include <stdio.h>

int main()
{
    int x, y;
    
    int *const ptr = &x;  // ptr is a const pointer to int (pointer itself is constant)
    *ptr = 7;             // This is allowed: modifying the value pointed to by ptr
    
    ptr = &y;             // ERROR: cannot assign to 'ptr' because it is a constant pointer
    
    return 0;
}
```
## Example 4;

```c
#include <stdio.h>
int main()
{
    int x = 5, y;
    const int *const ptr = &x;  // ptr: const pointer to const int
    
    printf("%d\n", *ptr);   
    *ptr = 7;   // HATA: ptr işaret ettiği değeri değiştiremez, çünkü 'const int *const'
    ptr = &y;   // HATA: ptr sabit pointer, başka bir adrese atanamaz
    
    return 0;
}
```
## Example 5;

```c
#include <stdio.h>

int *send(int a[],int n)
{
    int min,*p;
    min = a[0];
    p = &a[0];
    
    for(int i = 1; i<n;i++)
        if(a[i]< min)
        {
            min = a[i];
            p = &a[i];
        }
        
    return p;
}

int main()
{
    int array[] = {10,20,2,30,25,32,33};
    
    int *q;
    q = send(array,7);
    
    printf("Min value: %d",*q);
    return 0;
}
```
## Example 6;
```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *x,N,sum = 0;
    float average;
    printf("How many values will you enter? ");
    scanf("%d",&N);
    
    x = (int*)malloc(N*sizeof(int));
    printf("Enter the values;\n");
    for(int i = 0;i<N;i++)
    {
        printf("%d.eleman = ",i+1);
        scanf("%d",&x[i]);
        sum +=x[i];
    }
    
    free(x);
    average = (float) sum/N;
    printf("The average of %d numbers is %f",N,average);
    
    return 0;
}
```
## Example 7;
```c





```

