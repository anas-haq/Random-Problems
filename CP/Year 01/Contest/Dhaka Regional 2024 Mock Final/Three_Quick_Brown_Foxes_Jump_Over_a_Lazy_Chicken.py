from math import sqrt, gcd
from fractions import Fraction

def calculate_inradius_squared(a, b, c):
    s = (a + b + c) / 2.0
    area = sqrt(s * (s - a) * (s - b) * (s - c))
    r = area / s  
    return r * r  

def irreducible_fraction(num):
    fraction = Fraction(num).limit_denominator()
    return fraction.numerator, fraction.denominator

t = int(input())
for _ in range(t):
    a, b, c = map(int, input().split())
    r_squared = calculate_inradius_squared(a, b, c)
    numerator, denominator = irreducible_fraction(r_squared)
    print(f"{numerator}/{denominator}")