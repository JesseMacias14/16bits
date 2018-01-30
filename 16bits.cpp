#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[])
{
	int n,num,nbits,mask,i,suma;

n=sizeof(int)*8;
nbits=0;
mask=00000001;
printf("Introduzca numero en binario: \n");
scanf("%d",&num);
for(i=0;i<n;i++)
{
suma=num&mask;
if (suma==00000001)
{
nbits++;

}
}

printf("numero de bits: %d", nbits);

system("PAUSE");
return 0;
}
