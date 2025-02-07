from math import sqrt,atan,pi 
x=float(input("Enter X coordinate: "))
y=float(input("Enter Y coordinate: "))
r=sqrt(x**2+y**2)
if( r > 0 and x != 0 ):
    t=atan(y/x)*(180)/pi
    if( (x < 0 and y > 0 or (x < 0 and y < 0)) ):
        t += 180
    elif( x > 0 and y < 0 ): 
        t += 360
    print(f'$r=$', r , f'$\phi$' , t )
elif( r > 0 and x == 0.0 ):
    if( y > 0 ):
        t = 90 
    else:
        t = 270 
    print(r'$r=$', r , r'$\phi$' , t )
else:
    print(r'$r=$', 0 , r'$\phi$=' , 'not defined'  )
    