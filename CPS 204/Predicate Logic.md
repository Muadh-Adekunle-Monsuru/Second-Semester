[9/5/2023]
#### Predicate & Quantifier

 
A predicate describes the properties of objects and individual. 
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




Predicate logic, also known as first-order logic, is a formal system that extends propositional logic by allowing quantification over variables. This means that predicate logic can express statements about sets of objects, rather than just individual objects.

For example, the propositional logic statement "Socrates is a man" can be expressed in predicate logic as "∃x(Man(x) ∧ Socrates(x))", which means "There exists an object x such that x is a man and x is Socrates."

Predicate logic is a powerful tool for representing and reasoning about the world. It is used in mathematics, computer science, and many other fields.


