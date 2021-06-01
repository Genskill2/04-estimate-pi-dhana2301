#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>




def wallis(n):
    prod = 1
    for i in range(1,n+1):
        a = (4*(i**2))/((4*(i**2)) - 1)
        prod*=a
    return(2*prod)

from random import *
def monte_carlo(n):
    nod_circle = 0    
    nod_square = 0    
    for i in range(n):
        x = random()
        y = random()
        if (x**2 + y**2)<=1:
            nod_circle+=1
            nod_square+=1
        else:
            nod_square+=1

    return(4*nod_circle/nod_square)
