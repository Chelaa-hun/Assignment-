//C arrays-3D 
#include <stdio.h>
int main (){
int n , p, o;
int marks[2][2][3] =  {  { {10,20,30},{40,50,60}}  , {  {10,20,30}, {40,50,60}   }               };
     for(n=0;n<2;n++){
     for(p=0;p<2;p++){
     for(o=0;o<3;o++){
          printf("marks [%d][%d][%d] = %d\n", n, p, o, marks [n][p][o] );
     }
     }
     }
             return 0;






}


