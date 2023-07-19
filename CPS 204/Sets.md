A set is a collection of different objects, those objects are the element or members of the set, membership is an instance of a set. There is no restriction on the number of elements in a set. A set can be finite or infinite, it can also contain no elements. 
Sets can be rearranged. 

One usually uses capital letters,$A, B, X, Y, . . .$ , to denote sets, and lowercase letters, $a, b, x, y, . . .$ to denote elements of sets.

Membership in a set is denoted as follows:
$a, b ∈ S$ denotes that $a$ and $b$ belong to a set $S$
$a\in S$ means $a$ belongs to a set $S$
$a \notin \text{S means a is not a member of S}$
Examples illustrating two ways or declaring the sets are:
$A = \{1, 3, 5, 7, 9\}$
$B = \{x | x is an even integer, x > 0\}$

Three  dots symbolizes continuation
$A = \{1, 3,..., 7, 9\}$
$A_n = \{1, 2,3... n\}$ 

Sets can also be empty:
$A = \{ \} = \phi$
$B = \{\phi\}$
$\text{A and B are not the same. A is empty while B contains an empty se}t$

$A = \{x: P(x)\} \text{means x is a member of A that satisfies P(x) For all x P(x) must be true}$ 

$B = \{n:n=2 \text{m m is an integer and m is a greater than 0}\}$

---
## Cardinality of Set
Sets can either have a finite or infinite cardinality

The size of a finite set (also known as its cardinality) is measured by the number of elements it contains.

The cardinality (size) of a finite set X is the number |X| 

| ∅ | = 0
 
A = {1, 4, 6, 7}
|A| = 4

X = {0,1,3,5, ... n}
|X| = n + 1

A = {{1,3},{1,2,3}}
|A| = 2

B = {1,{1,2,3}}
|B| = 2

C = {∅,{∅}, {1,2,3}}
|C| = 3

D = {∅,{∅ ,{∅} } }
|D| = 2



---

## Cartesian Products
*Natural numbers*: The natural numbers are the counting numbers, starting with 1 and going on forever. Examples of natural numbers are 1, 2, 3, 4, 5, ...

Whole numbers: The whole numbers are the natural numbers, including 0. Examples of whole numbers are 0, 1, 2, 3, 4, 5, ...

Integers: The integers are the whole numbers, including the negative numbers. Examples of integers are -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, ...

Rational numbers: The rational numbers are the numbers that can be written as a fraction of two integers. Examples of rational numbers are 1/2, 3/4, -5/6, 1/1, 2/2, ...
$Q = {P/Q:P,Q \text{IS A MEMBER OF Z}}$

Irrational numbers: The irrational numbers are the numbers that cannot be written as a fraction of two integers. Examples of irrational numbers are pi, square root of 2, square root of 3, …

Complex numbers: The complex numbers are the numbers that can be written in the form a + bi, where a and b are real numbers and i is the square root of -1. Examples of complex numbers are 1 + 2i, 3 - 4i, 5i, ...

 $N ⊆ Z ⊆ Q ⊆ R ⊆ C$

The cartesian product of two sets, X and Y , is the set of all ordered pairs (x,y) where $x \in X$ and $y \in Y$  
Cartesian product are denoted by
$X x Y$ 
$X x X = X^2$

if $X$ is empty then $XxY$ is also empty

Let A = {1, 2} and B = {a, b, c}. Then

A × B = {(1, a), (1, b), (1, c), (2, a), (2, b), (2, c)}
B × A = {(a, 1), (b, 1), (c, 1), (a, 2), (b, 2), (c, 2)}

Also, A × A = {(1, 1), (1, 2), (2, 1), (2, 2)}

$A_1 x A_2 x A_3 x .... A_n$ 
${(a_1,a_2,... a_n)}:a_1 \in A_1 \text{and} a_2 \in A_2 ...$

---
### Properties of Relation
Types of Relations 
Page 44
- Reflexive: For any relation R on a set a A R is reflexive if and only if
$\text{a R a} ∀ \text{ a} \in R$
	Therefore For set $A = \{1, 3, 5, 7, 9\}$
	Their must exist ${(1,1),(3,3),(5,5),(7,7),(9,9)}$ for A to be reflexive
- Irreflexive: $aRa$ does not exist for every member of A

- Symmetric: Let R be a relation on a set A, R i is symmetric if and only if $\text{a R b implies b R a }  ∀  \text{ a,b} \in A$
	Therefore For set $A = \{1, 3, 5, 7, 9\}$
	 if there exists $(1,2)$ then their must exist $(2,1)$
 
- Asymmetric: if we have $aRb$ but not $bRa$ in the relation then it is not symmetric;

- Antisymmetric: Let R be a relation on a set A, then R is antisymmetric if and only if $\text{aRb and bRa implies a = b for ∀ a,b} \in A$ Does not apply to all a 
	A relation R on a set A is antisymmetric if whenever aRb and bRa then a = b, that is, if a  = b and aRb then bRa.
	Thus R is not antisymmetric if there exist distinct elements a and b in A such that aRb and bRa.

- Transitive: Let R be a relation on a set A, then R is transitive if and only if $\text{aRb and bRc implies  aRc ∀}  \text{ a,b,c} \in A$ 
	 or express in this form $\text{if whenever (a,b),(b,c)} \in \text{R then (a,c)} \in  R$ 

- Non-transitive:  R is not transitive if there exist a, b, c ∈ R such that (a, b), (b, c) ∈ R but (a, c) ∈ R

Let R be a relation defined on the set A ={-2.-1,0,1,2,3,4}
$\text{m,n} \in \text{A , m R n} = n = m^2$ 
what are the ordered pairs in the relation R
