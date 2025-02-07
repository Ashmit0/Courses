x1=float(input("x1="))
x2=float(input("x2="))
x3=float(input("x3="))
y1=float(input("y1="))
y2=float(input("y2="))
y3=float(input("y3="))

f = 0 
s1 = 0.0 
s2 = -1.0 
if( x1 != x2 ):
    s1 = ( y1 - y2 )/( x1 - x2 )
else: 
    f -= 1 

if( x1 != x3 ):
    s2 = ( y1 - y3 )/( x1 - x3 )
else:
    f -= 1 

if( f == -2 or s1 == s2 ):
    print( "the points are colinear")
else:
    print("the points are not colinear")