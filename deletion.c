#include <stdio.h>


int main() {
   int vec[]= {1,2,3,4,5,6,7,8,9,10};
  
   int sz = 10;

    int element;
    printf("Enter The element index: ");

    scanf("%d" ,&element);

    for (int i = element; i < sz; i++)
    {
       
        vec[i-1] = vec[i];   
        
    }

    sz--;
    for (int i = 0; i < sz; i++)
    {
        printf("%d ",vec[i]);
    }
    
    
    
    
    return 0;
}