#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct dd
       {
       char grupa[10];
       int kilkist_disciplin;
       int kilkist_studentiv;
       int zagalna_kilkist_pidruchnikiv;
       }mass[10];
       //[4]={"OKS-412",9,29,20,"OKS-412",9,29,20,"OKS-412",9};
       
int main (void)
      {
       
       for (int i=0; i<=4; i++)
       {        
       printf("vvedit grupu:" );
       scanf ("%s",mass[0].grupa);
       printf("vvedit kilkist disciplin:");
       scanf ("%s",mass[1].kilkist_disciplin);
       printf("vvedit kilkist studentiv:");
       scanf ("%s",mass[2].kilkist_studentiv);
       printf("vvedit zagalna kilkist pidruchnikiv:");
       scanf ("%s",mass[3].zagalna_kilkist_pidruchnikiv);
       }
       for (int i=0;i<4;i++)
       {
          if (mass[i].zagalna_kilkist_pidruchnikiv>=20)         
          printf("%s   %s   %d.\n",mass[0].grupa,mass[1].kilkist_disciplin,mass[2].kilkist_studentiv,mass[3].zagalna_kilkist_pidruchnikiv);
          }
          getch();
          return 0;
          }
           
       
