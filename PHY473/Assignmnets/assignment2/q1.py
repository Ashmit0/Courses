import math 
m=9.11e-31
ev=1.6e-19
E=10*ev
V=9*ev 
h=1.05457182e-34
k1=math.sqrt( 2*m*E )/h 
k2=math.sqrt( 2*m*(E-V))/h
T=(4*k1*k2)/(k1+k2)**2 
R=(k1-k2)/(k1+k2)
R *=R 
print( 'T=', T, '& R=' , R) 
print( 'T + R =' , T + R )