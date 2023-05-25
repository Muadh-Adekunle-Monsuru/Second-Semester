[9/5/2023]
#### Predicate & Quantifier

 
A predicate describes the properties of objects and individual. 
A predicate is a property that some object has
In knowledge representation an individual is an object, and an object can be groups of individuals
Adjective are used to represent a predicate. 

> [!EXAMPLE]
> Predicates are highligthed
> This scarf is <mark style="background: #FFB86CA6;">red</mark>
> Eniola is <mark style="background: #FFB86CA6;">intelligent</mark>
> Jones enjoys coming <mark style="background: #FFB86CA6;">late to class</mark>
>
> To formalize use small letter for the individual and Capital letter for the predicate 
>
> R(s)
> I(m)
 L(j)

R(s) is now called a propositional function
to now say s is not Red it is represented as ¬ R(s)

Predicates and Quantifiers 
	- Universal Quantifier ∀
	- Existential Quantifier ∃
 
Consider the proposition
All students are intelligent

I(s)  For every s if s is a student then s is intelligent.

S(s) said as s of S: s is a Student
I(s): s is intelligent

∀(s) [S(s) -> I(s)]


All rats are grey
G(r) for every r if r is a rat then r is grey 
R(r): r is a Rat
G(r): r is Grey
∀(s): [R(r) -> G(r)]
The ∀ is all
Every day I go jogging
J(d): For every d if d is a day then I go jogging
D(d): d is a day
J(d): d is a jogging day
∀(s): [D(d) -> J(d)]

Some students are intelligent
Their exists at least one s such that s is a student and s is intelligent 
S(s)
I(s)
∃(s): [S(s) ∧ I(s)] 


Some people think of noone but themselves
Their exists at least one person p who thinks of themselves but noone 
P(p)
H(p)

∃(p) [P(p)  ∧ H(p)]

Some students think of no one but themselves
S(s): is a student
N(s): s thinks of no one but himself
∃(p) [S(s)  ∧ N(s)]


¬∀x [Px] : Not every x is P which is Some x is not P
¬∃x[Px] : No x is P, All x is not P
![](images/Pasted%20image%2020230514101735.png)
Predicate logic, also known as first-order logic, is a formal system that extends propositional logic by allowing quantification over variables. This means that predicate logic can express statements about sets of objects, rather than just individual objects.

For example, the propositional logic statement "Socrates is a man" can be expressed in predicate logic as "∃x(Man(x) ∧ Socrates(x))", which means "There exists an object x such that x is a man and x is Socrates."

Predicate logic is a powerful tool for representing and reasoning about the world. It is used in mathematics, computer science, and many other fields.


---
## Universe of Discourse
[23/5/2023]
Define the following 
F(x): x is greater than five
E(x): x is an even number
N(x): x is negative
Consider the following universe of discourse 
i) integers
ii) real numbers
iii) negative integers

determine the truth values of each of the following proposition in each universe of discourse
a) there exists F(x)
b) For all x N()

## Two-place predicate
When two different objects is described by a predicate
It can bee quantified with universal or existential 
∃x∀y
∃y∀x
∃y∀x
Malaria is MIlder than Typhoid M(x,y)

Propositional Function:
P(x,y): x + y =7
Universe of Discourse: Real Numbers
1. ∀x∃yP(x,y) = TRUE 
2. ∀y∃xP(x,y)= TRUE
3. ∃x∀yP(x,y) = FALSE
4. ∃y∀xP(x,y) = FALSE
5. ∀x∀yP(x,y) = FALSE
6. ∀y∀xP(x,y) = FALSE
7. ∃x∃yP(x,y)= TRUE
8. ∃y∃xP(x,y) = TRUE


### Arguments in predicate logic
<mark style="background: #FFB86CA6;">Rules of inferences</mark>
1. Simplification Rule (Simp): If you have premises P∧ Q which is true  conclusion  is P is true 
2. Conjunction (Conj) P,Q conclusion is P∧ Q
3. Modus Ponens P,P->Q    conclusion is Q

![](images/Pasted%20image%2020230523113705.png)
![](images/Pasted%20image%2020230523120439.png)

---
Everyone who has blue eyes is not to be trusted. Kamaldeen has blue eye. Therefor Kamaldeen is not to be trusted
Universe of discourse is people 
B(k): kalamaldeen has blue eyes
B(x): x has blue eyes
T(x): x is to be trusted
P1: ∀x[(Bx)-> ¬T(x)]
P2: B(k)
Q: ¬T(k)

Using US:
If [(Bx)-> ¬T(x)] is true
then[(Bk)-> ¬T(k)] 
Using modus ponens
1: ∀x[(Bx)-> ¬T(x)]
2: B(k)
is ¬T(x)
Conclusion is : ¬T(x) 

---

Laws
US: Universal Specification states that if ∀xF(x) is true then  we can deduce that F(a) is also true  
UG: Universal Generalization states that if F(a) is true then∀xF(x) is true  
ES: Exisistential Specification, state that∃x is true then their exists and element a such that F(a) 
EG: Existential Generalization,  state that F(a)  is true then∃x is true
![](images/Pasted%20image%2020230523120411.png)