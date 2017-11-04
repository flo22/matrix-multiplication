/*************************************************************/
/* Programmname: Matrix-Berechnung ***************************/
/* Autor: Florian Müller ** Datum: 10.04.2010 ** Version 1.0 */
/*************************************************************/
#include <stdio.h>
#include <stdlib.h>


int ausgabe (float *p1, float *p2)
{
printf("----- Die Matrix-Berechnung V1.0 -----\n\n");
printf("|   x1|   x2||    p|\n");
printf("--------------------\n");
printf("|  %2.1f|  %2.1f||  %2.1f|\n",*p1,*(p1+1),*p2);
printf("|  %2.1f|  %2.1f||  %2.1f|\n",*(p1+2),*(p1+3),*(p2+1));
printf("\n");
return EXIT_SUCCESS;
}
//--------------------------------------------------------------------------
//--------------------------------------------------------------------------

int eingabe (float *p1, float *p2)
{
    int z=0,n=0;
    printf("Bitte Matrix fuellen\n");
    while (n<4) { 
    scanf("%f",(p1+n)); n++; system("cls"); ausgabe(p1,p2);
    if ((n==2)|| (n==4)) {                      
    scanf("%f",(p2+z)); z++; system("cls"); ausgabe(p1,p2);}
    };
return EXIT_SUCCESS;
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------

int test (float *pointer)
{
    int x;
    static int n;
    printf("%d. Schritt\n",++n);
    for (x=0;x<6;x++) {
        printf("%3.2f  ",*(pointer+x));
        if (x==2) { printf("\n"); } }
        printf("\n\n");
    return EXIT_SUCCESS;
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------

int rechnen (float *p1, float *p2)
{
float x[2][3];
int b=0,c=0,y=0,n=0;
float *p3;
p3 = &x[0][0];
float pp=0;
//-------------- Wertübergabe von 2x2 + 2x1 Matrix zum 2x3 Array
for(b=0;b<2;b++)
{
for(c=0;c<2;c++)
{
x[b][c] = *(p1+n) ;
n++;
}}
n=0;
//---------------
for (y=0;y<2;y++)
{
x[n][c] = *(p2+n) ;
    n++; 
}
n=0;
//--------------- test 1
test(p3);
//--------------- x1 auf 1 setzen, wenn nicht 0 oder 1 schon ist
for(b=0;b<2;b++) {
for(c=0;c<1;c++) { //x1
                 
                 if   ((x[b][c] > 1) || (x[b][c] < -1))  {
                      pp =  x[b][c];
                      for(y=0;y<3;y++) {
                      if(x[b][y] != 0) {
                      x[b][y] = x[b][y] / pp; }}}                      
                      
                 if   ( (x[b][c] < 1) && (x[b][c] > -1) ) {
                      pp = (1/ x[b][c]);
                      for(y=0;y<3;y++) {
                      if(x[b][y] != 0) {
                      x[b][y] = x[b][y] * pp; }}}
                      }
                      }                      
//---------------  test 2                 
test(p3);
//--------------------------- 1. 0 unten links, wenn nicht schon ist
if ( x[1][0] != 0 ) {
     for(y=0;y<4;y++) {
     x[1][y] = x[1][y] - x[0][y]; } }
//--------------------------- test 3
test(p3);               
//--------------- x2 auf 1 setzen, wenn nicht 0 oder 1 schon ist
for(b=0;b<2;b++) {
for(c=1;c<2;c++) { //x2
                 
                 if   ((x[b][c] > 1) || (x[b][c] < -1))  {
                      pp =  x[b][c];
                      for(y=0;y<3;y++) {
                      if(x[b][y] != 0) {
                      x[b][y] = x[b][y] / pp; }}}                      
                      
                 if   ( (x[b][c] < 1) && (x[b][c] > -1) ) {
                      pp = (1/ x[b][c]);
                      for(y=0;y<3;y++) {
                      if(x[b][y] != 0) {
                      x[b][y] = x[b][y] * pp; }}}
                      }
                      }       
//--------------- test 4
test(p3);
//--------------------------- 2. 0 oben rechts, wenn nicht schon ist
if ( x[0][1] != 0 ) {
     for(y=0;y<4;y++) {
     x[0][y] = x[0][y] - x[1][y]; } }
//--------------------------- test 5
test(p3);
//--------------- 1. x1 auf 1 setzen, wenn nicht schon ist
for(b=0;b<1;b++) {
for(c=0;c<1;c++) { //x1
                 
                 if   ((x[b][c] > 1) || (x[b][c] < -1))  {
                      pp =  x[b][c];
                      for(y=0;y<3;y++) {
                      if(x[b][y] != 0) {
                      x[b][y] = x[b][y] / pp; }}}                      
                      
                 if   ( (x[b][c] < 1) && (x[b][c] > -1) ) {
                      pp = (1/ x[b][c]);
                      for(y=0;y<3;y++) {
                      if(x[b][y] != 0) {
                      x[b][y] = x[b][y] * pp; }}}
                      }
                      }       
//--------------- 2. x2 auf 1 setzen, wenn nicht schon ist
for(b=1;b<2;b++) {
for(c=1;c<2;c++) { //x1
                 
                 if   ((x[b][c] > 1) || (x[b][c] < -1))  {
                      pp =  x[b][c];
                      for(y=0;y<3;y++) {
                      if(x[b][y] != 0) {
                      x[b][y] = x[b][y] / pp; }}}                      
                      
                 if   ( (x[b][c] < 1) && (x[b][c] > -1) ) {
                      pp = (1/ x[b][c]);
                      for(y=0;y<3;y++) {
                      if(x[b][y] != 0) {
                      x[b][y] = x[b][y] * pp; }}}
                      }
                      }                      
//--------------- test 6
test(p3);
//-------------- Wertübergabe von 2x3 Array zu 2x2 + 2x1 Matrix
n=0;
for(b=0;b<2;b++)
{
for(c=0;c<2;c++)
{
*(p1+n) = x[b][c];
n++;
}}
n=0;
//---------------
for (y=0,c=2;y<2;y++)
{
*(p2+n) = x[n][c];
n++; 
}
n=0;

return EXIT_SUCCESS;
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------

int intia (float *p1, float *p2) 
{
int b=0,c=0,y=0,n=0;
// initialisieren 1.Matrix
for(b=0;b<2;b++)
{
for(c=0;c<2;c++)
{
*(p1+n) = 0;
n++;
}}
b=c=n=0;
// initialisieren 2.Matrix
for (y=0;y<2;y++)
{
    *(p2+n) = 0;
    n++; 
}
y=n=0;
// Ende Initialisierung
return EXIT_SUCCESS;
}
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------

int main(void)
{
//-------------- Deklaration
float a[2][2], x[2];
float *p1 , *p2;
//-------------- pointer setzen
p1=&a[0][0];
p2=&x[0];
//-------------- Initialisierung
intia (p1,p2);
//--------------      
ausgabe(p1,p2);
eingabe(p1,p2);
rechnen(p1,p2);
ausgabe(p1,p2);
//--------------
system("pause");
return EXIT_SUCCESS;
}
//-----------------------------------------------------------------------------
