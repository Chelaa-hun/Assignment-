//C arrays-2D 
#include <stdio.h>
int main ()
{ 
     int n,p;
     int marks [2][3] = {   {10,20,30},  {40,50,60} };
for(n=0;n<2;n++){ 
for(p=0;p<3;p++)
      printf("marks [%d][%d] = %d\n", n,p, marks[n][p]);
}

   return 0;

}