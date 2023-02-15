#include <stdio.h>

void main(void){
	
	int x, y, z;
	int *px, *py, *pz;
	
	x = 10, y = 20, z = 30;
	px = &x, py = &y, pz = &z;
	//x, y, z, px, py, pz, *px, *py, *pz.
	printf("x = %d , y = %d , z = %d \n\n"
	"px = %p , py = %p , pz = %p \n\n"
	"*px = %d , *py = %d , *pz = %d \n\n",x,y,z,px,py,pz,*px,*py,*pz);
	
	printf("<-----------------Swapping pointers----------------->\n");
	pz = px; px = py; py = pz;
	printf("x = %d , y = %d , z = %d \n\n"
	"px = %p , py = %p , pz = %p \n\n"
	"*px = %d , *py = %d , *pz = %d \n\n",x,y,z,px,py,pz,*px,*py,*pz);
}