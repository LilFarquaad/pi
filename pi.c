/***
 * El siguiente programa calcula 2400 cifras decimales del
 * numero pi. Para poder ejecutar el programa, es necesario
 * compilarlo previamente. La forma de compilarlo es la
 * siguiente:
 * 		$ cc pi.c -o pi
 * Con ello (si no hay errores) se genera un programa
 * denominado pi, y la forma de ejecutarlo es:
 *  		$./pi
 * Si cc devuelve algun error, es necesario volver a editar
 * el programa y eliminar el error.
***/

#include <stdio.h>

int main(void)
{
 long int a = 10000;
 long int b = 0;
 long int c = 8400;
 long int d = 0;
 long int e = 0;
 long int f[8401] = {0};
 long int g = 0;

 for(;b - c;)
    f[b++] = a/5;
 for(;
     d = 0, g = c*2;
     c-=14, printf("%.4d", e+d/a), e=d%a)
     for(b=c; d+=f[b]*a, f[b]=d % --g, d/=g--, --b; d*=b);
}
