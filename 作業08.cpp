#include<stdio.h>
#include<conio.h>
int main() 
{ 

 int i,j,P,m=0; 
 printf("��J P �A�D 1 ~ P ������� �G "); 
 scanf("%d",&P); 

 for ( i = 2 ; i <= P ; i++) 
  { 
    m =0; 
    for ( j = 1 ; j <= P ; j++) 
   { 
     if( (i % j) == 0 ) m++; 
     if ( m > 2 ) break; 
   }    
    if ( m <= 2 ) printf("%d \ �O��� \n",i); 

  } 
  getch(); 
  return 0; 
}
