/*
 * Seleccion.cxx
 * 
 * Copyright 2016 Gabriel Vargas <gabreta@VmGabriel96>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int aleatorio ()
{
    int a=rand() % 5000 + 5000;
    return a;
}

int * intercambio (int a[], int posa,int posb)
{
    //posa = posicion de origen
    //posb = posicion de destino
    int temp=a[posb];
    a[posb]=a[posa];
    a[posa]=temp;
    return a;
}
  
int * seleccion (int a[], int N)
{
    int i,j,min;
    for (i=0;i<N; i++)
    {
	min = i;
	for (j=i+1;j<=N; j++)
	{
	    if(a[j]<a[min]) 
	    {
		min = j;
	    }
	}
	a=intercambio(a, min, i);
    }
    return a;
}

int main(int argc, char **argv)
{
    int n=190;
    int s[n];
    for (int i=0;i<n;i++)
    {
	s[i]=aleatorio();
    }
    int * d = seleccion(s,n);
    return 0;
}
