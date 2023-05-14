A tautology is a compound proposition which is true no matter what the **truth** values of its simple component. $t$
show that p v pbar is a tautology

p | ¬ p| p v ¬ p
--|-- | --
T | F | T
F | T | T

A contradiction, is a compound proposition which is false no matter what the truth values of its simple component.$f$
p | ¬ p | p ∧  ¬ p
--|-- | --
T | F | F
F | T | F

---
### Logical Equivalence  and Logical Implication

two propositions are said to be logically equivalent if they have identical truth values for every set of truth values of their components

Note that if two compound proportions are logically equivalent, then the compound proposition formed by joining them using the bi-conditional connective must be a tautology. 

Using capital P meaning it is not an atomic proposition
 P ≡ Q implies  P <-> Q
P <-> Q also implies P ≡ Q 
Contingency is neither tautology nor contradiction.

example
	1. If Friday is Eid then if I get paid I will buy chicken.
	p = Friday is Eid
	q = I get paid
	r = I will buy chicken

	p -> ( q -> r) 

2. If Friday is Eid and I get paid then I will buy chicken. 
	p = Friday is Eid
	q = I get paid
	r = I will buy chicken
 
	(p ∧ q) -> r
 
p -> (q->r) | $(p ∧ q) -> r$ | P = Q
---- | ---- | ----
	T | T  | T
	F | F | T
	T | T | T
	T | T | T
	T | T | T
	T | T | T
	T | T | T
	T | T | T

---

 A proposition P is said to logically imply proposition Q if, whenever P is true Q is also true 
 Note the converse is not true
  $P ⊢ Q$ 
	does not mean $Q ⊢ P$
 For logical implication Q is never false when P is true

Given $p -> q$
	- the converse is $q -> p$
	- Inverse: $¬ p -> ¬ q$
	- Contrapositive: $¬ q -> ¬ p$


---
**Given**
If I dream then I don't drive
$p -> q$

**Converse**:
If I don't drive then I dream
$q  -> p$

**Inverse:**
If I don't dream I drive
$¬ p -> ¬ q$

**Contrapositive:**
If I drive then I don't dream
$¬ q -> ¬ p$

---
[2/5/2023]
### Algebraic Laws:
Domination laws: $p ∨ T ≡ T, p ∧ F ≡ F$ 
Identity laws: $p ∧ T ≡ p, p ∨ F ≡ p$ 
Idempotent laws: $p ∧ p ≡ p, p ∨ p ≡ p$ 
Double negation law: $¬(¬p) ≡ p$ 
Negation laws: $p ∨ ¬p ≡ T, p ∧ ¬p ≡ F$ 
Commutative laws: $p ∧ q ≡ q ∧ p, p ∨ q ≡ q ∨ p$  Associative laws: $(p ∧ q) ∧ r ≡ p ∧ (q ∧ r)$ 
									$(p ∨ q) ∨ r ≡ p ∨ (q ∨ r)$
Distributive laws: $p ∨ (q ∧ r) ≡ (p ∨ q) ∧ (p ∨ r)$
$p ∧ (q ∨ r) ≡ (p ∧ q) ∨ (p ∧ r)$ 
Absorption laws: $p ∨ (p ∧ q) ≡ p, p ∧ (p ∨ q) ≡ p$ 

Transposition  Law: p ->q ≡¬q -> ¬p

Material equivalence law: p <-> q ≡ (p->q) ∧ (q->p)

##### Duality Principle
If two propositions are equivalent then their duals are equivalent:
the dual proposition **or** with **and**
and true with false,  can be **replaced** and vice versa

---
## Arguments:
An argument in logic are propositions which consists of premises and conclusion 

An argument consists of a set of propositions called premises together with another proposition purported to follow from the premises called the conclusion. 

In logic, an argument is valid if the conjunction of the premises logically implies the conclusion otherwise the argument is invalid 

(p1  ∧ p2  ∧ p3....pn) |- Q 
(p1  ∧ p2  ∧ p3...pn) -> Q is a tautology 

This means that whenever p1 ,p2,p3 ... pn are all true then Q must be true


E.gl
If you are computer scientist then you are clever.
You are clever and rich.
Therefore if you are rich then you are a computer scientist.

p = you are a computer scientist
q = you are clever
r = you are rich

P1: p -> q
P2: q∧r 
Q: r -> p

If you find the cps204 exam difficult then you have not being coming to class or you havent done you assignment.
 You have done your assignment and you have been coming to class there for you wont find the cps204 examination difficult. 

p = you find the exam difficult
q = not being coming to class
r = havent done your assignment

P1: p -> q V r
P2: notr and 