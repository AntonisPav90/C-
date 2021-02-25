import numpy

# Σύνολο S1
S1 = [1,2,2,3,4,5,6,7]
# Υποσύνολο S2
S2 = [5,6,7]

# Μέσος m1
m1 = numpy.median(S1)
# Μέσος m2
m2 = numpy.median(S2)

if m2 > m1:
  print("O μέσος m2 είναι μεγαλύτερος από τον m1")
  print (m2,">",m1)
elif m2 == m1:
  print("O μέσος m2 είναι ίσος από τον m1")
  print (m2,"=",m1)
else:
  print("O μέσος m2 είναι μικρότερος από τον m1")
  print (m2,"<",m1)

