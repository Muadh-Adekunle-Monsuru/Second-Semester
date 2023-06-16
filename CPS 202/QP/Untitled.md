Let's start by squaring both equations and adding them together:

$$x^2 = \sin^2(2A) + 2\sin(2A)\sin(2B) + \sin^2(2B)$$
$$y^2 = \cos^2(2A) + 2\cos(2A)\cos(2B) + \cos^2(2B)$$

Adding the two equations, we get:

$$x^2 + y^2 = 1 + 1 + 2\sin(2A)\sin(2B) + 2\cos(2A)\cos(2B)$$
$$x^2 + y^2 = 2 + 2\left(\sin(2A)\sin(2B) + \cos(2A)\cos(2B)\right)$$

Using the identity $\cos(A-B)=\cos(A)\cos(B)+\sin(A)\sin(B)$, we can rewrite the above equation as:

$$x^2 + y^2 = 2 + 4\cos(A+B)$$

Now, let's substitute this into the expression we want to prove:

$$\frac{4x}{x^2+y^2+4x}=\frac{4x}{6+4\cos(A+B)}=\frac{4x}{6+4\left(\frac{\sin(A+B)}{\sin(A+B)}\right)}=\frac{4x}{6+4\left(\frac{\sin(A+B)}{\sin(A+B)}\right)}=\frac{x}{1+\frac{1}{\sin(A+B)}}=\frac{x}{1+\csc(A+B)}$$

Using the identity $\csc(x)=\frac{1}{\sin(x)}$, we can rewrite the above expression as:

$$\frac{x}{1+\csc(A+B)}=\frac{x}{1+\frac{1}{\sin(A+B)}}=\frac{x}{1+\cot(A+B)\cot(B)}=\frac{x}{1+\cot(A+B)\cot(B)}=\frac{x}{1+\left(\frac{\cos(A+B)}{\sin(B)}\right)\left(\frac{\cos(B)}{\sin(B)}\right)}=\