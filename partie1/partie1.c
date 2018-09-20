#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (void)
//part1
{
float a,b,c,x_min,x_max,delta_x;

float tabx [100];
float taby[100];
int i ;
void affiche_tableau (float*);
//void param (float*, float*);
/*void affiche_tableau (float*)
{
     
     for (i=0; i<100 ; i++)
     {
         printf("tabx[%d] \n",i);
     }
}*/
//void param (float *tabx, float *taby) 
//{
do
    {
        printf("saisir la valeur de xmin xmax pas (3 valeurs en tout séparer par un espace) :");
        scanf("%f %f %f",&x_min,&x_max,&delta_x);
    }
    while(((x_max-x_min)/delta_x)>100);
printf("saisir la valeur de a b c :");
scanf("%f %f %f",&a,&b,&c);
tabx[0]= x_min;
     for (i=0; i<=(int)((x_max-x_min)/delta_x) ; i++)
{
taby[i]=a*tabx[i]*tabx[i]+ b*tabx[i]+c;
//affiche_tableau(tabx);
//affiche_tableau(taby);
printf("tabx[%d]= %f \t taby[%d]= %f",i,tabx[i],i,taby[i]);
tabx[i+1]=tabx[i]+delta_x; 
}
float maxy= taby[0];
float miny= taby[0];
for (i=1; i<(int)((x_max-x_min)/delta_x) ; i++)
{
if(taby[i]> maxy) maxy= taby[i];
if(taby[i]< miny) miny= taby[i];
}
printf("ymin =%f \t ymax=%f",miny,maxy);
int k,l;
k= &maxy-&taby[0];
l= &miny-&taby[0];
printf("k=%d\n",k);
printf("l=%d\n",l);
printf("x associé à ymin =%f \t x associé à ymax=%f",tabx[l],tabx[k]);



}
//}
