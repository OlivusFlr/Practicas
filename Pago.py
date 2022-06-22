def computepay(h,r):
    if h > 40:
        x=float(h)
        y=float(r)
        reg = x * y
        otp = (x - 40.0) * (y * 0.5)
        xp = reg + otp
        return xp
    else:
        x=float(h)
        y=float(r)
        xp = x * y
        return xp
hrs = input("Enter Hours:")
h = float(hrs)
rate = input("Enter rate:")
r = float(rate)
p = computepay(h,r)
print("Pay",p)
